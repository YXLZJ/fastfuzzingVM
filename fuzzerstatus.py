import lldb

prev_registers = None

def loop_breakpoint_callback(frame, bp_loc, dict):
    global prev_registers
    
    # Debug print to confirm the callback is triggered
    print("Breakpoint hit in LOOP function")
    
    registers = frame.GetRegisters()
    current_registers = {reg.name: reg.value for reg_set in registers for reg in reg_set}

    # Print all current registers including sp
    print("Current registers (including sp):")
    for reg in current_registers:
        print(f"{reg}: {current_registers[reg]}")

    if 'sp' in current_registers:
        print(f"\nsp register: {current_registers['sp']}")
    
    if prev_registers:
        print("Comparing registers:")
        for reg in current_registers:
            if current_registers[reg] != prev_registers[reg]:
                print(f"{reg}: {prev_registers[reg]} -> {current_registers[reg]}")
    else:
        print("Initial registers captured.")

    prev_registers = current_registers
    return False

def __lldb_init_module(debugger, dict):
    target = debugger.GetSelectedTarget()
    breakpoint = target.BreakpointCreateByName("LOOP")
    breakpoint.SetScriptCallbackFunction('loop_breakpoint_callback')
    print("Breakpoint on LOOP set with automatic register comparison.")