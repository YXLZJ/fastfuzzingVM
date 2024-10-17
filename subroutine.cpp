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

    void JIT(string file, int count)
    {
        string code = R"(#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
)";
        code += "#define MAX_DEPTH " + to_string(this->maxdepth) + "\n";
        code += R"(typedef struct {
    char data[BUFFER_SIZE];
    unsigned top;
} Buffer;

Buffer buffer;  // Declare a global buffer

#define extend(c) { \
    buffer.data[buffer.top++] = c; \
}

#define clean() { \
    buffer.top = 0; \
}

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
            code += "void func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "(unsigned depth);\n";
        }
        // Create the PROGRAMS
        // string init_program_name = "";
        // for(auto x : nodes){
        //     if(x->tp == Type::non_terminal){
        //         for(int i=0;i< x->subnode.size();i++){
        //             if(x!=this->start){
        //                 code+="Inst func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_op" + to_string(i) + "[2] = {func_" + to_string(reinterpret_cast<uintptr_t>(x->subnode[i])) + ", RETURN};\n";
        //             } else {
        //                 code+="Inst func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_op" + to_string(i) + "[2] = {func_" + to_string(reinterpret_cast<uintptr_t>(x->subnode[i])) + ", HALT};\n";
        //                 init_program_name = "func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_op" + to_string(i);
        //             }
        //         }
        //     } else if(x->tp == Type::expression){
        //         code += "Inst exp_" + to_string(reinterpret_cast<uintptr_t>(x)) + "[" + to_string(x->subnode.size()+1) + "] = {";
        //         for(int i=0;i<x->subnode.size();i++){
        //             code += "func_" + to_string(reinterpret_cast<uintptr_t>(x->subnode[i])) + ", ";
        //         }
        //         code += "RETURN};\n";
        //     }
        // }
        for(auto &x: nodes){
            code += "void func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "(unsigned depth) {\n";
                if(x->tp == Type::non_terminal){
                    code += "    if(depth > MAX_DEPTH) {\n";
                for(int j=0;j<this->shortcut[x].size();j++){
                    code += "        extend(" + to_string((unsigned)shortcut[x][j]) + ");\n";
                }
                code += "        return;\n";
                code += "    }\n";
                code += "    xor(" + to_string(x->subnode.size()) + ");\n";
                code += "    switch (branch) {\n";
                for(int j=0;j<x->subnode.size();j++){
                    code += "        case " + to_string(j) + ":\n";
                    code += "            func_" + to_string(reinterpret_cast<uintptr_t>(x->subnode[j])) + "(depth+1);\n";
                    code += "        break;\n";
                }
                code += "    }\n";
            } else if(x->tp == Type::expression){
                code += "    if(depth > MAX_DEPTH) {\n";
                for(int j=0;j<this->shortcut[x].size();j++){
                    code += "        extend(" + to_string((unsigned)shortcut[x][j]) + ");\n";
                }
                code += "        return;\n";
                code += "    }\n";
                for(auto &k:x->subnode){
                    code += "    func_" + to_string(reinterpret_cast<uintptr_t>(k)) + "(depth+1);\n";
                }
            } else if(x->tp == Type::terminal){
                for(int j=0;j<x->name.size();j++){
                    code += "    extend(" + to_string((unsigned)x->name[j]) + ");\n";
                }
            }
            code += "    return;\n";
            code += "}\n";
        }

        code += "int main(void) {\n";
        code += "    static unsigned count = " + to_string(count) + ";\n";
        code += "    seed = time(NULL);\n";
        if(count == -1){
            code += "    endless = true;\n";
        }
        code += "    while(endless || (count>0) ) {\n";
        code += "        func_" + to_string(reinterpret_cast<uintptr_t>(this->start)) + "(1);\n";
        code += "        count--;\n";
        code += "        printf(\"%.*s\\n\", (int)buffer.top, buffer.data);\n";
        code += "        clean();\n";
        code += "    }\n";
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
        else if (arg == "-c" && i + 1 < argc)
        {
            count = std::atoi(argv[++i]);
        }
        else if (arg == "--endless")
        {
            count = -1;
        }
        else if (arg == "--help")
        {
            std::cerr << "Usage: " << argv[0] << " -d <number> -p <path> -o <output file> -c <count of loops>" << std::endl;
            return 1;
        }
    }

    if (depth == 0 || path.empty() || outputFile.empty())
    {
        std::cerr << "Usage: " << argv[0] << " -d <number> -p <path> -o <output file> [-c <count of loops> | --endless]" << std::endl;
        return 1;
    }

    std::ifstream f(path);
    json content = json::parse(f);
    Grammar gram = Grammar(content, depth);
    gram.JIT(outputFile, count);
    return 0;
}