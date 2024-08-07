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

    void JIT(string file, bool show)
    {
        string code = R"(include random.fs
variable buffer-pos
create string-buffers 1024 1024 * chars allot

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

: PRINT ( n -- )
  dup . ;

: add-string ( addr len -- )
    buffer-pos @
    over string-buffers + swap move
    buffer-pos @ + buffer-pos !
;

: print-strings ( -- )
    0 buffer-pos @ do
        i string-buffers + i cells + @ PRINT
    loop
    buffer-pos @ 0 buffer-pos ! ;

: extend { addr-from u }
    addr-from string-buffers buffer-pos @ chars + u move
    buffer-pos @ u  + buffer-pos ! ;

: extend-char ( n -- )
    buffer-pos @ string-buffers chars + !
    buffer-pos @ 1 + buffer-pos ! ;

: output ( -- )
    string-buffers buffer-pos @ type cr
    0 buffer-pos ! ;

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
        map<Node*,int> instruction_table; // the address of the instruction in the instruction table for direct threading model
        code += to_string(this->maxdepth) + " maxdepth !\n\n"; // set the maxdepth
        code += "create init-program 2 cells allot \n";

        for(auto x: this->nodes) {
            if(x->tp == Type :: non_terminal) {
                for(int i = 0; i<x->subnode.size(); i++){
                    code += "create func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_op" + to_string(i) + " 2 cells allot\n";
                }
            } else if(x->tp == Type :: expression ) {
                code += "create exp_" + to_string(reinterpret_cast<uintptr_t>(x)) + " " +to_string(x->subnode.size()+1) + " cells allot\n";
            }
        }

        for(auto x: this->nodes) {
            code += "( ------------------------------------------------- )\n\n";
            if(x->tp == Type::terminal ){
                code += ": func_" + to_string(reinterpret_cast<uintptr_t>(x)) + " ( -- )\n";
                for(auto c: x->name){
                    code += "    " + to_string((unsigned)c) + " extend-char\n";
                }
                code += "    ip @ 1 cells + ip ! \\ increment the instruction pointer\n";
                code += "    ; \n\n";
            } else if (x->tp == Type::non_terminal) {
                code += ": func_" + to_string(reinterpret_cast<uintptr_t>(x)) + " ( -- )\n";
                code += "    getdepth  maxdepth @ > if\n";
                for(auto c: shortcut[x]){
                    code += "        " + to_string((unsigned)c) + " extend-char\n";
                }
                code += "         ip @ 1 cells + ip ! \\ increment the instruction pointer\n"; 
                code += "    else\n";
                code += "        ip @ \n";
                code += "        rsp @ ! \\ push the return address to the return stack \n";
                code += "        rsp @ 1 cells + rsp !  \\ increment the return stack pointer \n";
                code += "        " + to_string(x->subnode.size()) + " random\n";
                code += "        case\n";
                for(int i=0;i<x->subnode.size();i++){
                    code += "            " + to_string(i) + " of\n";
                    code += "                func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_op" + to_string(i) + " ip ! endof\n";
                }
                code += "        endcase\n";
                code += "    endif ; \n\n";
            } else {
                code += ": func_" + to_string(reinterpret_cast<uintptr_t>(x)) + " ( -- )\n";
                code += "    getdepth  maxdepth @ > if\n";
                for(auto c: shortcut[x]){
                    code += "        " + to_string((unsigned)c) + " extend-char \n";
                }
                code += "    ip @ 1 cells + ip ! \\ increment the instruction pointer\n"; 
                code += "    else\n";
                code += "    ip @ \n";
                code += "    rsp @ ! \\ push the return address to the return stack \n";
                code += "    rsp @ 1 cells + rsp !  \\ increment the return stack pointer \n";
                code += "    exp_" + to_string(reinterpret_cast<uintptr_t>(x)) + " ip !\n";
                code += "    endif ; \n\n";
            }
        }

        for(auto x: this->nodes) {
            if(x->tp == Type :: non_terminal) {
                for(int i=0;i<x->subnode.size();i++){
                    code += "\' func_" + to_string(reinterpret_cast<uintptr_t>(x->subnode[i]))  + " func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_op" + to_string(i) + " 0 cells + !\n";
                    code +=  "\' RET func_" + to_string(reinterpret_cast<uintptr_t>(x)) + "_op" + to_string(i) + " 1 cells + !\n\n";
                }
            } else if(x->tp == Type :: expression ) {
                for(int i=0;i<x->subnode.size();i++){
                    code += "\' func_" + to_string(reinterpret_cast<uintptr_t>(x->subnode[i])) + " exp_" + to_string(reinterpret_cast<uintptr_t>(x)) + " " + to_string(i) + " cells + !\n";
                }
                code  += "\' RET exp_" + to_string(reinterpret_cast<uintptr_t>(x)) + " " + to_string(x->subnode.size()) + " cells + !\n";
            }
        }
        
        code += "create init-program 2 cells allot \n";
        code += "\' func_" + to_string(reinterpret_cast<uintptr_t>(this->start))+ " init-program 0 cells + ! \n";
        code += "\' HALT init-program 1 cells + ! \n";

        code += R"(: mainloop
    1 running !
    0 buffer-pos !
    begin
        running @
    while
        ip @  @ execute
    repeat
;
)";
        string entry_benchmark_off = R"(: exe 
    init-program ip ! ( get the inital address of the program )
    mainloop
    output ;

exe)";  
        string entry_benchmark_on = R"(variable start  \ Stores the start time for performance measurement
variable sum    \ Accumulates the sum of values for throughput calculation
0 sum ! 
: exe ( -- )
    utime start !  \ Record the start time in microseconds
    0 
    begin  \ Start an infinite loop
        dup 0xffff and 0 = if  \ Check if the loop counter is a multiple of 65536
            utime start @ -  \ Calculate elapsed time in microseconds
            #1000000 um/mod nip s>f \ Convert microseconds to seconds as floating-point
            sum @ s>f  \ Convert 'sum' from integer to floating-point
            \ Check FStack before division to ensure two numbers are present
            fdepth 2 >= if
                f/  \ Calculate bytes/sec rate
                1024e f/  \ Convert to KB/s
                f. ." KB/s" cr  \ Display throughput rate
            else
                ." FStack underflow error during division" cr
            then
            utime start !  \ Update start time to current time
            0 sum !  \ Reset sum to zero
        then
        init-program ip !  \ Get the initial address of the program
        mainloop
        sum @ buffer-pos @ + sum !
        0 buffer-pos !
        1+  \ Increment the loop counter
    again ;  \ Continue looping indefinitely
exe)";
        if(show){
            code += entry_benchmark_on;
        } else {
            code += entry_benchmark_off;
        }
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
    std::string path;
    std::string outputFile;
    bool show = false;
    for (int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];
        if (arg == "-depth" && i + 1 < argc)
        {
            depth = static_cast<unsigned int>(std::atoi(argv[++i]));
        }
        else if (arg == "-path" && i + 1 < argc)
        {
            path = argv[++i];
        }
        else if (arg == "-o" && i + 1 < argc)
        {
            outputFile = argv[++i];
        }
        else if (arg == "--show")
        {
            show = true;
        }
    }

    if (depth == 0 || path.empty() || outputFile.empty())
    {
        std::cerr << "Usage: " << argv[0] << " -depth <number> -path <path> -o <output file> [--show]" << std::endl;
        return 1;
    }

    std::ifstream f(path);
    json content = json::parse(f);
    Grammar gram = Grammar(content, depth);
    gram.JIT(outputFile, show);
    string compile = "gforth " + outputFile;
    system(compile.c_str());
    return 0;
}