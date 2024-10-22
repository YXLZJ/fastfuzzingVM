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
void func_4997542976(void);
void func_4997559488(void);
void func_4997559696(void);
void func_4997559904(void);
void func_4997559360(void);
void func_4997560560(void);
void func_4997560688(void);
void func_4997560464(void);
void func_4997560240(void);
void func_4997562256(void);
void func_4997561376(void);
void func_4997560816(void);
void func_4997560944(void);
void func_4997561072(void);
void func_4997561200(void);
void func_4997561504(void);
void func_4997560160(void);
void func_4997560304(void);
void func_4997561952(void);
void func_4997562080(void);
void func_4997562384(void);
void func_4997562512(void);
void func_4997563040(void);
void func_4997562720(void);
void func_4997562640(void);
void func_4997562912(void);
void func_4997563232(void);
void func_4997563360(void);
void func_4997563856(void);
void func_4997563984(void);
void func_4997564112(void);
void func_4997564272(void);
void func_4997564400(void);
void func_4997561760(void);
void func_4997564976(void);
void func_4997565104(void);
void func_4997565232(void);
void func_4997561696(void);
void func_4997563552(void);
void func_4997565552(void);
void func_4997565680(void);
void func_4997565808(void);
void func_4997567280(void);
void func_4997567408(void);
void func_4997567536(void);
void func_4997567696(void);
void func_4997567824(void);
void func_4997568016(void);
void func_4997568144(void);
void func_4997568272(void);
void func_4997568400(void);
void func_4997567952(void);
void func_4997568720(void);
void func_4997568848(void);
void func_4997568976(void);
void func_4997569104(void);
void func_4997569232(void);
void func_4997569360(void);
void func_4997569488(void);
void func_4997568528(void);
void func_4997569872(void);
void func_4997570000(void);
void func_4997570128(void);
void func_4997570256(void);
void func_4997570384(void);
void func_4997564528(void);
void func_4997564656(void);
void func_4997564784(void);
void func_4997564912(void);
void func_4997570512(void);
void func_4997570640(void);
void func_4997570768(void);
void func_4997570896(void);
void func_4997571024(void);
void func_4997571152(void);
void func_4997569616(void);
void func_4997569744(void);
void func_4997571792(void);
void func_4997571920(void);
void func_4997572048(void);
void func_4997572176(void);
void func_4997572304(void);
void func_4997572432(void);
void func_4997572560(void);
void func_4997572688(void);
void func_4997572816(void);
void func_4997572944(void);
void func_4997573072(void);
void func_4997573200(void);
void func_4997573328(void);
void func_4997573456(void);
void func_4997573584(void);
void func_4997573712(void);
void func_4997573840(void);
void func_4997566368(void);
void func_4997566528(void);
void func_4997566656(void);
void func_4997566848(void);
void func_4997566976(void);
void func_4997566784(void);
void func_4997574032(void);
void func_4997574160(void);
void func_4997574288(void);
void func_4997565936(void);
void func_4997566064(void);
void func_4997563760(void);
void func_4997574416(void);
void func_4997574544(void);
void func_4997574672(void);
void func_4997563680(void);
void func_4997574800(void);
void func_4997575456(void);
void func_4997575600(void);
void func_4997575760(void);
void func_4997575888(void);
void func_4997576080(void);
void func_4997576208(void);
void func_4997576336(void);
void func_4997576464(void);
void func_4997576016(void);
void func_4997576784(void);
void func_4997575088(void);
void HALT(void);
void RETURN(void);
Inst func_4997542976_op0[2] = {func_4997562720, RETURN};
Inst func_4997542976_op1[2] = {func_4997562080, RETURN};
Inst func_4997559488_op0[2] = {func_4997562640, RETURN};
Inst func_4997559696_op0[2] = {func_4997562384, RETURN};
Inst func_4997559696_op1[2] = {func_4997561072, RETURN};
Inst func_4997559696_op2[2] = {func_4997560688, RETURN};
Inst func_4997559904_op0[2] = {func_4997560944, RETURN};
Inst func_4997559904_op1[2] = {func_4997562912, RETURN};
Inst func_4997559360_op0[2] = {func_4997563360, RETURN};
Inst func_4997560560_op0[2] = {func_4997563856, RETURN};
Inst func_4997560560_op1[2] = {func_4997563984, RETURN};
Inst func_4997560560_op2[2] = {func_4997564112, RETURN};
Inst func_4997560560_op3[2] = {func_4997564272, RETURN};
Inst func_4997560560_op4[2] = {func_4997564400, RETURN};
Inst func_4997560560_op5[2] = {func_4997561760, RETURN};
Inst func_4997560560_op6[2] = {func_4997564976, RETURN};
Inst func_4997560560_op7[2] = {func_4997565104, RETURN};
Inst func_4997560560_op8[2] = {func_4997565232, RETURN};
Inst func_4997560560_op9[2] = {func_4997561696, RETURN};
Inst func_4997560688_op0[2] = {func_4997560240, RETURN};
Inst func_4997560688_op1[2] = {func_4997559488, RETURN};
Inst func_4997560688_op2[2] = {func_4997560464, RETURN};
Inst func_4997560688_op3[2] = {func_4997559904, RETURN};
Inst func_4997560688_op4[2] = {func_4997561952, RETURN};
Inst func_4997560464_op0[2] = {func_4997563552, RETURN};
Inst func_4997560240_op0[2] = {func_4997565552, RETURN};
Inst func_4997562256_op0[2] = {func_4997567280, RETURN};
Inst func_4997562256_op1[2] = {func_4997567408, RETURN};
Inst func_4997562256_op2[2] = {func_4997567536, RETURN};
Inst func_4997562256_op3[2] = {func_4997567696, RETURN};
Inst func_4997562256_op4[2] = {func_4997567824, RETURN};
Inst func_4997562256_op5[2] = {func_4997568016, RETURN};
Inst func_4997562256_op6[2] = {func_4997568144, RETURN};
Inst func_4997562256_op7[2] = {func_4997568272, RETURN};
Inst func_4997562256_op8[2] = {func_4997568400, RETURN};
Inst func_4997562256_op9[2] = {func_4997567952, RETURN};
Inst func_4997562256_op10[2] = {func_4997568720, RETURN};
Inst func_4997562256_op11[2] = {func_4997568848, RETURN};
Inst func_4997562256_op12[2] = {func_4997568976, RETURN};
Inst func_4997562256_op13[2] = {func_4997569104, RETURN};
Inst func_4997562256_op14[2] = {func_4997569232, RETURN};
Inst func_4997562256_op15[2] = {func_4997569360, RETURN};
Inst func_4997562256_op16[2] = {func_4997569488, RETURN};
Inst func_4997562256_op17[2] = {func_4997568528, RETURN};
Inst func_4997562256_op18[2] = {func_4997569872, RETURN};
Inst func_4997562256_op19[2] = {func_4997570000, RETURN};
Inst func_4997562256_op20[2] = {func_4997570128, RETURN};
Inst func_4997562256_op21[2] = {func_4997570256, RETURN};
Inst func_4997562256_op22[2] = {func_4997570384, RETURN};
Inst func_4997562256_op23[2] = {func_4997564528, RETURN};
Inst func_4997562256_op24[2] = {func_4997564656, RETURN};
Inst func_4997562256_op25[2] = {func_4997564784, RETURN};
Inst func_4997562256_op26[2] = {func_4997564912, RETURN};
Inst func_4997562256_op27[2] = {func_4997570512, RETURN};
Inst func_4997562256_op28[2] = {func_4997570640, RETURN};
Inst func_4997562256_op29[2] = {func_4997570768, RETURN};
Inst func_4997562256_op30[2] = {func_4997570896, RETURN};
Inst func_4997562256_op31[2] = {func_4997571024, RETURN};
Inst func_4997562256_op32[2] = {func_4997571152, RETURN};
Inst func_4997562256_op33[2] = {func_4997569616, RETURN};
Inst func_4997562256_op34[2] = {func_4997569744, RETURN};
Inst func_4997562256_op35[2] = {func_4997571792, RETURN};
Inst func_4997562256_op36[2] = {func_4997571920, RETURN};
Inst func_4997562256_op37[2] = {func_4997572048, RETURN};
Inst func_4997562256_op38[2] = {func_4997572176, RETURN};
Inst func_4997562256_op39[2] = {func_4997572304, RETURN};
Inst func_4997562256_op40[2] = {func_4997572432, RETURN};
Inst func_4997562256_op41[2] = {func_4997572560, RETURN};
Inst func_4997562256_op42[2] = {func_4997572688, RETURN};
Inst func_4997562256_op43[2] = {func_4997572816, RETURN};
Inst func_4997562256_op44[2] = {func_4997572944, RETURN};
Inst func_4997562256_op45[2] = {func_4997573072, RETURN};
Inst func_4997562256_op46[2] = {func_4997573200, RETURN};
Inst func_4997562256_op47[2] = {func_4997573328, RETURN};
Inst func_4997562256_op48[2] = {func_4997573456, RETURN};
Inst func_4997562256_op49[2] = {func_4997573584, RETURN};
Inst func_4997562256_op50[2] = {func_4997573712, RETURN};
Inst func_4997562256_op51[2] = {func_4997573840, RETURN};
Inst func_4997561376_op0[2] = {func_4997563232, RETURN};
Inst func_4997561376_op1[2] = {func_4997562640, RETURN};
Inst func_4997561376_op2[2] = {func_4997566368, RETURN};
Inst func_4997561376_op3[2] = {func_4997566528, RETURN};
Inst func_4997561376_op4[2] = {func_4997566656, RETURN};
Inst func_4997561376_op5[2] = {func_4997566848, RETURN};
Inst func_4997561376_op6[2] = {func_4997563552, RETURN};
Inst func_4997561376_op7[2] = {func_4997566976, RETURN};
Inst func_4997561376_op8[2] = {func_4997565680, RETURN};
Inst func_4997561376_op9[2] = {func_4997565808, RETURN};
Inst func_4997561376_op10[2] = {func_4997566784, RETURN};
Inst func_4997561376_op11[2] = {func_4997574032, RETURN};
Inst func_4997561376_op12[2] = {func_4997574160, RETURN};
Inst func_4997561376_op13[2] = {func_4997574288, RETURN};
Inst func_4997560816_op0[2] = {func_4997565936, RETURN};
Inst func_4997560944_op0[2] = {func_4997562256, RETURN};
Inst func_4997560944_op1[2] = {func_4997560560, RETURN};
Inst func_4997560944_op2[2] = {func_4997563040, RETURN};
Inst func_4997561072_op0[2] = {func_4997563760, RETURN};
Inst func_4997561200_op0[2] = {func_4997574416, RETURN};
Inst func_4997561504_op0[2] = {func_4997574544, RETURN};
Inst func_4997560160_op0[2] = {func_4997561504, RETURN};
Inst func_4997560160_op1[2] = {func_4997559904, RETURN};
Inst func_4997560304_op0[2] = {func_4997560160, RETURN};
Inst func_4997560304_op1[2] = {func_4997563680, RETURN};
Inst func_4997561952_op0[2] = {func_4997561200, RETURN};
Inst func_4997561952_op1[2] = {func_4997560816, RETURN};
Inst func_4997562080_op0[2] = {func_4997559360, RETURN};
Inst func_4997562080_op1[2] = {func_4997559696, RETURN};
Inst func_4997562384_op0[2] = {func_4997574800, RETURN};
Inst func_4997562512_op0[2] = {func_4997542976, HALT};
Inst func_4997563040_op0[2] = {func_4997575456, RETURN};
Inst func_4997563040_op1[2] = {func_4997574672, RETURN};
Inst func_4997563040_op2[2] = {func_4997575600, RETURN};
Inst func_4997563040_op3[2] = {func_4997575760, RETURN};
Inst func_4997563040_op4[2] = {func_4997575888, RETURN};
Inst func_4997563040_op5[2] = {func_4997576080, RETURN};
Inst func_4997563040_op6[2] = {func_4997576208, RETURN};
Inst func_4997563040_op7[2] = {func_4997576336, RETURN};
Inst func_4997563040_op8[2] = {func_4997576464, RETURN};
Inst func_4997563040_op9[2] = {func_4997576016, RETURN};
Inst func_4997563040_op10[2] = {func_4997576784, RETURN};
Inst func_4997562720_op0[2] = {func_4997575088, RETURN};
Inst exp_4997562912[3] = {func_4997563232, func_4997561376, RETURN};
Inst exp_4997563360[3] = {func_4997562080, func_4997559696, RETURN};
Inst exp_4997565552[4] = {func_4997565680, func_4997542976, func_4997565808, RETURN};
Inst exp_4997565936[4] = {func_4997566064, func_4997560304, func_4997574032, RETURN};
Inst exp_4997563760[3] = {func_4997560688, func_4997566528, RETURN};
Inst exp_4997574416[4] = {func_4997566784, func_4997560304, func_4997574032, RETURN};
Inst exp_4997574544[4] = {func_4997559904, func_4997574672, func_4997559904, RETURN};
Inst exp_4997563680[3] = {func_4997560160, func_4997560304, RETURN};
Inst exp_4997574800[3] = {func_4997560688, func_4997566368, RETURN};
Inst exp_4997575088[4] = {func_4997542976, func_4997566976, func_4997562080, RETURN};
void func_4997542976(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997542976_op0;
        break;
        case 1:
            PC = func_4997542976_op1;
        break;
    }
}
void func_4997559488(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4997559488_op0;
        break;
    }
}
void func_4997559696(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4997559696_op0;
        break;
        case 1:
            PC = func_4997559696_op1;
        break;
        case 2:
            PC = func_4997559696_op2;
        break;
    }
}
void func_4997559904(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997559904_op0;
        break;
        case 1:
            PC = func_4997559904_op1;
        break;
    }
}
void func_4997559360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4997559360_op0;
        break;
    }
}
void func_4997560560(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4997560560_op0;
        break;
        case 1:
            PC = func_4997560560_op1;
        break;
        case 2:
            PC = func_4997560560_op2;
        break;
        case 3:
            PC = func_4997560560_op3;
        break;
        case 4:
            PC = func_4997560560_op4;
        break;
        case 5:
            PC = func_4997560560_op5;
        break;
        case 6:
            PC = func_4997560560_op6;
        break;
        case 7:
            PC = func_4997560560_op7;
        break;
        case 8:
            PC = func_4997560560_op8;
        break;
        case 9:
            PC = func_4997560560_op9;
        break;
    }
}
void func_4997560688(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_4997560688_op0;
        break;
        case 1:
            PC = func_4997560688_op1;
        break;
        case 2:
            PC = func_4997560688_op2;
        break;
        case 3:
            PC = func_4997560688_op3;
        break;
        case 4:
            PC = func_4997560688_op4;
        break;
    }
}
void func_4997560464(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4997560464_op0;
        break;
    }
}
void func_4997560240(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4997560240_op0;
        break;
    }
}
void func_4997562256(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_4997562256_op0;
        break;
        case 1:
            PC = func_4997562256_op1;
        break;
        case 2:
            PC = func_4997562256_op2;
        break;
        case 3:
            PC = func_4997562256_op3;
        break;
        case 4:
            PC = func_4997562256_op4;
        break;
        case 5:
            PC = func_4997562256_op5;
        break;
        case 6:
            PC = func_4997562256_op6;
        break;
        case 7:
            PC = func_4997562256_op7;
        break;
        case 8:
            PC = func_4997562256_op8;
        break;
        case 9:
            PC = func_4997562256_op9;
        break;
        case 10:
            PC = func_4997562256_op10;
        break;
        case 11:
            PC = func_4997562256_op11;
        break;
        case 12:
            PC = func_4997562256_op12;
        break;
        case 13:
            PC = func_4997562256_op13;
        break;
        case 14:
            PC = func_4997562256_op14;
        break;
        case 15:
            PC = func_4997562256_op15;
        break;
        case 16:
            PC = func_4997562256_op16;
        break;
        case 17:
            PC = func_4997562256_op17;
        break;
        case 18:
            PC = func_4997562256_op18;
        break;
        case 19:
            PC = func_4997562256_op19;
        break;
        case 20:
            PC = func_4997562256_op20;
        break;
        case 21:
            PC = func_4997562256_op21;
        break;
        case 22:
            PC = func_4997562256_op22;
        break;
        case 23:
            PC = func_4997562256_op23;
        break;
        case 24:
            PC = func_4997562256_op24;
        break;
        case 25:
            PC = func_4997562256_op25;
        break;
        case 26:
            PC = func_4997562256_op26;
        break;
        case 27:
            PC = func_4997562256_op27;
        break;
        case 28:
            PC = func_4997562256_op28;
        break;
        case 29:
            PC = func_4997562256_op29;
        break;
        case 30:
            PC = func_4997562256_op30;
        break;
        case 31:
            PC = func_4997562256_op31;
        break;
        case 32:
            PC = func_4997562256_op32;
        break;
        case 33:
            PC = func_4997562256_op33;
        break;
        case 34:
            PC = func_4997562256_op34;
        break;
        case 35:
            PC = func_4997562256_op35;
        break;
        case 36:
            PC = func_4997562256_op36;
        break;
        case 37:
            PC = func_4997562256_op37;
        break;
        case 38:
            PC = func_4997562256_op38;
        break;
        case 39:
            PC = func_4997562256_op39;
        break;
        case 40:
            PC = func_4997562256_op40;
        break;
        case 41:
            PC = func_4997562256_op41;
        break;
        case 42:
            PC = func_4997562256_op42;
        break;
        case 43:
            PC = func_4997562256_op43;
        break;
        case 44:
            PC = func_4997562256_op44;
        break;
        case 45:
            PC = func_4997562256_op45;
        break;
        case 46:
            PC = func_4997562256_op46;
        break;
        case 47:
            PC = func_4997562256_op47;
        break;
        case 48:
            PC = func_4997562256_op48;
        break;
        case 49:
            PC = func_4997562256_op49;
        break;
        case 50:
            PC = func_4997562256_op50;
        break;
        case 51:
            PC = func_4997562256_op51;
        break;
    }
}
void func_4997561376(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        return;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_4997561376_op0;
        break;
        case 1:
            PC = func_4997561376_op1;
        break;
        case 2:
            PC = func_4997561376_op2;
        break;
        case 3:
            PC = func_4997561376_op3;
        break;
        case 4:
            PC = func_4997561376_op4;
        break;
        case 5:
            PC = func_4997561376_op5;
        break;
        case 6:
            PC = func_4997561376_op6;
        break;
        case 7:
            PC = func_4997561376_op7;
        break;
        case 8:
            PC = func_4997561376_op8;
        break;
        case 9:
            PC = func_4997561376_op9;
        break;
        case 10:
            PC = func_4997561376_op10;
        break;
        case 11:
            PC = func_4997561376_op11;
        break;
        case 12:
            PC = func_4997561376_op12;
        break;
        case 13:
            PC = func_4997561376_op13;
        break;
    }
}
void func_4997560816(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4997560816_op0;
        break;
    }
}
void func_4997560944(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4997560944_op0;
        break;
        case 1:
            PC = func_4997560944_op1;
        break;
        case 2:
            PC = func_4997560944_op2;
        break;
    }
}
void func_4997561072(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4997561072_op0;
        break;
    }
}
void func_4997561200(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4997561200_op0;
        break;
    }
}
void func_4997561504(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4997561504_op0;
        break;
    }
}
void func_4997560160(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997560160_op0;
        break;
        case 1:
            PC = func_4997560160_op1;
        break;
    }
}
void func_4997560304(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997560304_op0;
        break;
        case 1:
            PC = func_4997560304_op1;
        break;
    }
}
void func_4997561952(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997561952_op0;
        break;
        case 1:
            PC = func_4997561952_op1;
        break;
    }
}
void func_4997562080(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997562080_op0;
        break;
        case 1:
            PC = func_4997562080_op1;
        break;
    }
}
void func_4997562384(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4997562384_op0;
        break;
    }
}
void func_4997562512(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4997562512_op0;
        break;
    }
}
void func_4997563040(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        return;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_4997563040_op0;
        break;
        case 1:
            PC = func_4997563040_op1;
        break;
        case 2:
            PC = func_4997563040_op2;
        break;
        case 3:
            PC = func_4997563040_op3;
        break;
        case 4:
            PC = func_4997563040_op4;
        break;
        case 5:
            PC = func_4997563040_op5;
        break;
        case 6:
            PC = func_4997563040_op6;
        break;
        case 7:
            PC = func_4997563040_op7;
        break;
        case 8:
            PC = func_4997563040_op8;
        break;
        case 9:
            PC = func_4997563040_op9;
        break;
        case 10:
            PC = func_4997563040_op10;
        break;
    }
}
void func_4997562720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4997562720_op0;
        break;
    }
}
void func_4997562640(void) {
    extend(46);
    NEXT();
}
void func_4997562912(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_4997562912;
}
void func_4997563232(void) {
    extend(92);
    NEXT();
}
void func_4997563360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_4997563360;
}
void func_4997563856(void) {
    extend(48);
    NEXT();
}
void func_4997563984(void) {
    extend(49);
    NEXT();
}
void func_4997564112(void) {
    extend(50);
    NEXT();
}
void func_4997564272(void) {
    extend(51);
    NEXT();
}
void func_4997564400(void) {
    extend(52);
    NEXT();
}
void func_4997561760(void) {
    extend(53);
    NEXT();
}
void func_4997564976(void) {
    extend(54);
    NEXT();
}
void func_4997565104(void) {
    extend(55);
    NEXT();
}
void func_4997565232(void) {
    extend(56);
    NEXT();
}
void func_4997561696(void) {
    extend(57);
    NEXT();
}
void func_4997563552(void) {
    extend(36);
    NEXT();
}
void func_4997565552(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_4997565552;
}
void func_4997565680(void) {
    extend(40);
    NEXT();
}
void func_4997565808(void) {
    extend(41);
    NEXT();
}
void func_4997567280(void) {
    extend(97);
    NEXT();
}
void func_4997567408(void) {
    extend(98);
    NEXT();
}
void func_4997567536(void) {
    extend(99);
    NEXT();
}
void func_4997567696(void) {
    extend(100);
    NEXT();
}
void func_4997567824(void) {
    extend(101);
    NEXT();
}
void func_4997568016(void) {
    extend(102);
    NEXT();
}
void func_4997568144(void) {
    extend(103);
    NEXT();
}
void func_4997568272(void) {
    extend(104);
    NEXT();
}
void func_4997568400(void) {
    extend(105);
    NEXT();
}
void func_4997567952(void) {
    extend(106);
    NEXT();
}
void func_4997568720(void) {
    extend(107);
    NEXT();
}
void func_4997568848(void) {
    extend(108);
    NEXT();
}
void func_4997568976(void) {
    extend(109);
    NEXT();
}
void func_4997569104(void) {
    extend(110);
    NEXT();
}
void func_4997569232(void) {
    extend(111);
    NEXT();
}
void func_4997569360(void) {
    extend(112);
    NEXT();
}
void func_4997569488(void) {
    extend(113);
    NEXT();
}
void func_4997568528(void) {
    extend(114);
    NEXT();
}
void func_4997569872(void) {
    extend(115);
    NEXT();
}
void func_4997570000(void) {
    extend(116);
    NEXT();
}
void func_4997570128(void) {
    extend(117);
    NEXT();
}
void func_4997570256(void) {
    extend(118);
    NEXT();
}
void func_4997570384(void) {
    extend(119);
    NEXT();
}
void func_4997564528(void) {
    extend(120);
    NEXT();
}
void func_4997564656(void) {
    extend(121);
    NEXT();
}
void func_4997564784(void) {
    extend(122);
    NEXT();
}
void func_4997564912(void) {
    extend(65);
    NEXT();
}
void func_4997570512(void) {
    extend(66);
    NEXT();
}
void func_4997570640(void) {
    extend(67);
    NEXT();
}
void func_4997570768(void) {
    extend(68);
    NEXT();
}
void func_4997570896(void) {
    extend(69);
    NEXT();
}
void func_4997571024(void) {
    extend(70);
    NEXT();
}
void func_4997571152(void) {
    extend(71);
    NEXT();
}
void func_4997569616(void) {
    extend(72);
    NEXT();
}
void func_4997569744(void) {
    extend(73);
    NEXT();
}
void func_4997571792(void) {
    extend(74);
    NEXT();
}
void func_4997571920(void) {
    extend(75);
    NEXT();
}
void func_4997572048(void) {
    extend(76);
    NEXT();
}
void func_4997572176(void) {
    extend(77);
    NEXT();
}
void func_4997572304(void) {
    extend(78);
    NEXT();
}
void func_4997572432(void) {
    extend(79);
    NEXT();
}
void func_4997572560(void) {
    extend(80);
    NEXT();
}
void func_4997572688(void) {
    extend(81);
    NEXT();
}
void func_4997572816(void) {
    extend(82);
    NEXT();
}
void func_4997572944(void) {
    extend(83);
    NEXT();
}
void func_4997573072(void) {
    extend(84);
    NEXT();
}
void func_4997573200(void) {
    extend(85);
    NEXT();
}
void func_4997573328(void) {
    extend(86);
    NEXT();
}
void func_4997573456(void) {
    extend(87);
    NEXT();
}
void func_4997573584(void) {
    extend(88);
    NEXT();
}
void func_4997573712(void) {
    extend(89);
    NEXT();
}
void func_4997573840(void) {
    extend(90);
    NEXT();
}
void func_4997566368(void) {
    extend(42);
    NEXT();
}
void func_4997566528(void) {
    extend(43);
    NEXT();
}
void func_4997566656(void) {
    extend(63);
    NEXT();
}
void func_4997566848(void) {
    extend(94);
    NEXT();
}
void func_4997566976(void) {
    extend(124);
    NEXT();
}
void func_4997566784(void) {
    extend(91);
    NEXT();
}
void func_4997574032(void) {
    extend(93);
    NEXT();
}
void func_4997574160(void) {
    extend(123);
    NEXT();
}
void func_4997574288(void) {
    extend(125);
    NEXT();
}
void func_4997565936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_4997565936;
}
void func_4997566064(void) {
    extend(91);
    extend(94);
    NEXT();
}
void func_4997563760(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        return;
    }
    store();
    PC = exp_4997563760;
}
void func_4997574416(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_4997574416;
}
void func_4997574544(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_4997574544;
}
void func_4997574672(void) {
    extend(45);
    NEXT();
}
void func_4997563680(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_4997563680;
}
void func_4997574800(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        return;
    }
    store();
    PC = exp_4997574800;
}
void func_4997575456(void) {
    extend(95);
    NEXT();
}
void func_4997575600(void) {
    extend(64);
    NEXT();
}
void func_4997575760(void) {
    extend(35);
    NEXT();
}
void func_4997575888(void) {
    extend(37);
    NEXT();
}
void func_4997576080(void) {
    extend(38);
    NEXT();
}
void func_4997576208(void) {
    extend(61);
    NEXT();
}
void func_4997576336(void) {
    extend(126);
    NEXT();
}
void func_4997576464(void) {
    extend(96);
    NEXT();
}
void func_4997576016(void) {
    extend(39);
    NEXT();
}
void func_4997576784(void) {
    extend(34);
    NEXT();
}
void func_4997575088(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_4997575088;
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
    PC =func_4997562512_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 10;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
