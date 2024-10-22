#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 55
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
void func_5114983168(void);
void func_5114983296(void);
void func_5114982720(void);
void func_5114982992(void);
void func_5114982848(void);
void func_5114982784(void);
void func_5114984160(void);
void func_5114983488(void);
void func_5114984352(void);
void func_5114984576(void);
void func_5114984704(void);
void func_5114984896(void);
void func_5114985024(void);
void func_5114985152(void);
void func_5114985280(void);
void func_5114984832(void);
void func_5114985680(void);
void func_5114983856(void);
void func_5114984416(void);
void func_5114986000(void);
void func_5114983552(void);
void func_5114986128(void);
void func_5114986256(void);
void func_5114986416(void);
void func_5114986704(void);
void func_5114986832(void);
void func_5114986960(void);
void func_5114987088(void);
void HALT(void);
void RETURN(void);
Inst func_5114983168_op0[2] = {func_5114984160, RETURN};
Inst func_5114983168_op1[2] = {func_5114983488, RETURN};
Inst func_5114983168_op2[2] = {func_5114984352, RETURN};
Inst func_5114983168_op3[2] = {func_5114984576, RETURN};
Inst func_5114983168_op4[2] = {func_5114984704, RETURN};
Inst func_5114983168_op5[2] = {func_5114984896, RETURN};
Inst func_5114983168_op6[2] = {func_5114985024, RETURN};
Inst func_5114983168_op7[2] = {func_5114985152, RETURN};
Inst func_5114983168_op8[2] = {func_5114985280, RETURN};
Inst func_5114983168_op9[2] = {func_5114984832, RETURN};
Inst func_5114983296_op0[2] = {func_5114985680, RETURN};
Inst func_5114983296_op1[2] = {func_5114984416, RETURN};
Inst func_5114983296_op2[2] = {func_5114982784, RETURN};
Inst func_5114982720_op0[2] = {func_5114983552, RETURN};
Inst func_5114982720_op1[2] = {func_5114982992, RETURN};
Inst func_5114982992_op0[2] = {func_5114986416, RETURN};
Inst func_5114982992_op1[2] = {func_5114983168, RETURN};
Inst func_5114982848_op0[2] = {func_5114983296, HALT};
Inst func_5114982784_op0[2] = {func_5114986704, RETURN};
Inst func_5114982784_op1[2] = {func_5114986960, RETURN};
Inst func_5114982784_op2[2] = {func_5114982720, RETURN};
Inst exp_5114985680[4] = {func_5114982784, func_5114983856, func_5114983296, RETURN};
Inst exp_5114984416[4] = {func_5114982784, func_5114986000, func_5114983296, RETURN};
Inst exp_5114983552[4] = {func_5114986128, func_5114983296, func_5114986256, RETURN};
Inst exp_5114986416[3] = {func_5114983168, func_5114982992, RETURN};
Inst exp_5114986704[4] = {func_5114982720, func_5114986832, func_5114982784, RETURN};
Inst exp_5114986960[4] = {func_5114982720, func_5114987088, func_5114982784, RETURN};
void func_5114983168(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5114983168_op0;
        break;
        case 1:
            PC = func_5114983168_op1;
        break;
        case 2:
            PC = func_5114983168_op2;
        break;
        case 3:
            PC = func_5114983168_op3;
        break;
        case 4:
            PC = func_5114983168_op4;
        break;
        case 5:
            PC = func_5114983168_op5;
        break;
        case 6:
            PC = func_5114983168_op6;
        break;
        case 7:
            PC = func_5114983168_op7;
        break;
        case 8:
            PC = func_5114983168_op8;
        break;
        case 9:
            PC = func_5114983168_op9;
        break;
    }
}
void func_5114983296(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5114983296_op0;
        break;
        case 1:
            PC = func_5114983296_op1;
        break;
        case 2:
            PC = func_5114983296_op2;
        break;
    }
}
void func_5114982720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5114982720_op0;
        break;
        case 1:
            PC = func_5114982720_op1;
        break;
    }
}
void func_5114982992(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5114982992_op0;
        break;
        case 1:
            PC = func_5114982992_op1;
        break;
    }
}
void func_5114982848(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5114982848_op0;
        break;
    }
}
void func_5114982784(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5114982784_op0;
        break;
        case 1:
            PC = func_5114982784_op1;
        break;
        case 2:
            PC = func_5114982784_op2;
        break;
    }
}
void func_5114984160(void) {
    extend(48);
    NEXT();
}
void func_5114983488(void) {
    extend(49);
    NEXT();
}
void func_5114984352(void) {
    extend(50);
    NEXT();
}
void func_5114984576(void) {
    extend(51);
    NEXT();
}
void func_5114984704(void) {
    extend(52);
    NEXT();
}
void func_5114984896(void) {
    extend(53);
    NEXT();
}
void func_5114985024(void) {
    extend(54);
    NEXT();
}
void func_5114985152(void) {
    extend(55);
    NEXT();
}
void func_5114985280(void) {
    extend(56);
    NEXT();
}
void func_5114984832(void) {
    extend(57);
    NEXT();
}
void func_5114985680(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5114985680;
}
void func_5114983856(void) {
    extend(43);
    NEXT();
}
void func_5114984416(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5114984416;
}
void func_5114986000(void) {
    extend(45);
    NEXT();
}
void func_5114983552(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5114983552;
}
void func_5114986128(void) {
    extend(40);
    NEXT();
}
void func_5114986256(void) {
    extend(41);
    NEXT();
}
void func_5114986416(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5114986416;
}
void func_5114986704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5114986704;
}
void func_5114986832(void) {
    extend(42);
    NEXT();
}
void func_5114986960(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5114986960;
}
void func_5114987088(void) {
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
    PC =func_5114982848_op0;
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
