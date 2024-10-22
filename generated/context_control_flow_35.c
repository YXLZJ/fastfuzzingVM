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
void func_5249209888(void);
void func_5249210256(void);
void func_5249210672(void);
void func_5249210768(void);
void func_5249210544(void);
void func_5249210464(void);
void func_5249211168(void);
void func_5249210384(void);
void func_5249210896(void);
void func_5249211424(void);
void func_5249211088(void);
void func_5249211360(void);
void func_5249211776(void);
void func_5249212144(void);
void func_5249211984(void);
void func_5249211712(void);
void func_5249211904(void);
void func_5249210960(void);
void func_5249213008(void);
void func_5249213136(void);
void func_5249213264(void);
void func_5249213392(void);
void func_5249213520(void);
void func_5249213648(void);
void func_5249214032(void);
void func_5249211616(void);
void func_5249214224(void);
void func_5249214352(void);
void func_5249214480(void);
void func_5249214672(void);
void func_5249214800(void);
void func_5249214928(void);
void func_5249215056(void);
void func_5249214608(void);
void func_5249215632(void);
void func_5249215760(void);
void func_5249212800(void);
void func_5249212928(void);
void func_5249213936(void);
void func_5249216112(void);
void func_5249216240(void);
void func_5249213776(void);
void func_5249217008(void);
void func_5249217136(void);
void func_5249212272(void);
void func_5249216784(void);
void func_5249217456(void);
void func_5249217584(void);
void func_5249217712(void);
void func_5249217840(void);
void func_5249218032(void);
void func_5249218160(void);
void func_5249218288(void);
void func_5249218416(void);
void func_5249217968(void);
void func_5249219184(void);
void func_5249216432(void);
void func_5249219008(void);
void func_5249216608(void);
void func_5249218672(void);
void func_5249218800(void);
void func_5249219312(void);
void func_5249220160(void);
void func_5249220288(void);
void func_5249219440(void);
void func_5249215120(void);
void func_5249220096(void);
void func_5249215488(void);
void HALT(void);
void RETURN(void);
Inst func_5249209888_op0[2] = {func_5249211712, RETURN};
Inst func_5249210256_op0[2] = {func_5249213008, RETURN};
Inst func_5249210256_op1[2] = {func_5249213264, RETURN};
Inst func_5249210256_op2[2] = {func_5249213520, RETURN};
Inst func_5249210672_op0[2] = {func_5249214032, RETURN};
Inst func_5249210672_op1[2] = {func_5249211616, RETURN};
Inst func_5249210672_op2[2] = {func_5249214224, RETURN};
Inst func_5249210672_op3[2] = {func_5249214352, RETURN};
Inst func_5249210672_op4[2] = {func_5249214480, RETURN};
Inst func_5249210672_op5[2] = {func_5249214672, RETURN};
Inst func_5249210672_op6[2] = {func_5249214800, RETURN};
Inst func_5249210672_op7[2] = {func_5249214928, RETURN};
Inst func_5249210672_op8[2] = {func_5249215056, RETURN};
Inst func_5249210672_op9[2] = {func_5249214608, RETURN};
Inst func_5249210768_op0[2] = {func_5249215632, RETURN};
Inst func_5249210768_op1[2] = {func_5249212800, RETURN};
Inst func_5249210768_op2[2] = {func_5249212144, RETURN};
Inst func_5249210544_op0[2] = {func_5249213936, RETURN};
Inst func_5249210544_op1[2] = {func_5249210896, RETURN};
Inst func_5249210544_op2[2] = {func_5249211168, RETURN};
Inst func_5249210464_op0[2] = {func_5249213776, RETURN};
Inst func_5249211168_op0[2] = {func_5249216784, RETURN};
Inst func_5249211168_op1[2] = {func_5249217456, RETURN};
Inst func_5249211168_op2[2] = {func_5249217584, RETURN};
Inst func_5249211168_op3[2] = {func_5249217712, RETURN};
Inst func_5249211168_op4[2] = {func_5249217840, RETURN};
Inst func_5249211168_op5[2] = {func_5249218032, RETURN};
Inst func_5249211168_op6[2] = {func_5249218160, RETURN};
Inst func_5249211168_op7[2] = {func_5249218288, RETURN};
Inst func_5249211168_op8[2] = {func_5249218416, RETURN};
Inst func_5249210384_op0[2] = {func_5249217968, RETURN};
Inst func_5249210384_op1[2] = {func_5249216432, RETURN};
Inst func_5249210896_op0[2] = {func_5249210672, RETURN};
Inst func_5249210896_op1[2] = {func_5249216608, RETURN};
Inst func_5249211424_op0[2] = {func_5249218672, RETURN};
Inst func_5249211088_op0[2] = {func_5249219312, RETURN};
Inst func_5249211360_op0[2] = {func_5249211088, HALT};
Inst func_5249211776_op0[2] = {func_5249210384, RETURN};
Inst func_5249211776_op1[2] = {func_5249211984, RETURN};
Inst func_5249211776_op2[2] = {func_5249210464, RETURN};
Inst func_5249211776_op3[2] = {func_5249209888, RETURN};
Inst func_5249211776_op4[2] = {func_5249211424, RETURN};
Inst func_5249212144_op0[2] = {func_5249220160, RETURN};
Inst func_5249212144_op1[2] = {func_5249219440, RETURN};
Inst func_5249212144_op2[2] = {func_5249210544, RETURN};
Inst func_5249211984_op0[2] = {func_5249220096, RETURN};
Inst exp_5249211712[5] = {func_5249211168, func_5249211904, func_5249210768, func_5249210960, RETURN};
Inst exp_5249213008[4] = {func_5249210768, func_5249213136, func_5249210768, RETURN};
Inst exp_5249213264[4] = {func_5249210768, func_5249213392, func_5249210768, RETURN};
Inst exp_5249213520[4] = {func_5249210768, func_5249213648, func_5249210768, RETURN};
Inst exp_5249215632[4] = {func_5249210768, func_5249215760, func_5249212144, RETURN};
Inst exp_5249212800[4] = {func_5249210768, func_5249212928, func_5249212144, RETURN};
Inst exp_5249213936[4] = {func_5249216112, func_5249210768, func_5249216240, RETURN};
Inst exp_5249213776[12] = {func_5249217008, func_5249216112, func_5249209888, func_5249210960, func_5249210256, func_5249210960, func_5249209888, func_5249216240, func_5249217136, func_5249211088, func_5249212272, RETURN};
Inst exp_5249217968[8] = {func_5249219184, func_5249216112, func_5249210256, func_5249216240, func_5249217136, func_5249211088, func_5249212272, RETURN};
Inst exp_5249216432[12] = {func_5249219184, func_5249216112, func_5249210256, func_5249216240, func_5249217136, func_5249211088, func_5249212272, func_5249219008, func_5249217136, func_5249211088, func_5249212272, RETURN};
Inst exp_5249216608[3] = {func_5249210672, func_5249210896, RETURN};
Inst exp_5249218672[6] = {func_5249218800, func_5249216112, func_5249210768, func_5249216240, func_5249210960, RETURN};
Inst exp_5249219312[3] = {func_5249211776, func_5249211088, RETURN};
Inst exp_5249220160[4] = {func_5249212144, func_5249220288, func_5249210544, RETURN};
Inst exp_5249219440[4] = {func_5249212144, func_5249215120, func_5249210544, RETURN};
Inst exp_5249220096[8] = {func_5249215488, func_5249216112, func_5249210256, func_5249216240, func_5249217136, func_5249211088, func_5249212272, RETURN};
void func_5249209888(void) {
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
            PC = func_5249209888_op0;
        break;
    }
}
void func_5249210256(void) {
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
            PC = func_5249210256_op0;
        break;
        case 1:
            PC = func_5249210256_op1;
        break;
        case 2:
            PC = func_5249210256_op2;
        break;
    }
}
void func_5249210672(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5249210672_op0;
        break;
        case 1:
            PC = func_5249210672_op1;
        break;
        case 2:
            PC = func_5249210672_op2;
        break;
        case 3:
            PC = func_5249210672_op3;
        break;
        case 4:
            PC = func_5249210672_op4;
        break;
        case 5:
            PC = func_5249210672_op5;
        break;
        case 6:
            PC = func_5249210672_op6;
        break;
        case 7:
            PC = func_5249210672_op7;
        break;
        case 8:
            PC = func_5249210672_op8;
        break;
        case 9:
            PC = func_5249210672_op9;
        break;
    }
}
void func_5249210768(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5249210768_op0;
        break;
        case 1:
            PC = func_5249210768_op1;
        break;
        case 2:
            PC = func_5249210768_op2;
        break;
    }
}
void func_5249210544(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5249210544_op0;
        break;
        case 1:
            PC = func_5249210544_op1;
        break;
        case 2:
            PC = func_5249210544_op2;
        break;
    }
}
void func_5249210464(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5249210464_op0;
        break;
    }
}
void func_5249211168(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5249211168_op0;
        break;
        case 1:
            PC = func_5249211168_op1;
        break;
        case 2:
            PC = func_5249211168_op2;
        break;
        case 3:
            PC = func_5249211168_op3;
        break;
        case 4:
            PC = func_5249211168_op4;
        break;
        case 5:
            PC = func_5249211168_op5;
        break;
        case 6:
            PC = func_5249211168_op6;
        break;
        case 7:
            PC = func_5249211168_op7;
        break;
        case 8:
            PC = func_5249211168_op8;
        break;
    }
}
void func_5249210384(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5249210384_op0;
        break;
        case 1:
            PC = func_5249210384_op1;
        break;
    }
}
void func_5249210896(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5249210896_op0;
        break;
        case 1:
            PC = func_5249210896_op1;
        break;
    }
}
void func_5249211424(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
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
            PC = func_5249211424_op0;
        break;
    }
}
void func_5249211088(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5249211088_op0;
        break;
    }
}
void func_5249211360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5249211360_op0;
        break;
    }
}
void func_5249211776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5249211776_op0;
        break;
        case 1:
            PC = func_5249211776_op1;
        break;
        case 2:
            PC = func_5249211776_op2;
        break;
        case 3:
            PC = func_5249211776_op3;
        break;
        case 4:
            PC = func_5249211776_op4;
        break;
    }
}
void func_5249212144(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5249212144_op0;
        break;
        case 1:
            PC = func_5249212144_op1;
        break;
        case 2:
            PC = func_5249212144_op2;
        break;
    }
}
void func_5249211984(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5249211984_op0;
        break;
    }
}
void func_5249211712(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5249211712;
}
void func_5249211904(void) {
    extend(61);
    NEXT();
}
void func_5249210960(void) {
    extend(59);
    NEXT();
}
void func_5249213008(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5249213008;
}
void func_5249213136(void) {
    extend(62);
    NEXT();
}
void func_5249213264(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5249213264;
}
void func_5249213392(void) {
    extend(60);
    NEXT();
}
void func_5249213520(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5249213520;
}
void func_5249213648(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5249214032(void) {
    extend(48);
    NEXT();
}
void func_5249211616(void) {
    extend(49);
    NEXT();
}
void func_5249214224(void) {
    extend(50);
    NEXT();
}
void func_5249214352(void) {
    extend(51);
    NEXT();
}
void func_5249214480(void) {
    extend(52);
    NEXT();
}
void func_5249214672(void) {
    extend(53);
    NEXT();
}
void func_5249214800(void) {
    extend(54);
    NEXT();
}
void func_5249214928(void) {
    extend(55);
    NEXT();
}
void func_5249215056(void) {
    extend(56);
    NEXT();
}
void func_5249214608(void) {
    extend(57);
    NEXT();
}
void func_5249215632(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5249215632;
}
void func_5249215760(void) {
    extend(43);
    NEXT();
}
void func_5249212800(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5249212800;
}
void func_5249212928(void) {
    extend(45);
    NEXT();
}
void func_5249213936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5249213936;
}
void func_5249216112(void) {
    extend(40);
    NEXT();
}
void func_5249216240(void) {
    extend(41);
    NEXT();
}
void func_5249213776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5249213776;
}
void func_5249217008(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_5249217136(void) {
    extend(123);
    NEXT();
}
void func_5249212272(void) {
    extend(125);
    NEXT();
}
void func_5249216784(void) {
    extend(105);
    NEXT();
}
void func_5249217456(void) {
    extend(106);
    NEXT();
}
void func_5249217584(void) {
    extend(107);
    NEXT();
}
void func_5249217712(void) {
    extend(120);
    NEXT();
}
void func_5249217840(void) {
    extend(121);
    NEXT();
}
void func_5249218032(void) {
    extend(122);
    NEXT();
}
void func_5249218160(void) {
    extend(97);
    NEXT();
}
void func_5249218288(void) {
    extend(98);
    NEXT();
}
void func_5249218416(void) {
    extend(99);
    NEXT();
}
void func_5249217968(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5249217968;
}
void func_5249219184(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5249216432(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5249216432;
}
void func_5249219008(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5249216608(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5249216608;
}
void func_5249218672(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5249218672;
}
void func_5249218800(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5249219312(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5249219312;
}
void func_5249220160(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5249220160;
}
void func_5249220288(void) {
    extend(42);
    NEXT();
}
void func_5249219440(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5249219440;
}
void func_5249215120(void) {
    extend(47);
    NEXT();
}
void func_5249220096(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5249220096;
}
void func_5249215488(void) {
    extend(32);
    extend(119);
    extend(104);
    extend(105);
    extend(108);
    extend(101);
    extend(32);
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
    PC =func_5249211360_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 16;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
