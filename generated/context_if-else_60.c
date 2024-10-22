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
void func_5626684128(void);
void func_5626693568(void);
void func_5626693488(void);
void func_5626693408(void);
void func_5626694032(void);
void func_5626693136(void);
void func_5626694560(void);
void func_5626693328(void);
void func_5626693856(void);
void func_5626693920(void);
void func_5626694800(void);
void func_5626694928(void);
void func_5626695152(void);
void func_5626695280(void);
void func_5626695408(void);
void func_5626695776(void);
void func_5626695904(void);
void func_5626694224(void);
void func_5626696288(void);
void func_5626696416(void);
void func_5626696544(void);
void func_5626696672(void);
void func_5626696800(void);
void func_5626696960(void);
void func_5626697088(void);
void func_5626697312(void);
void func_5626697440(void);
void func_5626697568(void);
void func_5626697696(void);
void func_5626697824(void);
void func_5626698016(void);
void func_5626697248(void);
void func_5626695056(void);
void func_5626696032(void);
void func_5626696160(void);
void func_5626695600(void);
void func_5626699504(void);
void func_5626699632(void);
void func_5626699440(void);
void func_5626698672(void);
void func_5626695664(void);
void func_5626700080(void);
void func_5626700208(void);
void func_5626700336(void);
void func_5626700528(void);
void func_5626700656(void);
void func_5626700784(void);
void func_5626700912(void);
void func_5626700464(void);
void func_5626701232(void);
void func_5626701360(void);
void func_5626698496(void);
void func_5626698208(void);
void func_5626701632(void);
void func_5626701760(void);
void HALT(void);
void RETURN(void);
Inst func_5626684128_op0[2] = {func_5626695152, RETURN};
Inst func_5626693568_op0[2] = {func_5626695776, RETURN};
Inst func_5626693568_op1[2] = {func_5626694224, RETURN};
Inst func_5626693568_op2[2] = {func_5626696416, RETURN};
Inst func_5626693488_op0[2] = {func_5626696672, RETURN};
Inst func_5626693488_op1[2] = {func_5626694928, RETURN};
Inst func_5626693488_op2[2] = {func_5626696960, RETURN};
Inst func_5626693408_op0[2] = {func_5626694560, RETURN};
Inst func_5626693408_op1[2] = {func_5626694032, RETURN};
Inst func_5626694032_op0[2] = {func_5626697312, RETURN};
Inst func_5626694032_op1[2] = {func_5626697440, RETURN};
Inst func_5626694032_op2[2] = {func_5626697568, RETURN};
Inst func_5626694032_op3[2] = {func_5626697696, RETURN};
Inst func_5626694032_op4[2] = {func_5626697824, RETURN};
Inst func_5626694032_op5[2] = {func_5626698016, RETURN};
Inst func_5626693136_op0[2] = {func_5626697248, RETURN};
Inst func_5626693136_op1[2] = {func_5626699440, RETURN};
Inst func_5626694560_op0[2] = {func_5626698672, RETURN};
Inst func_5626694560_op1[2] = {func_5626695664, RETURN};
Inst func_5626694560_op2[2] = {func_5626700080, RETURN};
Inst func_5626694560_op3[2] = {func_5626700208, RETURN};
Inst func_5626694560_op4[2] = {func_5626700336, RETURN};
Inst func_5626694560_op5[2] = {func_5626700528, RETURN};
Inst func_5626694560_op6[2] = {func_5626700656, RETURN};
Inst func_5626694560_op7[2] = {func_5626700784, RETURN};
Inst func_5626694560_op8[2] = {func_5626700912, RETURN};
Inst func_5626694560_op9[2] = {func_5626700464, RETURN};
Inst func_5626693328_op0[2] = {func_5626701232, RETURN};
Inst func_5626693856_op0[2] = {func_5626693136, HALT};
Inst func_5626693920_op0[2] = {func_5626693136, RETURN};
Inst func_5626693920_op1[2] = {func_5626684128, RETURN};
Inst func_5626693920_op2[2] = {func_5626693328, RETURN};
Inst func_5626694800_op0[2] = {func_5626698496, RETURN};
Inst func_5626694800_op1[2] = {func_5626698208, RETURN};
Inst func_5626694928_op0[2] = {func_5626693408, RETURN};
Inst func_5626694928_op1[2] = {func_5626701632, RETURN};
Inst exp_5626695152[5] = {func_5626694032, func_5626695280, func_5626693488, func_5626695408, RETURN};
Inst exp_5626695776[4] = {func_5626693488, func_5626695904, func_5626693488, RETURN};
Inst exp_5626694224[4] = {func_5626693488, func_5626696288, func_5626693488, RETURN};
Inst exp_5626696416[4] = {func_5626693488, func_5626696544, func_5626693488, RETURN};
Inst exp_5626696672[4] = {func_5626694928, func_5626696800, func_5626693488, RETURN};
Inst exp_5626696960[4] = {func_5626694928, func_5626697088, func_5626693488, RETURN};
Inst exp_5626697248[12] = {func_5626695056, func_5626696032, func_5626693568, func_5626696160, func_5626695600, func_5626694800, func_5626699504, func_5626699632, func_5626695600, func_5626694800, func_5626699504, RETURN};
Inst exp_5626699440[8] = {func_5626695056, func_5626696032, func_5626693568, func_5626696160, func_5626695600, func_5626694800, func_5626699504, RETURN};
Inst exp_5626701232[6] = {func_5626701360, func_5626696032, func_5626693488, func_5626696160, func_5626695408, RETURN};
Inst exp_5626698496[3] = {func_5626693920, func_5626694800, RETURN};
Inst exp_5626698208[1] = {RETURN};
Inst exp_5626701632[4] = {func_5626693408, func_5626701760, func_5626694928, RETURN};
void func_5626684128(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5626684128_op0;
        break;
    }
}
void func_5626693568(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5626693568_op0;
        break;
        case 1:
            PC = func_5626693568_op1;
        break;
        case 2:
            PC = func_5626693568_op2;
        break;
    }
}
void func_5626693488(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5626693488_op0;
        break;
        case 1:
            PC = func_5626693488_op1;
        break;
        case 2:
            PC = func_5626693488_op2;
        break;
    }
}
void func_5626693408(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5626693408_op0;
        break;
        case 1:
            PC = func_5626693408_op1;
        break;
    }
}
void func_5626694032(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5626694032_op0;
        break;
        case 1:
            PC = func_5626694032_op1;
        break;
        case 2:
            PC = func_5626694032_op2;
        break;
        case 3:
            PC = func_5626694032_op3;
        break;
        case 4:
            PC = func_5626694032_op4;
        break;
        case 5:
            PC = func_5626694032_op5;
        break;
    }
}
void func_5626693136(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5626693136_op0;
        break;
        case 1:
            PC = func_5626693136_op1;
        break;
    }
}
void func_5626694560(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5626694560_op0;
        break;
        case 1:
            PC = func_5626694560_op1;
        break;
        case 2:
            PC = func_5626694560_op2;
        break;
        case 3:
            PC = func_5626694560_op3;
        break;
        case 4:
            PC = func_5626694560_op4;
        break;
        case 5:
            PC = func_5626694560_op5;
        break;
        case 6:
            PC = func_5626694560_op6;
        break;
        case 7:
            PC = func_5626694560_op7;
        break;
        case 8:
            PC = func_5626694560_op8;
        break;
        case 9:
            PC = func_5626694560_op9;
        break;
    }
}
void func_5626693328(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5626693328_op0;
        break;
    }
}
void func_5626693856(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5626693856_op0;
        break;
    }
}
void func_5626693920(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5626693920_op0;
        break;
        case 1:
            PC = func_5626693920_op1;
        break;
        case 2:
            PC = func_5626693920_op2;
        break;
    }
}
void func_5626694800(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5626694800_op0;
        break;
        case 1:
            PC = func_5626694800_op1;
        break;
    }
}
void func_5626694928(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5626694928_op0;
        break;
        case 1:
            PC = func_5626694928_op1;
        break;
    }
}
void func_5626695152(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5626695152;
}
void func_5626695280(void) {
    extend(61);
    NEXT();
}
void func_5626695408(void) {
    extend(59);
    NEXT();
}
void func_5626695776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5626695776;
}
void func_5626695904(void) {
    extend(62);
    NEXT();
}
void func_5626694224(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5626694224;
}
void func_5626696288(void) {
    extend(60);
    NEXT();
}
void func_5626696416(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5626696416;
}
void func_5626696544(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5626696672(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5626696672;
}
void func_5626696800(void) {
    extend(43);
    NEXT();
}
void func_5626696960(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5626696960;
}
void func_5626697088(void) {
    extend(45);
    NEXT();
}
void func_5626697312(void) {
    extend(120);
    NEXT();
}
void func_5626697440(void) {
    extend(121);
    NEXT();
}
void func_5626697568(void) {
    extend(122);
    NEXT();
}
void func_5626697696(void) {
    extend(97);
    NEXT();
}
void func_5626697824(void) {
    extend(98);
    NEXT();
}
void func_5626698016(void) {
    extend(99);
    NEXT();
}
void func_5626697248(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        extend(101);
        extend(108);
        extend(115);
        extend(101);
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5626697248;
}
void func_5626695056(void) {
    extend(105);
    extend(102);
    NEXT();
}
void func_5626696032(void) {
    extend(40);
    NEXT();
}
void func_5626696160(void) {
    extend(41);
    NEXT();
}
void func_5626695600(void) {
    extend(123);
    NEXT();
}
void func_5626699504(void) {
    extend(125);
    NEXT();
}
void func_5626699632(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5626699440(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5626699440;
}
void func_5626698672(void) {
    extend(48);
    NEXT();
}
void func_5626695664(void) {
    extend(49);
    NEXT();
}
void func_5626700080(void) {
    extend(50);
    NEXT();
}
void func_5626700208(void) {
    extend(51);
    NEXT();
}
void func_5626700336(void) {
    extend(52);
    NEXT();
}
void func_5626700528(void) {
    extend(53);
    NEXT();
}
void func_5626700656(void) {
    extend(54);
    NEXT();
}
void func_5626700784(void) {
    extend(55);
    NEXT();
}
void func_5626700912(void) {
    extend(56);
    NEXT();
}
void func_5626700464(void) {
    extend(57);
    NEXT();
}
void func_5626701232(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5626701232;
}
void func_5626701360(void) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
}
void func_5626698496(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5626698496;
}
void func_5626698208(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5626698208;
}
void func_5626701632(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5626701632;
}
void func_5626701760(void) {
    extend(42);
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
    PC =func_5626693856_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 12;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
