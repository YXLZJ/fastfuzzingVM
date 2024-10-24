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
    string code;

    // Start by importing necessary Rust libraries
    code += R"(use std::fs::File;
use std::io::Write;
use std::time::{SystemTime, UNIX_EPOCH};
const BUFFER_SIZE: usize = 512 * 1024 * 1024; // Buffer for storing text
)";

    // Define MAX_DEPTH constant in Rust
    code += "const MAX_DEPTH: usize = " + to_string(this->maxdepth) + ";\n\n";

    // Define the Buffer struct in Rust
    code += R"(struct Buffer {
    data: Vec<u8>,
}

impl Buffer {
    fn new() -> Self {
        Buffer { data: Vec::with_capacity(BUFFER_SIZE) }
    }

    fn extend(&mut self, c: u8) {
        self.data.push(c);
    }

    fn clean(&mut self) {
        self.data.clear();
    }
}
)";

    // Define the Random struct in Rust
    code += R"(struct Random {
    seed: u64,
}

impl Random {
    fn new(seed: u64) -> Self {
        Random { seed }
    }

    fn xor(&mut self, l: usize) -> usize {
        self.seed ^= self.seed << 13;
        self.seed ^= self.seed >> 17;
        self.seed ^= self.seed << 5;
        (self.seed as usize) % l
    }
}
)";

    // Generate function signatures for each node
    for (auto &x : nodes) {
        string func_name = "func_" + to_string(reinterpret_cast<uintptr_t>(x));
        code += "fn " + func_name + "(depth: usize, buffer: &mut Buffer, random: &mut Random) {\n";

        if (x->tp == Type::non_terminal) {
            code += "    if depth > MAX_DEPTH {\n";
            if (this->shortcut.find(x) != this->shortcut.end()) {
                for (auto &c : this->shortcut[x]) {
                    code += "        buffer.extend(" + to_string((unsigned char)c) + ");\n";
                }
            }
            code += "        return;\n";
            code += "    }\n";
            code += "    let branch = random.xor(" + to_string(x->subnode.size()) + ");\n";
            code += "    match branch {\n";
            for (size_t j = 0; j < x->subnode.size(); j++) {
                string sub_func_name = "func_" + to_string(reinterpret_cast<uintptr_t>(x->subnode[j]));
                code += "        " + to_string(j) + " => {\n";
                code += "            " + sub_func_name + "(depth + 1, buffer, random);\n";
                code += "        },\n";
            }
            code += "        _ => {}\n";
            code += "    }\n";
        } else if (x->tp == Type::expression) {
            code += "    if depth > MAX_DEPTH {\n";
            if (this->shortcut.find(x) != this->shortcut.end()) {
                for (auto &c : this->shortcut[x]) {
                    code += "        buffer.extend(" + to_string((unsigned char)c) + ");\n";
                }
            }
            code += "        return;\n";
            code += "    }\n";
            for (auto &k : x->subnode) {
                string sub_func_name = "func_" + to_string(reinterpret_cast<uintptr_t>(k));
                code += "    " + sub_func_name + "(depth + 1, buffer, random);\n";
            }
        } else if (x->tp == Type::terminal) {
            for (char ch : x->name) {
                code += "    buffer.extend(" + to_string((unsigned char)ch) + ");\n";
            }
        }
        code += "}\n\n";
    }

    // Main function in Rust
    code += "fn main() {\n";
    code += "    let mut buffer = Buffer::new();\n";
    code += "    let seed = SystemTime::now().duration_since(UNIX_EPOCH).unwrap().as_secs();\n";
    code += "    let mut random = Random::new(seed);\n";

    // Decide the loop type based on the value of `count`
    if (count == -1) {
        // If count is -1, generate an endless loop in Rust
        code += "    loop {\n";
        string start_func_name = "func_" + to_string(reinterpret_cast<uintptr_t>(this->start));
        code += "        " + start_func_name + "(1, &mut buffer, &mut random);\n";
        code += "        println!(\"{}\", String::from_utf8_lossy(&buffer.data));\n";
        code += "        buffer.clean();\n";
        code += "    }\n";
    } else {
        // Generate a finite loop for a specified count in Rust
        code += "    let mut count = " + to_string(count) + ";\n";
        code += "    while count > 0 {\n";
        string start_func_name = "func_" + to_string(reinterpret_cast<uintptr_t>(this->start));
        code += "        " + start_func_name + "(1, &mut buffer, &mut random);\n";
        code += "        println!(\"{}\", String::from_utf8_lossy(&buffer.data));\n";
        code += "        buffer.clean();\n";
        code += "        count -= 1;\n";
        code += "    }\n";
    }

    code += "}\n";

    // Write the generated Rust code to the specified file
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