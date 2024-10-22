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
void func_5618293360(void);
void func_5618303568(void);
void func_5618303872(void);
void func_5618304224(void);
void func_5618303936(void);
void func_5618303488(void);
void func_5618303360(void);
void func_5618304688(void);
void func_5618303728(void);
void func_5618304352(void);
void func_5618304480(void);
void func_5618304608(void);
void func_5619335296(void);
void func_5619335472(void);
void func_5619335632(void);
void func_5619335920(void);
void func_5619336128(void);
void func_5619336528(void);
void func_5619336912(void);
void func_5619337040(void);
void func_5619337168(void);
void func_5619337296(void);
void func_5619337424(void);
void func_5619337552(void);
void func_5619338032(void);
void func_5619335808(void);
void func_5619338224(void);
void func_5619338384(void);
void func_5619338512(void);
void func_5619338704(void);
void func_5619338832(void);
void func_5619338960(void);
void func_5619339088(void);
void func_5619338640(void);
void func_5619336720(void);
void func_5619336848(void);
void func_5619339728(void);
void func_5619339856(void);
void func_5619340240(void);
void func_5619340368(void);
void func_5619340496(void);
void func_5619340656(void);
void func_5619340784(void);
void func_5619340976(void);
void func_5619341104(void);
void func_5619341232(void);
void func_5619341360(void);
void func_5619340912(void);
void func_5619340128(void);
void func_5619337744(void);
void func_5619337872(void);
void func_5619340048(void);
void func_5619341808(void);
void HALT(void);
void RETURN(void);
Inst func_5618293360_op0[2] = {func_5618304608, RETURN};
Inst func_5618293360_op1[2] = {func_5619335296, RETURN};
Inst func_5618293360_op2[2] = {func_5619335472, RETURN};
Inst func_5618293360_op3[2] = {func_5619335632, RETURN};
Inst func_5618303568_op0[2] = {func_5619335920, RETURN};
Inst func_5618303568_op1[2] = {func_5619336128, RETURN};
Inst func_5618303872_op0[2] = {func_5619336912, RETURN};
Inst func_5618303872_op1[2] = {func_5619337168, RETURN};
Inst func_5618303872_op2[2] = {func_5619337424, RETURN};
Inst func_5618304224_op0[2] = {func_5619338032, RETURN};
Inst func_5618304224_op1[2] = {func_5619335808, RETURN};
Inst func_5618304224_op2[2] = {func_5619338224, RETURN};
Inst func_5618304224_op3[2] = {func_5619338384, RETURN};
Inst func_5618304224_op4[2] = {func_5619338512, RETURN};
Inst func_5618304224_op5[2] = {func_5619338704, RETURN};
Inst func_5618304224_op6[2] = {func_5619338832, RETURN};
Inst func_5618304224_op7[2] = {func_5619338960, RETURN};
Inst func_5618304224_op8[2] = {func_5619339088, RETURN};
Inst func_5618304224_op9[2] = {func_5619338640, RETURN};
Inst func_5618303936_op0[2] = {func_5618304224, RETURN};
Inst func_5618303936_op1[2] = {func_5619336720, RETURN};
Inst func_5618303488_op0[2] = {func_5619336848, RETURN};
Inst func_5618303360_op0[2] = {func_5618303488, HALT};
Inst func_5618304688_op0[2] = {func_5619340240, RETURN};
Inst func_5618304688_op1[2] = {func_5619340368, RETURN};
Inst func_5618304688_op2[2] = {func_5619340496, RETURN};
Inst func_5618304688_op3[2] = {func_5619340656, RETURN};
Inst func_5618304688_op4[2] = {func_5619340784, RETURN};
Inst func_5618304688_op5[2] = {func_5619340976, RETURN};
Inst func_5618304688_op6[2] = {func_5619341104, RETURN};
Inst func_5618304688_op7[2] = {func_5619341232, RETURN};
Inst func_5618304688_op8[2] = {func_5619341360, RETURN};
Inst func_5618304688_op9[2] = {func_5619340912, RETURN};
Inst func_5618303728_op0[2] = {func_5619340128, RETURN};
Inst func_5618303728_op1[2] = {func_5619337744, RETURN};
Inst func_5618303728_op2[2] = {func_5619337872, RETURN};
Inst func_5618304352_op0[2] = {func_5618303936, RETURN};
Inst func_5618304352_op1[2] = {func_5618304688, RETURN};
Inst func_5618304480_op0[2] = {func_5619340048, RETURN};
Inst exp_5619336128[4] = {func_5618293360, func_5619336528, func_5618303568, RETURN};
Inst exp_5619336912[4] = {func_5618293360, func_5619337040, func_5618304352, RETURN};
Inst exp_5619337168[4] = {func_5618303872, func_5619337296, func_5618303872, RETURN};
Inst exp_5619337424[4] = {func_5618303872, func_5619337552, func_5618303872, RETURN};
Inst exp_5619336720[3] = {func_5618304224, func_5618303936, RETURN};
Inst exp_5619336848[6] = {func_5619339728, func_5618303568, func_5619339856, func_5618303728, func_5618304480, RETURN};
Inst exp_5619340048[3] = {func_5619341808, func_5618303872, RETURN};
void func_5618293360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        NEXT();
        return;
    }
    xor(4);
    store();
    switch (branch) {
        case 0:
            PC = func_5618293360_op0;
        break;
        case 1:
            PC = func_5618293360_op1;
        break;
        case 2:
            PC = func_5618293360_op2;
        break;
        case 3:
            PC = func_5618293360_op3;
        break;
    }
}
void func_5618303568(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5618303568_op0;
        break;
        case 1:
            PC = func_5618303568_op1;
        break;
    }
}
void func_5618303872(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5618303872_op0;
        break;
        case 1:
            PC = func_5618303872_op1;
        break;
        case 2:
            PC = func_5618303872_op2;
        break;
    }
}
void func_5618304224(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5618304224_op0;
        break;
        case 1:
            PC = func_5618304224_op1;
        break;
        case 2:
            PC = func_5618304224_op2;
        break;
        case 3:
            PC = func_5618304224_op3;
        break;
        case 4:
            PC = func_5618304224_op4;
        break;
        case 5:
            PC = func_5618304224_op5;
        break;
        case 6:
            PC = func_5618304224_op6;
        break;
        case 7:
            PC = func_5618304224_op7;
        break;
        case 8:
            PC = func_5618304224_op8;
        break;
        case 9:
            PC = func_5618304224_op9;
        break;
    }
}
void func_5618303936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5618303936_op0;
        break;
        case 1:
            PC = func_5618303936_op1;
        break;
    }
}
void func_5618303488(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5618303488_op0;
        break;
    }
}
void func_5618303360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5618303360_op0;
        break;
    }
}
void func_5618304688(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5618304688_op0;
        break;
        case 1:
            PC = func_5618304688_op1;
        break;
        case 2:
            PC = func_5618304688_op2;
        break;
        case 3:
            PC = func_5618304688_op3;
        break;
        case 4:
            PC = func_5618304688_op4;
        break;
        case 5:
            PC = func_5618304688_op5;
        break;
        case 6:
            PC = func_5618304688_op6;
        break;
        case 7:
            PC = func_5618304688_op7;
        break;
        case 8:
            PC = func_5618304688_op8;
        break;
        case 9:
            PC = func_5618304688_op9;
        break;
    }
}
void func_5618303728(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5618303728_op0;
        break;
        case 1:
            PC = func_5618303728_op1;
        break;
        case 2:
            PC = func_5618303728_op2;
        break;
    }
}
void func_5618304352(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5618304352_op0;
        break;
        case 1:
            PC = func_5618304352_op1;
        break;
    }
}
void func_5618304480(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5618304480_op0;
        break;
    }
}
void func_5618304608(void) {
    extend(105);
    extend(100);
    NEXT();
}
void func_5619335296(void) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
}
void func_5619335472(void) {
    extend(97);
    extend(103);
    extend(101);
    NEXT();
}
void func_5619335632(void) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
}
void func_5619335920(void) {
    extend(42);
    NEXT();
}
void func_5619336128(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(44);
        extend(42);
        NEXT();
        return;
    }
    store();
    PC = exp_5619336128;
}
void func_5619336528(void) {
    extend(44);
    NEXT();
}
void func_5619336912(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5619336912;
}
void func_5619337040(void) {
    extend(61);
    NEXT();
}
void func_5619337168(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(65);
        extend(78);
        extend(68);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5619337168;
}
void func_5619337296(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_5619337424(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(79);
        extend(82);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5619337424;
}
void func_5619337552(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_5619338032(void) {
    extend(48);
    NEXT();
}
void func_5619335808(void) {
    extend(49);
    NEXT();
}
void func_5619338224(void) {
    extend(50);
    NEXT();
}
void func_5619338384(void) {
    extend(51);
    NEXT();
}
void func_5619338512(void) {
    extend(52);
    NEXT();
}
void func_5619338704(void) {
    extend(53);
    NEXT();
}
void func_5619338832(void) {
    extend(54);
    NEXT();
}
void func_5619338960(void) {
    extend(55);
    NEXT();
}
void func_5619339088(void) {
    extend(56);
    NEXT();
}
void func_5619338640(void) {
    extend(57);
    NEXT();
}
void func_5619336720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5619336720;
}
void func_5619336848(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5619336848;
}
void func_5619339728(void) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
}
void func_5619339856(void) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
}
void func_5619340240(void) {
    extend(97);
    NEXT();
}
void func_5619340368(void) {
    extend(98);
    NEXT();
}
void func_5619340496(void) {
    extend(99);
    NEXT();
}
void func_5619340656(void) {
    extend(100);
    NEXT();
}
void func_5619340784(void) {
    extend(101);
    NEXT();
}
void func_5619340976(void) {
    extend(102);
    NEXT();
}
void func_5619341104(void) {
    extend(103);
    NEXT();
}
void func_5619341232(void) {
    extend(104);
    NEXT();
}
void func_5619341360(void) {
    extend(105);
    NEXT();
}
void func_5619340912(void) {
    extend(106);
    NEXT();
}
void func_5619340128(void) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_5619337744(void) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_5619337872(void) {
    extend(112);
    extend(114);
    extend(111);
    extend(100);
    extend(117);
    extend(99);
    extend(116);
    extend(115);
    NEXT();
}
void func_5619340048(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5619340048;
}
void func_5619341808(void) {
    extend(87);
    extend(72);
    extend(69);
    extend(82);
    extend(69);
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
    PC =func_5618303360_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 7;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
