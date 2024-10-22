#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 25
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
void func_5584745536(void);
void func_5584762048(void);
void func_5584762256(void);
void func_5584762464(void);
void func_5584761920(void);
void func_5584763120(void);
void func_5584763248(void);
void func_5584763024(void);
void func_5584762800(void);
void func_5584764816(void);
void func_5584763936(void);
void func_5584763376(void);
void func_5584763504(void);
void func_5584763632(void);
void func_5584763760(void);
void func_5584764064(void);
void func_5584762720(void);
void func_5584762864(void);
void func_5584764512(void);
void func_5584764640(void);
void func_5584764944(void);
void func_5584765072(void);
void func_5584765600(void);
void func_5584765280(void);
void func_5584765200(void);
void func_5584765472(void);
void func_5584765792(void);
void func_5584765920(void);
void func_5584766416(void);
void func_5584766544(void);
void func_5584766672(void);
void func_5584766832(void);
void func_5584766960(void);
void func_5584764320(void);
void func_5584767536(void);
void func_5584767664(void);
void func_5584767792(void);
void func_5584764256(void);
void func_5584766112(void);
void func_5584768112(void);
void func_5584768240(void);
void func_5584768368(void);
void func_5584769840(void);
void func_5584769968(void);
void func_5584770096(void);
void func_5584770256(void);
void func_5584770384(void);
void func_5584770576(void);
void func_5584770704(void);
void func_5584770832(void);
void func_5584770960(void);
void func_5584770512(void);
void func_5584771280(void);
void func_5584771408(void);
void func_5584771536(void);
void func_5584771664(void);
void func_5584771792(void);
void func_5584771920(void);
void func_5584772048(void);
void func_5584771088(void);
void func_5584772432(void);
void func_5584772560(void);
void func_5584772688(void);
void func_5584772816(void);
void func_5584772944(void);
void func_5584767088(void);
void func_5584767216(void);
void func_5584767344(void);
void func_5584767472(void);
void func_5584773072(void);
void func_5584773200(void);
void func_5584773328(void);
void func_5584773456(void);
void func_5584773584(void);
void func_5584773712(void);
void func_5584772176(void);
void func_5584772304(void);
void func_5584774352(void);
void func_5584774480(void);
void func_5584774608(void);
void func_5584774736(void);
void func_5584774864(void);
void func_5584774992(void);
void func_5584775120(void);
void func_5584775248(void);
void func_5584775376(void);
void func_5584775504(void);
void func_5584775632(void);
void func_5584775760(void);
void func_5584775888(void);
void func_5584776016(void);
void func_5584776144(void);
void func_5584776272(void);
void func_5584776400(void);
void func_5584768928(void);
void func_5584769088(void);
void func_5584769216(void);
void func_5584769408(void);
void func_5584769536(void);
void func_5584769344(void);
void func_5584776592(void);
void func_5584776720(void);
void func_5584776848(void);
void func_5584768496(void);
void func_5584768624(void);
void func_5584766320(void);
void func_5584776976(void);
void func_5584777104(void);
void func_5584777232(void);
void func_5584766240(void);
void func_5584777360(void);
void func_5584778016(void);
void func_5584778160(void);
void func_5584778320(void);
void func_5584778448(void);
void func_5584778640(void);
void func_5584778768(void);
void func_5584778896(void);
void func_5584779024(void);
void func_5584778576(void);
void func_5584779344(void);
void func_5584777648(void);
void HALT(void);
void RETURN(void);
Inst func_5584745536_op0[2] = {func_5584765280, RETURN};
Inst func_5584745536_op1[2] = {func_5584764640, RETURN};
Inst func_5584762048_op0[2] = {func_5584765200, RETURN};
Inst func_5584762256_op0[2] = {func_5584764944, RETURN};
Inst func_5584762256_op1[2] = {func_5584763632, RETURN};
Inst func_5584762256_op2[2] = {func_5584763248, RETURN};
Inst func_5584762464_op0[2] = {func_5584763504, RETURN};
Inst func_5584762464_op1[2] = {func_5584765472, RETURN};
Inst func_5584761920_op0[2] = {func_5584765920, RETURN};
Inst func_5584763120_op0[2] = {func_5584766416, RETURN};
Inst func_5584763120_op1[2] = {func_5584766544, RETURN};
Inst func_5584763120_op2[2] = {func_5584766672, RETURN};
Inst func_5584763120_op3[2] = {func_5584766832, RETURN};
Inst func_5584763120_op4[2] = {func_5584766960, RETURN};
Inst func_5584763120_op5[2] = {func_5584764320, RETURN};
Inst func_5584763120_op6[2] = {func_5584767536, RETURN};
Inst func_5584763120_op7[2] = {func_5584767664, RETURN};
Inst func_5584763120_op8[2] = {func_5584767792, RETURN};
Inst func_5584763120_op9[2] = {func_5584764256, RETURN};
Inst func_5584763248_op0[2] = {func_5584762800, RETURN};
Inst func_5584763248_op1[2] = {func_5584762048, RETURN};
Inst func_5584763248_op2[2] = {func_5584763024, RETURN};
Inst func_5584763248_op3[2] = {func_5584762464, RETURN};
Inst func_5584763248_op4[2] = {func_5584764512, RETURN};
Inst func_5584763024_op0[2] = {func_5584766112, RETURN};
Inst func_5584762800_op0[2] = {func_5584768112, RETURN};
Inst func_5584764816_op0[2] = {func_5584769840, RETURN};
Inst func_5584764816_op1[2] = {func_5584769968, RETURN};
Inst func_5584764816_op2[2] = {func_5584770096, RETURN};
Inst func_5584764816_op3[2] = {func_5584770256, RETURN};
Inst func_5584764816_op4[2] = {func_5584770384, RETURN};
Inst func_5584764816_op5[2] = {func_5584770576, RETURN};
Inst func_5584764816_op6[2] = {func_5584770704, RETURN};
Inst func_5584764816_op7[2] = {func_5584770832, RETURN};
Inst func_5584764816_op8[2] = {func_5584770960, RETURN};
Inst func_5584764816_op9[2] = {func_5584770512, RETURN};
Inst func_5584764816_op10[2] = {func_5584771280, RETURN};
Inst func_5584764816_op11[2] = {func_5584771408, RETURN};
Inst func_5584764816_op12[2] = {func_5584771536, RETURN};
Inst func_5584764816_op13[2] = {func_5584771664, RETURN};
Inst func_5584764816_op14[2] = {func_5584771792, RETURN};
Inst func_5584764816_op15[2] = {func_5584771920, RETURN};
Inst func_5584764816_op16[2] = {func_5584772048, RETURN};
Inst func_5584764816_op17[2] = {func_5584771088, RETURN};
Inst func_5584764816_op18[2] = {func_5584772432, RETURN};
Inst func_5584764816_op19[2] = {func_5584772560, RETURN};
Inst func_5584764816_op20[2] = {func_5584772688, RETURN};
Inst func_5584764816_op21[2] = {func_5584772816, RETURN};
Inst func_5584764816_op22[2] = {func_5584772944, RETURN};
Inst func_5584764816_op23[2] = {func_5584767088, RETURN};
Inst func_5584764816_op24[2] = {func_5584767216, RETURN};
Inst func_5584764816_op25[2] = {func_5584767344, RETURN};
Inst func_5584764816_op26[2] = {func_5584767472, RETURN};
Inst func_5584764816_op27[2] = {func_5584773072, RETURN};
Inst func_5584764816_op28[2] = {func_5584773200, RETURN};
Inst func_5584764816_op29[2] = {func_5584773328, RETURN};
Inst func_5584764816_op30[2] = {func_5584773456, RETURN};
Inst func_5584764816_op31[2] = {func_5584773584, RETURN};
Inst func_5584764816_op32[2] = {func_5584773712, RETURN};
Inst func_5584764816_op33[2] = {func_5584772176, RETURN};
Inst func_5584764816_op34[2] = {func_5584772304, RETURN};
Inst func_5584764816_op35[2] = {func_5584774352, RETURN};
Inst func_5584764816_op36[2] = {func_5584774480, RETURN};
Inst func_5584764816_op37[2] = {func_5584774608, RETURN};
Inst func_5584764816_op38[2] = {func_5584774736, RETURN};
Inst func_5584764816_op39[2] = {func_5584774864, RETURN};
Inst func_5584764816_op40[2] = {func_5584774992, RETURN};
Inst func_5584764816_op41[2] = {func_5584775120, RETURN};
Inst func_5584764816_op42[2] = {func_5584775248, RETURN};
Inst func_5584764816_op43[2] = {func_5584775376, RETURN};
Inst func_5584764816_op44[2] = {func_5584775504, RETURN};
Inst func_5584764816_op45[2] = {func_5584775632, RETURN};
Inst func_5584764816_op46[2] = {func_5584775760, RETURN};
Inst func_5584764816_op47[2] = {func_5584775888, RETURN};
Inst func_5584764816_op48[2] = {func_5584776016, RETURN};
Inst func_5584764816_op49[2] = {func_5584776144, RETURN};
Inst func_5584764816_op50[2] = {func_5584776272, RETURN};
Inst func_5584764816_op51[2] = {func_5584776400, RETURN};
Inst func_5584763936_op0[2] = {func_5584765792, RETURN};
Inst func_5584763936_op1[2] = {func_5584765200, RETURN};
Inst func_5584763936_op2[2] = {func_5584768928, RETURN};
Inst func_5584763936_op3[2] = {func_5584769088, RETURN};
Inst func_5584763936_op4[2] = {func_5584769216, RETURN};
Inst func_5584763936_op5[2] = {func_5584769408, RETURN};
Inst func_5584763936_op6[2] = {func_5584766112, RETURN};
Inst func_5584763936_op7[2] = {func_5584769536, RETURN};
Inst func_5584763936_op8[2] = {func_5584768240, RETURN};
Inst func_5584763936_op9[2] = {func_5584768368, RETURN};
Inst func_5584763936_op10[2] = {func_5584769344, RETURN};
Inst func_5584763936_op11[2] = {func_5584776592, RETURN};
Inst func_5584763936_op12[2] = {func_5584776720, RETURN};
Inst func_5584763936_op13[2] = {func_5584776848, RETURN};
Inst func_5584763376_op0[2] = {func_5584768496, RETURN};
Inst func_5584763504_op0[2] = {func_5584764816, RETURN};
Inst func_5584763504_op1[2] = {func_5584763120, RETURN};
Inst func_5584763504_op2[2] = {func_5584765600, RETURN};
Inst func_5584763632_op0[2] = {func_5584766320, RETURN};
Inst func_5584763760_op0[2] = {func_5584776976, RETURN};
Inst func_5584764064_op0[2] = {func_5584777104, RETURN};
Inst func_5584762720_op0[2] = {func_5584764064, RETURN};
Inst func_5584762720_op1[2] = {func_5584762464, RETURN};
Inst func_5584762864_op0[2] = {func_5584762720, RETURN};
Inst func_5584762864_op1[2] = {func_5584766240, RETURN};
Inst func_5584764512_op0[2] = {func_5584763760, RETURN};
Inst func_5584764512_op1[2] = {func_5584763376, RETURN};
Inst func_5584764640_op0[2] = {func_5584761920, RETURN};
Inst func_5584764640_op1[2] = {func_5584762256, RETURN};
Inst func_5584764944_op0[2] = {func_5584777360, RETURN};
Inst func_5584765072_op0[2] = {func_5584745536, HALT};
Inst func_5584765600_op0[2] = {func_5584778016, RETURN};
Inst func_5584765600_op1[2] = {func_5584777232, RETURN};
Inst func_5584765600_op2[2] = {func_5584778160, RETURN};
Inst func_5584765600_op3[2] = {func_5584778320, RETURN};
Inst func_5584765600_op4[2] = {func_5584778448, RETURN};
Inst func_5584765600_op5[2] = {func_5584778640, RETURN};
Inst func_5584765600_op6[2] = {func_5584778768, RETURN};
Inst func_5584765600_op7[2] = {func_5584778896, RETURN};
Inst func_5584765600_op8[2] = {func_5584779024, RETURN};
Inst func_5584765600_op9[2] = {func_5584778576, RETURN};
Inst func_5584765600_op10[2] = {func_5584779344, RETURN};
Inst func_5584765280_op0[2] = {func_5584777648, RETURN};
Inst exp_5584765472[3] = {func_5584765792, func_5584763936, RETURN};
Inst exp_5584765920[3] = {func_5584764640, func_5584762256, RETURN};
Inst exp_5584768112[4] = {func_5584768240, func_5584745536, func_5584768368, RETURN};
Inst exp_5584768496[4] = {func_5584768624, func_5584762864, func_5584776592, RETURN};
Inst exp_5584766320[3] = {func_5584763248, func_5584769088, RETURN};
Inst exp_5584776976[4] = {func_5584769344, func_5584762864, func_5584776592, RETURN};
Inst exp_5584777104[4] = {func_5584762464, func_5584777232, func_5584762464, RETURN};
Inst exp_5584766240[3] = {func_5584762720, func_5584762864, RETURN};
Inst exp_5584777360[3] = {func_5584763248, func_5584768928, RETURN};
Inst exp_5584777648[4] = {func_5584745536, func_5584769536, func_5584764640, RETURN};
void func_5584745536(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5584745536_op0;
        break;
        case 1:
            PC = func_5584745536_op1;
        break;
    }
}
void func_5584762048(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5584762048_op0;
        break;
    }
}
void func_5584762256(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5584762256_op0;
        break;
        case 1:
            PC = func_5584762256_op1;
        break;
        case 2:
            PC = func_5584762256_op2;
        break;
    }
}
void func_5584762464(void) {
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
            PC = func_5584762464_op0;
        break;
        case 1:
            PC = func_5584762464_op1;
        break;
    }
}
void func_5584761920(void) {
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
            PC = func_5584761920_op0;
        break;
    }
}
void func_5584763120(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5584763120_op0;
        break;
        case 1:
            PC = func_5584763120_op1;
        break;
        case 2:
            PC = func_5584763120_op2;
        break;
        case 3:
            PC = func_5584763120_op3;
        break;
        case 4:
            PC = func_5584763120_op4;
        break;
        case 5:
            PC = func_5584763120_op5;
        break;
        case 6:
            PC = func_5584763120_op6;
        break;
        case 7:
            PC = func_5584763120_op7;
        break;
        case 8:
            PC = func_5584763120_op8;
        break;
        case 9:
            PC = func_5584763120_op9;
        break;
    }
}
void func_5584763248(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5584763248_op0;
        break;
        case 1:
            PC = func_5584763248_op1;
        break;
        case 2:
            PC = func_5584763248_op2;
        break;
        case 3:
            PC = func_5584763248_op3;
        break;
        case 4:
            PC = func_5584763248_op4;
        break;
    }
}
void func_5584763024(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5584763024_op0;
        break;
    }
}
void func_5584762800(void) {
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
            PC = func_5584762800_op0;
        break;
    }
}
void func_5584764816(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5584764816_op0;
        break;
        case 1:
            PC = func_5584764816_op1;
        break;
        case 2:
            PC = func_5584764816_op2;
        break;
        case 3:
            PC = func_5584764816_op3;
        break;
        case 4:
            PC = func_5584764816_op4;
        break;
        case 5:
            PC = func_5584764816_op5;
        break;
        case 6:
            PC = func_5584764816_op6;
        break;
        case 7:
            PC = func_5584764816_op7;
        break;
        case 8:
            PC = func_5584764816_op8;
        break;
        case 9:
            PC = func_5584764816_op9;
        break;
        case 10:
            PC = func_5584764816_op10;
        break;
        case 11:
            PC = func_5584764816_op11;
        break;
        case 12:
            PC = func_5584764816_op12;
        break;
        case 13:
            PC = func_5584764816_op13;
        break;
        case 14:
            PC = func_5584764816_op14;
        break;
        case 15:
            PC = func_5584764816_op15;
        break;
        case 16:
            PC = func_5584764816_op16;
        break;
        case 17:
            PC = func_5584764816_op17;
        break;
        case 18:
            PC = func_5584764816_op18;
        break;
        case 19:
            PC = func_5584764816_op19;
        break;
        case 20:
            PC = func_5584764816_op20;
        break;
        case 21:
            PC = func_5584764816_op21;
        break;
        case 22:
            PC = func_5584764816_op22;
        break;
        case 23:
            PC = func_5584764816_op23;
        break;
        case 24:
            PC = func_5584764816_op24;
        break;
        case 25:
            PC = func_5584764816_op25;
        break;
        case 26:
            PC = func_5584764816_op26;
        break;
        case 27:
            PC = func_5584764816_op27;
        break;
        case 28:
            PC = func_5584764816_op28;
        break;
        case 29:
            PC = func_5584764816_op29;
        break;
        case 30:
            PC = func_5584764816_op30;
        break;
        case 31:
            PC = func_5584764816_op31;
        break;
        case 32:
            PC = func_5584764816_op32;
        break;
        case 33:
            PC = func_5584764816_op33;
        break;
        case 34:
            PC = func_5584764816_op34;
        break;
        case 35:
            PC = func_5584764816_op35;
        break;
        case 36:
            PC = func_5584764816_op36;
        break;
        case 37:
            PC = func_5584764816_op37;
        break;
        case 38:
            PC = func_5584764816_op38;
        break;
        case 39:
            PC = func_5584764816_op39;
        break;
        case 40:
            PC = func_5584764816_op40;
        break;
        case 41:
            PC = func_5584764816_op41;
        break;
        case 42:
            PC = func_5584764816_op42;
        break;
        case 43:
            PC = func_5584764816_op43;
        break;
        case 44:
            PC = func_5584764816_op44;
        break;
        case 45:
            PC = func_5584764816_op45;
        break;
        case 46:
            PC = func_5584764816_op46;
        break;
        case 47:
            PC = func_5584764816_op47;
        break;
        case 48:
            PC = func_5584764816_op48;
        break;
        case 49:
            PC = func_5584764816_op49;
        break;
        case 50:
            PC = func_5584764816_op50;
        break;
        case 51:
            PC = func_5584764816_op51;
        break;
    }
}
void func_5584763936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        return;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5584763936_op0;
        break;
        case 1:
            PC = func_5584763936_op1;
        break;
        case 2:
            PC = func_5584763936_op2;
        break;
        case 3:
            PC = func_5584763936_op3;
        break;
        case 4:
            PC = func_5584763936_op4;
        break;
        case 5:
            PC = func_5584763936_op5;
        break;
        case 6:
            PC = func_5584763936_op6;
        break;
        case 7:
            PC = func_5584763936_op7;
        break;
        case 8:
            PC = func_5584763936_op8;
        break;
        case 9:
            PC = func_5584763936_op9;
        break;
        case 10:
            PC = func_5584763936_op10;
        break;
        case 11:
            PC = func_5584763936_op11;
        break;
        case 12:
            PC = func_5584763936_op12;
        break;
        case 13:
            PC = func_5584763936_op13;
        break;
    }
}
void func_5584763376(void) {
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
            PC = func_5584763376_op0;
        break;
    }
}
void func_5584763504(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5584763504_op0;
        break;
        case 1:
            PC = func_5584763504_op1;
        break;
        case 2:
            PC = func_5584763504_op2;
        break;
    }
}
void func_5584763632(void) {
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
            PC = func_5584763632_op0;
        break;
    }
}
void func_5584763760(void) {
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
            PC = func_5584763760_op0;
        break;
    }
}
void func_5584764064(void) {
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
            PC = func_5584764064_op0;
        break;
    }
}
void func_5584762720(void) {
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
            PC = func_5584762720_op0;
        break;
        case 1:
            PC = func_5584762720_op1;
        break;
    }
}
void func_5584762864(void) {
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
            PC = func_5584762864_op0;
        break;
        case 1:
            PC = func_5584762864_op1;
        break;
    }
}
void func_5584764512(void) {
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
            PC = func_5584764512_op0;
        break;
        case 1:
            PC = func_5584764512_op1;
        break;
    }
}
void func_5584764640(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5584764640_op0;
        break;
        case 1:
            PC = func_5584764640_op1;
        break;
    }
}
void func_5584764944(void) {
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
            PC = func_5584764944_op0;
        break;
    }
}
void func_5584765072(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5584765072_op0;
        break;
    }
}
void func_5584765600(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        return;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5584765600_op0;
        break;
        case 1:
            PC = func_5584765600_op1;
        break;
        case 2:
            PC = func_5584765600_op2;
        break;
        case 3:
            PC = func_5584765600_op3;
        break;
        case 4:
            PC = func_5584765600_op4;
        break;
        case 5:
            PC = func_5584765600_op5;
        break;
        case 6:
            PC = func_5584765600_op6;
        break;
        case 7:
            PC = func_5584765600_op7;
        break;
        case 8:
            PC = func_5584765600_op8;
        break;
        case 9:
            PC = func_5584765600_op9;
        break;
        case 10:
            PC = func_5584765600_op10;
        break;
    }
}
void func_5584765280(void) {
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
            PC = func_5584765280_op0;
        break;
    }
}
void func_5584765200(void) {
    extend(46);
    NEXT();
}
void func_5584765472(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5584765472;
}
void func_5584765792(void) {
    extend(92);
    NEXT();
}
void func_5584765920(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5584765920;
}
void func_5584766416(void) {
    extend(48);
    NEXT();
}
void func_5584766544(void) {
    extend(49);
    NEXT();
}
void func_5584766672(void) {
    extend(50);
    NEXT();
}
void func_5584766832(void) {
    extend(51);
    NEXT();
}
void func_5584766960(void) {
    extend(52);
    NEXT();
}
void func_5584764320(void) {
    extend(53);
    NEXT();
}
void func_5584767536(void) {
    extend(54);
    NEXT();
}
void func_5584767664(void) {
    extend(55);
    NEXT();
}
void func_5584767792(void) {
    extend(56);
    NEXT();
}
void func_5584764256(void) {
    extend(57);
    NEXT();
}
void func_5584766112(void) {
    extend(36);
    NEXT();
}
void func_5584768112(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5584768112;
}
void func_5584768240(void) {
    extend(40);
    NEXT();
}
void func_5584768368(void) {
    extend(41);
    NEXT();
}
void func_5584769840(void) {
    extend(97);
    NEXT();
}
void func_5584769968(void) {
    extend(98);
    NEXT();
}
void func_5584770096(void) {
    extend(99);
    NEXT();
}
void func_5584770256(void) {
    extend(100);
    NEXT();
}
void func_5584770384(void) {
    extend(101);
    NEXT();
}
void func_5584770576(void) {
    extend(102);
    NEXT();
}
void func_5584770704(void) {
    extend(103);
    NEXT();
}
void func_5584770832(void) {
    extend(104);
    NEXT();
}
void func_5584770960(void) {
    extend(105);
    NEXT();
}
void func_5584770512(void) {
    extend(106);
    NEXT();
}
void func_5584771280(void) {
    extend(107);
    NEXT();
}
void func_5584771408(void) {
    extend(108);
    NEXT();
}
void func_5584771536(void) {
    extend(109);
    NEXT();
}
void func_5584771664(void) {
    extend(110);
    NEXT();
}
void func_5584771792(void) {
    extend(111);
    NEXT();
}
void func_5584771920(void) {
    extend(112);
    NEXT();
}
void func_5584772048(void) {
    extend(113);
    NEXT();
}
void func_5584771088(void) {
    extend(114);
    NEXT();
}
void func_5584772432(void) {
    extend(115);
    NEXT();
}
void func_5584772560(void) {
    extend(116);
    NEXT();
}
void func_5584772688(void) {
    extend(117);
    NEXT();
}
void func_5584772816(void) {
    extend(118);
    NEXT();
}
void func_5584772944(void) {
    extend(119);
    NEXT();
}
void func_5584767088(void) {
    extend(120);
    NEXT();
}
void func_5584767216(void) {
    extend(121);
    NEXT();
}
void func_5584767344(void) {
    extend(122);
    NEXT();
}
void func_5584767472(void) {
    extend(65);
    NEXT();
}
void func_5584773072(void) {
    extend(66);
    NEXT();
}
void func_5584773200(void) {
    extend(67);
    NEXT();
}
void func_5584773328(void) {
    extend(68);
    NEXT();
}
void func_5584773456(void) {
    extend(69);
    NEXT();
}
void func_5584773584(void) {
    extend(70);
    NEXT();
}
void func_5584773712(void) {
    extend(71);
    NEXT();
}
void func_5584772176(void) {
    extend(72);
    NEXT();
}
void func_5584772304(void) {
    extend(73);
    NEXT();
}
void func_5584774352(void) {
    extend(74);
    NEXT();
}
void func_5584774480(void) {
    extend(75);
    NEXT();
}
void func_5584774608(void) {
    extend(76);
    NEXT();
}
void func_5584774736(void) {
    extend(77);
    NEXT();
}
void func_5584774864(void) {
    extend(78);
    NEXT();
}
void func_5584774992(void) {
    extend(79);
    NEXT();
}
void func_5584775120(void) {
    extend(80);
    NEXT();
}
void func_5584775248(void) {
    extend(81);
    NEXT();
}
void func_5584775376(void) {
    extend(82);
    NEXT();
}
void func_5584775504(void) {
    extend(83);
    NEXT();
}
void func_5584775632(void) {
    extend(84);
    NEXT();
}
void func_5584775760(void) {
    extend(85);
    NEXT();
}
void func_5584775888(void) {
    extend(86);
    NEXT();
}
void func_5584776016(void) {
    extend(87);
    NEXT();
}
void func_5584776144(void) {
    extend(88);
    NEXT();
}
void func_5584776272(void) {
    extend(89);
    NEXT();
}
void func_5584776400(void) {
    extend(90);
    NEXT();
}
void func_5584768928(void) {
    extend(42);
    NEXT();
}
void func_5584769088(void) {
    extend(43);
    NEXT();
}
void func_5584769216(void) {
    extend(63);
    NEXT();
}
void func_5584769408(void) {
    extend(94);
    NEXT();
}
void func_5584769536(void) {
    extend(124);
    NEXT();
}
void func_5584769344(void) {
    extend(91);
    NEXT();
}
void func_5584776592(void) {
    extend(93);
    NEXT();
}
void func_5584776720(void) {
    extend(123);
    NEXT();
}
void func_5584776848(void) {
    extend(125);
    NEXT();
}
void func_5584768496(void) {
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
    PC = exp_5584768496;
}
void func_5584768624(void) {
    extend(91);
    extend(94);
    NEXT();
}
void func_5584766320(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        return;
    }
    store();
    PC = exp_5584766320;
}
void func_5584776976(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5584776976;
}
void func_5584777104(void) {
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
    PC = exp_5584777104;
}
void func_5584777232(void) {
    extend(45);
    NEXT();
}
void func_5584766240(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5584766240;
}
void func_5584777360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        return;
    }
    store();
    PC = exp_5584777360;
}
void func_5584778016(void) {
    extend(95);
    NEXT();
}
void func_5584778160(void) {
    extend(64);
    NEXT();
}
void func_5584778320(void) {
    extend(35);
    NEXT();
}
void func_5584778448(void) {
    extend(37);
    NEXT();
}
void func_5584778640(void) {
    extend(38);
    NEXT();
}
void func_5584778768(void) {
    extend(61);
    NEXT();
}
void func_5584778896(void) {
    extend(126);
    NEXT();
}
void func_5584779024(void) {
    extend(96);
    NEXT();
}
void func_5584778576(void) {
    extend(39);
    NEXT();
}
void func_5584779344(void) {
    extend(34);
    NEXT();
}
void func_5584777648(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5584777648;
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
    PC =func_5584765072_op0;
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
