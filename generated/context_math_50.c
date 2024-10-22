#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 50
typedef struct {
    char data[BUFFER_SIZE];
    unsigned top;
} Buffer;

Buffer buffer;  // Declare a global buffer

#define extend(c) { \
    if(buffer.top < BUFFER_SIZE) { \
        buffer.data[buffer.top++] = c; \
    } \
}

#define clean() { \
    buffer.top = 0; \
}

unsigned seed;  // Random seed
unsigned branch;  // To hold branch value

typedef void (*Inst)();
Inst *PC;

// xor to get random number
#define xor(l) \
    seed ^= seed << 13; \
    seed ^= seed >> 17; \
    seed ^= seed << 5; \
    branch = seed % l

#define initStack() do { \
    stack.top = stack.frames; \
} while (0)

#define pop() (stack.top--)

#define store() do { \
    *(stack.top++) = PC; \
} while (0)

#define jmp_loop() goto LOOP

#define NEXT() PC++

// the stack from frames
typedef struct {
    Inst *frames[MAX_DEPTH];     // the first pointer of frames
    Inst **top;              // the top of stack
} Stack;

Stack stack;

bool endless = false;

bool running = true;
void func_4989154048(void);
void func_4989154176(void);
void func_4989153600(void);
void func_4989153872(void);
void func_4989153728(void);
void func_4989153664(void);
void func_4989155040(void);
void func_4989154368(void);
void func_4989155232(void);
void func_4989155456(void);
void func_4989155584(void);
void func_4989155776(void);
void func_4989155904(void);
void func_4989156032(void);
void func_4989156160(void);
void func_4989155712(void);
void func_4989156560(void);
void func_4989154736(void);
void func_4989155296(void);
void func_4989156880(void);
void func_4989154432(void);
void func_4989157008(void);
void func_4989157136(void);
void func_4989157296(void);
void func_4989157584(void);
void func_4989157712(void);
void func_4989157840(void);
void func_4989157968(void);
void HALT(void);
void RETURN(void);
Inst func_4989154048_op0[2] = {func_4989155040, RETURN};
Inst func_4989154048_op1[2] = {func_4989154368, RETURN};
Inst func_4989154048_op2[2] = {func_4989155232, RETURN};
Inst func_4989154048_op3[2] = {func_4989155456, RETURN};
Inst func_4989154048_op4[2] = {func_4989155584, RETURN};
Inst func_4989154048_op5[2] = {func_4989155776, RETURN};
Inst func_4989154048_op6[2] = {func_4989155904, RETURN};
Inst func_4989154048_op7[2] = {func_4989156032, RETURN};
Inst func_4989154048_op8[2] = {func_4989156160, RETURN};
Inst func_4989154048_op9[2] = {func_4989155712, RETURN};
Inst func_4989154176_op0[2] = {func_4989156560, RETURN};
Inst func_4989154176_op1[2] = {func_4989155296, RETURN};
Inst func_4989154176_op2[2] = {func_4989153664, RETURN};
Inst func_4989153600_op0[2] = {func_4989154432, RETURN};
Inst func_4989153600_op1[2] = {func_4989153872, RETURN};
Inst func_4989153872_op0[2] = {func_4989157296, RETURN};
Inst func_4989153872_op1[2] = {func_4989154048, RETURN};
Inst func_4989153728_op0[2] = {func_4989154176, HALT};
Inst func_4989153664_op0[2] = {func_4989157584, RETURN};
Inst func_4989153664_op1[2] = {func_4989157840, RETURN};
Inst func_4989153664_op2[2] = {func_4989153600, RETURN};
Inst exp_4989156560[4] = {func_4989153664, func_4989154736, func_4989154176, RETURN};
Inst exp_4989155296[4] = {func_4989153664, func_4989156880, func_4989154176, RETURN};
Inst exp_4989154432[4] = {func_4989157008, func_4989154176, func_4989157136, RETURN};
Inst exp_4989157296[3] = {func_4989154048, func_4989153872, RETURN};
Inst exp_4989157584[4] = {func_4989153600, func_4989157712, func_4989153664, RETURN};
Inst exp_4989157840[4] = {func_4989153600, func_4989157968, func_4989153664, RETURN};
void func_4989154048(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4989154048_op0;
        break;
        case 1:
            PC = func_4989154048_op1;
        break;
        case 2:
            PC = func_4989154048_op2;
        break;
        case 3:
            PC = func_4989154048_op3;
        break;
        case 4:
            PC = func_4989154048_op4;
        break;
        case 5:
            PC = func_4989154048_op5;
        break;
        case 6:
            PC = func_4989154048_op6;
        break;
        case 7:
            PC = func_4989154048_op7;
        break;
        case 8:
            PC = func_4989154048_op8;
        break;
        case 9:
            PC = func_4989154048_op9;
        break;
    }
}
void func_4989154176(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4989154176_op0;
        break;
        case 1:
            PC = func_4989154176_op1;
        break;
        case 2:
            PC = func_4989154176_op2;
        break;
    }
}
void func_4989153600(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4989153600_op0;
        break;
        case 1:
            PC = func_4989153600_op1;
        break;
    }
}
void func_4989153872(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4989153872_op0;
        break;
        case 1:
            PC = func_4989153872_op1;
        break;
    }
}
void func_4989153728(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4989153728_op0;
        break;
    }
}
void func_4989153664(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4989153664_op0;
        break;
        case 1:
            PC = func_4989153664_op1;
        break;
        case 2:
            PC = func_4989153664_op2;
        break;
    }
}
void func_4989155040(void) {
    extend(48);
    NEXT();
}
void func_4989154368(void) {
    extend(49);
    NEXT();
}
void func_4989155232(void) {
    extend(50);
    NEXT();
}
void func_4989155456(void) {
    extend(51);
    NEXT();
}
void func_4989155584(void) {
    extend(52);
    NEXT();
}
void func_4989155776(void) {
    extend(53);
    NEXT();
}
void func_4989155904(void) {
    extend(54);
    NEXT();
}
void func_4989156032(void) {
    extend(55);
    NEXT();
}
void func_4989156160(void) {
    extend(56);
    NEXT();
}
void func_4989155712(void) {
    extend(57);
    NEXT();
}
void func_4989156560(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4989156560;
}
void func_4989154736(void) {
    extend(43);
    NEXT();
}
void func_4989155296(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4989155296;
}
void func_4989156880(void) {
    extend(45);
    NEXT();
}
void func_4989154432(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_4989154432;
}
void func_4989157008(void) {
    extend(40);
    NEXT();
}
void func_4989157136(void) {
    extend(41);
    NEXT();
}
void func_4989157296(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4989157296;
}
void func_4989157584(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4989157584;
}
void func_4989157712(void) {
    extend(42);
    NEXT();
}
void func_4989157840(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4989157840;
}
void func_4989157968(void) {
    extend(47);
    NEXT();
}
void HALT(void) {
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    running = false;
}
void RETURN(void) {
    pop();
    PC = *stack.top;
    NEXT();
}
void mainloop(void) {
    running = true;
    PC =func_4989153728_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 6;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
