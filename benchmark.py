import time
import subprocess
import matplotlib.pyplot as plt
import psutil
import os
import re
import threading
import csv
import signal
import numpy as np
import math
import fcntl
import select
import stat

models = ["subroutine"]

for model in models:
    subprocess.run(["clang++", "-std=c++20", model+".cpp", "-o", model])

directory = './grammars'
files = os.listdir(directory)
files.remove('recursive.json')
# files = ["json.json"]
print(files)

depth = [10,20,30,40,50,60,70,80,90,100,110,120]

timeout = 20  # Timeout for each test in seconds

def set_non_blocking(fd):
    flags = fcntl.fcntl(fd, fcntl.F_GETFL)
    fcntl.fcntl(fd, fcntl.F_SETFL, flags | os.O_NONBLOCK)

def ensure_executable(file_path):
    try:
        current_permissions = stat.S_IMODE(os.lstat(file_path).st_mode)
        os.chmod(file_path, current_permissions | stat.S_IXUSR | stat.S_IXGRP | stat.S_IXOTH)
    except OSError as e:
        print(f"Error setting executable permissions on {file_path}: {e}")

def safe_read(stream):
    try:
        chunk = stream.read(4096)
        return b'' if chunk is None else chunk
    except Exception:
        return b''

def compile_and_run(program_name, file_name, depth_value):
    print(f"Running: {program_name} with {file_name} at depth {depth_value}")
    filetype = ".rs" if program_name == "rust" else ".c"
    current_file_name = f"{program_name}_{depth_value}_{file_name}"[:-5:]+filetype
    output_file = current_file_name[:-2] + ".out" 
    try:
        if filetype == ".c":
            subprocess.run(
                ["./"+program_name, "-p", f"./grammars/{file_name}", "-d", str(depth_value), "-o", current_file_name, "--endless"],
                check=True, timeout=timeout
            )
            ## Switch cannot be compiled with optimisation level 3
            if ("switch" in program_name) or ("baresubroutine" in program_name):
                subprocess.run(
                    ["clang", current_file_name,"-o", output_file],
                    check=True, timeout=140
                )
            else:
                subprocess.run(
                    ["clang", current_file_name,"-O3","-o", output_file],
                    check=True, timeout=140
                )
            ensure_executable(output_file)
            cmd = ["./" + output_file]
        else:
            subprocess.run(
                ["./"+program_name, "-p", f"./grammars/{file_name}", "-d", str(depth_value), "-o", current_file_name, "--endless"],
                check=True, timeout=timeout
            )
            subprocess.run(
                ["rustc", current_file_name,"-C","opt-level=3","-C","target-cpu=native","-o", output_file],
                check=True, timeout=140
            )
            cmd = ["./" + output_file]
        process = subprocess.Popen(
            cmd,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            bufsize=0,
            universal_newlines=False,
            preexec_fn=os.setsid
        )

        set_non_blocking(process.stdout.fileno())
        set_non_blocking(process.stderr.fileno())

        start_time = time.time()
        total_bytes = 0

        while time.time() - start_time < timeout:
            ready, _, _ = select.select([process.stdout, process.stderr], [], [], 1)
            for stream in ready:
                chunk = safe_read(stream)
                total_bytes += len(chunk)

            if process.poll() is not None:
                break

        if process.poll() is None:
            os.killpg(os.getpgid(process.pid), signal.SIGTERM)
            try:
                process.wait(timeout=5)
            except subprocess.TimeoutExpired:
                os.killpg(os.getpgid(process.pid), signal.SIGKILL)

        elapsed_time = min(time.time() - start_time, timeout)
        output_speed = total_bytes / elapsed_time
        print(f"Finished: {program_name} {file_name} {depth_value} - {output_speed:.2f} Bytes/s")
        return output_speed

    except subprocess.CalledProcessError:
        print(f"Error: {program_name} {file_name} {depth_value} - Compilation or execution failed")
        return 0
    except subprocess.TimeoutExpired:
        print(f"Timeout: {program_name} {file_name} {depth_value} - Execution timed out")
        return 0
    except Exception as e:
        print(f"Unexpected error: {program_name} {file_name} {depth_value} - {e}")
        return 0

def run_tests(num_rounds):
    result = {}
    for program_name in models:
        result[program_name] = {}
        for file_name in files:
            result[program_name][file_name] = {}
            for depth_value in depth:
                if any(substring in file_name for substring in ["math", "query", "control_flow"]) and depth_value > 64:
                    continue
                if depth_value not in result[program_name][file_name]:
                    result[program_name][file_name][depth_value] = []
                for round_number in range(num_rounds):
                    output_speed = compile_and_run(program_name, file_name, depth_value)
                    result[program_name][file_name][depth_value].append(output_speed)
    print("Final results:", result)

    # Convert the result to MB/s
    for program_name in result:
        for file_name in result[program_name]:
            for depth_value in result[program_name][file_name]:
                speeds = result[program_name][file_name][depth_value]
                result[program_name][file_name][depth_value] = [x / 1024 / 1024 for x in speeds]

    # Read existing data into a list
    data_list = []
    try:
        with open('results2.csv', mode='r', newline='') as file:
            reader = csv.DictReader(file)
            for row in reader:
                data_list.append(row)
    except FileNotFoundError:
        # If the file does not exist, we'll create it later
        pass

    # Update the data list with new results
    for program_name in result:
        for file_name in result[program_name]:
            for depth_value in result[program_name][file_name]:
                output_speeds = result[program_name][file_name][depth_value]
                for round_number, avg_throughput_rate in enumerate(output_speeds, start=1):
                    data_list.append({
                        'Program': program_name,
                        'File': file_name,
                        'Depth': str(depth_value),
                        'Round': str(round_number),
                        'Throughput Rate (MB/s)': str(avg_throughput_rate)
                    })

    # Write the updated data back to the CSV file
    with open('results2.csv', mode='w', newline='') as file:
        fieldnames = ['Program', 'File', 'Depth', 'Round', 'Throughput Rate (MB/s)']
        writer = csv.DictWriter(file, fieldnames=fieldnames)
        writer.writeheader()
        for row in data_list:
            writer.writerow(row)

    print("Results have been updated in results2.csv")

# Example usage:
if __name__ == "__main__":
    num_rounds = 20  # You can change this value as needed
    run_tests(num_rounds)