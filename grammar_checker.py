import json
import re

def parse_bnf(bnf_json):
    return json.loads(bnf_json)

def build_regex(rules, symbol):
    if symbol.startswith('"') and symbol.endswith('"'):
        return re.escape(symbol[1:-1])
    
    if symbol not in rules:
        return symbol

    alternatives = rules[symbol]
    regex_parts = []
    
    for alternative in alternatives:
        sequence = []
        for item in alternative:
            sequence.append(build_regex(rules, item))
        regex_parts.append(''.join(sequence))
    
    return '(' + '|'.join(regex_parts) + ')'

def validate_text(bnf_json, text, start_symbol):
    rules = parse_bnf(bnf_json)
    regex_pattern = '^' + build_regex(rules, start_symbol) + '$'
    return bool(re.match(regex_pattern, text, re.DOTALL))

# Example usage
bnf_json = '''{
 "<start>": [
 ["<expression>"]
 ],
"<expression>": [
 ["<term>", "+", "<expression>"],
 ["<term>", "-", "<expression>"],
 ["<term>"]
 ],
"<term>": [
 ["<factor>", "*", "<term>"],
 ["<factor>", "/", "<term>"],
 ["<factor>"]
 ],
"<factor>": [
 ["(", "<expression>", ")"],
 ["<number>"]
 ],
"<number>": [
 ["<digit>", "<number>"],
 ["<digit>"]
 ],
"<digit>": [
 ["0"], ["1"], ["2"], ["3"], ["4"], ["5"], ["6"], ["7"], ["8"], ["9"]
 ]
}'''

# Test cases
test_cases = [
    "3+4*2",
    "5*(6-2)",
    "7/3-1",
    "9",
    "1+2+3",
    "4*5/2",
    "2*(3+4)",
    "1+2*3-4/5",
    "10-5+3*2",
    "(1+2)*(3-4)",
    "a+b",  # Invalid
    "1++2",  # Invalid
    "3+",  # Invalid
    "4**2",  # Invalid
    "(5+6",  # Invalid
]

for test_case in test_cases:
    is_valid = validate_text(bnf_json, test_case, "<start>")
    print(f"Expression: {test_case:<10} Is valid? {is_valid}")