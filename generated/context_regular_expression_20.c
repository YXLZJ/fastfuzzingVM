#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 20
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
void func_5501901120(void);
void func_5501917632(void);
void func_5501917840(void);
void func_5501918048(void);
void func_5501917504(void);
void func_5501918704(void);
void func_5501918832(void);
void func_5501918608(void);
void func_5501918384(void);
void func_5501920400(void);
void func_5501919520(void);
void func_5501918960(void);
void func_5501919088(void);
void func_5501919216(void);
void func_5501919344(void);
void func_5501919648(void);
void func_5501918304(void);
void func_5501918448(void);
void func_5501920096(void);
void func_5501920224(void);
void func_5501920528(void);
void func_5501920656(void);
void func_5501921184(void);
void func_5501920864(void);
void func_5501920784(void);
void func_5501921056(void);
void func_5501921376(void);
void func_5501921504(void);
void func_5501922000(void);
void func_5501922128(void);
void func_5501922256(void);
void func_5501922416(void);
void func_5501922544(void);
void func_5501919904(void);
void func_5501923120(void);
void func_5501923248(void);
void func_5501923376(void);
void func_5501919840(void);
void func_5501921696(void);
void func_5501923696(void);
void func_5501923824(void);
void func_5501923952(void);
void func_5501925424(void);
void func_5501925552(void);
void func_5501925680(void);
void func_5501925840(void);
void func_5501925968(void);
void func_5501926160(void);
void func_5501926288(void);
void func_5501926416(void);
void func_5501926544(void);
void func_5501926096(void);
void func_5501926864(void);
void func_5501926992(void);
void func_5501927120(void);
void func_5501927248(void);
void func_5501927376(void);
void func_5501927504(void);
void func_5501927632(void);
void func_5501926672(void);
void func_5501928016(void);
void func_5501928144(void);
void func_5501928272(void);
void func_5501928400(void);
void func_5501928528(void);
void func_5501922672(void);
void func_5501922800(void);
void func_5501922928(void);
void func_5501923056(void);
void func_5501928656(void);
void func_5501928784(void);
void func_5501928912(void);
void func_5501929040(void);
void func_5501929168(void);
void func_5501929296(void);
void func_5501927760(void);
void func_5501927888(void);
void func_5501929936(void);
void func_5501930064(void);
void func_5501930192(void);
void func_5501930320(void);
void func_5501930448(void);
void func_5501930576(void);
void func_5501930704(void);
void func_5501930832(void);
void func_5501930960(void);
void func_5501931088(void);
void func_5501931216(void);
void func_5501931344(void);
void func_5501931472(void);
void func_5501931600(void);
void func_5501931728(void);
void func_5501931856(void);
void func_5501931984(void);
void func_5501924512(void);
void func_5501924672(void);
void func_5501924800(void);
void func_5501924992(void);
void func_5501925120(void);
void func_5501924928(void);
void func_5501932176(void);
void func_5501932304(void);
void func_5501932432(void);
void func_5501924080(void);
void func_5501924208(void);
void func_5501921904(void);
void func_5501932560(void);
void func_5501932688(void);
void func_5501932816(void);
void func_5501921824(void);
void func_5501932944(void);
void func_5501933600(void);
void func_5501933744(void);
void func_5501933904(void);
void func_5501934032(void);
void func_5501934224(void);
void func_5501934352(void);
void func_5501934480(void);
void func_5501934608(void);
void func_5501934160(void);
void func_5501934928(void);
void func_5501933232(void);
void HALT(void);
void RETURN(void);
Inst func_5501901120_op0[2] = {func_5501920864, RETURN};
Inst func_5501901120_op1[2] = {func_5501920224, RETURN};
Inst func_5501917632_op0[2] = {func_5501920784, RETURN};
Inst func_5501917840_op0[2] = {func_5501920528, RETURN};
Inst func_5501917840_op1[2] = {func_5501919216, RETURN};
Inst func_5501917840_op2[2] = {func_5501918832, RETURN};
Inst func_5501918048_op0[2] = {func_5501919088, RETURN};
Inst func_5501918048_op1[2] = {func_5501921056, RETURN};
Inst func_5501917504_op0[2] = {func_5501921504, RETURN};
Inst func_5501918704_op0[2] = {func_5501922000, RETURN};
Inst func_5501918704_op1[2] = {func_5501922128, RETURN};
Inst func_5501918704_op2[2] = {func_5501922256, RETURN};
Inst func_5501918704_op3[2] = {func_5501922416, RETURN};
Inst func_5501918704_op4[2] = {func_5501922544, RETURN};
Inst func_5501918704_op5[2] = {func_5501919904, RETURN};
Inst func_5501918704_op6[2] = {func_5501923120, RETURN};
Inst func_5501918704_op7[2] = {func_5501923248, RETURN};
Inst func_5501918704_op8[2] = {func_5501923376, RETURN};
Inst func_5501918704_op9[2] = {func_5501919840, RETURN};
Inst func_5501918832_op0[2] = {func_5501918384, RETURN};
Inst func_5501918832_op1[2] = {func_5501917632, RETURN};
Inst func_5501918832_op2[2] = {func_5501918608, RETURN};
Inst func_5501918832_op3[2] = {func_5501918048, RETURN};
Inst func_5501918832_op4[2] = {func_5501920096, RETURN};
Inst func_5501918608_op0[2] = {func_5501921696, RETURN};
Inst func_5501918384_op0[2] = {func_5501923696, RETURN};
Inst func_5501920400_op0[2] = {func_5501925424, RETURN};
Inst func_5501920400_op1[2] = {func_5501925552, RETURN};
Inst func_5501920400_op2[2] = {func_5501925680, RETURN};
Inst func_5501920400_op3[2] = {func_5501925840, RETURN};
Inst func_5501920400_op4[2] = {func_5501925968, RETURN};
Inst func_5501920400_op5[2] = {func_5501926160, RETURN};
Inst func_5501920400_op6[2] = {func_5501926288, RETURN};
Inst func_5501920400_op7[2] = {func_5501926416, RETURN};
Inst func_5501920400_op8[2] = {func_5501926544, RETURN};
Inst func_5501920400_op9[2] = {func_5501926096, RETURN};
Inst func_5501920400_op10[2] = {func_5501926864, RETURN};
Inst func_5501920400_op11[2] = {func_5501926992, RETURN};
Inst func_5501920400_op12[2] = {func_5501927120, RETURN};
Inst func_5501920400_op13[2] = {func_5501927248, RETURN};
Inst func_5501920400_op14[2] = {func_5501927376, RETURN};
Inst func_5501920400_op15[2] = {func_5501927504, RETURN};
Inst func_5501920400_op16[2] = {func_5501927632, RETURN};
Inst func_5501920400_op17[2] = {func_5501926672, RETURN};
Inst func_5501920400_op18[2] = {func_5501928016, RETURN};
Inst func_5501920400_op19[2] = {func_5501928144, RETURN};
Inst func_5501920400_op20[2] = {func_5501928272, RETURN};
Inst func_5501920400_op21[2] = {func_5501928400, RETURN};
Inst func_5501920400_op22[2] = {func_5501928528, RETURN};
Inst func_5501920400_op23[2] = {func_5501922672, RETURN};
Inst func_5501920400_op24[2] = {func_5501922800, RETURN};
Inst func_5501920400_op25[2] = {func_5501922928, RETURN};
Inst func_5501920400_op26[2] = {func_5501923056, RETURN};
Inst func_5501920400_op27[2] = {func_5501928656, RETURN};
Inst func_5501920400_op28[2] = {func_5501928784, RETURN};
Inst func_5501920400_op29[2] = {func_5501928912, RETURN};
Inst func_5501920400_op30[2] = {func_5501929040, RETURN};
Inst func_5501920400_op31[2] = {func_5501929168, RETURN};
Inst func_5501920400_op32[2] = {func_5501929296, RETURN};
Inst func_5501920400_op33[2] = {func_5501927760, RETURN};
Inst func_5501920400_op34[2] = {func_5501927888, RETURN};
Inst func_5501920400_op35[2] = {func_5501929936, RETURN};
Inst func_5501920400_op36[2] = {func_5501930064, RETURN};
Inst func_5501920400_op37[2] = {func_5501930192, RETURN};
Inst func_5501920400_op38[2] = {func_5501930320, RETURN};
Inst func_5501920400_op39[2] = {func_5501930448, RETURN};
Inst func_5501920400_op40[2] = {func_5501930576, RETURN};
Inst func_5501920400_op41[2] = {func_5501930704, RETURN};
Inst func_5501920400_op42[2] = {func_5501930832, RETURN};
Inst func_5501920400_op43[2] = {func_5501930960, RETURN};
Inst func_5501920400_op44[2] = {func_5501931088, RETURN};
Inst func_5501920400_op45[2] = {func_5501931216, RETURN};
Inst func_5501920400_op46[2] = {func_5501931344, RETURN};
Inst func_5501920400_op47[2] = {func_5501931472, RETURN};
Inst func_5501920400_op48[2] = {func_5501931600, RETURN};
Inst func_5501920400_op49[2] = {func_5501931728, RETURN};
Inst func_5501920400_op50[2] = {func_5501931856, RETURN};
Inst func_5501920400_op51[2] = {func_5501931984, RETURN};
Inst func_5501919520_op0[2] = {func_5501921376, RETURN};
Inst func_5501919520_op1[2] = {func_5501920784, RETURN};
Inst func_5501919520_op2[2] = {func_5501924512, RETURN};
Inst func_5501919520_op3[2] = {func_5501924672, RETURN};
Inst func_5501919520_op4[2] = {func_5501924800, RETURN};
Inst func_5501919520_op5[2] = {func_5501924992, RETURN};
Inst func_5501919520_op6[2] = {func_5501921696, RETURN};
Inst func_5501919520_op7[2] = {func_5501925120, RETURN};
Inst func_5501919520_op8[2] = {func_5501923824, RETURN};
Inst func_5501919520_op9[2] = {func_5501923952, RETURN};
Inst func_5501919520_op10[2] = {func_5501924928, RETURN};
Inst func_5501919520_op11[2] = {func_5501932176, RETURN};
Inst func_5501919520_op12[2] = {func_5501932304, RETURN};
Inst func_5501919520_op13[2] = {func_5501932432, RETURN};
Inst func_5501918960_op0[2] = {func_5501924080, RETURN};
Inst func_5501919088_op0[2] = {func_5501920400, RETURN};
Inst func_5501919088_op1[2] = {func_5501918704, RETURN};
Inst func_5501919088_op2[2] = {func_5501921184, RETURN};
Inst func_5501919216_op0[2] = {func_5501921904, RETURN};
Inst func_5501919344_op0[2] = {func_5501932560, RETURN};
Inst func_5501919648_op0[2] = {func_5501932688, RETURN};
Inst func_5501918304_op0[2] = {func_5501919648, RETURN};
Inst func_5501918304_op1[2] = {func_5501918048, RETURN};
Inst func_5501918448_op0[2] = {func_5501918304, RETURN};
Inst func_5501918448_op1[2] = {func_5501921824, RETURN};
Inst func_5501920096_op0[2] = {func_5501919344, RETURN};
Inst func_5501920096_op1[2] = {func_5501918960, RETURN};
Inst func_5501920224_op0[2] = {func_5501917504, RETURN};
Inst func_5501920224_op1[2] = {func_5501917840, RETURN};
Inst func_5501920528_op0[2] = {func_5501932944, RETURN};
Inst func_5501920656_op0[2] = {func_5501901120, HALT};
Inst func_5501921184_op0[2] = {func_5501933600, RETURN};
Inst func_5501921184_op1[2] = {func_5501932816, RETURN};
Inst func_5501921184_op2[2] = {func_5501933744, RETURN};
Inst func_5501921184_op3[2] = {func_5501933904, RETURN};
Inst func_5501921184_op4[2] = {func_5501934032, RETURN};
Inst func_5501921184_op5[2] = {func_5501934224, RETURN};
Inst func_5501921184_op6[2] = {func_5501934352, RETURN};
Inst func_5501921184_op7[2] = {func_5501934480, RETURN};
Inst func_5501921184_op8[2] = {func_5501934608, RETURN};
Inst func_5501921184_op9[2] = {func_5501934160, RETURN};
Inst func_5501921184_op10[2] = {func_5501934928, RETURN};
Inst func_5501920864_op0[2] = {func_5501933232, RETURN};
Inst exp_5501921056[3] = {func_5501921376, func_5501919520, RETURN};
Inst exp_5501921504[3] = {func_5501920224, func_5501917840, RETURN};
Inst exp_5501923696[4] = {func_5501923824, func_5501901120, func_5501923952, RETURN};
Inst exp_5501924080[4] = {func_5501924208, func_5501918448, func_5501932176, RETURN};
Inst exp_5501921904[3] = {func_5501918832, func_5501924672, RETURN};
Inst exp_5501932560[4] = {func_5501924928, func_5501918448, func_5501932176, RETURN};
Inst exp_5501932688[4] = {func_5501918048, func_5501932816, func_5501918048, RETURN};
Inst exp_5501921824[3] = {func_5501918304, func_5501918448, RETURN};
Inst exp_5501932944[3] = {func_5501918832, func_5501924512, RETURN};
Inst exp_5501933232[4] = {func_5501901120, func_5501925120, func_5501920224, RETURN};
void func_5501901120(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5501901120_op0;
        break;
        case 1:
            PC = func_5501901120_op1;
        break;
    }
}
void func_5501917632(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5501917632_op0;
        break;
    }
}
void func_5501917840(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5501917840_op0;
        break;
        case 1:
            PC = func_5501917840_op1;
        break;
        case 2:
            PC = func_5501917840_op2;
        break;
    }
}
void func_5501918048(void) {
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
            PC = func_5501918048_op0;
        break;
        case 1:
            PC = func_5501918048_op1;
        break;
    }
}
void func_5501917504(void) {
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
            PC = func_5501917504_op0;
        break;
    }
}
void func_5501918704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5501918704_op0;
        break;
        case 1:
            PC = func_5501918704_op1;
        break;
        case 2:
            PC = func_5501918704_op2;
        break;
        case 3:
            PC = func_5501918704_op3;
        break;
        case 4:
            PC = func_5501918704_op4;
        break;
        case 5:
            PC = func_5501918704_op5;
        break;
        case 6:
            PC = func_5501918704_op6;
        break;
        case 7:
            PC = func_5501918704_op7;
        break;
        case 8:
            PC = func_5501918704_op8;
        break;
        case 9:
            PC = func_5501918704_op9;
        break;
    }
}
void func_5501918832(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5501918832_op0;
        break;
        case 1:
            PC = func_5501918832_op1;
        break;
        case 2:
            PC = func_5501918832_op2;
        break;
        case 3:
            PC = func_5501918832_op3;
        break;
        case 4:
            PC = func_5501918832_op4;
        break;
    }
}
void func_5501918608(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5501918608_op0;
        break;
    }
}
void func_5501918384(void) {
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
            PC = func_5501918384_op0;
        break;
    }
}
void func_5501920400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5501920400_op0;
        break;
        case 1:
            PC = func_5501920400_op1;
        break;
        case 2:
            PC = func_5501920400_op2;
        break;
        case 3:
            PC = func_5501920400_op3;
        break;
        case 4:
            PC = func_5501920400_op4;
        break;
        case 5:
            PC = func_5501920400_op5;
        break;
        case 6:
            PC = func_5501920400_op6;
        break;
        case 7:
            PC = func_5501920400_op7;
        break;
        case 8:
            PC = func_5501920400_op8;
        break;
        case 9:
            PC = func_5501920400_op9;
        break;
        case 10:
            PC = func_5501920400_op10;
        break;
        case 11:
            PC = func_5501920400_op11;
        break;
        case 12:
            PC = func_5501920400_op12;
        break;
        case 13:
            PC = func_5501920400_op13;
        break;
        case 14:
            PC = func_5501920400_op14;
        break;
        case 15:
            PC = func_5501920400_op15;
        break;
        case 16:
            PC = func_5501920400_op16;
        break;
        case 17:
            PC = func_5501920400_op17;
        break;
        case 18:
            PC = func_5501920400_op18;
        break;
        case 19:
            PC = func_5501920400_op19;
        break;
        case 20:
            PC = func_5501920400_op20;
        break;
        case 21:
            PC = func_5501920400_op21;
        break;
        case 22:
            PC = func_5501920400_op22;
        break;
        case 23:
            PC = func_5501920400_op23;
        break;
        case 24:
            PC = func_5501920400_op24;
        break;
        case 25:
            PC = func_5501920400_op25;
        break;
        case 26:
            PC = func_5501920400_op26;
        break;
        case 27:
            PC = func_5501920400_op27;
        break;
        case 28:
            PC = func_5501920400_op28;
        break;
        case 29:
            PC = func_5501920400_op29;
        break;
        case 30:
            PC = func_5501920400_op30;
        break;
        case 31:
            PC = func_5501920400_op31;
        break;
        case 32:
            PC = func_5501920400_op32;
        break;
        case 33:
            PC = func_5501920400_op33;
        break;
        case 34:
            PC = func_5501920400_op34;
        break;
        case 35:
            PC = func_5501920400_op35;
        break;
        case 36:
            PC = func_5501920400_op36;
        break;
        case 37:
            PC = func_5501920400_op37;
        break;
        case 38:
            PC = func_5501920400_op38;
        break;
        case 39:
            PC = func_5501920400_op39;
        break;
        case 40:
            PC = func_5501920400_op40;
        break;
        case 41:
            PC = func_5501920400_op41;
        break;
        case 42:
            PC = func_5501920400_op42;
        break;
        case 43:
            PC = func_5501920400_op43;
        break;
        case 44:
            PC = func_5501920400_op44;
        break;
        case 45:
            PC = func_5501920400_op45;
        break;
        case 46:
            PC = func_5501920400_op46;
        break;
        case 47:
            PC = func_5501920400_op47;
        break;
        case 48:
            PC = func_5501920400_op48;
        break;
        case 49:
            PC = func_5501920400_op49;
        break;
        case 50:
            PC = func_5501920400_op50;
        break;
        case 51:
            PC = func_5501920400_op51;
        break;
    }
}
void func_5501919520(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        return;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5501919520_op0;
        break;
        case 1:
            PC = func_5501919520_op1;
        break;
        case 2:
            PC = func_5501919520_op2;
        break;
        case 3:
            PC = func_5501919520_op3;
        break;
        case 4:
            PC = func_5501919520_op4;
        break;
        case 5:
            PC = func_5501919520_op5;
        break;
        case 6:
            PC = func_5501919520_op6;
        break;
        case 7:
            PC = func_5501919520_op7;
        break;
        case 8:
            PC = func_5501919520_op8;
        break;
        case 9:
            PC = func_5501919520_op9;
        break;
        case 10:
            PC = func_5501919520_op10;
        break;
        case 11:
            PC = func_5501919520_op11;
        break;
        case 12:
            PC = func_5501919520_op12;
        break;
        case 13:
            PC = func_5501919520_op13;
        break;
    }
}
void func_5501918960(void) {
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
            PC = func_5501918960_op0;
        break;
    }
}
void func_5501919088(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5501919088_op0;
        break;
        case 1:
            PC = func_5501919088_op1;
        break;
        case 2:
            PC = func_5501919088_op2;
        break;
    }
}
void func_5501919216(void) {
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
            PC = func_5501919216_op0;
        break;
    }
}
void func_5501919344(void) {
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
            PC = func_5501919344_op0;
        break;
    }
}
void func_5501919648(void) {
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
            PC = func_5501919648_op0;
        break;
    }
}
void func_5501918304(void) {
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
            PC = func_5501918304_op0;
        break;
        case 1:
            PC = func_5501918304_op1;
        break;
    }
}
void func_5501918448(void) {
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
            PC = func_5501918448_op0;
        break;
        case 1:
            PC = func_5501918448_op1;
        break;
    }
}
void func_5501920096(void) {
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
            PC = func_5501920096_op0;
        break;
        case 1:
            PC = func_5501920096_op1;
        break;
    }
}
void func_5501920224(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5501920224_op0;
        break;
        case 1:
            PC = func_5501920224_op1;
        break;
    }
}
void func_5501920528(void) {
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
            PC = func_5501920528_op0;
        break;
    }
}
void func_5501920656(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5501920656_op0;
        break;
    }
}
void func_5501921184(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        return;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5501921184_op0;
        break;
        case 1:
            PC = func_5501921184_op1;
        break;
        case 2:
            PC = func_5501921184_op2;
        break;
        case 3:
            PC = func_5501921184_op3;
        break;
        case 4:
            PC = func_5501921184_op4;
        break;
        case 5:
            PC = func_5501921184_op5;
        break;
        case 6:
            PC = func_5501921184_op6;
        break;
        case 7:
            PC = func_5501921184_op7;
        break;
        case 8:
            PC = func_5501921184_op8;
        break;
        case 9:
            PC = func_5501921184_op9;
        break;
        case 10:
            PC = func_5501921184_op10;
        break;
    }
}
void func_5501920864(void) {
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
            PC = func_5501920864_op0;
        break;
    }
}
void func_5501920784(void) {
    extend(46);
    NEXT();
}
void func_5501921056(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5501921056;
}
void func_5501921376(void) {
    extend(92);
    NEXT();
}
void func_5501921504(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5501921504;
}
void func_5501922000(void) {
    extend(48);
    NEXT();
}
void func_5501922128(void) {
    extend(49);
    NEXT();
}
void func_5501922256(void) {
    extend(50);
    NEXT();
}
void func_5501922416(void) {
    extend(51);
    NEXT();
}
void func_5501922544(void) {
    extend(52);
    NEXT();
}
void func_5501919904(void) {
    extend(53);
    NEXT();
}
void func_5501923120(void) {
    extend(54);
    NEXT();
}
void func_5501923248(void) {
    extend(55);
    NEXT();
}
void func_5501923376(void) {
    extend(56);
    NEXT();
}
void func_5501919840(void) {
    extend(57);
    NEXT();
}
void func_5501921696(void) {
    extend(36);
    NEXT();
}
void func_5501923696(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5501923696;
}
void func_5501923824(void) {
    extend(40);
    NEXT();
}
void func_5501923952(void) {
    extend(41);
    NEXT();
}
void func_5501925424(void) {
    extend(97);
    NEXT();
}
void func_5501925552(void) {
    extend(98);
    NEXT();
}
void func_5501925680(void) {
    extend(99);
    NEXT();
}
void func_5501925840(void) {
    extend(100);
    NEXT();
}
void func_5501925968(void) {
    extend(101);
    NEXT();
}
void func_5501926160(void) {
    extend(102);
    NEXT();
}
void func_5501926288(void) {
    extend(103);
    NEXT();
}
void func_5501926416(void) {
    extend(104);
    NEXT();
}
void func_5501926544(void) {
    extend(105);
    NEXT();
}
void func_5501926096(void) {
    extend(106);
    NEXT();
}
void func_5501926864(void) {
    extend(107);
    NEXT();
}
void func_5501926992(void) {
    extend(108);
    NEXT();
}
void func_5501927120(void) {
    extend(109);
    NEXT();
}
void func_5501927248(void) {
    extend(110);
    NEXT();
}
void func_5501927376(void) {
    extend(111);
    NEXT();
}
void func_5501927504(void) {
    extend(112);
    NEXT();
}
void func_5501927632(void) {
    extend(113);
    NEXT();
}
void func_5501926672(void) {
    extend(114);
    NEXT();
}
void func_5501928016(void) {
    extend(115);
    NEXT();
}
void func_5501928144(void) {
    extend(116);
    NEXT();
}
void func_5501928272(void) {
    extend(117);
    NEXT();
}
void func_5501928400(void) {
    extend(118);
    NEXT();
}
void func_5501928528(void) {
    extend(119);
    NEXT();
}
void func_5501922672(void) {
    extend(120);
    NEXT();
}
void func_5501922800(void) {
    extend(121);
    NEXT();
}
void func_5501922928(void) {
    extend(122);
    NEXT();
}
void func_5501923056(void) {
    extend(65);
    NEXT();
}
void func_5501928656(void) {
    extend(66);
    NEXT();
}
void func_5501928784(void) {
    extend(67);
    NEXT();
}
void func_5501928912(void) {
    extend(68);
    NEXT();
}
void func_5501929040(void) {
    extend(69);
    NEXT();
}
void func_5501929168(void) {
    extend(70);
    NEXT();
}
void func_5501929296(void) {
    extend(71);
    NEXT();
}
void func_5501927760(void) {
    extend(72);
    NEXT();
}
void func_5501927888(void) {
    extend(73);
    NEXT();
}
void func_5501929936(void) {
    extend(74);
    NEXT();
}
void func_5501930064(void) {
    extend(75);
    NEXT();
}
void func_5501930192(void) {
    extend(76);
    NEXT();
}
void func_5501930320(void) {
    extend(77);
    NEXT();
}
void func_5501930448(void) {
    extend(78);
    NEXT();
}
void func_5501930576(void) {
    extend(79);
    NEXT();
}
void func_5501930704(void) {
    extend(80);
    NEXT();
}
void func_5501930832(void) {
    extend(81);
    NEXT();
}
void func_5501930960(void) {
    extend(82);
    NEXT();
}
void func_5501931088(void) {
    extend(83);
    NEXT();
}
void func_5501931216(void) {
    extend(84);
    NEXT();
}
void func_5501931344(void) {
    extend(85);
    NEXT();
}
void func_5501931472(void) {
    extend(86);
    NEXT();
}
void func_5501931600(void) {
    extend(87);
    NEXT();
}
void func_5501931728(void) {
    extend(88);
    NEXT();
}
void func_5501931856(void) {
    extend(89);
    NEXT();
}
void func_5501931984(void) {
    extend(90);
    NEXT();
}
void func_5501924512(void) {
    extend(42);
    NEXT();
}
void func_5501924672(void) {
    extend(43);
    NEXT();
}
void func_5501924800(void) {
    extend(63);
    NEXT();
}
void func_5501924992(void) {
    extend(94);
    NEXT();
}
void func_5501925120(void) {
    extend(124);
    NEXT();
}
void func_5501924928(void) {
    extend(91);
    NEXT();
}
void func_5501932176(void) {
    extend(93);
    NEXT();
}
void func_5501932304(void) {
    extend(123);
    NEXT();
}
void func_5501932432(void) {
    extend(125);
    NEXT();
}
void func_5501924080(void) {
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
    PC = exp_5501924080;
}
void func_5501924208(void) {
    extend(91);
    extend(94);
    NEXT();
}
void func_5501921904(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        return;
    }
    store();
    PC = exp_5501921904;
}
void func_5501932560(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5501932560;
}
void func_5501932688(void) {
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
    PC = exp_5501932688;
}
void func_5501932816(void) {
    extend(45);
    NEXT();
}
void func_5501921824(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5501921824;
}
void func_5501932944(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        return;
    }
    store();
    PC = exp_5501932944;
}
void func_5501933600(void) {
    extend(95);
    NEXT();
}
void func_5501933744(void) {
    extend(64);
    NEXT();
}
void func_5501933904(void) {
    extend(35);
    NEXT();
}
void func_5501934032(void) {
    extend(37);
    NEXT();
}
void func_5501934224(void) {
    extend(38);
    NEXT();
}
void func_5501934352(void) {
    extend(61);
    NEXT();
}
void func_5501934480(void) {
    extend(126);
    NEXT();
}
void func_5501934608(void) {
    extend(96);
    NEXT();
}
void func_5501934160(void) {
    extend(39);
    NEXT();
}
void func_5501934928(void) {
    extend(34);
    NEXT();
}
void func_5501933232(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5501933232;
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
    PC =func_5501920656_op0;
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
