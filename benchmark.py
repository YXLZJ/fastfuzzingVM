import os
import subprocess
from datetime import datetime
import json
import statistics

class Tester:
    def __init__(self, name, fuzzer_executable, grammar_file, depths, iterations=2, timeout=3600):
        """
        Initializes the Tester instance.

        :param name: Name of the test (combination of fuzzer and grammar)
        :param fuzzer_executable: Executable file of the fuzzer compiler
        :param grammar_file: Path to the grammar file
        :param depths: List of depths to test
        :param iterations: Number of iterations per depth
        :param timeout: Timeout for each test run
        """
        self.name = name
        self.fuzzer_executable = fuzzer_executable
        self.grammar_file = grammar_file
        self.depths = depths
        self.iterations = iterations
        self.timeout = timeout
        self.results = {}

    def generate_c_code(self, max_depth):
        """
        Generates the C code from the grammar file at the specified depth.

        :param max_depth: Maximum depth for the fuzzer
        :return: Path to the generated C file
        """
        output_c = f"generated/{self.name}_{max_depth}.c"
        cmd = f"./{self.fuzzer_executable} -d {max_depth} -p {self.grammar_file} -o {output_c}"
        if not os.path.exists(output_c):
            print(f"Generating C code for depth {max_depth}...")
            subprocess.run(cmd, shell=True, check=True)
        else:
            print(f"C code for depth {max_depth} already exists. Skipping generation.")
        return output_c

    def compile_c_code(self, output_c):
        """
        Compiles the generated C code into an executable using clang.

        :param output_c: Path to the generated C file
        :return: Name of the compiled executable
        """
        executable = output_c.replace('.c', '')
        if not os.path.exists(executable):
            print(f"Compiling {output_c}...")
            compile_cmd = f"clang {output_c} -o {executable}"
            subprocess.run(compile_cmd, shell=True, check=True)
        else:
            print(f"Executable {executable} already exists. Skipping compilation.")
        return executable

    def run_executable(self, executable):
        """
        Runs the compiled executable and measures its execution time.

        :param executable: Executable file generated from the C code
        :return: Execution time in seconds
        """
        start_time = datetime.now()
        subprocess.run(f"./{executable}", shell=True, check=True, timeout=self.timeout)
        end_time = datetime.now()
        execution_time = (end_time - start_time).total_seconds()
        return execution_time

    def run_test(self):
        """
        Runs tests for each specified depth and iteration, collecting results.
        """
        # Ensure the generated code directory exists
        os.makedirs('generated', exist_ok=True)

        for depth in self.depths:
            print(f"\nTesting {self.name} at depth {depth}")
            depth_results = []
            # Generate C code and compile it once per depth
            output_c = self.generate_c_code(depth)
            executable = self.compile_c_code(output_c)

            for seed in range(self.iterations):
                print(f"Iteration {seed + 1}/{self.iterations}")
                # Run the executable
                try:
                    execution_time = self.run_executable(executable)
                except subprocess.TimeoutExpired:
                    print(f"Execution timed out for {executable}")
                    execution_time = self.timeout
                # Collect results
                output_size = os.path.getsize('output.txt') if os.path.exists('output.txt') else 0
                depth_results.append({'execution_time': execution_time, 'output_size': output_size})
                # Clean up output file
                if os.path.exists('output.txt'):
                    os.remove('output.txt')
            # Calculate average results for the depth
            avg_time = statistics.mean([res['execution_time'] for res in depth_results])
            avg_size = statistics.mean([res['output_size'] for res in depth_results])
            self.results[depth] = {'average_time': avg_time, 'average_size': avg_size}
            print(f"Depth {depth}: Average Time = {avg_time:.2f}s, Average Size = {avg_size / 1024:.2f}KB")
            # Optional: Clean up the generated executable and C code after testing
            # os.remove(executable)
            # os.remove(output_c)

    def save_results(self):
        """
        Saves the collected results into a JSON file.
        """
        os.makedirs('results', exist_ok=True)
        result_file = f'results/{self.name}_results.json'
        with open(result_file, 'w') as f:
            json.dump(self.results, f, indent=4)
        print(f"Results saved to {result_file}")

def main():
    # List of fuzzers and their source files
    fuzzers = [
        {'name': 'DT', 'source': 'DT.cpp'},
        {'name': 'IDT', 'source': 'IDT.cpp'},
        {'name': 'baresubroutine', 'source': 'baresubroutine.cpp'},
        {'name': 'subroutine', 'source': 'subroutine.cpp'},
        {'name': 'switch', 'source': 'switch.cpp'},
        {'name': 'context', 'source': 'context.cpp'}
    ]

    # List of grammar files
    grammar_files = [
        'grammars/control_flow.json',
        'grammars/css.json',
        'grammars/html.json',
        'grammars/if-else.json',
        'grammars/json.json',
        'grammars/math.json',
        'grammars/programming.json',
        'grammars/query.json',
        'grammars/recursive.json',
        'grammars/regular_expression.json'
    ]

    # Depths to test
    depths = [4, 6, 8, 10, 12, 16, 18, 20, 32, 64]

    # Compile the fuzzer source files using clang++
    for fuzzer in fuzzers:
        fuzzer_executable = f"{fuzzer['name']}_compiler"
        compile_cmd = f"clang++ {fuzzer['source']} -o {fuzzer_executable}"
        print(f"Compiling {fuzzer['source']} to {fuzzer_executable}...")
        subprocess.run(compile_cmd, shell=True, check=True)
        fuzzer['executable'] = fuzzer_executable

    # Run tests for each fuzzer and grammar combination
    for grammar_file in grammar_files:
        print(f"\nTesting with grammar file: {grammar_file}")
        for fuzzer in fuzzers:
            tester = Tester(
                name=f"{fuzzer['name']}_{os.path.basename(grammar_file).replace('.json', '')}",
                fuzzer_executable=fuzzer['executable'],
                grammar_file=grammar_file,
                depths=depths,
                iterations=20  # Adjust the number of iterations as needed
            )
            tester.run_test()
            tester.save_results()

if __name__ == "__main__":
    main()