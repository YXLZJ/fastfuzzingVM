#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 30
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
void func_5727366544(void);
void func_5727367296(void);
void func_5727367456(void);
void func_5727367168(void);
void func_5727366816(void);
void func_5727366416(void);
void func_5727367056(void);
void func_5727367584(void);
void func_5727369216(void);
void func_5727366736(void);
void func_5727367776(void);
void func_5727367984(void);
void func_5727367904(void);
void func_5727368416(void);
void func_5727368704(void);
void func_5727368256(void);
void func_5727368176(void);
void func_5727368640(void);
void func_5727368960(void);
void func_5727369088(void);
void func_5727370240(void);
void func_5727370368(void);
void func_5727370496(void);
void func_5727370624(void);
void func_5727370752(void);
void func_5727370880(void);
void func_5727371040(void);
void func_5727371168(void);
void func_5727371328(void);
void func_5727371456(void);
void func_5727371680(void);
void func_5727371808(void);
void func_5727371984(void);
void func_5727369472(void);
void func_5727370112(void);
void func_5727369664(void);
void func_5727372560(void);
void func_5727372688(void);
void func_5727372816(void);
void func_5727373008(void);
void func_5727373136(void);
void func_5727373264(void);
void func_5727373392(void);
void func_5727372944(void);
void func_5727369600(void);
void func_5727373936(void);
void func_5727369792(void);
void func_5727369920(void);
void func_5727373792(void);
void func_5727374160(void);
void func_5727374288(void);
void func_5727368544(void);
void func_5727374896(void);
void func_5727369280(void);
void func_5727375152(void);
void func_5727374496(void);
void func_5727375456(void);
void func_5727375584(void);
void func_5727376928(void);
void func_5727377056(void);
void func_5727377184(void);
void func_5727377344(void);
void func_5727377472(void);
void func_5727377664(void);
void func_5727377792(void);
void func_5727372112(void);
void func_5727372240(void);
void func_5727377600(void);
void func_5727377856(void);
void func_5727377984(void);
void func_5727378112(void);
void func_5727378240(void);
void func_5727378368(void);
void func_5727378496(void);
void func_5727378624(void);
void func_5727372368(void);
void func_5727379008(void);
void func_5727379136(void);
void func_5727379264(void);
void func_5727379392(void);
void func_5727379520(void);
void func_5727379648(void);
void func_5727379776(void);
void func_5727379904(void);
void func_5727380032(void);
void func_5727380160(void);
void func_5727380288(void);
void func_5727380416(void);
void func_5727380544(void);
void func_5727380672(void);
void func_5727380800(void);
void func_5727378752(void);
void func_5727378880(void);
void func_5727381440(void);
void func_5727381568(void);
void func_5727381696(void);
void func_5727381824(void);
void func_5727381952(void);
void func_5727382080(void);
void func_5727382208(void);
void func_5727382336(void);
void func_5727382464(void);
void func_5727382592(void);
void func_5727382720(void);
void func_5727382848(void);
void func_5727382976(void);
void func_5727383104(void);
void func_5727383232(void);
void func_5727383360(void);
void func_5727383488(void);
void func_5727375280(void);
void func_5727374624(void);
void func_5727375856(void);
void func_5727375984(void);
void func_5727376480(void);
void func_5727376608(void);
void func_5727376112(void);
void func_5727376736(void);
void func_5727383696(void);
void func_5727383824(void);
void func_5727383952(void);
void func_5727384080(void);
void func_5727384208(void);
void func_5727384336(void);
void func_5727384464(void);
void func_5727383616(void);
void func_5727376384(void);
void HALT(void);
void RETURN(void);
Inst func_5727366544_op0[2] = {func_5727368640, RETURN};
Inst func_5727367296_op0[2] = {func_5727370240, RETURN};
Inst func_5727367296_op1[2] = {func_5727370496, RETURN};
Inst func_5727367296_op2[2] = {func_5727370752, RETURN};
Inst func_5727367296_op3[2] = {func_5727371040, RETURN};
Inst func_5727367296_op4[2] = {func_5727371328, RETURN};
Inst func_5727367296_op5[2] = {func_5727371680, RETURN};
Inst func_5727367296_op6[2] = {func_5727371984, RETURN};
Inst func_5727367456_op0[2] = {func_5727370112, RETURN};
Inst func_5727367456_op1[2] = {func_5727369664, RETURN};
Inst func_5727367456_op2[2] = {func_5727372560, RETURN};
Inst func_5727367456_op3[2] = {func_5727372688, RETURN};
Inst func_5727367456_op4[2] = {func_5727372816, RETURN};
Inst func_5727367456_op5[2] = {func_5727373008, RETURN};
Inst func_5727367456_op6[2] = {func_5727373136, RETURN};
Inst func_5727367456_op7[2] = {func_5727373264, RETURN};
Inst func_5727367456_op8[2] = {func_5727373392, RETURN};
Inst func_5727367456_op9[2] = {func_5727372944, RETURN};
Inst func_5727367168_op0[2] = {func_5727369600, RETURN};
Inst func_5727367168_op1[2] = {func_5727369792, RETURN};
Inst func_5727367168_op2[2] = {func_5727368704, RETURN};
Inst func_5727366816_op0[2] = {func_5727373792, RETURN};
Inst func_5727366816_op1[2] = {func_5727366736, RETURN};
Inst func_5727366816_op2[2] = {func_5727367056, RETURN};
Inst func_5727366416_op0[2] = {func_5727368544, RETURN};
Inst func_5727367056_op0[2] = {func_5727374496, RETURN};
Inst func_5727367056_op1[2] = {func_5727369216, RETURN};
Inst func_5727367584_op0[2] = {func_5727375456, RETURN};
Inst func_5727369216_op0[2] = {func_5727376928, RETURN};
Inst func_5727369216_op1[2] = {func_5727377056, RETURN};
Inst func_5727369216_op2[2] = {func_5727377184, RETURN};
Inst func_5727369216_op3[2] = {func_5727377344, RETURN};
Inst func_5727369216_op4[2] = {func_5727377472, RETURN};
Inst func_5727369216_op5[2] = {func_5727377664, RETURN};
Inst func_5727369216_op6[2] = {func_5727377792, RETURN};
Inst func_5727369216_op7[2] = {func_5727372112, RETURN};
Inst func_5727369216_op8[2] = {func_5727372240, RETURN};
Inst func_5727369216_op9[2] = {func_5727377600, RETURN};
Inst func_5727369216_op10[2] = {func_5727377856, RETURN};
Inst func_5727369216_op11[2] = {func_5727377984, RETURN};
Inst func_5727369216_op12[2] = {func_5727378112, RETURN};
Inst func_5727369216_op13[2] = {func_5727378240, RETURN};
Inst func_5727369216_op14[2] = {func_5727378368, RETURN};
Inst func_5727369216_op15[2] = {func_5727378496, RETURN};
Inst func_5727369216_op16[2] = {func_5727378624, RETURN};
Inst func_5727369216_op17[2] = {func_5727372368, RETURN};
Inst func_5727369216_op18[2] = {func_5727379008, RETURN};
Inst func_5727369216_op19[2] = {func_5727379136, RETURN};
Inst func_5727369216_op20[2] = {func_5727379264, RETURN};
Inst func_5727369216_op21[2] = {func_5727379392, RETURN};
Inst func_5727369216_op22[2] = {func_5727379520, RETURN};
Inst func_5727369216_op23[2] = {func_5727379648, RETURN};
Inst func_5727369216_op24[2] = {func_5727379776, RETURN};
Inst func_5727369216_op25[2] = {func_5727379904, RETURN};
Inst func_5727369216_op26[2] = {func_5727380032, RETURN};
Inst func_5727369216_op27[2] = {func_5727380160, RETURN};
Inst func_5727369216_op28[2] = {func_5727380288, RETURN};
Inst func_5727369216_op29[2] = {func_5727380416, RETURN};
Inst func_5727369216_op30[2] = {func_5727380544, RETURN};
Inst func_5727369216_op31[2] = {func_5727380672, RETURN};
Inst func_5727369216_op32[2] = {func_5727380800, RETURN};
Inst func_5727369216_op33[2] = {func_5727378752, RETURN};
Inst func_5727369216_op34[2] = {func_5727378880, RETURN};
Inst func_5727369216_op35[2] = {func_5727381440, RETURN};
Inst func_5727369216_op36[2] = {func_5727381568, RETURN};
Inst func_5727369216_op37[2] = {func_5727381696, RETURN};
Inst func_5727369216_op38[2] = {func_5727381824, RETURN};
Inst func_5727369216_op39[2] = {func_5727381952, RETURN};
Inst func_5727369216_op40[2] = {func_5727382080, RETURN};
Inst func_5727369216_op41[2] = {func_5727382208, RETURN};
Inst func_5727369216_op42[2] = {func_5727382336, RETURN};
Inst func_5727369216_op43[2] = {func_5727382464, RETURN};
Inst func_5727369216_op44[2] = {func_5727382592, RETURN};
Inst func_5727369216_op45[2] = {func_5727382720, RETURN};
Inst func_5727369216_op46[2] = {func_5727382848, RETURN};
Inst func_5727369216_op47[2] = {func_5727382976, RETURN};
Inst func_5727369216_op48[2] = {func_5727383104, RETURN};
Inst func_5727369216_op49[2] = {func_5727383232, RETURN};
Inst func_5727369216_op50[2] = {func_5727383360, RETURN};
Inst func_5727369216_op51[2] = {func_5727383488, RETURN};
Inst func_5727366736_op0[2] = {func_5727375280, RETURN};
Inst func_5727366736_op1[2] = {func_5727367456, RETURN};
Inst func_5727367776_op0[2] = {func_5727374624, RETURN};
Inst func_5727367776_op1[2] = {func_5727368416, RETURN};
Inst func_5727367984_op0[2] = {func_5727375856, RETURN};
Inst func_5727367904_op0[2] = {func_5727367776, HALT};
Inst func_5727368416_op0[2] = {func_5727368256, RETURN};
Inst func_5727368416_op1[2] = {func_5727366544, RETURN};
Inst func_5727368416_op2[2] = {func_5727367584, RETURN};
Inst func_5727368416_op3[2] = {func_5727368176, RETURN};
Inst func_5727368416_op4[2] = {func_5727366416, RETURN};
Inst func_5727368416_op5[2] = {func_5727367984, RETURN};
Inst func_5727368704_op0[2] = {func_5727376480, RETURN};
Inst func_5727368704_op1[2] = {func_5727376112, RETURN};
Inst func_5727368704_op2[2] = {func_5727366816, RETURN};
Inst func_5727368256_op0[2] = {func_5727383696, RETURN};
Inst func_5727368256_op1[2] = {func_5727384080, RETURN};
Inst func_5727368256_op2[2] = {func_5727384336, RETURN};
Inst func_5727368176_op0[2] = {func_5727383616, RETURN};
Inst exp_5727368640[5] = {func_5727367056, func_5727368960, func_5727367168, func_5727369088, RETURN};
Inst exp_5727370240[4] = {func_5727367168, func_5727370368, func_5727367168, RETURN};
Inst exp_5727370496[4] = {func_5727367168, func_5727370624, func_5727367168, RETURN};
Inst exp_5727370752[4] = {func_5727367168, func_5727370880, func_5727367168, RETURN};
Inst exp_5727371040[4] = {func_5727367168, func_5727371168, func_5727367168, RETURN};
Inst exp_5727371328[4] = {func_5727367296, func_5727371456, func_5727367296, RETURN};
Inst exp_5727371680[4] = {func_5727367296, func_5727371808, func_5727367296, RETURN};
Inst exp_5727371984[3] = {func_5727369472, func_5727367296, RETURN};
Inst exp_5727369600[4] = {func_5727367168, func_5727373936, func_5727368704, RETURN};
Inst exp_5727369792[4] = {func_5727367168, func_5727369920, func_5727368704, RETURN};
Inst exp_5727373792[4] = {func_5727374160, func_5727367168, func_5727374288, RETURN};
Inst exp_5727368544[8] = {func_5727374896, func_5727367056, func_5727374160, func_5727374288, func_5727369280, func_5727367776, func_5727375152, RETURN};
Inst exp_5727374496[3] = {func_5727369216, func_5727367056, RETURN};
Inst exp_5727375456[8] = {func_5727375584, func_5727374160, func_5727367296, func_5727374288, func_5727369280, func_5727367776, func_5727375152, RETURN};
Inst exp_5727375280[3] = {func_5727367456, func_5727366736, RETURN};
Inst exp_5727374624[3] = {func_5727367776, func_5727368416, RETURN};
Inst exp_5727375856[4] = {func_5727375984, func_5727367168, func_5727369088, RETURN};
Inst exp_5727376480[4] = {func_5727368704, func_5727376608, func_5727366816, RETURN};
Inst exp_5727376112[4] = {func_5727368704, func_5727376736, func_5727366816, RETURN};
Inst exp_5727383696[4] = {func_5727383824, func_5727367056, func_5727383952, RETURN};
Inst exp_5727384080[4] = {func_5727384208, func_5727367056, func_5727383952, RETURN};
Inst exp_5727384336[4] = {func_5727384464, func_5727367056, func_5727383952, RETURN};
Inst exp_5727383616[8] = {func_5727376384, func_5727374160, func_5727367296, func_5727374288, func_5727369280, func_5727367776, func_5727375152, RETURN};
void func_5727366544(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5727366544_op0;
        break;
    }
}
void func_5727367296(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        return;
    }
    xor(7);
    store();
    switch (branch) {
        case 0:
            PC = func_5727367296_op0;
        break;
        case 1:
            PC = func_5727367296_op1;
        break;
        case 2:
            PC = func_5727367296_op2;
        break;
        case 3:
            PC = func_5727367296_op3;
        break;
        case 4:
            PC = func_5727367296_op4;
        break;
        case 5:
            PC = func_5727367296_op5;
        break;
        case 6:
            PC = func_5727367296_op6;
        break;
    }
}
void func_5727367456(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5727367456_op0;
        break;
        case 1:
            PC = func_5727367456_op1;
        break;
        case 2:
            PC = func_5727367456_op2;
        break;
        case 3:
            PC = func_5727367456_op3;
        break;
        case 4:
            PC = func_5727367456_op4;
        break;
        case 5:
            PC = func_5727367456_op5;
        break;
        case 6:
            PC = func_5727367456_op6;
        break;
        case 7:
            PC = func_5727367456_op7;
        break;
        case 8:
            PC = func_5727367456_op8;
        break;
        case 9:
            PC = func_5727367456_op9;
        break;
    }
}
void func_5727367168(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5727367168_op0;
        break;
        case 1:
            PC = func_5727367168_op1;
        break;
        case 2:
            PC = func_5727367168_op2;
        break;
    }
}
void func_5727366816(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5727366816_op0;
        break;
        case 1:
            PC = func_5727366816_op1;
        break;
        case 2:
            PC = func_5727366816_op2;
        break;
    }
}
void func_5727366416(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(102);
        extend(117);
        extend(110);
        extend(99);
        extend(116);
        extend(105);
        extend(111);
        extend(110);
        extend(90);
        extend(40);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5727366416_op0;
        break;
    }
}
void func_5727367056(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5727367056_op0;
        break;
        case 1:
            PC = func_5727367056_op1;
        break;
    }
}
void func_5727367584(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(105);
        extend(102);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5727367584_op0;
        break;
    }
}
void func_5727369216(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5727369216_op0;
        break;
        case 1:
            PC = func_5727369216_op1;
        break;
        case 2:
            PC = func_5727369216_op2;
        break;
        case 3:
            PC = func_5727369216_op3;
        break;
        case 4:
            PC = func_5727369216_op4;
        break;
        case 5:
            PC = func_5727369216_op5;
        break;
        case 6:
            PC = func_5727369216_op6;
        break;
        case 7:
            PC = func_5727369216_op7;
        break;
        case 8:
            PC = func_5727369216_op8;
        break;
        case 9:
            PC = func_5727369216_op9;
        break;
        case 10:
            PC = func_5727369216_op10;
        break;
        case 11:
            PC = func_5727369216_op11;
        break;
        case 12:
            PC = func_5727369216_op12;
        break;
        case 13:
            PC = func_5727369216_op13;
        break;
        case 14:
            PC = func_5727369216_op14;
        break;
        case 15:
            PC = func_5727369216_op15;
        break;
        case 16:
            PC = func_5727369216_op16;
        break;
        case 17:
            PC = func_5727369216_op17;
        break;
        case 18:
            PC = func_5727369216_op18;
        break;
        case 19:
            PC = func_5727369216_op19;
        break;
        case 20:
            PC = func_5727369216_op20;
        break;
        case 21:
            PC = func_5727369216_op21;
        break;
        case 22:
            PC = func_5727369216_op22;
        break;
        case 23:
            PC = func_5727369216_op23;
        break;
        case 24:
            PC = func_5727369216_op24;
        break;
        case 25:
            PC = func_5727369216_op25;
        break;
        case 26:
            PC = func_5727369216_op26;
        break;
        case 27:
            PC = func_5727369216_op27;
        break;
        case 28:
            PC = func_5727369216_op28;
        break;
        case 29:
            PC = func_5727369216_op29;
        break;
        case 30:
            PC = func_5727369216_op30;
        break;
        case 31:
            PC = func_5727369216_op31;
        break;
        case 32:
            PC = func_5727369216_op32;
        break;
        case 33:
            PC = func_5727369216_op33;
        break;
        case 34:
            PC = func_5727369216_op34;
        break;
        case 35:
            PC = func_5727369216_op35;
        break;
        case 36:
            PC = func_5727369216_op36;
        break;
        case 37:
            PC = func_5727369216_op37;
        break;
        case 38:
            PC = func_5727369216_op38;
        break;
        case 39:
            PC = func_5727369216_op39;
        break;
        case 40:
            PC = func_5727369216_op40;
        break;
        case 41:
            PC = func_5727369216_op41;
        break;
        case 42:
            PC = func_5727369216_op42;
        break;
        case 43:
            PC = func_5727369216_op43;
        break;
        case 44:
            PC = func_5727369216_op44;
        break;
        case 45:
            PC = func_5727369216_op45;
        break;
        case 46:
            PC = func_5727369216_op46;
        break;
        case 47:
            PC = func_5727369216_op47;
        break;
        case 48:
            PC = func_5727369216_op48;
        break;
        case 49:
            PC = func_5727369216_op49;
        break;
        case 50:
            PC = func_5727369216_op50;
        break;
        case 51:
            PC = func_5727369216_op51;
        break;
    }
}
void func_5727366736(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5727366736_op0;
        break;
        case 1:
            PC = func_5727366736_op1;
        break;
    }
}
void func_5727367776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5727367776_op0;
        break;
        case 1:
            PC = func_5727367776_op1;
        break;
    }
}
void func_5727367984(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5727367984_op0;
        break;
    }
}
void func_5727367904(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5727367904_op0;
        break;
    }
}
void func_5727368416(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5727368416_op0;
        break;
        case 1:
            PC = func_5727368416_op1;
        break;
        case 2:
            PC = func_5727368416_op2;
        break;
        case 3:
            PC = func_5727368416_op3;
        break;
        case 4:
            PC = func_5727368416_op4;
        break;
        case 5:
            PC = func_5727368416_op5;
        break;
    }
}
void func_5727368704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5727368704_op0;
        break;
        case 1:
            PC = func_5727368704_op1;
        break;
        case 2:
            PC = func_5727368704_op2;
        break;
    }
}
void func_5727368256(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(115);
        extend(116);
        extend(114);
        extend(105);
        extend(110);
        extend(103);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5727368256_op0;
        break;
        case 1:
            PC = func_5727368256_op1;
        break;
        case 2:
            PC = func_5727368256_op2;
        break;
    }
}
void func_5727368176(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(119);
        extend(104);
        extend(105);
        extend(108);
        extend(101);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5727368176_op0;
        break;
    }
}
void func_5727368640(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5727368640;
}
void func_5727368960(void) {
    extend(61);
    NEXT();
}
void func_5727369088(void) {
    extend(59);
    NEXT();
}
void func_5727370240(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5727370240;
}
void func_5727370368(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5727370496(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5727370496;
}
void func_5727370624(void) {
    extend(33);
    extend(61);
    NEXT();
}
void func_5727370752(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5727370752;
}
void func_5727370880(void) {
    extend(62);
    NEXT();
}
void func_5727371040(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5727371040;
}
void func_5727371168(void) {
    extend(60);
    NEXT();
}
void func_5727371328(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(65);
        extend(78);
        extend(68);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5727371328;
}
void func_5727371456(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_5727371680(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(79);
        extend(82);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5727371680;
}
void func_5727371808(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_5727371984(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(78);
        extend(79);
        extend(84);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5727371984;
}
void func_5727369472(void) {
    extend(78);
    extend(79);
    extend(84);
    NEXT();
}
void func_5727370112(void) {
    extend(48);
    NEXT();
}
void func_5727369664(void) {
    extend(49);
    NEXT();
}
void func_5727372560(void) {
    extend(50);
    NEXT();
}
void func_5727372688(void) {
    extend(51);
    NEXT();
}
void func_5727372816(void) {
    extend(52);
    NEXT();
}
void func_5727373008(void) {
    extend(53);
    NEXT();
}
void func_5727373136(void) {
    extend(54);
    NEXT();
}
void func_5727373264(void) {
    extend(55);
    NEXT();
}
void func_5727373392(void) {
    extend(56);
    NEXT();
}
void func_5727372944(void) {
    extend(57);
    NEXT();
}
void func_5727369600(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5727369600;
}
void func_5727373936(void) {
    extend(43);
    NEXT();
}
void func_5727369792(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5727369792;
}
void func_5727369920(void) {
    extend(45);
    NEXT();
}
void func_5727373792(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5727373792;
}
void func_5727374160(void) {
    extend(40);
    NEXT();
}
void func_5727374288(void) {
    extend(41);
    NEXT();
}
void func_5727368544(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(102);
        extend(117);
        extend(110);
        extend(99);
        extend(116);
        extend(105);
        extend(111);
        extend(110);
        extend(90);
        extend(40);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5727368544;
}
void func_5727374896(void) {
    extend(102);
    extend(117);
    extend(110);
    extend(99);
    extend(116);
    extend(105);
    extend(111);
    extend(110);
    NEXT();
}
void func_5727369280(void) {
    extend(123);
    NEXT();
}
void func_5727375152(void) {
    extend(125);
    NEXT();
}
void func_5727374496(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        return;
    }
    store();
    PC = exp_5727374496;
}
void func_5727375456(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(105);
        extend(102);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5727375456;
}
void func_5727375584(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5727376928(void) {
    extend(97);
    NEXT();
}
void func_5727377056(void) {
    extend(98);
    NEXT();
}
void func_5727377184(void) {
    extend(99);
    NEXT();
}
void func_5727377344(void) {
    extend(100);
    NEXT();
}
void func_5727377472(void) {
    extend(101);
    NEXT();
}
void func_5727377664(void) {
    extend(102);
    NEXT();
}
void func_5727377792(void) {
    extend(103);
    NEXT();
}
void func_5727372112(void) {
    extend(104);
    NEXT();
}
void func_5727372240(void) {
    extend(105);
    NEXT();
}
void func_5727377600(void) {
    extend(106);
    NEXT();
}
void func_5727377856(void) {
    extend(107);
    NEXT();
}
void func_5727377984(void) {
    extend(108);
    NEXT();
}
void func_5727378112(void) {
    extend(109);
    NEXT();
}
void func_5727378240(void) {
    extend(110);
    NEXT();
}
void func_5727378368(void) {
    extend(111);
    NEXT();
}
void func_5727378496(void) {
    extend(112);
    NEXT();
}
void func_5727378624(void) {
    extend(113);
    NEXT();
}
void func_5727372368(void) {
    extend(114);
    NEXT();
}
void func_5727379008(void) {
    extend(115);
    NEXT();
}
void func_5727379136(void) {
    extend(116);
    NEXT();
}
void func_5727379264(void) {
    extend(117);
    NEXT();
}
void func_5727379392(void) {
    extend(118);
    NEXT();
}
void func_5727379520(void) {
    extend(119);
    NEXT();
}
void func_5727379648(void) {
    extend(120);
    NEXT();
}
void func_5727379776(void) {
    extend(121);
    NEXT();
}
void func_5727379904(void) {
    extend(122);
    NEXT();
}
void func_5727380032(void) {
    extend(65);
    NEXT();
}
void func_5727380160(void) {
    extend(66);
    NEXT();
}
void func_5727380288(void) {
    extend(67);
    NEXT();
}
void func_5727380416(void) {
    extend(68);
    NEXT();
}
void func_5727380544(void) {
    extend(69);
    NEXT();
}
void func_5727380672(void) {
    extend(70);
    NEXT();
}
void func_5727380800(void) {
    extend(71);
    NEXT();
}
void func_5727378752(void) {
    extend(72);
    NEXT();
}
void func_5727378880(void) {
    extend(73);
    NEXT();
}
void func_5727381440(void) {
    extend(74);
    NEXT();
}
void func_5727381568(void) {
    extend(75);
    NEXT();
}
void func_5727381696(void) {
    extend(76);
    NEXT();
}
void func_5727381824(void) {
    extend(77);
    NEXT();
}
void func_5727381952(void) {
    extend(78);
    NEXT();
}
void func_5727382080(void) {
    extend(79);
    NEXT();
}
void func_5727382208(void) {
    extend(80);
    NEXT();
}
void func_5727382336(void) {
    extend(81);
    NEXT();
}
void func_5727382464(void) {
    extend(82);
    NEXT();
}
void func_5727382592(void) {
    extend(83);
    NEXT();
}
void func_5727382720(void) {
    extend(84);
    NEXT();
}
void func_5727382848(void) {
    extend(85);
    NEXT();
}
void func_5727382976(void) {
    extend(86);
    NEXT();
}
void func_5727383104(void) {
    extend(87);
    NEXT();
}
void func_5727383232(void) {
    extend(88);
    NEXT();
}
void func_5727383360(void) {
    extend(89);
    NEXT();
}
void func_5727383488(void) {
    extend(90);
    NEXT();
}
void func_5727375280(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5727375280;
}
void func_5727374624(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5727374624;
}
void func_5727375856(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5727375856;
}
void func_5727375984(void) {
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    NEXT();
}
void func_5727376480(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5727376480;
}
void func_5727376608(void) {
    extend(42);
    NEXT();
}
void func_5727376112(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5727376112;
}
void func_5727376736(void) {
    extend(47);
    NEXT();
}
void func_5727383696(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        return;
    }
    store();
    PC = exp_5727383696;
}
void func_5727383824(void) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5727383952(void) {
    extend(32);
    extend(59);
    extend(32);
    NEXT();
}
void func_5727384080(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(102);
        extend(108);
        extend(111);
        extend(97);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        return;
    }
    store();
    PC = exp_5727384080;
}
void func_5727384208(void) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
}
void func_5727384336(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(115);
        extend(116);
        extend(114);
        extend(105);
        extend(110);
        extend(103);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        return;
    }
    store();
    PC = exp_5727384336;
}
void func_5727384464(void) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
}
void func_5727383616(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(119);
        extend(104);
        extend(105);
        extend(108);
        extend(101);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5727383616;
}
void func_5727376384(void) {
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
    PC =func_5727367904_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 23;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
