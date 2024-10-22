#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 35
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
void func_5492470528(void);
void func_5492470656(void);
void func_5492470080(void);
void func_5492470352(void);
void func_5492470208(void);
void func_5492470144(void);
void func_5492471520(void);
void func_5492470848(void);
void func_5492471712(void);
void func_5492471936(void);
void func_5492472064(void);
void func_5492472256(void);
void func_5492472384(void);
void func_5492472512(void);
void func_5492472640(void);
void func_5492472192(void);
void func_5492473040(void);
void func_5492471216(void);
void func_5492471776(void);
void func_5492473360(void);
void func_5492470912(void);
void func_5492473488(void);
void func_5492473616(void);
void func_5492473776(void);
void func_5492474064(void);
void func_5492474192(void);
void func_5492474320(void);
void func_5492474448(void);
void HALT(void);
void RETURN(void);
Inst func_5492470528_op0[2] = {func_5492471520, RETURN};
Inst func_5492470528_op1[2] = {func_5492470848, RETURN};
Inst func_5492470528_op2[2] = {func_5492471712, RETURN};
Inst func_5492470528_op3[2] = {func_5492471936, RETURN};
Inst func_5492470528_op4[2] = {func_5492472064, RETURN};
Inst func_5492470528_op5[2] = {func_5492472256, RETURN};
Inst func_5492470528_op6[2] = {func_5492472384, RETURN};
Inst func_5492470528_op7[2] = {func_5492472512, RETURN};
Inst func_5492470528_op8[2] = {func_5492472640, RETURN};
Inst func_5492470528_op9[2] = {func_5492472192, RETURN};
Inst func_5492470656_op0[2] = {func_5492473040, RETURN};
Inst func_5492470656_op1[2] = {func_5492471776, RETURN};
Inst func_5492470656_op2[2] = {func_5492470144, RETURN};
Inst func_5492470080_op0[2] = {func_5492470912, RETURN};
Inst func_5492470080_op1[2] = {func_5492470352, RETURN};
Inst func_5492470352_op0[2] = {func_5492473776, RETURN};
Inst func_5492470352_op1[2] = {func_5492470528, RETURN};
Inst func_5492470208_op0[2] = {func_5492470656, HALT};
Inst func_5492470144_op0[2] = {func_5492474064, RETURN};
Inst func_5492470144_op1[2] = {func_5492474320, RETURN};
Inst func_5492470144_op2[2] = {func_5492470080, RETURN};
Inst exp_5492473040[4] = {func_5492470144, func_5492471216, func_5492470656, RETURN};
Inst exp_5492471776[4] = {func_5492470144, func_5492473360, func_5492470656, RETURN};
Inst exp_5492470912[4] = {func_5492473488, func_5492470656, func_5492473616, RETURN};
Inst exp_5492473776[3] = {func_5492470528, func_5492470352, RETURN};
Inst exp_5492474064[4] = {func_5492470080, func_5492474192, func_5492470144, RETURN};
Inst exp_5492474320[4] = {func_5492470080, func_5492474448, func_5492470144, RETURN};
void func_5492470528(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5492470528_op0;
        break;
        case 1:
            PC = func_5492470528_op1;
        break;
        case 2:
            PC = func_5492470528_op2;
        break;
        case 3:
            PC = func_5492470528_op3;
        break;
        case 4:
            PC = func_5492470528_op4;
        break;
        case 5:
            PC = func_5492470528_op5;
        break;
        case 6:
            PC = func_5492470528_op6;
        break;
        case 7:
            PC = func_5492470528_op7;
        break;
        case 8:
            PC = func_5492470528_op8;
        break;
        case 9:
            PC = func_5492470528_op9;
        break;
    }
}
void func_5492470656(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5492470656_op0;
        break;
        case 1:
            PC = func_5492470656_op1;
        break;
        case 2:
            PC = func_5492470656_op2;
        break;
    }
}
void func_5492470080(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5492470080_op0;
        break;
        case 1:
            PC = func_5492470080_op1;
        break;
    }
}
void func_5492470352(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5492470352_op0;
        break;
        case 1:
            PC = func_5492470352_op1;
        break;
    }
}
void func_5492470208(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5492470208_op0;
        break;
    }
}
void func_5492470144(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5492470144_op0;
        break;
        case 1:
            PC = func_5492470144_op1;
        break;
        case 2:
            PC = func_5492470144_op2;
        break;
    }
}
void func_5492471520(void) {
    extend(48);
    NEXT();
}
void func_5492470848(void) {
    extend(49);
    NEXT();
}
void func_5492471712(void) {
    extend(50);
    NEXT();
}
void func_5492471936(void) {
    extend(51);
    NEXT();
}
void func_5492472064(void) {
    extend(52);
    NEXT();
}
void func_5492472256(void) {
    extend(53);
    NEXT();
}
void func_5492472384(void) {
    extend(54);
    NEXT();
}
void func_5492472512(void) {
    extend(55);
    NEXT();
}
void func_5492472640(void) {
    extend(56);
    NEXT();
}
void func_5492472192(void) {
    extend(57);
    NEXT();
}
void func_5492473040(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5492473040;
}
void func_5492471216(void) {
    extend(43);
    NEXT();
}
void func_5492471776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5492471776;
}
void func_5492473360(void) {
    extend(45);
    NEXT();
}
void func_5492470912(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5492470912;
}
void func_5492473488(void) {
    extend(40);
    NEXT();
}
void func_5492473616(void) {
    extend(41);
    NEXT();
}
void func_5492473776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5492473776;
}
void func_5492474064(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5492474064;
}
void func_5492474192(void) {
    extend(42);
    NEXT();
}
void func_5492474320(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5492474320;
}
void func_5492474448(void) {
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
    PC =func_5492470208_op0;
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
