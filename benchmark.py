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

result = {}
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
            ## Switch connot be compiled with optimisation level 2
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

# Main execution loop
for program_name in models:
    result[program_name] = {}
    for file_name in files:
        result[program_name][file_name] = {}
        for depth_value in depth:
            if any(substring in file_name for substring in ["math", "query", "control_flow"]) and depth_value > 64:
                continue
            output_speed = compile_and_run(program_name, file_name, depth_value)
            result[program_name][file_name][depth_value] = output_speed

print("Final results:", result)

## convert the result in MB/s
for i in range(len(models)):
    program_name = models[i]
    for j in range(len(files)):
        file_name = files[j]
        for k in range(len(depth)):
            depth_value = depth[k]
            if program_name in result and file_name in result[program_name] and depth_value in result[program_name][file_name]:
                result[program_name][file_name][depth_value] = result[program_name][file_name][depth_value] / 1024 / 1024

import csv

# Read existing data into a dictionary
data_dict = {}

try:
    with open('results2.csv', mode='r', newline='') as file:
        reader = csv.DictReader(file)
        for row in reader:
            key = (row['Program'], row['File'], row['Depth'])
            data_dict[key] = row['Average Throughput Rate (MB/s)']
except FileNotFoundError:
    # If the file does not exist, we'll create it later
    pass

# Update the dictionary with new results
for program_name, files_dict in result.items():
    for file_name, depths_dict in files_dict.items():
        for depth_value, avg_throughput_rate in depths_dict.items():
            key = (program_name, file_name, str(depth_value))
            data_dict[key] = str(avg_throughput_rate)

# Write the updated data back to the CSV file
with open('results2.csv', mode='w', newline='') as file:
    fieldnames = ['Program', 'File', 'Depth', 'Average Throughput Rate (MB/s)']
    writer = csv.DictWriter(file, fieldnames=fieldnames)
    writer.writeheader()
    for key, avg_throughput_rate in data_dict.items():
        program_name, file_name, depth_value = key
        writer.writerow({
            'Program': program_name,
            'File': file_name,
            'Depth': depth_value,
            'Average Throughput Rate (MB/s)': avg_throughput_rate
        })

print("Results have been updated in results2.csv")


