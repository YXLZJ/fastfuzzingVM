import re
import json

class RegexToBNF:
    def __init__(self):
        self.bnf = {"<start>": [["<regex>"]]}
        self.counter = 0

    def get_new_symbol(self):
        self.counter += 1
        return f"<symbol{self.counter}>"

    def parse_regex(self, regex):
        symbol = self.get_new_symbol()
        self.bnf[symbol] = []
        
        if '|' in regex:
            parts = regex.split('|')
            for part in parts:
                new_symbol = self.parse_regex(part.strip())
                self.bnf[symbol].append([new_symbol])
        else:
            current = []
            i = 0
            while i < len(regex):
                if regex[i] in '()*+?{':
                    if current:
                        new_symbol = self.parse_regex(''.join(current))
                        self.bnf[symbol].append([new_symbol])
                        current = []
                    
                    if regex[i] == '(':
                        closing = self.find_closing_parenthesis(regex[i:])
                        sub_regex = regex[i+1:i+closing]
                        new_symbol = self.parse_regex(sub_regex)
                        self.bnf[symbol].append([new_symbol])
                        i += closing + 1
                    elif regex[i] in '*+?':
                        quantifier_symbol = self.get_new_symbol()
                        self.bnf[quantifier_symbol] = [[regex[i]]]
                        self.bnf[symbol].append([new_symbol, quantifier_symbol])
                        i += 1
                    elif regex[i] == '{':
                        closing = regex.index('}', i)
                        quantifier = regex[i:closing+1]
                        quantifier_symbol = self.get_new_symbol()
                        self.bnf[quantifier_symbol] = [[quantifier]]
                        self.bnf[symbol].append([new_symbol, quantifier_symbol])
                        i = closing + 1
                else:
                    current.append(regex[i])
                    i += 1
            
            if current:
                new_symbol = self.get_new_symbol()
                self.bnf[new_symbol] = [[''.join(current)]]
                self.bnf[symbol].append([new_symbol])

        return symbol

    def find_closing_parenthesis(self, s):
        count = 0
        for i, char in enumerate(s):
            if char == '(':
                count += 1
            elif char == ')':
                count -= 1
                if count == 0:
                    return i
        return -1

    def convert(self, regex):
        start_symbol = self.parse_regex(regex)
        self.bnf["<start>"] = [[start_symbol]]
        return json.dumps(self.bnf, indent=2)

converter = RegexToBNF()
regex = "a(b|c)*d+"
bnf_json = converter.convert(regex)
print(bnf_json)