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
    // Start building the code string with necessary includes and definitions
    string code = R"(#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
)";
    // Define MAX_DEPTH based on the class member variable
    code += "#define MAX_DEPTH " + to_string(this->maxdepth) + "\n";

    // Define the Buffer structure
    code += R"(// Declare buffer
char data[BUFFER_SIZE];


// Define 'extend' macro to append a character to the buffer
#define extend(c) { \
    data[buffer_top++] = c; \
}

// Define 'clean' macro to reset the buffer
#define clean() { \
    buffer_top = 0; \
    stack_top = frames; \
}

// Stack structure definition

void *frames[MAX_DEPTH];     // Array to hold stack frames

// Declare variables
unsigned seed;       // Random seed
unsigned branch;     // To hold branch value
void **PC;           // Program counter

// XOR shift algorithm to generate random numbers
// xor to get random number
#define xor(l) \
    seed ^= seed << 13; \
    seed ^= seed >> 17; \
    seed ^= seed << 5; \
    branch = seed % l


// Pop operation on the stack
#define pop() (--stack_top)

// Store the current PC onto the stack
#define store() do { \
    *(stack_top++) = PC; \
} while (0)

// Move to the next instruction
#define NEXT() PC++

int main() {
    // Declare local variables as register variables
    unsigned seed  = (unsigned)time(NULL);
    unsigned branch;
    void **PC;
    void **stack_top  = frames;  // Initialize stack_top
    unsigned buffer_top  = 0;          // Initialize buffer_top
    unsigned loop_limit = )" + to_string(count) + R"(;
    )";

    if (count == -1)
    {
        code += "register bool endless = true;\n";
    } else {
        code += "register bool endless = false;\n";
    }
    code += R"(
    goto LOOP;
)";

    string init_program_name = "";
    map<Node*,vector<pair<vector<Node*>, vector<Node*>>>> subexpressions;
    // Add program instructions for each node
    for(auto &x : this->nodes) {
        if(x->tp == Type::non_terminal) {
            for(int i = 0; i < x->subnode.size(); i++) {
                if(x != this->start) {
                    if(x->subnode[i]->tp == Type::expression){
                        code += "    static void *func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_op" + to_string(i) + "[2] = { &&func_" + to_string(reinterpret_cast<uintptr_t>(x->subnode[i])) + "_sub0, &&RETURN };\n";
                    } else{
                        code += "    static void *func_" + to_string(reinterpret_cast<uintptr_t>(x)) +
                            "_op" + to_string(i) + "[2] = { &&func_" +
                            to_string(reinterpret_cast<uintptr_t>(x->subnode[i])) + ", &&RETURN };\n";
                    }
                } else {
                    if(x->subnode[i]->tp == Type::expression){
                        code += "    static void *func_" + to_string(reinterpret_cast<uintptr_t>(x)) +
                            "_op" + to_string(i) + "[2] = { &&func_" +
                            to_string(reinterpret_cast<uintptr_t>(x->subnode[i])) + "_sub0, &&HALT };\n";
                    } else{
                        code += "    static void *func_" + to_string(reinterpret_cast<uintptr_t>(x)) +
                            "_op" + to_string(i) + "[2] = { &&func_" +
                            to_string(reinterpret_cast<uintptr_t>(x->subnode[i])) + ", &&HALT };\n";
                    }
                    init_program_name = "func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_op" + to_string(i);
                }
            }
        } else if(x->tp == Type::expression) {
            for(int i=0;i<x->subnode.size();i++){
                Node* current =  x->subnode[i];
                vector<Node*> temp;
                vector<Node*> terminals;
                if(current->tp == Type::terminal){
                    while(i<x->subnode.size() && x->subnode[i]->tp == Type::terminal){
                        terminals.push_back(x->subnode[i++]);
                    }
                    while(i<x->subnode.size() && x->subnode[i]->tp == Type::non_terminal ){
                        temp.push_back(x->subnode[i++]);
                    }
                    i--;
                } else {
                    while(i<x->subnode.size() && x->subnode[i]->tp == Type::non_terminal){
                        temp.push_back(x->subnode[i++]);
                    }
                    i--;
                }
                subexpressions[x].push_back(make_pair(terminals,temp));
            }
            for(int i=0;i<subexpressions[x].size();i++){
                code += "    static void *exp_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_sub" + to_string(i) + "[" + to_string(subexpressions[x][i].second.size() + 1) + "] = {";
                for(int j = 0; j < subexpressions[x][i].second.size(); j++) {
                    code += "&&func_" + to_string(reinterpret_cast<uintptr_t>(subexpressions[x][i].second[j])) + ", ";
                }
                if(i!=subexpressions[x].size()-1){
                    code += "&&func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_sub" + to_string(i+1) ;
                } else {
                    code += "&&RETURN";
                }
                code += "};\n";
            }
        }
    }
    code += "\n";
    // Generate functions for each node
    for(auto &x : this->nodes) {
        if(x->tp == Type::non_terminal) {
            code += "func_" + to_string(reinterpret_cast<uintptr_t>(x)) + ":\n";
            // Check for maximum recursion depth
            code += "    if(stack_top == frames + MAX_DEPTH) {\n";
            for (int j = 0; j < this->shortcut[x].size(); j++) {
                code += "        extend(" + to_string((unsigned)this->shortcut[x][j]) + ");\n";
            }
            code += "        NEXT();\n";
            code += "        goto **PC;\n";
            code += "    }\n";
            // Generate random branch
            code += "    xor(" + to_string(x->subnode.size()) + ");\n";
            code += "    store();\n";
            code += "    switch (branch) {\n";
            for(int j = 0; j < x->subnode.size(); j++) {
                code += "        case " + to_string(j) + ":\n";
                code += "            PC = func_" + to_string(reinterpret_cast<uintptr_t>(x)) +
                        "_op" + to_string(j) + ";\n";
                code += "            break;\n";
            }
            code += "    }\n";
            code += "    goto **PC;\n";
        } else if(x->tp == Type::expression) {
            if(subexpressions[x].size() == 0){
                code += "func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_sub0 :\n";
                code += "        NEXT();\n";
                code += "        goto **PC;\n";
                continue;
            }
            for(int i=0; i<subexpressions[x].size();i++){
                code += "func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_sub" + to_string(i) + ":\n";
                if(i==0){
                    code += "    if(stack_top == frames + MAX_DEPTH) {\n";
                    for (int j = 0; j < this->shortcut[x].size(); j++) {
                        code += "        extend(" + to_string((unsigned)this->shortcut[x][j]) + ");\n";
                    }
                    code += "        NEXT();\n";
                    code += "        goto **PC;\n";
                    code += "    }\n";
                    code += "    store();\n";
                }
                for(int j=0;j<subexpressions[x][i].first.size() ;j++){
                    for(int k=0;k<subexpressions[x][i].first[j]->name.size();k++){
                        code +="    extend(" + to_string((unsigned)subexpressions[x][i].first[j]->name[k]) + ");\n";
                    }
                }
                code += "    PC = exp_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_sub" + to_string(i) + ";\n";
                code += "    goto **PC;\n";
            }
            
        } else if(x->tp == Type::terminal) {
            code += "func_" + to_string(reinterpret_cast<uintptr_t>(x)) + ":\n";
            // Extend buffer with terminal symbols
            for (int j = 0; j < x->name.size(); j++) {
                code += "    extend(" + to_string((unsigned)x->name[j]) + ");\n";
            }
            code += "    NEXT();\n";
            code += "    goto **PC;\n";
        }
    }

    // Define HALT and RETURN labels
    code += R"(HALT:
    // Print the buffer content
    printf("%.*s\n", (int)buffer_top, data);
    clean();  // Clean the buffer
    goto LOOP;
RETURN:
    // Pop from the stack and proceed to the next instruction
    PC = *(--stack_top);
    PC++;
    goto **PC;
)";

    // Define the LOOP label
    code += "LOOP:\n";
    code += "    if((loop_limit > 0) || endless) {\n";
    code += "        loop_limit--;\n";
    code += "        PC = " + init_program_name + ";\n";
    code += "        goto **PC;\n";
    code += "    }\n";
    code += "    return 0;\n";
    code += "}\n";

    // Write the generated code to the specified file
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