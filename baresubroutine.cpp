#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
#include <memory>
#include <format>
#include <queue>
#include <cstdlib>
#include "json.hpp"

using namespace std;
using json = nlohmann::json;

enum Type
{
    non_terminal,
    terminal,
    expression
};

struct Node
{
    string name;
    Type tp; // terminal, non_terminal, expression
    vector<Node *> subnode;
};

class Grammar
{
public:
    Grammar(json &content, unsigned maxdepth)
    {
        map<string, vector<vector<string>>> contentInstd = content.template get<map<string, vector<vector<string>>>>(); // get the content from the json file
        for (auto key : contentInstd)
        {
            allocate_node(key.first, Type::non_terminal); // register all the non-terminal nodes
        }
        for (auto rule : contentInstd)
        {
            for (auto expression : rule.second)
            {
                if (expression.size() == 1) // if the expression only has one element
                {
                    Node *newnode;
                    if (this->mp.count(expression[0]) == 0)
                    {
                        newnode = this->allocate_node(expression[0], Type::terminal);
                    }
                    else
                    {
                        newnode = mp[expression[0]];
                    }
                    mp[rule.first]->subnode.push_back(newnode);
                    continue;
                }
                Node *optnodes = allocate_node("", Type::expression);
                for (auto option : expression)
                {
                    Node *newnode;
                    if (this->mp.count(option) == 0)
                    {
                        newnode = this->allocate_node(option, Type::terminal);
                    }
                    else
                    {
                        newnode = mp[option];
                    }
                    optnodes->subnode.push_back(newnode);
                }
                mp[rule.first]->subnode.push_back(optnodes);
            }
        }
        this->start = mp["<start>"];
        this->maxdepth = maxdepth;
        this->getshortcut();
    };

void JIT(string file)
{
    string code = R"(#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // buffer for storing text
)";
    code += "#define MAX_DEPTH " + to_string(this->maxdepth) + "\n";
    code += R"(typedef struct {
    char data[BUFFER_SIZE];
    unsigned top;
} Buffer;

Buffer buffer;  // Declare a global buffer

#define extend(c) { \
    if(buffer.top < BUFFER_SIZE) { \
        buffer.data[buffer.top++] = c; \
    } \
}

#define clean() { \
    buffer.top = 0; \
}

// Remove depth variable, we will use x1 instead
// int depth = 0;

// Initialize x1 to 0
#define INIT_DEPTH() \
    __asm__ volatile ( \
        "mov x1, #0\n\t" \
        : \
        : \
        : "x1" \
    )

// Modify CALL macro to operate on x1
#define CALL(func) \
    __asm__ volatile (  \
        "add x1, x1, #1\n\t"  /* depth++ */ \
        "bl _" #func "\n\t" \
        : \
        : \
        : "x1", "x30", "memory" \
    )

// Modify RETURN macro to operate on x1
#define RETURN() \
    __asm__ volatile ( \
        "sub x1, x1, #1\n\t"  /* depth-- */ \
        : \
        : \
        : "x1" \
    ); \
    return;

unsigned seed;  // Random seed
unsigned branch;  // To hold branch value

typedef void (*Inst)();
Inst *PC;

// xor to get random number
#define xor(l) \
    seed ^= seed << 13; \
    seed ^= seed >> 17; \
    seed ^= seed << 5; \
    branch = seed % l

bool endless = false;

)";

    // Create the signature of the functions
    for(auto &x : nodes){
        code += "void func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "();\n";
    }

    for(auto &x: nodes){
        code += "void __attribute__((noinline)) func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "() {\n";

        // Use asm goto for depth check
        code += "    asm goto (\n";
        code += "        \"cmp x1, #" + to_string(this->maxdepth) + "\\n\\t\"\n";
        code += "        \"bgt %l[depth_exceeded]\\n\\t\"\n";
        code += "        :\n";
        code += "        :\n";
        code += "        : \"x1\"\n";
        code += "        : depth_exceeded\n";
        code += "    );\n";

        // Normal function code
        if(x->tp == Type::non_terminal){
            code += "    // Normal function code\n";
            code += "    xor(" + to_string(x->subnode.size()) + ");\n";
            code += "    switch (branch) {\n";
            for(int j=0;j<x->subnode.size();j++){
                code += "        case " + to_string(j) + ":\n";
                if(x->subnode[j]->tp == Type::terminal){
                        for(auto ch: x->subnode[j]->name){
                            code += "            extend(" + to_string((unsigned)ch) + ");\n";
                        }
                    } else {
                        code += "            CALL(func_" + to_string(reinterpret_cast<uintptr_t>(x->subnode[j])) + ");\n";
                    }
                code += "            break;\n";
            }
            code += "    }\n";
        } else if(x->tp == Type::expression){
            code += "    // Normal function code\n";
            for(auto &k:x->subnode){
                if(k->tp == Type::terminal){
                    for(auto ch: k->name){
                        code += "    extend(" + to_string((unsigned)ch) + ");\n";
                    }
                } else {
                    code += "    CALL(func_" + to_string(reinterpret_cast<uintptr_t>(k)) + ");\n";
                }
            }
        } else if(x->tp == Type::terminal){
            for(int j=0;j<x->name.size();j++){
                code += "    extend(" + to_string((unsigned char)x->name[j]) + ");\n";
            }
        }
        code += "    RETURN();\n";

        // Depth exceeded label
        code += "depth_exceeded:\n";
        code += "    // Handle depth exceeded\n";
        if(this->shortcut.count(x) && !this->shortcut[x].empty()){
            for(int j=0;j<this->shortcut[x].size();j++){
                code += "    extend(" + to_string((unsigned char)this->shortcut[x][j]) + ");\n";
            }
        }
        code += "    RETURN();\n";
        code += "}\n";
    }

    code += "int main(void) {\n";
    code += "    seed = time(NULL);\n";
    // Initialize x1 in main
    code += "    INIT_DEPTH();\n";
    code += "    CALL(func_" + to_string(reinterpret_cast<uintptr_t>(this->start)) + ");\n";
    code += "    FILE *fp = fopen(\"output.txt\", \"w\");\n";
    code += "    fwrite(buffer.data, sizeof(char), buffer.top, fp);\n";
    code += "    fclose(fp);\n";
    code += "    return 0;\n";
    code += "}\n";
    std::ofstream ofs(file, std::ofstream::out | std::ofstream::trunc);
    ofs << code;
    ofs.close();
    std::cout << "Code written to file successfully." << std::endl;
}
    
    private:
        vector<Node *> nodes;
        map<string, Node *> mp;
        int count = 0;
        Node *start;
        unsigned maxdepth;
        map<Node *, string> shortcut;
        Node *allocate_node(string name, Type tp)
        {
            Node *newnode = new Node();
            newnode->tp = tp;
            if (tp == Type::expression)
            {
                newnode->name = "expression" + to_string(count++);
            }
            else
            {
                newnode->name = name;
            }
            nodes.push_back(newnode);
            mp[newnode->name] = newnode;
            return newnode;
        }

        void getshortcut()
        {
            for (auto &i : nodes)
            {
                if (i->tp == Type::terminal)
                {
                    shortcut[i] = i->name;
                }
            }
            while (1)
            {
                // indicate at least find a shortcut or not
                bool flag = false;
                for (auto &i : nodes)
                {
                    if (i->tp == Type::terminal || shortcut.count(i))
                    {
                        continue;
                    }
                    if (i->tp == Type::non_terminal)
                    {
                        for (auto &j : i->subnode)
                        {
                            if (shortcut.count(j))
                            {
                                shortcut[i] = shortcut[j];
                                flag = true;
                            }
                        }
                    }
                    else if (i->tp == Type::expression)
                    {
                        string combination = "";
                        bool allNode = true;
                        for (auto &j : i->subnode)
                        {
                            if (shortcut.count(j))
                            {
                                combination += shortcut[j];
                            }
                            else
                            {
                                allNode = false;
                                break;
                            }
                        }
                        if (allNode)
                        {
                            shortcut[i] = combination;
                            flag = true;
                        }
                    }
                }
                if (!flag)
                {
                    break;
                }
            }
        }
    };

int main(int argc, char *argv[])
{
    unsigned depth = 0;
    int count = 1;
    std::string path;
    std::string outputFile;
    bool show = false;
    for (int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];
        if (arg == "-d" && i + 1 < argc)
        {
            depth = static_cast<unsigned int>(std::atoi(argv[++i]));
        }
        else if (arg == "-p" && i + 1 < argc)
        {
            path = argv[++i];
        }
        else if (arg == "-o" && i + 1 < argc)
        {
            outputFile = argv[++i];
        }
        else if (arg == "--help")
        {
            std::cerr << "Usage: " << argv[0] << " -d <number> -p <path> -o <output file> " << std::endl;
            return 1;
        }
    }

    if (depth == 0 || path.empty() || outputFile.empty())
    {
        std::cerr << "Usage: " << argv[0] << " -d <number> -p <path> -o <output file> " << std::endl;
        return 1;
    }

    std::ifstream f(path);
    json content = json::parse(f);
    Grammar gram = Grammar(content, depth);
    gram.JIT(outputFile);
    return 0;
}