#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 60
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
void func_4888490752(void);
void func_4888490880(void);
void func_4888490304(void);
void func_4888490576(void);
void func_4888490432(void);
void func_4888490368(void);
void func_4888491744(void);
void func_4888491072(void);
void func_4888491936(void);
void func_4888492160(void);
void func_4888492288(void);
void func_4888492480(void);
void func_4888492608(void);
void func_4888492736(void);
void func_4888492864(void);
void func_4888492416(void);
void func_4888493264(void);
void func_4888491440(void);
void func_4888492000(void);
void func_4888493584(void);
void func_4888491136(void);
void func_4888493712(void);
void func_4888493840(void);
void func_4888494000(void);
void func_4888494288(void);
void func_4888494416(void);
void func_4888494544(void);
void func_4888494672(void);
void HALT(void);
void RETURN(void);
Inst func_4888490752_op0[2] = {func_4888491744, RETURN};
Inst func_4888490752_op1[2] = {func_4888491072, RETURN};
Inst func_4888490752_op2[2] = {func_4888491936, RETURN};
Inst func_4888490752_op3[2] = {func_4888492160, RETURN};
Inst func_4888490752_op4[2] = {func_4888492288, RETURN};
Inst func_4888490752_op5[2] = {func_4888492480, RETURN};
Inst func_4888490752_op6[2] = {func_4888492608, RETURN};
Inst func_4888490752_op7[2] = {func_4888492736, RETURN};
Inst func_4888490752_op8[2] = {func_4888492864, RETURN};
Inst func_4888490752_op9[2] = {func_4888492416, RETURN};
Inst func_4888490880_op0[2] = {func_4888493264, RETURN};
Inst func_4888490880_op1[2] = {func_4888492000, RETURN};
Inst func_4888490880_op2[2] = {func_4888490368, RETURN};
Inst func_4888490304_op0[2] = {func_4888491136, RETURN};
Inst func_4888490304_op1[2] = {func_4888490576, RETURN};
Inst func_4888490576_op0[2] = {func_4888494000, RETURN};
Inst func_4888490576_op1[2] = {func_4888490752, RETURN};
Inst func_4888490432_op0[2] = {func_4888490880, HALT};
Inst func_4888490368_op0[2] = {func_4888494288, RETURN};
Inst func_4888490368_op1[2] = {func_4888494544, RETURN};
Inst func_4888490368_op2[2] = {func_4888490304, RETURN};
Inst exp_4888493264[4] = {func_4888490368, func_4888491440, func_4888490880, RETURN};
Inst exp_4888492000[4] = {func_4888490368, func_4888493584, func_4888490880, RETURN};
Inst exp_4888491136[4] = {func_4888493712, func_4888490880, func_4888493840, RETURN};
Inst exp_4888494000[3] = {func_4888490752, func_4888490576, RETURN};
Inst exp_4888494288[4] = {func_4888490304, func_4888494416, func_4888490368, RETURN};
Inst exp_4888494544[4] = {func_4888490304, func_4888494672, func_4888490368, RETURN};
void func_4888490752(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4888490752_op0;
        break;
        case 1:
            PC = func_4888490752_op1;
        break;
        case 2:
            PC = func_4888490752_op2;
        break;
        case 3:
            PC = func_4888490752_op3;
        break;
        case 4:
            PC = func_4888490752_op4;
        break;
        case 5:
            PC = func_4888490752_op5;
        break;
        case 6:
            PC = func_4888490752_op6;
        break;
        case 7:
            PC = func_4888490752_op7;
        break;
        case 8:
            PC = func_4888490752_op8;
        break;
        case 9:
            PC = func_4888490752_op9;
        break;
    }
}
void func_4888490880(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4888490880_op0;
        break;
        case 1:
            PC = func_4888490880_op1;
        break;
        case 2:
            PC = func_4888490880_op2;
        break;
    }
}
void func_4888490304(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4888490304_op0;
        break;
        case 1:
            PC = func_4888490304_op1;
        break;
    }
}
void func_4888490576(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4888490576_op0;
        break;
        case 1:
            PC = func_4888490576_op1;
        break;
    }
}
void func_4888490432(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4888490432_op0;
        break;
    }
}
void func_4888490368(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4888490368_op0;
        break;
        case 1:
            PC = func_4888490368_op1;
        break;
        case 2:
            PC = func_4888490368_op2;
        break;
    }
}
void func_4888491744(void) {
    extend(48);
    NEXT();
}
void func_4888491072(void) {
    extend(49);
    NEXT();
}
void func_4888491936(void) {
    extend(50);
    NEXT();
}
void func_4888492160(void) {
    extend(51);
    NEXT();
}
void func_4888492288(void) {
    extend(52);
    NEXT();
}
void func_4888492480(void) {
    extend(53);
    NEXT();
}
void func_4888492608(void) {
    extend(54);
    NEXT();
}
void func_4888492736(void) {
    extend(55);
    NEXT();
}
void func_4888492864(void) {
    extend(56);
    NEXT();
}
void func_4888492416(void) {
    extend(57);
    NEXT();
}
void func_4888493264(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4888493264;
}
void func_4888491440(void) {
    extend(43);
    NEXT();
}
void func_4888492000(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4888492000;
}
void func_4888493584(void) {
    extend(45);
    NEXT();
}
void func_4888491136(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_4888491136;
}
void func_4888493712(void) {
    extend(40);
    NEXT();
}
void func_4888493840(void) {
    extend(41);
    NEXT();
}
void func_4888494000(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4888494000;
}
void func_4888494288(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4888494288;
}
void func_4888494416(void) {
    extend(42);
    NEXT();
}
void func_4888494544(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4888494544;
}
void func_4888494672(void) {
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
    PC =func_4888490432_op0;
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
