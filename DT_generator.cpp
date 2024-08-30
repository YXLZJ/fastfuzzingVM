#include <iostream>
#include <fstream>
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
    }

    void JIT(string file, int count)
    {
        string code = R"(variable xorshift-state


: init-xorshift ( -- )
    utime drop xorshift-state ! ;

: next-xorshift ( -- u )
    xorshift-state @
    dup 13 lshift xor
    dup 17 rshift xor
    dup 5 lshift xor
    dup xorshift-state ! ;


: random ( n -- random )
    next-xorshift swap mod ;

init-xorshift

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

: HALT ( -- )
    0 running ! ;

( ------------------------------------------------- )

: RET ( -- )

    rsp @ 1 cells - rsp ! \ decrement the return stack pointer
    rsp @ @ ip ! \ pop the return address from the return stack 
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ;

( ------------------------------------------------- )

variable maxdepth \ the maximum depth of the stack
)";
        map<Node *, int> instruction_table;                    // the address of the instruction in the instruction table for direct threading model
        code += to_string(this->maxdepth) + " maxdepth !\n\n"; // set the maxdepth
        for (auto x : this->nodes)
        {
            if (x->tp == Type ::non_terminal)
            {
                for (int i = 0; i < x->subnode.size(); i++)
                {
                    code += "create func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_op" + to_string(i) + " 2 cells allot\n";
                }
            }
            else if (x->tp == Type ::expression)
            {
                code += "create exp_" + to_string(reinterpret_cast<uintptr_t>(x)) + " " + to_string(x->subnode.size() + 1) + " cells allot\n";
            }
        }

        for (auto x : this->nodes)
        {
            code += "( ------------------------------------------------- )\n\n";
            if (x->tp == Type::terminal)
            {
                code += ": func_" + to_string(reinterpret_cast<uintptr_t>(x)) + " ( -- )\n";
                for (auto c : x->name)
                {
                    code += "    " + to_string((unsigned)c) + " emit\n";
                }
                code += "    ip @ 1 cells + ip ! \\ increment the instruction pointer\n";
                code += "    ; \n\n";
            }
            else if (x->tp == Type::non_terminal)
            {
                code += ": func_" + to_string(reinterpret_cast<uintptr_t>(x)) + " ( -- )\n";
                code += "    getdepth  maxdepth @ > if\n";
                for (auto c : shortcut[x])
                {
                    code += "        " + to_string((unsigned)c) + " emit\n";
                }
                code += "         ip @ 1 cells + ip ! \\ increment the instruction pointer\n";
                code += "    else\n";
                code += "        ip @ \n";
                code += "        rsp @ ! \\ push the return address to the return stack \n";
                code += "        rsp @ 1 cells + rsp !  \\ increment the return stack pointer \n";
                code += "        " + to_string(x->subnode.size()) + " random\n";
                code += "        case\n";
                for (int i = 0; i < x->subnode.size(); i++)
                {
                    code += "            " + to_string(i) + " of\n";
                    code += "                func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_op" + to_string(i) + " ip ! endof\n";
                }
                code += "        endcase\n";
                code += "    then ; \n\n";
            }
            else
            {
                code += ": func_" + to_string(reinterpret_cast<uintptr_t>(x)) + " ( -- )\n";
                code += "    getdepth  maxdepth @ > if\n";
                for (auto c : shortcut[x])
                {
                    code += "        " + to_string((unsigned)c) + " emit \n";
                }
                code += "    ip @ 1 cells + ip ! \\ increment the instruction pointer\n";
                code += "    else\n";
                code += "    ip @ \n";
                code += "    rsp @ ! \\ push the return address to the return stack \n";
                code += "    rsp @ 1 cells + rsp !  \\ increment the return stack pointer \n";
                code += "    exp_" + to_string(reinterpret_cast<uintptr_t>(x)) + " ip !\n";
                code += "    then ; \n\n";
            }
        }

        for (auto x : this->nodes)
        {
            if (x->tp == Type ::non_terminal)
            {
                for (int i = 0; i < x->subnode.size(); i++)
                {
                    code += "\' func_" + to_string(reinterpret_cast<uintptr_t>(x->subnode[i])) + " func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_op" + to_string(i) + " 0 cells + !\n";
                    code += "\' RET func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_op" + to_string(i) + " 1 cells + !\n\n";
                }
            }
            else if (x->tp == Type ::expression)
            {
                for (int i = 0; i < x->subnode.size(); i++)
                {
                    code += "\' func_" + to_string(reinterpret_cast<uintptr_t>(x->subnode[i])) + " exp_" + to_string(reinterpret_cast<uintptr_t>(x)) + " " + to_string(i) + " cells + !\n";
                }
                code += "\' RET exp_" + to_string(reinterpret_cast<uintptr_t>(x)) + " " + to_string(x->subnode.size()) + " cells + !\n";
            }
        }

        code += "create init-program 2 cells allot \n";
        code += "\' func_" + to_string(reinterpret_cast<uintptr_t>(this->start)) + " init-program 0 cells + ! \n";
        code += "\' HALT init-program 1 cells + ! \n";

        code += R"(: mainloop
    1 running !
    begin
        running @
    while
        ip @  @ execute
    repeat
;
)";
        string entry = "";
        if (count == -1)
        {
            entry = format(R"(: exe ( -- )
    begin
        init-program ip !  \ Get the initial address of the program
        mainloop
        cr
    again ; 
exe)",
                           count);
        }
        else
        {
            entry = format(R"(: exe ( -- )
    {} 0 do
        init-program ip !  \ Get the initial address of the program
        mainloop
        cr
    loop ; 
exe)",
                           count);
        }
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