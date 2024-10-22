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
void func_5752532368(void);
void func_5752533120(void);
void func_5752533280(void);
void func_5752532992(void);
void func_5752532640(void);
void func_5752532240(void);
void func_5752532880(void);
void func_5752533408(void);
void func_5752535040(void);
void func_5752532560(void);
void func_5752533600(void);
void func_5752533808(void);
void func_5752533728(void);
void func_5752534240(void);
void func_5752534528(void);
void func_5752534080(void);
void func_5752534000(void);
void func_5752534464(void);
void func_5752534784(void);
void func_5752534912(void);
void func_5752536064(void);
void func_5752536192(void);
void func_5752536320(void);
void func_5752536448(void);
void func_5752536576(void);
void func_5752536704(void);
void func_5752536864(void);
void func_5752536992(void);
void func_5752537152(void);
void func_5752537280(void);
void func_5752537504(void);
void func_5752537632(void);
void func_5752537808(void);
void func_5752535296(void);
void func_5752535936(void);
void func_5752535488(void);
void func_5752538384(void);
void func_5752538512(void);
void func_5752538640(void);
void func_5752538832(void);
void func_5752538960(void);
void func_5752539088(void);
void func_5752539216(void);
void func_5752538768(void);
void func_5752535424(void);
void func_5752539760(void);
void func_5752535616(void);
void func_5752535744(void);
void func_5752539616(void);
void func_5752539984(void);
void func_5752540112(void);
void func_5752534368(void);
void func_5752540720(void);
void func_5752535104(void);
void func_5752540976(void);
void func_5752540320(void);
void func_5752541280(void);
void func_5752541408(void);
void func_5752542752(void);
void func_5752542880(void);
void func_5752543008(void);
void func_5752543168(void);
void func_5752543296(void);
void func_5752543488(void);
void func_5752543616(void);
void func_5752537936(void);
void func_5752538064(void);
void func_5752543424(void);
void func_5752543680(void);
void func_5752543808(void);
void func_5752543936(void);
void func_5752544064(void);
void func_5752544192(void);
void func_5752544320(void);
void func_5752544448(void);
void func_5752538192(void);
void func_5752544832(void);
void func_5752544960(void);
void func_5752545088(void);
void func_5752545216(void);
void func_5752545344(void);
void func_5752545472(void);
void func_5752545600(void);
void func_5752545728(void);
void func_5752545856(void);
void func_5752545984(void);
void func_5752546112(void);
void func_5752546240(void);
void func_5752546368(void);
void func_5752546496(void);
void func_5752546624(void);
void func_5752544576(void);
void func_5752544704(void);
void func_5752547264(void);
void func_5752547392(void);
void func_5752547520(void);
void func_5752547648(void);
void func_5752547776(void);
void func_5752547904(void);
void func_5752548032(void);
void func_5752548160(void);
void func_5752548288(void);
void func_5752548416(void);
void func_5752548544(void);
void func_5752548672(void);
void func_5752548800(void);
void func_5752548928(void);
void func_5752549056(void);
void func_5752549184(void);
void func_5752549312(void);
void func_5752541104(void);
void func_5752540448(void);
void func_5752541680(void);
void func_5752541808(void);
void func_5752542304(void);
void func_5752542432(void);
void func_5752541936(void);
void func_5752542560(void);
void func_5752549520(void);
void func_5752549648(void);
void func_5752549776(void);
void func_5752549904(void);
void func_5752550032(void);
void func_5752550160(void);
void func_5752550288(void);
void func_5752549440(void);
void func_5752542208(void);
void HALT(void);
void RETURN(void);
Inst func_5752532368_op0[2] = {func_5752534464, RETURN};
Inst func_5752533120_op0[2] = {func_5752536064, RETURN};
Inst func_5752533120_op1[2] = {func_5752536320, RETURN};
Inst func_5752533120_op2[2] = {func_5752536576, RETURN};
Inst func_5752533120_op3[2] = {func_5752536864, RETURN};
Inst func_5752533120_op4[2] = {func_5752537152, RETURN};
Inst func_5752533120_op5[2] = {func_5752537504, RETURN};
Inst func_5752533120_op6[2] = {func_5752537808, RETURN};
Inst func_5752533280_op0[2] = {func_5752535936, RETURN};
Inst func_5752533280_op1[2] = {func_5752535488, RETURN};
Inst func_5752533280_op2[2] = {func_5752538384, RETURN};
Inst func_5752533280_op3[2] = {func_5752538512, RETURN};
Inst func_5752533280_op4[2] = {func_5752538640, RETURN};
Inst func_5752533280_op5[2] = {func_5752538832, RETURN};
Inst func_5752533280_op6[2] = {func_5752538960, RETURN};
Inst func_5752533280_op7[2] = {func_5752539088, RETURN};
Inst func_5752533280_op8[2] = {func_5752539216, RETURN};
Inst func_5752533280_op9[2] = {func_5752538768, RETURN};
Inst func_5752532992_op0[2] = {func_5752535424, RETURN};
Inst func_5752532992_op1[2] = {func_5752535616, RETURN};
Inst func_5752532992_op2[2] = {func_5752534528, RETURN};
Inst func_5752532640_op0[2] = {func_5752539616, RETURN};
Inst func_5752532640_op1[2] = {func_5752532560, RETURN};
Inst func_5752532640_op2[2] = {func_5752532880, RETURN};
Inst func_5752532240_op0[2] = {func_5752534368, RETURN};
Inst func_5752532880_op0[2] = {func_5752540320, RETURN};
Inst func_5752532880_op1[2] = {func_5752535040, RETURN};
Inst func_5752533408_op0[2] = {func_5752541280, RETURN};
Inst func_5752535040_op0[2] = {func_5752542752, RETURN};
Inst func_5752535040_op1[2] = {func_5752542880, RETURN};
Inst func_5752535040_op2[2] = {func_5752543008, RETURN};
Inst func_5752535040_op3[2] = {func_5752543168, RETURN};
Inst func_5752535040_op4[2] = {func_5752543296, RETURN};
Inst func_5752535040_op5[2] = {func_5752543488, RETURN};
Inst func_5752535040_op6[2] = {func_5752543616, RETURN};
Inst func_5752535040_op7[2] = {func_5752537936, RETURN};
Inst func_5752535040_op8[2] = {func_5752538064, RETURN};
Inst func_5752535040_op9[2] = {func_5752543424, RETURN};
Inst func_5752535040_op10[2] = {func_5752543680, RETURN};
Inst func_5752535040_op11[2] = {func_5752543808, RETURN};
Inst func_5752535040_op12[2] = {func_5752543936, RETURN};
Inst func_5752535040_op13[2] = {func_5752544064, RETURN};
Inst func_5752535040_op14[2] = {func_5752544192, RETURN};
Inst func_5752535040_op15[2] = {func_5752544320, RETURN};
Inst func_5752535040_op16[2] = {func_5752544448, RETURN};
Inst func_5752535040_op17[2] = {func_5752538192, RETURN};
Inst func_5752535040_op18[2] = {func_5752544832, RETURN};
Inst func_5752535040_op19[2] = {func_5752544960, RETURN};
Inst func_5752535040_op20[2] = {func_5752545088, RETURN};
Inst func_5752535040_op21[2] = {func_5752545216, RETURN};
Inst func_5752535040_op22[2] = {func_5752545344, RETURN};
Inst func_5752535040_op23[2] = {func_5752545472, RETURN};
Inst func_5752535040_op24[2] = {func_5752545600, RETURN};
Inst func_5752535040_op25[2] = {func_5752545728, RETURN};
Inst func_5752535040_op26[2] = {func_5752545856, RETURN};
Inst func_5752535040_op27[2] = {func_5752545984, RETURN};
Inst func_5752535040_op28[2] = {func_5752546112, RETURN};
Inst func_5752535040_op29[2] = {func_5752546240, RETURN};
Inst func_5752535040_op30[2] = {func_5752546368, RETURN};
Inst func_5752535040_op31[2] = {func_5752546496, RETURN};
Inst func_5752535040_op32[2] = {func_5752546624, RETURN};
Inst func_5752535040_op33[2] = {func_5752544576, RETURN};
Inst func_5752535040_op34[2] = {func_5752544704, RETURN};
Inst func_5752535040_op35[2] = {func_5752547264, RETURN};
Inst func_5752535040_op36[2] = {func_5752547392, RETURN};
Inst func_5752535040_op37[2] = {func_5752547520, RETURN};
Inst func_5752535040_op38[2] = {func_5752547648, RETURN};
Inst func_5752535040_op39[2] = {func_5752547776, RETURN};
Inst func_5752535040_op40[2] = {func_5752547904, RETURN};
Inst func_5752535040_op41[2] = {func_5752548032, RETURN};
Inst func_5752535040_op42[2] = {func_5752548160, RETURN};
Inst func_5752535040_op43[2] = {func_5752548288, RETURN};
Inst func_5752535040_op44[2] = {func_5752548416, RETURN};
Inst func_5752535040_op45[2] = {func_5752548544, RETURN};
Inst func_5752535040_op46[2] = {func_5752548672, RETURN};
Inst func_5752535040_op47[2] = {func_5752548800, RETURN};
Inst func_5752535040_op48[2] = {func_5752548928, RETURN};
Inst func_5752535040_op49[2] = {func_5752549056, RETURN};
Inst func_5752535040_op50[2] = {func_5752549184, RETURN};
Inst func_5752535040_op51[2] = {func_5752549312, RETURN};
Inst func_5752532560_op0[2] = {func_5752541104, RETURN};
Inst func_5752532560_op1[2] = {func_5752533280, RETURN};
Inst func_5752533600_op0[2] = {func_5752540448, RETURN};
Inst func_5752533600_op1[2] = {func_5752534240, RETURN};
Inst func_5752533808_op0[2] = {func_5752541680, RETURN};
Inst func_5752533728_op0[2] = {func_5752533600, HALT};
Inst func_5752534240_op0[2] = {func_5752534080, RETURN};
Inst func_5752534240_op1[2] = {func_5752532368, RETURN};
Inst func_5752534240_op2[2] = {func_5752533408, RETURN};
Inst func_5752534240_op3[2] = {func_5752534000, RETURN};
Inst func_5752534240_op4[2] = {func_5752532240, RETURN};
Inst func_5752534240_op5[2] = {func_5752533808, RETURN};
Inst func_5752534528_op0[2] = {func_5752542304, RETURN};
Inst func_5752534528_op1[2] = {func_5752541936, RETURN};
Inst func_5752534528_op2[2] = {func_5752532640, RETURN};
Inst func_5752534080_op0[2] = {func_5752549520, RETURN};
Inst func_5752534080_op1[2] = {func_5752549904, RETURN};
Inst func_5752534080_op2[2] = {func_5752550160, RETURN};
Inst func_5752534000_op0[2] = {func_5752549440, RETURN};
Inst exp_5752534464[5] = {func_5752532880, func_5752534784, func_5752532992, func_5752534912, RETURN};
Inst exp_5752536064[4] = {func_5752532992, func_5752536192, func_5752532992, RETURN};
Inst exp_5752536320[4] = {func_5752532992, func_5752536448, func_5752532992, RETURN};
Inst exp_5752536576[4] = {func_5752532992, func_5752536704, func_5752532992, RETURN};
Inst exp_5752536864[4] = {func_5752532992, func_5752536992, func_5752532992, RETURN};
Inst exp_5752537152[4] = {func_5752533120, func_5752537280, func_5752533120, RETURN};
Inst exp_5752537504[4] = {func_5752533120, func_5752537632, func_5752533120, RETURN};
Inst exp_5752537808[3] = {func_5752535296, func_5752533120, RETURN};
Inst exp_5752535424[4] = {func_5752532992, func_5752539760, func_5752534528, RETURN};
Inst exp_5752535616[4] = {func_5752532992, func_5752535744, func_5752534528, RETURN};
Inst exp_5752539616[4] = {func_5752539984, func_5752532992, func_5752540112, RETURN};
Inst exp_5752534368[8] = {func_5752540720, func_5752532880, func_5752539984, func_5752540112, func_5752535104, func_5752533600, func_5752540976, RETURN};
Inst exp_5752540320[3] = {func_5752535040, func_5752532880, RETURN};
Inst exp_5752541280[8] = {func_5752541408, func_5752539984, func_5752533120, func_5752540112, func_5752535104, func_5752533600, func_5752540976, RETURN};
Inst exp_5752541104[3] = {func_5752533280, func_5752532560, RETURN};
Inst exp_5752540448[3] = {func_5752533600, func_5752534240, RETURN};
Inst exp_5752541680[4] = {func_5752541808, func_5752532992, func_5752534912, RETURN};
Inst exp_5752542304[4] = {func_5752534528, func_5752542432, func_5752532640, RETURN};
Inst exp_5752541936[4] = {func_5752534528, func_5752542560, func_5752532640, RETURN};
Inst exp_5752549520[4] = {func_5752549648, func_5752532880, func_5752549776, RETURN};
Inst exp_5752549904[4] = {func_5752550032, func_5752532880, func_5752549776, RETURN};
Inst exp_5752550160[4] = {func_5752550288, func_5752532880, func_5752549776, RETURN};
Inst exp_5752549440[8] = {func_5752542208, func_5752539984, func_5752533120, func_5752540112, func_5752535104, func_5752533600, func_5752540976, RETURN};
void func_5752532368(void) {
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
            PC = func_5752532368_op0;
        break;
    }
}
void func_5752533120(void) {
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
            PC = func_5752533120_op0;
        break;
        case 1:
            PC = func_5752533120_op1;
        break;
        case 2:
            PC = func_5752533120_op2;
        break;
        case 3:
            PC = func_5752533120_op3;
        break;
        case 4:
            PC = func_5752533120_op4;
        break;
        case 5:
            PC = func_5752533120_op5;
        break;
        case 6:
            PC = func_5752533120_op6;
        break;
    }
}
void func_5752533280(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5752533280_op0;
        break;
        case 1:
            PC = func_5752533280_op1;
        break;
        case 2:
            PC = func_5752533280_op2;
        break;
        case 3:
            PC = func_5752533280_op3;
        break;
        case 4:
            PC = func_5752533280_op4;
        break;
        case 5:
            PC = func_5752533280_op5;
        break;
        case 6:
            PC = func_5752533280_op6;
        break;
        case 7:
            PC = func_5752533280_op7;
        break;
        case 8:
            PC = func_5752533280_op8;
        break;
        case 9:
            PC = func_5752533280_op9;
        break;
    }
}
void func_5752532992(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5752532992_op0;
        break;
        case 1:
            PC = func_5752532992_op1;
        break;
        case 2:
            PC = func_5752532992_op2;
        break;
    }
}
void func_5752532640(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5752532640_op0;
        break;
        case 1:
            PC = func_5752532640_op1;
        break;
        case 2:
            PC = func_5752532640_op2;
        break;
    }
}
void func_5752532240(void) {
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
            PC = func_5752532240_op0;
        break;
    }
}
void func_5752532880(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5752532880_op0;
        break;
        case 1:
            PC = func_5752532880_op1;
        break;
    }
}
void func_5752533408(void) {
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
            PC = func_5752533408_op0;
        break;
    }
}
void func_5752535040(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5752535040_op0;
        break;
        case 1:
            PC = func_5752535040_op1;
        break;
        case 2:
            PC = func_5752535040_op2;
        break;
        case 3:
            PC = func_5752535040_op3;
        break;
        case 4:
            PC = func_5752535040_op4;
        break;
        case 5:
            PC = func_5752535040_op5;
        break;
        case 6:
            PC = func_5752535040_op6;
        break;
        case 7:
            PC = func_5752535040_op7;
        break;
        case 8:
            PC = func_5752535040_op8;
        break;
        case 9:
            PC = func_5752535040_op9;
        break;
        case 10:
            PC = func_5752535040_op10;
        break;
        case 11:
            PC = func_5752535040_op11;
        break;
        case 12:
            PC = func_5752535040_op12;
        break;
        case 13:
            PC = func_5752535040_op13;
        break;
        case 14:
            PC = func_5752535040_op14;
        break;
        case 15:
            PC = func_5752535040_op15;
        break;
        case 16:
            PC = func_5752535040_op16;
        break;
        case 17:
            PC = func_5752535040_op17;
        break;
        case 18:
            PC = func_5752535040_op18;
        break;
        case 19:
            PC = func_5752535040_op19;
        break;
        case 20:
            PC = func_5752535040_op20;
        break;
        case 21:
            PC = func_5752535040_op21;
        break;
        case 22:
            PC = func_5752535040_op22;
        break;
        case 23:
            PC = func_5752535040_op23;
        break;
        case 24:
            PC = func_5752535040_op24;
        break;
        case 25:
            PC = func_5752535040_op25;
        break;
        case 26:
            PC = func_5752535040_op26;
        break;
        case 27:
            PC = func_5752535040_op27;
        break;
        case 28:
            PC = func_5752535040_op28;
        break;
        case 29:
            PC = func_5752535040_op29;
        break;
        case 30:
            PC = func_5752535040_op30;
        break;
        case 31:
            PC = func_5752535040_op31;
        break;
        case 32:
            PC = func_5752535040_op32;
        break;
        case 33:
            PC = func_5752535040_op33;
        break;
        case 34:
            PC = func_5752535040_op34;
        break;
        case 35:
            PC = func_5752535040_op35;
        break;
        case 36:
            PC = func_5752535040_op36;
        break;
        case 37:
            PC = func_5752535040_op37;
        break;
        case 38:
            PC = func_5752535040_op38;
        break;
        case 39:
            PC = func_5752535040_op39;
        break;
        case 40:
            PC = func_5752535040_op40;
        break;
        case 41:
            PC = func_5752535040_op41;
        break;
        case 42:
            PC = func_5752535040_op42;
        break;
        case 43:
            PC = func_5752535040_op43;
        break;
        case 44:
            PC = func_5752535040_op44;
        break;
        case 45:
            PC = func_5752535040_op45;
        break;
        case 46:
            PC = func_5752535040_op46;
        break;
        case 47:
            PC = func_5752535040_op47;
        break;
        case 48:
            PC = func_5752535040_op48;
        break;
        case 49:
            PC = func_5752535040_op49;
        break;
        case 50:
            PC = func_5752535040_op50;
        break;
        case 51:
            PC = func_5752535040_op51;
        break;
    }
}
void func_5752532560(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5752532560_op0;
        break;
        case 1:
            PC = func_5752532560_op1;
        break;
    }
}
void func_5752533600(void) {
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
            PC = func_5752533600_op0;
        break;
        case 1:
            PC = func_5752533600_op1;
        break;
    }
}
void func_5752533808(void) {
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
            PC = func_5752533808_op0;
        break;
    }
}
void func_5752533728(void) {
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
            PC = func_5752533728_op0;
        break;
    }
}
void func_5752534240(void) {
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
            PC = func_5752534240_op0;
        break;
        case 1:
            PC = func_5752534240_op1;
        break;
        case 2:
            PC = func_5752534240_op2;
        break;
        case 3:
            PC = func_5752534240_op3;
        break;
        case 4:
            PC = func_5752534240_op4;
        break;
        case 5:
            PC = func_5752534240_op5;
        break;
    }
}
void func_5752534528(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5752534528_op0;
        break;
        case 1:
            PC = func_5752534528_op1;
        break;
        case 2:
            PC = func_5752534528_op2;
        break;
    }
}
void func_5752534080(void) {
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
            PC = func_5752534080_op0;
        break;
        case 1:
            PC = func_5752534080_op1;
        break;
        case 2:
            PC = func_5752534080_op2;
        break;
    }
}
void func_5752534000(void) {
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
            PC = func_5752534000_op0;
        break;
    }
}
void func_5752534464(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5752534464;
}
void func_5752534784(void) {
    extend(61);
    NEXT();
}
void func_5752534912(void) {
    extend(59);
    NEXT();
}
void func_5752536064(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5752536064;
}
void func_5752536192(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5752536320(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5752536320;
}
void func_5752536448(void) {
    extend(33);
    extend(61);
    NEXT();
}
void func_5752536576(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5752536576;
}
void func_5752536704(void) {
    extend(62);
    NEXT();
}
void func_5752536864(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5752536864;
}
void func_5752536992(void) {
    extend(60);
    NEXT();
}
void func_5752537152(void) {
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
    PC = exp_5752537152;
}
void func_5752537280(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_5752537504(void) {
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
    PC = exp_5752537504;
}
void func_5752537632(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_5752537808(void) {
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
    PC = exp_5752537808;
}
void func_5752535296(void) {
    extend(78);
    extend(79);
    extend(84);
    NEXT();
}
void func_5752535936(void) {
    extend(48);
    NEXT();
}
void func_5752535488(void) {
    extend(49);
    NEXT();
}
void func_5752538384(void) {
    extend(50);
    NEXT();
}
void func_5752538512(void) {
    extend(51);
    NEXT();
}
void func_5752538640(void) {
    extend(52);
    NEXT();
}
void func_5752538832(void) {
    extend(53);
    NEXT();
}
void func_5752538960(void) {
    extend(54);
    NEXT();
}
void func_5752539088(void) {
    extend(55);
    NEXT();
}
void func_5752539216(void) {
    extend(56);
    NEXT();
}
void func_5752538768(void) {
    extend(57);
    NEXT();
}
void func_5752535424(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5752535424;
}
void func_5752539760(void) {
    extend(43);
    NEXT();
}
void func_5752535616(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5752535616;
}
void func_5752535744(void) {
    extend(45);
    NEXT();
}
void func_5752539616(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5752539616;
}
void func_5752539984(void) {
    extend(40);
    NEXT();
}
void func_5752540112(void) {
    extend(41);
    NEXT();
}
void func_5752534368(void) {
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
    PC = exp_5752534368;
}
void func_5752540720(void) {
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
void func_5752535104(void) {
    extend(123);
    NEXT();
}
void func_5752540976(void) {
    extend(125);
    NEXT();
}
void func_5752540320(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        return;
    }
    store();
    PC = exp_5752540320;
}
void func_5752541280(void) {
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
    PC = exp_5752541280;
}
void func_5752541408(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5752542752(void) {
    extend(97);
    NEXT();
}
void func_5752542880(void) {
    extend(98);
    NEXT();
}
void func_5752543008(void) {
    extend(99);
    NEXT();
}
void func_5752543168(void) {
    extend(100);
    NEXT();
}
void func_5752543296(void) {
    extend(101);
    NEXT();
}
void func_5752543488(void) {
    extend(102);
    NEXT();
}
void func_5752543616(void) {
    extend(103);
    NEXT();
}
void func_5752537936(void) {
    extend(104);
    NEXT();
}
void func_5752538064(void) {
    extend(105);
    NEXT();
}
void func_5752543424(void) {
    extend(106);
    NEXT();
}
void func_5752543680(void) {
    extend(107);
    NEXT();
}
void func_5752543808(void) {
    extend(108);
    NEXT();
}
void func_5752543936(void) {
    extend(109);
    NEXT();
}
void func_5752544064(void) {
    extend(110);
    NEXT();
}
void func_5752544192(void) {
    extend(111);
    NEXT();
}
void func_5752544320(void) {
    extend(112);
    NEXT();
}
void func_5752544448(void) {
    extend(113);
    NEXT();
}
void func_5752538192(void) {
    extend(114);
    NEXT();
}
void func_5752544832(void) {
    extend(115);
    NEXT();
}
void func_5752544960(void) {
    extend(116);
    NEXT();
}
void func_5752545088(void) {
    extend(117);
    NEXT();
}
void func_5752545216(void) {
    extend(118);
    NEXT();
}
void func_5752545344(void) {
    extend(119);
    NEXT();
}
void func_5752545472(void) {
    extend(120);
    NEXT();
}
void func_5752545600(void) {
    extend(121);
    NEXT();
}
void func_5752545728(void) {
    extend(122);
    NEXT();
}
void func_5752545856(void) {
    extend(65);
    NEXT();
}
void func_5752545984(void) {
    extend(66);
    NEXT();
}
void func_5752546112(void) {
    extend(67);
    NEXT();
}
void func_5752546240(void) {
    extend(68);
    NEXT();
}
void func_5752546368(void) {
    extend(69);
    NEXT();
}
void func_5752546496(void) {
    extend(70);
    NEXT();
}
void func_5752546624(void) {
    extend(71);
    NEXT();
}
void func_5752544576(void) {
    extend(72);
    NEXT();
}
void func_5752544704(void) {
    extend(73);
    NEXT();
}
void func_5752547264(void) {
    extend(74);
    NEXT();
}
void func_5752547392(void) {
    extend(75);
    NEXT();
}
void func_5752547520(void) {
    extend(76);
    NEXT();
}
void func_5752547648(void) {
    extend(77);
    NEXT();
}
void func_5752547776(void) {
    extend(78);
    NEXT();
}
void func_5752547904(void) {
    extend(79);
    NEXT();
}
void func_5752548032(void) {
    extend(80);
    NEXT();
}
void func_5752548160(void) {
    extend(81);
    NEXT();
}
void func_5752548288(void) {
    extend(82);
    NEXT();
}
void func_5752548416(void) {
    extend(83);
    NEXT();
}
void func_5752548544(void) {
    extend(84);
    NEXT();
}
void func_5752548672(void) {
    extend(85);
    NEXT();
}
void func_5752548800(void) {
    extend(86);
    NEXT();
}
void func_5752548928(void) {
    extend(87);
    NEXT();
}
void func_5752549056(void) {
    extend(88);
    NEXT();
}
void func_5752549184(void) {
    extend(89);
    NEXT();
}
void func_5752549312(void) {
    extend(90);
    NEXT();
}
void func_5752541104(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5752541104;
}
void func_5752540448(void) {
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
    PC = exp_5752540448;
}
void func_5752541680(void) {
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
    PC = exp_5752541680;
}
void func_5752541808(void) {
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
void func_5752542304(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5752542304;
}
void func_5752542432(void) {
    extend(42);
    NEXT();
}
void func_5752541936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5752541936;
}
void func_5752542560(void) {
    extend(47);
    NEXT();
}
void func_5752549520(void) {
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
    PC = exp_5752549520;
}
void func_5752549648(void) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5752549776(void) {
    extend(32);
    extend(59);
    extend(32);
    NEXT();
}
void func_5752549904(void) {
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
    PC = exp_5752549904;
}
void func_5752550032(void) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
}
void func_5752550160(void) {
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
    PC = exp_5752550160;
}
void func_5752550288(void) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
}
void func_5752549440(void) {
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
    PC = exp_5752549440;
}
void func_5752542208(void) {
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
    PC =func_5752533728_op0;
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
