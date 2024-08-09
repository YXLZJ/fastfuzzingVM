#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>
#include <memory>
#include <format>
#include <queue>
#include <cstdlib>
#include <algorithm>
#include <set>
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
    }

    void JIT(string file, bool show)
    {
        string code = R"(include random.fs

create instructions 1000 cells allot 


variable running \ the status of the program 1-> running 0-> halt
1 running !

variable ip \ init instruction pointer
0 ip !

create rstack \ Return stack for keeping return addresses 
)";
        code += to_string(this->maxdepth) + " cells allot\n";
        code += R"(variable rsp
rstack rsp !

variable program \ the pointer to indicate the current program

: getdepth ( -- )
    rsp @ rstack - 1 cells / ;

( ------------------------------------------------- )

: HALT  ;

( ------------------------------------------------- )

: RET  ;

( ------------------------------------------------- )

variable maxdepth \ the maximum depth of the stack
)";
        code += to_string(this->maxdepth) + " maxdepth !\n"; // set the maxdepth
        // create function signature, please it my introduce extra complexity
        for(auto x : nodes)
        {
            code += "defer func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "\n";
        } 
        for (auto x : nodes)
        {
            code += "( ------------------------------------------------- )\n\n";
            if (x->tp == Type::terminal)
            {
                code += ": func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_impl ( dp -- ) { dp }\n";
                for (auto c : x->name)
                {
                    code += "    " + to_string((unsigned)c) + " emit\n";
                }
                code += "    ; \n\n";
                code += "' func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_impl is func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "\n";
            }
            else if (x->tp == Type::non_terminal)
            {
                code += ": func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_impl ( dp -- ) { dp }\n";
                code += "    dp maxdepth @ > if\n";
                for (auto c : shortcut[x])
                {
                    code += "        " + to_string((unsigned)c) + " emit\n";
                }
                code += "    else\n";
                code += "        " + to_string(x->subnode.size()) + " random\n";
                code += "        case\n";
                for (int i = 0; i < x->subnode.size(); i++)
                {
                    code += "            " + to_string(i) + " of\n";
                    code += "                dp 1 + func_" + to_string(reinterpret_cast<uintptr_t>(x->subnode[i])) + " endof\n";
                }
                code += "        endcase\n";
                code += "    endif ; \n\n";
                code += "' func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_impl is func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "\n";
            }
            else
            {
                code += ": func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_impl ( dp -- ) { dp }\n";
                code += "    dp maxdepth @ > if\n";
                for (auto c : shortcut[x])
                {
                    code += "        " + to_string((unsigned)c) + " emit \n";
                }
                code += "    else\n";
                for(auto s :x->subnode)
                {
                    code += "    dp 1 + func_" + to_string(reinterpret_cast<uintptr_t>(s))+"\n";
                }
                code += "    endif ; \n\n";
                code += "' func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_impl is func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "\n";
            }
        }
        code += "( ------------------------------------------------- )\n\n";

        string init_function= "    1 func_" + to_string(reinterpret_cast<uintptr_t>(this->start)) +"\n";
                string entry = format(R"(: exe ( -- )
    {} 0 do
        {} cr
    loop ; 
exe)",count,init_function);
        code += entry;
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
    vector<Node *> reverse_nodes;
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
    // reuse this fucntion to get the sequence of function
    void getshortcut()
    {
        //initailize all the termianlal nodes as approchable
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
    // // BFS to get the level-orderd sequence of nodes and reverse it 
    // void getReversedNodes() {
    //     queue<Node *> q;
    //     set <Node *> visited;
    //     q.push(this->start);
    //     while (!q.empty()) {
    //         Node* newnode = q.front();
    //         q.pop();
    //         //Skip it if it has been visited
    //         if (visited.count(newnode)) continue;
    //         visited.insert(newnode);
    //         this->reverse_nodes.push_back(newnode);
    //         for (auto x : newnode->subnode) {
    //             if (visited.count(x) == 0) {
    //                 q.push(x);
    //             }
    //         }
    //     }
    //     reverse(reverse_nodes.begin(),reverse_nodes.end());
    // }
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
        else if(arg == "-c" && i + 1 < argc) {
            count = std::atoi(argv[++i]);
        }
        else if(arg == "--help") {
            std::cerr << "Usage: " << argv[0] << " -d <number> -p <path> -o <output file> -c <count of loops>" << std::endl;
            return 1;
        }
    }

    if (depth == 0 || path.empty() || outputFile.empty())
    {
        std::cerr << "Usage: " << argv[0] << " -d <number> -p <path> -o <output file> -c <count of loops>" << std::endl;
        return 1;
    }

    std::ifstream f(path);
    json content = json::parse(f);
    Grammar gram = Grammar(content, depth);
    gram.JIT(outputFile, count);
    return 0;
}