#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 45
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
void func_5509247744(void);
void func_5509247872(void);
void func_5509247296(void);
void func_5509247568(void);
void func_5509247424(void);
void func_5509247360(void);
void func_5509248736(void);
void func_5509248064(void);
void func_5509248928(void);
void func_5509249152(void);
void func_5509249280(void);
void func_5509249472(void);
void func_5509249600(void);
void func_5509249728(void);
void func_5509249856(void);
void func_5509249408(void);
void func_5509250256(void);
void func_5509248432(void);
void func_5509248992(void);
void func_5509250576(void);
void func_5509248128(void);
void func_5509250704(void);
void func_5509250832(void);
void func_5509250992(void);
void func_5509251280(void);
void func_5509251408(void);
void func_5509251536(void);
void func_5509251664(void);
void HALT(void);
void RETURN(void);
Inst func_5509247744_op0[2] = {func_5509248736, RETURN};
Inst func_5509247744_op1[2] = {func_5509248064, RETURN};
Inst func_5509247744_op2[2] = {func_5509248928, RETURN};
Inst func_5509247744_op3[2] = {func_5509249152, RETURN};
Inst func_5509247744_op4[2] = {func_5509249280, RETURN};
Inst func_5509247744_op5[2] = {func_5509249472, RETURN};
Inst func_5509247744_op6[2] = {func_5509249600, RETURN};
Inst func_5509247744_op7[2] = {func_5509249728, RETURN};
Inst func_5509247744_op8[2] = {func_5509249856, RETURN};
Inst func_5509247744_op9[2] = {func_5509249408, RETURN};
Inst func_5509247872_op0[2] = {func_5509250256, RETURN};
Inst func_5509247872_op1[2] = {func_5509248992, RETURN};
Inst func_5509247872_op2[2] = {func_5509247360, RETURN};
Inst func_5509247296_op0[2] = {func_5509248128, RETURN};
Inst func_5509247296_op1[2] = {func_5509247568, RETURN};
Inst func_5509247568_op0[2] = {func_5509250992, RETURN};
Inst func_5509247568_op1[2] = {func_5509247744, RETURN};
Inst func_5509247424_op0[2] = {func_5509247872, HALT};
Inst func_5509247360_op0[2] = {func_5509251280, RETURN};
Inst func_5509247360_op1[2] = {func_5509251536, RETURN};
Inst func_5509247360_op2[2] = {func_5509247296, RETURN};
Inst exp_5509250256[4] = {func_5509247360, func_5509248432, func_5509247872, RETURN};
Inst exp_5509248992[4] = {func_5509247360, func_5509250576, func_5509247872, RETURN};
Inst exp_5509248128[4] = {func_5509250704, func_5509247872, func_5509250832, RETURN};
Inst exp_5509250992[3] = {func_5509247744, func_5509247568, RETURN};
Inst exp_5509251280[4] = {func_5509247296, func_5509251408, func_5509247360, RETURN};
Inst exp_5509251536[4] = {func_5509247296, func_5509251664, func_5509247360, RETURN};
void func_5509247744(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5509247744_op0;
        break;
        case 1:
            PC = func_5509247744_op1;
        break;
        case 2:
            PC = func_5509247744_op2;
        break;
        case 3:
            PC = func_5509247744_op3;
        break;
        case 4:
            PC = func_5509247744_op4;
        break;
        case 5:
            PC = func_5509247744_op5;
        break;
        case 6:
            PC = func_5509247744_op6;
        break;
        case 7:
            PC = func_5509247744_op7;
        break;
        case 8:
            PC = func_5509247744_op8;
        break;
        case 9:
            PC = func_5509247744_op9;
        break;
    }
}
void func_5509247872(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5509247872_op0;
        break;
        case 1:
            PC = func_5509247872_op1;
        break;
        case 2:
            PC = func_5509247872_op2;
        break;
    }
}
void func_5509247296(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5509247296_op0;
        break;
        case 1:
            PC = func_5509247296_op1;
        break;
    }
}
void func_5509247568(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5509247568_op0;
        break;
        case 1:
            PC = func_5509247568_op1;
        break;
    }
}
void func_5509247424(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5509247424_op0;
        break;
    }
}
void func_5509247360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5509247360_op0;
        break;
        case 1:
            PC = func_5509247360_op1;
        break;
        case 2:
            PC = func_5509247360_op2;
        break;
    }
}
void func_5509248736(void) {
    extend(48);
    NEXT();
}
void func_5509248064(void) {
    extend(49);
    NEXT();
}
void func_5509248928(void) {
    extend(50);
    NEXT();
}
void func_5509249152(void) {
    extend(51);
    NEXT();
}
void func_5509249280(void) {
    extend(52);
    NEXT();
}
void func_5509249472(void) {
    extend(53);
    NEXT();
}
void func_5509249600(void) {
    extend(54);
    NEXT();
}
void func_5509249728(void) {
    extend(55);
    NEXT();
}
void func_5509249856(void) {
    extend(56);
    NEXT();
}
void func_5509249408(void) {
    extend(57);
    NEXT();
}
void func_5509250256(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5509250256;
}
void func_5509248432(void) {
    extend(43);
    NEXT();
}
void func_5509248992(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5509248992;
}
void func_5509250576(void) {
    extend(45);
    NEXT();
}
void func_5509248128(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5509248128;
}
void func_5509250704(void) {
    extend(40);
    NEXT();
}
void func_5509250832(void) {
    extend(41);
    NEXT();
}
void func_5509250992(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5509250992;
}
void func_5509251280(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5509251280;
}
void func_5509251408(void) {
    extend(42);
    NEXT();
}
void func_5509251536(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5509251536;
}
void func_5509251664(void) {
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
    PC =func_5509247424_op0;
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
