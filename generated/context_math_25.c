#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 25
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
void func_4913656576(void);
void func_4913656704(void);
void func_4913656128(void);
void func_4913656400(void);
void func_4913656256(void);
void func_4913656192(void);
void func_4913657568(void);
void func_4913656896(void);
void func_4913657760(void);
void func_4913657984(void);
void func_4913658112(void);
void func_4913658304(void);
void func_4913658432(void);
void func_4913658560(void);
void func_4913658688(void);
void func_4913658240(void);
void func_4913659088(void);
void func_4913657264(void);
void func_4913657824(void);
void func_4913659408(void);
void func_4913656960(void);
void func_4913659536(void);
void func_4913659664(void);
void func_4913659824(void);
void func_4913660112(void);
void func_4913660240(void);
void func_4913660368(void);
void func_4913660496(void);
void HALT(void);
void RETURN(void);
Inst func_4913656576_op0[2] = {func_4913657568, RETURN};
Inst func_4913656576_op1[2] = {func_4913656896, RETURN};
Inst func_4913656576_op2[2] = {func_4913657760, RETURN};
Inst func_4913656576_op3[2] = {func_4913657984, RETURN};
Inst func_4913656576_op4[2] = {func_4913658112, RETURN};
Inst func_4913656576_op5[2] = {func_4913658304, RETURN};
Inst func_4913656576_op6[2] = {func_4913658432, RETURN};
Inst func_4913656576_op7[2] = {func_4913658560, RETURN};
Inst func_4913656576_op8[2] = {func_4913658688, RETURN};
Inst func_4913656576_op9[2] = {func_4913658240, RETURN};
Inst func_4913656704_op0[2] = {func_4913659088, RETURN};
Inst func_4913656704_op1[2] = {func_4913657824, RETURN};
Inst func_4913656704_op2[2] = {func_4913656192, RETURN};
Inst func_4913656128_op0[2] = {func_4913656960, RETURN};
Inst func_4913656128_op1[2] = {func_4913656400, RETURN};
Inst func_4913656400_op0[2] = {func_4913659824, RETURN};
Inst func_4913656400_op1[2] = {func_4913656576, RETURN};
Inst func_4913656256_op0[2] = {func_4913656704, HALT};
Inst func_4913656192_op0[2] = {func_4913660112, RETURN};
Inst func_4913656192_op1[2] = {func_4913660368, RETURN};
Inst func_4913656192_op2[2] = {func_4913656128, RETURN};
Inst exp_4913659088[4] = {func_4913656192, func_4913657264, func_4913656704, RETURN};
Inst exp_4913657824[4] = {func_4913656192, func_4913659408, func_4913656704, RETURN};
Inst exp_4913656960[4] = {func_4913659536, func_4913656704, func_4913659664, RETURN};
Inst exp_4913659824[3] = {func_4913656576, func_4913656400, RETURN};
Inst exp_4913660112[4] = {func_4913656128, func_4913660240, func_4913656192, RETURN};
Inst exp_4913660368[4] = {func_4913656128, func_4913660496, func_4913656192, RETURN};
void func_4913656576(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4913656576_op0;
        break;
        case 1:
            PC = func_4913656576_op1;
        break;
        case 2:
            PC = func_4913656576_op2;
        break;
        case 3:
            PC = func_4913656576_op3;
        break;
        case 4:
            PC = func_4913656576_op4;
        break;
        case 5:
            PC = func_4913656576_op5;
        break;
        case 6:
            PC = func_4913656576_op6;
        break;
        case 7:
            PC = func_4913656576_op7;
        break;
        case 8:
            PC = func_4913656576_op8;
        break;
        case 9:
            PC = func_4913656576_op9;
        break;
    }
}
void func_4913656704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4913656704_op0;
        break;
        case 1:
            PC = func_4913656704_op1;
        break;
        case 2:
            PC = func_4913656704_op2;
        break;
    }
}
void func_4913656128(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4913656128_op0;
        break;
        case 1:
            PC = func_4913656128_op1;
        break;
    }
}
void func_4913656400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4913656400_op0;
        break;
        case 1:
            PC = func_4913656400_op1;
        break;
    }
}
void func_4913656256(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4913656256_op0;
        break;
    }
}
void func_4913656192(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4913656192_op0;
        break;
        case 1:
            PC = func_4913656192_op1;
        break;
        case 2:
            PC = func_4913656192_op2;
        break;
    }
}
void func_4913657568(void) {
    extend(48);
    NEXT();
}
void func_4913656896(void) {
    extend(49);
    NEXT();
}
void func_4913657760(void) {
    extend(50);
    NEXT();
}
void func_4913657984(void) {
    extend(51);
    NEXT();
}
void func_4913658112(void) {
    extend(52);
    NEXT();
}
void func_4913658304(void) {
    extend(53);
    NEXT();
}
void func_4913658432(void) {
    extend(54);
    NEXT();
}
void func_4913658560(void) {
    extend(55);
    NEXT();
}
void func_4913658688(void) {
    extend(56);
    NEXT();
}
void func_4913658240(void) {
    extend(57);
    NEXT();
}
void func_4913659088(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4913659088;
}
void func_4913657264(void) {
    extend(43);
    NEXT();
}
void func_4913657824(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4913657824;
}
void func_4913659408(void) {
    extend(45);
    NEXT();
}
void func_4913656960(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_4913656960;
}
void func_4913659536(void) {
    extend(40);
    NEXT();
}
void func_4913659664(void) {
    extend(41);
    NEXT();
}
void func_4913659824(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4913659824;
}
void func_4913660112(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4913660112;
}
void func_4913660240(void) {
    extend(42);
    NEXT();
}
void func_4913660368(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4913660368;
}
void func_4913660496(void) {
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
    PC =func_4913656256_op0;
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
