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
void func_5131760704(void);
void func_5131777216(void);
void func_5131777424(void);
void func_5131777632(void);
void func_5131777088(void);
void func_5131778288(void);
void func_5131778416(void);
void func_5131778192(void);
void func_5131777968(void);
void func_5131779984(void);
void func_5131779104(void);
void func_5131778544(void);
void func_5131778672(void);
void func_5131778800(void);
void func_5131778928(void);
void func_5131779232(void);
void func_5131777888(void);
void func_5131778032(void);
void func_5131779680(void);
void func_5131779808(void);
void func_5131780112(void);
void func_5131780240(void);
void func_5131780768(void);
void func_5131780448(void);
void func_5131780368(void);
void func_5131780640(void);
void func_5131780960(void);
void func_5131781088(void);
void func_5131781584(void);
void func_5131781712(void);
void func_5131781840(void);
void func_5131782000(void);
void func_5131782128(void);
void func_5131779488(void);
void func_5131782704(void);
void func_5131782832(void);
void func_5131782960(void);
void func_5131779424(void);
void func_5131781280(void);
void func_5131783280(void);
void func_5131783408(void);
void func_5131783536(void);
void func_5131785008(void);
void func_5131785136(void);
void func_5131785264(void);
void func_5131785424(void);
void func_5131785552(void);
void func_5131785744(void);
void func_5131785872(void);
void func_5131786000(void);
void func_5131786128(void);
void func_5131785680(void);
void func_5131786448(void);
void func_5131786576(void);
void func_5131786704(void);
void func_5131786832(void);
void func_5131786960(void);
void func_5131787088(void);
void func_5131787216(void);
void func_5131786256(void);
void func_5131787600(void);
void func_5131787728(void);
void func_5131787856(void);
void func_5131787984(void);
void func_5131788112(void);
void func_5131782256(void);
void func_5131782384(void);
void func_5131782512(void);
void func_5131782640(void);
void func_5131788240(void);
void func_5131788368(void);
void func_5131788496(void);
void func_5131788624(void);
void func_5131788752(void);
void func_5131788880(void);
void func_5131787344(void);
void func_5131787472(void);
void func_5131789520(void);
void func_5131789648(void);
void func_5131789776(void);
void func_5131789904(void);
void func_5131790032(void);
void func_5131790160(void);
void func_5131790288(void);
void func_5131790416(void);
void func_5131790544(void);
void func_5131790672(void);
void func_5131790800(void);
void func_5131790928(void);
void func_5131791056(void);
void func_5131791184(void);
void func_5131791312(void);
void func_5131791440(void);
void func_5131791568(void);
void func_5131784096(void);
void func_5131784256(void);
void func_5131784384(void);
void func_5131784576(void);
void func_5131784704(void);
void func_5131784512(void);
void func_5131791760(void);
void func_5131791888(void);
void func_5131792016(void);
void func_5131783664(void);
void func_5131783792(void);
void func_5131781488(void);
void func_5131792144(void);
void func_5131792272(void);
void func_5131792400(void);
void func_5131781408(void);
void func_5131792528(void);
void func_5131793184(void);
void func_5131793328(void);
void func_5131793488(void);
void func_5131793616(void);
void func_5131793808(void);
void func_5131793936(void);
void func_5131794064(void);
void func_5131794192(void);
void func_5131793744(void);
void func_5131794512(void);
void func_5131792816(void);
void HALT(void);
void RETURN(void);
Inst func_5131760704_op0[2] = {func_5131780448, RETURN};
Inst func_5131760704_op1[2] = {func_5131779808, RETURN};
Inst func_5131777216_op0[2] = {func_5131780368, RETURN};
Inst func_5131777424_op0[2] = {func_5131780112, RETURN};
Inst func_5131777424_op1[2] = {func_5131778800, RETURN};
Inst func_5131777424_op2[2] = {func_5131778416, RETURN};
Inst func_5131777632_op0[2] = {func_5131778672, RETURN};
Inst func_5131777632_op1[2] = {func_5131780640, RETURN};
Inst func_5131777088_op0[2] = {func_5131781088, RETURN};
Inst func_5131778288_op0[2] = {func_5131781584, RETURN};
Inst func_5131778288_op1[2] = {func_5131781712, RETURN};
Inst func_5131778288_op2[2] = {func_5131781840, RETURN};
Inst func_5131778288_op3[2] = {func_5131782000, RETURN};
Inst func_5131778288_op4[2] = {func_5131782128, RETURN};
Inst func_5131778288_op5[2] = {func_5131779488, RETURN};
Inst func_5131778288_op6[2] = {func_5131782704, RETURN};
Inst func_5131778288_op7[2] = {func_5131782832, RETURN};
Inst func_5131778288_op8[2] = {func_5131782960, RETURN};
Inst func_5131778288_op9[2] = {func_5131779424, RETURN};
Inst func_5131778416_op0[2] = {func_5131777968, RETURN};
Inst func_5131778416_op1[2] = {func_5131777216, RETURN};
Inst func_5131778416_op2[2] = {func_5131778192, RETURN};
Inst func_5131778416_op3[2] = {func_5131777632, RETURN};
Inst func_5131778416_op4[2] = {func_5131779680, RETURN};
Inst func_5131778192_op0[2] = {func_5131781280, RETURN};
Inst func_5131777968_op0[2] = {func_5131783280, RETURN};
Inst func_5131779984_op0[2] = {func_5131785008, RETURN};
Inst func_5131779984_op1[2] = {func_5131785136, RETURN};
Inst func_5131779984_op2[2] = {func_5131785264, RETURN};
Inst func_5131779984_op3[2] = {func_5131785424, RETURN};
Inst func_5131779984_op4[2] = {func_5131785552, RETURN};
Inst func_5131779984_op5[2] = {func_5131785744, RETURN};
Inst func_5131779984_op6[2] = {func_5131785872, RETURN};
Inst func_5131779984_op7[2] = {func_5131786000, RETURN};
Inst func_5131779984_op8[2] = {func_5131786128, RETURN};
Inst func_5131779984_op9[2] = {func_5131785680, RETURN};
Inst func_5131779984_op10[2] = {func_5131786448, RETURN};
Inst func_5131779984_op11[2] = {func_5131786576, RETURN};
Inst func_5131779984_op12[2] = {func_5131786704, RETURN};
Inst func_5131779984_op13[2] = {func_5131786832, RETURN};
Inst func_5131779984_op14[2] = {func_5131786960, RETURN};
Inst func_5131779984_op15[2] = {func_5131787088, RETURN};
Inst func_5131779984_op16[2] = {func_5131787216, RETURN};
Inst func_5131779984_op17[2] = {func_5131786256, RETURN};
Inst func_5131779984_op18[2] = {func_5131787600, RETURN};
Inst func_5131779984_op19[2] = {func_5131787728, RETURN};
Inst func_5131779984_op20[2] = {func_5131787856, RETURN};
Inst func_5131779984_op21[2] = {func_5131787984, RETURN};
Inst func_5131779984_op22[2] = {func_5131788112, RETURN};
Inst func_5131779984_op23[2] = {func_5131782256, RETURN};
Inst func_5131779984_op24[2] = {func_5131782384, RETURN};
Inst func_5131779984_op25[2] = {func_5131782512, RETURN};
Inst func_5131779984_op26[2] = {func_5131782640, RETURN};
Inst func_5131779984_op27[2] = {func_5131788240, RETURN};
Inst func_5131779984_op28[2] = {func_5131788368, RETURN};
Inst func_5131779984_op29[2] = {func_5131788496, RETURN};
Inst func_5131779984_op30[2] = {func_5131788624, RETURN};
Inst func_5131779984_op31[2] = {func_5131788752, RETURN};
Inst func_5131779984_op32[2] = {func_5131788880, RETURN};
Inst func_5131779984_op33[2] = {func_5131787344, RETURN};
Inst func_5131779984_op34[2] = {func_5131787472, RETURN};
Inst func_5131779984_op35[2] = {func_5131789520, RETURN};
Inst func_5131779984_op36[2] = {func_5131789648, RETURN};
Inst func_5131779984_op37[2] = {func_5131789776, RETURN};
Inst func_5131779984_op38[2] = {func_5131789904, RETURN};
Inst func_5131779984_op39[2] = {func_5131790032, RETURN};
Inst func_5131779984_op40[2] = {func_5131790160, RETURN};
Inst func_5131779984_op41[2] = {func_5131790288, RETURN};
Inst func_5131779984_op42[2] = {func_5131790416, RETURN};
Inst func_5131779984_op43[2] = {func_5131790544, RETURN};
Inst func_5131779984_op44[2] = {func_5131790672, RETURN};
Inst func_5131779984_op45[2] = {func_5131790800, RETURN};
Inst func_5131779984_op46[2] = {func_5131790928, RETURN};
Inst func_5131779984_op47[2] = {func_5131791056, RETURN};
Inst func_5131779984_op48[2] = {func_5131791184, RETURN};
Inst func_5131779984_op49[2] = {func_5131791312, RETURN};
Inst func_5131779984_op50[2] = {func_5131791440, RETURN};
Inst func_5131779984_op51[2] = {func_5131791568, RETURN};
Inst func_5131779104_op0[2] = {func_5131780960, RETURN};
Inst func_5131779104_op1[2] = {func_5131780368, RETURN};
Inst func_5131779104_op2[2] = {func_5131784096, RETURN};
Inst func_5131779104_op3[2] = {func_5131784256, RETURN};
Inst func_5131779104_op4[2] = {func_5131784384, RETURN};
Inst func_5131779104_op5[2] = {func_5131784576, RETURN};
Inst func_5131779104_op6[2] = {func_5131781280, RETURN};
Inst func_5131779104_op7[2] = {func_5131784704, RETURN};
Inst func_5131779104_op8[2] = {func_5131783408, RETURN};
Inst func_5131779104_op9[2] = {func_5131783536, RETURN};
Inst func_5131779104_op10[2] = {func_5131784512, RETURN};
Inst func_5131779104_op11[2] = {func_5131791760, RETURN};
Inst func_5131779104_op12[2] = {func_5131791888, RETURN};
Inst func_5131779104_op13[2] = {func_5131792016, RETURN};
Inst func_5131778544_op0[2] = {func_5131783664, RETURN};
Inst func_5131778672_op0[2] = {func_5131779984, RETURN};
Inst func_5131778672_op1[2] = {func_5131778288, RETURN};
Inst func_5131778672_op2[2] = {func_5131780768, RETURN};
Inst func_5131778800_op0[2] = {func_5131781488, RETURN};
Inst func_5131778928_op0[2] = {func_5131792144, RETURN};
Inst func_5131779232_op0[2] = {func_5131792272, RETURN};
Inst func_5131777888_op0[2] = {func_5131779232, RETURN};
Inst func_5131777888_op1[2] = {func_5131777632, RETURN};
Inst func_5131778032_op0[2] = {func_5131777888, RETURN};
Inst func_5131778032_op1[2] = {func_5131781408, RETURN};
Inst func_5131779680_op0[2] = {func_5131778928, RETURN};
Inst func_5131779680_op1[2] = {func_5131778544, RETURN};
Inst func_5131779808_op0[2] = {func_5131777088, RETURN};
Inst func_5131779808_op1[2] = {func_5131777424, RETURN};
Inst func_5131780112_op0[2] = {func_5131792528, RETURN};
Inst func_5131780240_op0[2] = {func_5131760704, HALT};
Inst func_5131780768_op0[2] = {func_5131793184, RETURN};
Inst func_5131780768_op1[2] = {func_5131792400, RETURN};
Inst func_5131780768_op2[2] = {func_5131793328, RETURN};
Inst func_5131780768_op3[2] = {func_5131793488, RETURN};
Inst func_5131780768_op4[2] = {func_5131793616, RETURN};
Inst func_5131780768_op5[2] = {func_5131793808, RETURN};
Inst func_5131780768_op6[2] = {func_5131793936, RETURN};
Inst func_5131780768_op7[2] = {func_5131794064, RETURN};
Inst func_5131780768_op8[2] = {func_5131794192, RETURN};
Inst func_5131780768_op9[2] = {func_5131793744, RETURN};
Inst func_5131780768_op10[2] = {func_5131794512, RETURN};
Inst func_5131780448_op0[2] = {func_5131792816, RETURN};
Inst exp_5131780640[3] = {func_5131780960, func_5131779104, RETURN};
Inst exp_5131781088[3] = {func_5131779808, func_5131777424, RETURN};
Inst exp_5131783280[4] = {func_5131783408, func_5131760704, func_5131783536, RETURN};
Inst exp_5131783664[4] = {func_5131783792, func_5131778032, func_5131791760, RETURN};
Inst exp_5131781488[3] = {func_5131778416, func_5131784256, RETURN};
Inst exp_5131792144[4] = {func_5131784512, func_5131778032, func_5131791760, RETURN};
Inst exp_5131792272[4] = {func_5131777632, func_5131792400, func_5131777632, RETURN};
Inst exp_5131781408[3] = {func_5131777888, func_5131778032, RETURN};
Inst exp_5131792528[3] = {func_5131778416, func_5131784096, RETURN};
Inst exp_5131792816[4] = {func_5131760704, func_5131784704, func_5131779808, RETURN};
void func_5131760704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5131760704_op0;
        break;
        case 1:
            PC = func_5131760704_op1;
        break;
    }
}
void func_5131777216(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5131777216_op0;
        break;
    }
}
void func_5131777424(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5131777424_op0;
        break;
        case 1:
            PC = func_5131777424_op1;
        break;
        case 2:
            PC = func_5131777424_op2;
        break;
    }
}
void func_5131777632(void) {
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
            PC = func_5131777632_op0;
        break;
        case 1:
            PC = func_5131777632_op1;
        break;
    }
}
void func_5131777088(void) {
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
            PC = func_5131777088_op0;
        break;
    }
}
void func_5131778288(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5131778288_op0;
        break;
        case 1:
            PC = func_5131778288_op1;
        break;
        case 2:
            PC = func_5131778288_op2;
        break;
        case 3:
            PC = func_5131778288_op3;
        break;
        case 4:
            PC = func_5131778288_op4;
        break;
        case 5:
            PC = func_5131778288_op5;
        break;
        case 6:
            PC = func_5131778288_op6;
        break;
        case 7:
            PC = func_5131778288_op7;
        break;
        case 8:
            PC = func_5131778288_op8;
        break;
        case 9:
            PC = func_5131778288_op9;
        break;
    }
}
void func_5131778416(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5131778416_op0;
        break;
        case 1:
            PC = func_5131778416_op1;
        break;
        case 2:
            PC = func_5131778416_op2;
        break;
        case 3:
            PC = func_5131778416_op3;
        break;
        case 4:
            PC = func_5131778416_op4;
        break;
    }
}
void func_5131778192(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5131778192_op0;
        break;
    }
}
void func_5131777968(void) {
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
            PC = func_5131777968_op0;
        break;
    }
}
void func_5131779984(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5131779984_op0;
        break;
        case 1:
            PC = func_5131779984_op1;
        break;
        case 2:
            PC = func_5131779984_op2;
        break;
        case 3:
            PC = func_5131779984_op3;
        break;
        case 4:
            PC = func_5131779984_op4;
        break;
        case 5:
            PC = func_5131779984_op5;
        break;
        case 6:
            PC = func_5131779984_op6;
        break;
        case 7:
            PC = func_5131779984_op7;
        break;
        case 8:
            PC = func_5131779984_op8;
        break;
        case 9:
            PC = func_5131779984_op9;
        break;
        case 10:
            PC = func_5131779984_op10;
        break;
        case 11:
            PC = func_5131779984_op11;
        break;
        case 12:
            PC = func_5131779984_op12;
        break;
        case 13:
            PC = func_5131779984_op13;
        break;
        case 14:
            PC = func_5131779984_op14;
        break;
        case 15:
            PC = func_5131779984_op15;
        break;
        case 16:
            PC = func_5131779984_op16;
        break;
        case 17:
            PC = func_5131779984_op17;
        break;
        case 18:
            PC = func_5131779984_op18;
        break;
        case 19:
            PC = func_5131779984_op19;
        break;
        case 20:
            PC = func_5131779984_op20;
        break;
        case 21:
            PC = func_5131779984_op21;
        break;
        case 22:
            PC = func_5131779984_op22;
        break;
        case 23:
            PC = func_5131779984_op23;
        break;
        case 24:
            PC = func_5131779984_op24;
        break;
        case 25:
            PC = func_5131779984_op25;
        break;
        case 26:
            PC = func_5131779984_op26;
        break;
        case 27:
            PC = func_5131779984_op27;
        break;
        case 28:
            PC = func_5131779984_op28;
        break;
        case 29:
            PC = func_5131779984_op29;
        break;
        case 30:
            PC = func_5131779984_op30;
        break;
        case 31:
            PC = func_5131779984_op31;
        break;
        case 32:
            PC = func_5131779984_op32;
        break;
        case 33:
            PC = func_5131779984_op33;
        break;
        case 34:
            PC = func_5131779984_op34;
        break;
        case 35:
            PC = func_5131779984_op35;
        break;
        case 36:
            PC = func_5131779984_op36;
        break;
        case 37:
            PC = func_5131779984_op37;
        break;
        case 38:
            PC = func_5131779984_op38;
        break;
        case 39:
            PC = func_5131779984_op39;
        break;
        case 40:
            PC = func_5131779984_op40;
        break;
        case 41:
            PC = func_5131779984_op41;
        break;
        case 42:
            PC = func_5131779984_op42;
        break;
        case 43:
            PC = func_5131779984_op43;
        break;
        case 44:
            PC = func_5131779984_op44;
        break;
        case 45:
            PC = func_5131779984_op45;
        break;
        case 46:
            PC = func_5131779984_op46;
        break;
        case 47:
            PC = func_5131779984_op47;
        break;
        case 48:
            PC = func_5131779984_op48;
        break;
        case 49:
            PC = func_5131779984_op49;
        break;
        case 50:
            PC = func_5131779984_op50;
        break;
        case 51:
            PC = func_5131779984_op51;
        break;
    }
}
void func_5131779104(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        return;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5131779104_op0;
        break;
        case 1:
            PC = func_5131779104_op1;
        break;
        case 2:
            PC = func_5131779104_op2;
        break;
        case 3:
            PC = func_5131779104_op3;
        break;
        case 4:
            PC = func_5131779104_op4;
        break;
        case 5:
            PC = func_5131779104_op5;
        break;
        case 6:
            PC = func_5131779104_op6;
        break;
        case 7:
            PC = func_5131779104_op7;
        break;
        case 8:
            PC = func_5131779104_op8;
        break;
        case 9:
            PC = func_5131779104_op9;
        break;
        case 10:
            PC = func_5131779104_op10;
        break;
        case 11:
            PC = func_5131779104_op11;
        break;
        case 12:
            PC = func_5131779104_op12;
        break;
        case 13:
            PC = func_5131779104_op13;
        break;
    }
}
void func_5131778544(void) {
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
            PC = func_5131778544_op0;
        break;
    }
}
void func_5131778672(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5131778672_op0;
        break;
        case 1:
            PC = func_5131778672_op1;
        break;
        case 2:
            PC = func_5131778672_op2;
        break;
    }
}
void func_5131778800(void) {
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
            PC = func_5131778800_op0;
        break;
    }
}
void func_5131778928(void) {
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
            PC = func_5131778928_op0;
        break;
    }
}
void func_5131779232(void) {
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
            PC = func_5131779232_op0;
        break;
    }
}
void func_5131777888(void) {
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
            PC = func_5131777888_op0;
        break;
        case 1:
            PC = func_5131777888_op1;
        break;
    }
}
void func_5131778032(void) {
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
            PC = func_5131778032_op0;
        break;
        case 1:
            PC = func_5131778032_op1;
        break;
    }
}
void func_5131779680(void) {
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
            PC = func_5131779680_op0;
        break;
        case 1:
            PC = func_5131779680_op1;
        break;
    }
}
void func_5131779808(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5131779808_op0;
        break;
        case 1:
            PC = func_5131779808_op1;
        break;
    }
}
void func_5131780112(void) {
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
            PC = func_5131780112_op0;
        break;
    }
}
void func_5131780240(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5131780240_op0;
        break;
    }
}
void func_5131780768(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        return;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5131780768_op0;
        break;
        case 1:
            PC = func_5131780768_op1;
        break;
        case 2:
            PC = func_5131780768_op2;
        break;
        case 3:
            PC = func_5131780768_op3;
        break;
        case 4:
            PC = func_5131780768_op4;
        break;
        case 5:
            PC = func_5131780768_op5;
        break;
        case 6:
            PC = func_5131780768_op6;
        break;
        case 7:
            PC = func_5131780768_op7;
        break;
        case 8:
            PC = func_5131780768_op8;
        break;
        case 9:
            PC = func_5131780768_op9;
        break;
        case 10:
            PC = func_5131780768_op10;
        break;
    }
}
void func_5131780448(void) {
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
            PC = func_5131780448_op0;
        break;
    }
}
void func_5131780368(void) {
    extend(46);
    NEXT();
}
void func_5131780640(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5131780640;
}
void func_5131780960(void) {
    extend(92);
    NEXT();
}
void func_5131781088(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5131781088;
}
void func_5131781584(void) {
    extend(48);
    NEXT();
}
void func_5131781712(void) {
    extend(49);
    NEXT();
}
void func_5131781840(void) {
    extend(50);
    NEXT();
}
void func_5131782000(void) {
    extend(51);
    NEXT();
}
void func_5131782128(void) {
    extend(52);
    NEXT();
}
void func_5131779488(void) {
    extend(53);
    NEXT();
}
void func_5131782704(void) {
    extend(54);
    NEXT();
}
void func_5131782832(void) {
    extend(55);
    NEXT();
}
void func_5131782960(void) {
    extend(56);
    NEXT();
}
void func_5131779424(void) {
    extend(57);
    NEXT();
}
void func_5131781280(void) {
    extend(36);
    NEXT();
}
void func_5131783280(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5131783280;
}
void func_5131783408(void) {
    extend(40);
    NEXT();
}
void func_5131783536(void) {
    extend(41);
    NEXT();
}
void func_5131785008(void) {
    extend(97);
    NEXT();
}
void func_5131785136(void) {
    extend(98);
    NEXT();
}
void func_5131785264(void) {
    extend(99);
    NEXT();
}
void func_5131785424(void) {
    extend(100);
    NEXT();
}
void func_5131785552(void) {
    extend(101);
    NEXT();
}
void func_5131785744(void) {
    extend(102);
    NEXT();
}
void func_5131785872(void) {
    extend(103);
    NEXT();
}
void func_5131786000(void) {
    extend(104);
    NEXT();
}
void func_5131786128(void) {
    extend(105);
    NEXT();
}
void func_5131785680(void) {
    extend(106);
    NEXT();
}
void func_5131786448(void) {
    extend(107);
    NEXT();
}
void func_5131786576(void) {
    extend(108);
    NEXT();
}
void func_5131786704(void) {
    extend(109);
    NEXT();
}
void func_5131786832(void) {
    extend(110);
    NEXT();
}
void func_5131786960(void) {
    extend(111);
    NEXT();
}
void func_5131787088(void) {
    extend(112);
    NEXT();
}
void func_5131787216(void) {
    extend(113);
    NEXT();
}
void func_5131786256(void) {
    extend(114);
    NEXT();
}
void func_5131787600(void) {
    extend(115);
    NEXT();
}
void func_5131787728(void) {
    extend(116);
    NEXT();
}
void func_5131787856(void) {
    extend(117);
    NEXT();
}
void func_5131787984(void) {
    extend(118);
    NEXT();
}
void func_5131788112(void) {
    extend(119);
    NEXT();
}
void func_5131782256(void) {
    extend(120);
    NEXT();
}
void func_5131782384(void) {
    extend(121);
    NEXT();
}
void func_5131782512(void) {
    extend(122);
    NEXT();
}
void func_5131782640(void) {
    extend(65);
    NEXT();
}
void func_5131788240(void) {
    extend(66);
    NEXT();
}
void func_5131788368(void) {
    extend(67);
    NEXT();
}
void func_5131788496(void) {
    extend(68);
    NEXT();
}
void func_5131788624(void) {
    extend(69);
    NEXT();
}
void func_5131788752(void) {
    extend(70);
    NEXT();
}
void func_5131788880(void) {
    extend(71);
    NEXT();
}
void func_5131787344(void) {
    extend(72);
    NEXT();
}
void func_5131787472(void) {
    extend(73);
    NEXT();
}
void func_5131789520(void) {
    extend(74);
    NEXT();
}
void func_5131789648(void) {
    extend(75);
    NEXT();
}
void func_5131789776(void) {
    extend(76);
    NEXT();
}
void func_5131789904(void) {
    extend(77);
    NEXT();
}
void func_5131790032(void) {
    extend(78);
    NEXT();
}
void func_5131790160(void) {
    extend(79);
    NEXT();
}
void func_5131790288(void) {
    extend(80);
    NEXT();
}
void func_5131790416(void) {
    extend(81);
    NEXT();
}
void func_5131790544(void) {
    extend(82);
    NEXT();
}
void func_5131790672(void) {
    extend(83);
    NEXT();
}
void func_5131790800(void) {
    extend(84);
    NEXT();
}
void func_5131790928(void) {
    extend(85);
    NEXT();
}
void func_5131791056(void) {
    extend(86);
    NEXT();
}
void func_5131791184(void) {
    extend(87);
    NEXT();
}
void func_5131791312(void) {
    extend(88);
    NEXT();
}
void func_5131791440(void) {
    extend(89);
    NEXT();
}
void func_5131791568(void) {
    extend(90);
    NEXT();
}
void func_5131784096(void) {
    extend(42);
    NEXT();
}
void func_5131784256(void) {
    extend(43);
    NEXT();
}
void func_5131784384(void) {
    extend(63);
    NEXT();
}
void func_5131784576(void) {
    extend(94);
    NEXT();
}
void func_5131784704(void) {
    extend(124);
    NEXT();
}
void func_5131784512(void) {
    extend(91);
    NEXT();
}
void func_5131791760(void) {
    extend(93);
    NEXT();
}
void func_5131791888(void) {
    extend(123);
    NEXT();
}
void func_5131792016(void) {
    extend(125);
    NEXT();
}
void func_5131783664(void) {
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
    PC = exp_5131783664;
}
void func_5131783792(void) {
    extend(91);
    extend(94);
    NEXT();
}
void func_5131781488(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        return;
    }
    store();
    PC = exp_5131781488;
}
void func_5131792144(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5131792144;
}
void func_5131792272(void) {
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
    PC = exp_5131792272;
}
void func_5131792400(void) {
    extend(45);
    NEXT();
}
void func_5131781408(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5131781408;
}
void func_5131792528(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        return;
    }
    store();
    PC = exp_5131792528;
}
void func_5131793184(void) {
    extend(95);
    NEXT();
}
void func_5131793328(void) {
    extend(64);
    NEXT();
}
void func_5131793488(void) {
    extend(35);
    NEXT();
}
void func_5131793616(void) {
    extend(37);
    NEXT();
}
void func_5131793808(void) {
    extend(38);
    NEXT();
}
void func_5131793936(void) {
    extend(61);
    NEXT();
}
void func_5131794064(void) {
    extend(126);
    NEXT();
}
void func_5131794192(void) {
    extend(96);
    NEXT();
}
void func_5131793744(void) {
    extend(39);
    NEXT();
}
void func_5131794512(void) {
    extend(34);
    NEXT();
}
void func_5131792816(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5131792816;
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
    PC =func_5131780240_op0;
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
