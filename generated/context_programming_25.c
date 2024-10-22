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
void func_5316324752(void);
void func_5316325504(void);
void func_5316325664(void);
void func_5316325376(void);
void func_5316325024(void);
void func_5316324624(void);
void func_5316325264(void);
void func_5316325792(void);
void func_5316327424(void);
void func_5316324944(void);
void func_5316325984(void);
void func_5316326192(void);
void func_5316326112(void);
void func_5316326624(void);
void func_5316326912(void);
void func_5316326464(void);
void func_5316326384(void);
void func_5316326848(void);
void func_5316327168(void);
void func_5316327296(void);
void func_5316328448(void);
void func_5316328576(void);
void func_5316328704(void);
void func_5316328832(void);
void func_5316328960(void);
void func_5316329088(void);
void func_5316329248(void);
void func_5316329376(void);
void func_5316329536(void);
void func_5316329664(void);
void func_5316329888(void);
void func_5316330016(void);
void func_5316330192(void);
void func_5316327680(void);
void func_5316328320(void);
void func_5316327872(void);
void func_5316330768(void);
void func_5316330896(void);
void func_5316331024(void);
void func_5316331216(void);
void func_5316331344(void);
void func_5316331472(void);
void func_5316331600(void);
void func_5316331152(void);
void func_5316327808(void);
void func_5316332144(void);
void func_5316328000(void);
void func_5316328128(void);
void func_5316332000(void);
void func_5316332368(void);
void func_5316332496(void);
void func_5316326752(void);
void func_5316333104(void);
void func_5316327488(void);
void func_5316333360(void);
void func_5316332704(void);
void func_5316333664(void);
void func_5316333792(void);
void func_5316335136(void);
void func_5316335264(void);
void func_5316335392(void);
void func_5316335552(void);
void func_5316335680(void);
void func_5316335872(void);
void func_5316336000(void);
void func_5316330320(void);
void func_5316330448(void);
void func_5316335808(void);
void func_5316336064(void);
void func_5316336192(void);
void func_5316336320(void);
void func_5316336448(void);
void func_5316336576(void);
void func_5316336704(void);
void func_5316336832(void);
void func_5316330576(void);
void func_5316337216(void);
void func_5316337344(void);
void func_5316337472(void);
void func_5316337600(void);
void func_5316337728(void);
void func_5316337856(void);
void func_5316337984(void);
void func_5316338112(void);
void func_5316338240(void);
void func_5316338368(void);
void func_5316338496(void);
void func_5316338624(void);
void func_5316338752(void);
void func_5316338880(void);
void func_5316339008(void);
void func_5316336960(void);
void func_5316337088(void);
void func_5316339648(void);
void func_5316339776(void);
void func_5316339904(void);
void func_5316340032(void);
void func_5316340160(void);
void func_5316340288(void);
void func_5316340416(void);
void func_5316340544(void);
void func_5316340672(void);
void func_5316340800(void);
void func_5316340928(void);
void func_5316341056(void);
void func_5316341184(void);
void func_5316341312(void);
void func_5316341440(void);
void func_5316341568(void);
void func_5316341696(void);
void func_5316333488(void);
void func_5316332832(void);
void func_5316334064(void);
void func_5316334192(void);
void func_5316334688(void);
void func_5316334816(void);
void func_5316334320(void);
void func_5316334944(void);
void func_5316341904(void);
void func_5316342032(void);
void func_5316342160(void);
void func_5316342288(void);
void func_5316342416(void);
void func_5316342544(void);
void func_5316342672(void);
void func_5316341824(void);
void func_5316334592(void);
void HALT(void);
void RETURN(void);
Inst func_5316324752_op0[2] = {func_5316326848, RETURN};
Inst func_5316325504_op0[2] = {func_5316328448, RETURN};
Inst func_5316325504_op1[2] = {func_5316328704, RETURN};
Inst func_5316325504_op2[2] = {func_5316328960, RETURN};
Inst func_5316325504_op3[2] = {func_5316329248, RETURN};
Inst func_5316325504_op4[2] = {func_5316329536, RETURN};
Inst func_5316325504_op5[2] = {func_5316329888, RETURN};
Inst func_5316325504_op6[2] = {func_5316330192, RETURN};
Inst func_5316325664_op0[2] = {func_5316328320, RETURN};
Inst func_5316325664_op1[2] = {func_5316327872, RETURN};
Inst func_5316325664_op2[2] = {func_5316330768, RETURN};
Inst func_5316325664_op3[2] = {func_5316330896, RETURN};
Inst func_5316325664_op4[2] = {func_5316331024, RETURN};
Inst func_5316325664_op5[2] = {func_5316331216, RETURN};
Inst func_5316325664_op6[2] = {func_5316331344, RETURN};
Inst func_5316325664_op7[2] = {func_5316331472, RETURN};
Inst func_5316325664_op8[2] = {func_5316331600, RETURN};
Inst func_5316325664_op9[2] = {func_5316331152, RETURN};
Inst func_5316325376_op0[2] = {func_5316327808, RETURN};
Inst func_5316325376_op1[2] = {func_5316328000, RETURN};
Inst func_5316325376_op2[2] = {func_5316326912, RETURN};
Inst func_5316325024_op0[2] = {func_5316332000, RETURN};
Inst func_5316325024_op1[2] = {func_5316324944, RETURN};
Inst func_5316325024_op2[2] = {func_5316325264, RETURN};
Inst func_5316324624_op0[2] = {func_5316326752, RETURN};
Inst func_5316325264_op0[2] = {func_5316332704, RETURN};
Inst func_5316325264_op1[2] = {func_5316327424, RETURN};
Inst func_5316325792_op0[2] = {func_5316333664, RETURN};
Inst func_5316327424_op0[2] = {func_5316335136, RETURN};
Inst func_5316327424_op1[2] = {func_5316335264, RETURN};
Inst func_5316327424_op2[2] = {func_5316335392, RETURN};
Inst func_5316327424_op3[2] = {func_5316335552, RETURN};
Inst func_5316327424_op4[2] = {func_5316335680, RETURN};
Inst func_5316327424_op5[2] = {func_5316335872, RETURN};
Inst func_5316327424_op6[2] = {func_5316336000, RETURN};
Inst func_5316327424_op7[2] = {func_5316330320, RETURN};
Inst func_5316327424_op8[2] = {func_5316330448, RETURN};
Inst func_5316327424_op9[2] = {func_5316335808, RETURN};
Inst func_5316327424_op10[2] = {func_5316336064, RETURN};
Inst func_5316327424_op11[2] = {func_5316336192, RETURN};
Inst func_5316327424_op12[2] = {func_5316336320, RETURN};
Inst func_5316327424_op13[2] = {func_5316336448, RETURN};
Inst func_5316327424_op14[2] = {func_5316336576, RETURN};
Inst func_5316327424_op15[2] = {func_5316336704, RETURN};
Inst func_5316327424_op16[2] = {func_5316336832, RETURN};
Inst func_5316327424_op17[2] = {func_5316330576, RETURN};
Inst func_5316327424_op18[2] = {func_5316337216, RETURN};
Inst func_5316327424_op19[2] = {func_5316337344, RETURN};
Inst func_5316327424_op20[2] = {func_5316337472, RETURN};
Inst func_5316327424_op21[2] = {func_5316337600, RETURN};
Inst func_5316327424_op22[2] = {func_5316337728, RETURN};
Inst func_5316327424_op23[2] = {func_5316337856, RETURN};
Inst func_5316327424_op24[2] = {func_5316337984, RETURN};
Inst func_5316327424_op25[2] = {func_5316338112, RETURN};
Inst func_5316327424_op26[2] = {func_5316338240, RETURN};
Inst func_5316327424_op27[2] = {func_5316338368, RETURN};
Inst func_5316327424_op28[2] = {func_5316338496, RETURN};
Inst func_5316327424_op29[2] = {func_5316338624, RETURN};
Inst func_5316327424_op30[2] = {func_5316338752, RETURN};
Inst func_5316327424_op31[2] = {func_5316338880, RETURN};
Inst func_5316327424_op32[2] = {func_5316339008, RETURN};
Inst func_5316327424_op33[2] = {func_5316336960, RETURN};
Inst func_5316327424_op34[2] = {func_5316337088, RETURN};
Inst func_5316327424_op35[2] = {func_5316339648, RETURN};
Inst func_5316327424_op36[2] = {func_5316339776, RETURN};
Inst func_5316327424_op37[2] = {func_5316339904, RETURN};
Inst func_5316327424_op38[2] = {func_5316340032, RETURN};
Inst func_5316327424_op39[2] = {func_5316340160, RETURN};
Inst func_5316327424_op40[2] = {func_5316340288, RETURN};
Inst func_5316327424_op41[2] = {func_5316340416, RETURN};
Inst func_5316327424_op42[2] = {func_5316340544, RETURN};
Inst func_5316327424_op43[2] = {func_5316340672, RETURN};
Inst func_5316327424_op44[2] = {func_5316340800, RETURN};
Inst func_5316327424_op45[2] = {func_5316340928, RETURN};
Inst func_5316327424_op46[2] = {func_5316341056, RETURN};
Inst func_5316327424_op47[2] = {func_5316341184, RETURN};
Inst func_5316327424_op48[2] = {func_5316341312, RETURN};
Inst func_5316327424_op49[2] = {func_5316341440, RETURN};
Inst func_5316327424_op50[2] = {func_5316341568, RETURN};
Inst func_5316327424_op51[2] = {func_5316341696, RETURN};
Inst func_5316324944_op0[2] = {func_5316333488, RETURN};
Inst func_5316324944_op1[2] = {func_5316325664, RETURN};
Inst func_5316325984_op0[2] = {func_5316332832, RETURN};
Inst func_5316325984_op1[2] = {func_5316326624, RETURN};
Inst func_5316326192_op0[2] = {func_5316334064, RETURN};
Inst func_5316326112_op0[2] = {func_5316325984, HALT};
Inst func_5316326624_op0[2] = {func_5316326464, RETURN};
Inst func_5316326624_op1[2] = {func_5316324752, RETURN};
Inst func_5316326624_op2[2] = {func_5316325792, RETURN};
Inst func_5316326624_op3[2] = {func_5316326384, RETURN};
Inst func_5316326624_op4[2] = {func_5316324624, RETURN};
Inst func_5316326624_op5[2] = {func_5316326192, RETURN};
Inst func_5316326912_op0[2] = {func_5316334688, RETURN};
Inst func_5316326912_op1[2] = {func_5316334320, RETURN};
Inst func_5316326912_op2[2] = {func_5316325024, RETURN};
Inst func_5316326464_op0[2] = {func_5316341904, RETURN};
Inst func_5316326464_op1[2] = {func_5316342288, RETURN};
Inst func_5316326464_op2[2] = {func_5316342544, RETURN};
Inst func_5316326384_op0[2] = {func_5316341824, RETURN};
Inst exp_5316326848[5] = {func_5316325264, func_5316327168, func_5316325376, func_5316327296, RETURN};
Inst exp_5316328448[4] = {func_5316325376, func_5316328576, func_5316325376, RETURN};
Inst exp_5316328704[4] = {func_5316325376, func_5316328832, func_5316325376, RETURN};
Inst exp_5316328960[4] = {func_5316325376, func_5316329088, func_5316325376, RETURN};
Inst exp_5316329248[4] = {func_5316325376, func_5316329376, func_5316325376, RETURN};
Inst exp_5316329536[4] = {func_5316325504, func_5316329664, func_5316325504, RETURN};
Inst exp_5316329888[4] = {func_5316325504, func_5316330016, func_5316325504, RETURN};
Inst exp_5316330192[3] = {func_5316327680, func_5316325504, RETURN};
Inst exp_5316327808[4] = {func_5316325376, func_5316332144, func_5316326912, RETURN};
Inst exp_5316328000[4] = {func_5316325376, func_5316328128, func_5316326912, RETURN};
Inst exp_5316332000[4] = {func_5316332368, func_5316325376, func_5316332496, RETURN};
Inst exp_5316326752[8] = {func_5316333104, func_5316325264, func_5316332368, func_5316332496, func_5316327488, func_5316325984, func_5316333360, RETURN};
Inst exp_5316332704[3] = {func_5316327424, func_5316325264, RETURN};
Inst exp_5316333664[8] = {func_5316333792, func_5316332368, func_5316325504, func_5316332496, func_5316327488, func_5316325984, func_5316333360, RETURN};
Inst exp_5316333488[3] = {func_5316325664, func_5316324944, RETURN};
Inst exp_5316332832[3] = {func_5316325984, func_5316326624, RETURN};
Inst exp_5316334064[4] = {func_5316334192, func_5316325376, func_5316327296, RETURN};
Inst exp_5316334688[4] = {func_5316326912, func_5316334816, func_5316325024, RETURN};
Inst exp_5316334320[4] = {func_5316326912, func_5316334944, func_5316325024, RETURN};
Inst exp_5316341904[4] = {func_5316342032, func_5316325264, func_5316342160, RETURN};
Inst exp_5316342288[4] = {func_5316342416, func_5316325264, func_5316342160, RETURN};
Inst exp_5316342544[4] = {func_5316342672, func_5316325264, func_5316342160, RETURN};
Inst exp_5316341824[8] = {func_5316334592, func_5316332368, func_5316325504, func_5316332496, func_5316327488, func_5316325984, func_5316333360, RETURN};
void func_5316324752(void) {
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
            PC = func_5316324752_op0;
        break;
    }
}
void func_5316325504(void) {
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
            PC = func_5316325504_op0;
        break;
        case 1:
            PC = func_5316325504_op1;
        break;
        case 2:
            PC = func_5316325504_op2;
        break;
        case 3:
            PC = func_5316325504_op3;
        break;
        case 4:
            PC = func_5316325504_op4;
        break;
        case 5:
            PC = func_5316325504_op5;
        break;
        case 6:
            PC = func_5316325504_op6;
        break;
    }
}
void func_5316325664(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5316325664_op0;
        break;
        case 1:
            PC = func_5316325664_op1;
        break;
        case 2:
            PC = func_5316325664_op2;
        break;
        case 3:
            PC = func_5316325664_op3;
        break;
        case 4:
            PC = func_5316325664_op4;
        break;
        case 5:
            PC = func_5316325664_op5;
        break;
        case 6:
            PC = func_5316325664_op6;
        break;
        case 7:
            PC = func_5316325664_op7;
        break;
        case 8:
            PC = func_5316325664_op8;
        break;
        case 9:
            PC = func_5316325664_op9;
        break;
    }
}
void func_5316325376(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5316325376_op0;
        break;
        case 1:
            PC = func_5316325376_op1;
        break;
        case 2:
            PC = func_5316325376_op2;
        break;
    }
}
void func_5316325024(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5316325024_op0;
        break;
        case 1:
            PC = func_5316325024_op1;
        break;
        case 2:
            PC = func_5316325024_op2;
        break;
    }
}
void func_5316324624(void) {
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
            PC = func_5316324624_op0;
        break;
    }
}
void func_5316325264(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5316325264_op0;
        break;
        case 1:
            PC = func_5316325264_op1;
        break;
    }
}
void func_5316325792(void) {
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
            PC = func_5316325792_op0;
        break;
    }
}
void func_5316327424(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5316327424_op0;
        break;
        case 1:
            PC = func_5316327424_op1;
        break;
        case 2:
            PC = func_5316327424_op2;
        break;
        case 3:
            PC = func_5316327424_op3;
        break;
        case 4:
            PC = func_5316327424_op4;
        break;
        case 5:
            PC = func_5316327424_op5;
        break;
        case 6:
            PC = func_5316327424_op6;
        break;
        case 7:
            PC = func_5316327424_op7;
        break;
        case 8:
            PC = func_5316327424_op8;
        break;
        case 9:
            PC = func_5316327424_op9;
        break;
        case 10:
            PC = func_5316327424_op10;
        break;
        case 11:
            PC = func_5316327424_op11;
        break;
        case 12:
            PC = func_5316327424_op12;
        break;
        case 13:
            PC = func_5316327424_op13;
        break;
        case 14:
            PC = func_5316327424_op14;
        break;
        case 15:
            PC = func_5316327424_op15;
        break;
        case 16:
            PC = func_5316327424_op16;
        break;
        case 17:
            PC = func_5316327424_op17;
        break;
        case 18:
            PC = func_5316327424_op18;
        break;
        case 19:
            PC = func_5316327424_op19;
        break;
        case 20:
            PC = func_5316327424_op20;
        break;
        case 21:
            PC = func_5316327424_op21;
        break;
        case 22:
            PC = func_5316327424_op22;
        break;
        case 23:
            PC = func_5316327424_op23;
        break;
        case 24:
            PC = func_5316327424_op24;
        break;
        case 25:
            PC = func_5316327424_op25;
        break;
        case 26:
            PC = func_5316327424_op26;
        break;
        case 27:
            PC = func_5316327424_op27;
        break;
        case 28:
            PC = func_5316327424_op28;
        break;
        case 29:
            PC = func_5316327424_op29;
        break;
        case 30:
            PC = func_5316327424_op30;
        break;
        case 31:
            PC = func_5316327424_op31;
        break;
        case 32:
            PC = func_5316327424_op32;
        break;
        case 33:
            PC = func_5316327424_op33;
        break;
        case 34:
            PC = func_5316327424_op34;
        break;
        case 35:
            PC = func_5316327424_op35;
        break;
        case 36:
            PC = func_5316327424_op36;
        break;
        case 37:
            PC = func_5316327424_op37;
        break;
        case 38:
            PC = func_5316327424_op38;
        break;
        case 39:
            PC = func_5316327424_op39;
        break;
        case 40:
            PC = func_5316327424_op40;
        break;
        case 41:
            PC = func_5316327424_op41;
        break;
        case 42:
            PC = func_5316327424_op42;
        break;
        case 43:
            PC = func_5316327424_op43;
        break;
        case 44:
            PC = func_5316327424_op44;
        break;
        case 45:
            PC = func_5316327424_op45;
        break;
        case 46:
            PC = func_5316327424_op46;
        break;
        case 47:
            PC = func_5316327424_op47;
        break;
        case 48:
            PC = func_5316327424_op48;
        break;
        case 49:
            PC = func_5316327424_op49;
        break;
        case 50:
            PC = func_5316327424_op50;
        break;
        case 51:
            PC = func_5316327424_op51;
        break;
    }
}
void func_5316324944(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5316324944_op0;
        break;
        case 1:
            PC = func_5316324944_op1;
        break;
    }
}
void func_5316325984(void) {
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
            PC = func_5316325984_op0;
        break;
        case 1:
            PC = func_5316325984_op1;
        break;
    }
}
void func_5316326192(void) {
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
            PC = func_5316326192_op0;
        break;
    }
}
void func_5316326112(void) {
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
            PC = func_5316326112_op0;
        break;
    }
}
void func_5316326624(void) {
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
            PC = func_5316326624_op0;
        break;
        case 1:
            PC = func_5316326624_op1;
        break;
        case 2:
            PC = func_5316326624_op2;
        break;
        case 3:
            PC = func_5316326624_op3;
        break;
        case 4:
            PC = func_5316326624_op4;
        break;
        case 5:
            PC = func_5316326624_op5;
        break;
    }
}
void func_5316326912(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5316326912_op0;
        break;
        case 1:
            PC = func_5316326912_op1;
        break;
        case 2:
            PC = func_5316326912_op2;
        break;
    }
}
void func_5316326464(void) {
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
            PC = func_5316326464_op0;
        break;
        case 1:
            PC = func_5316326464_op1;
        break;
        case 2:
            PC = func_5316326464_op2;
        break;
    }
}
void func_5316326384(void) {
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
            PC = func_5316326384_op0;
        break;
    }
}
void func_5316326848(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5316326848;
}
void func_5316327168(void) {
    extend(61);
    NEXT();
}
void func_5316327296(void) {
    extend(59);
    NEXT();
}
void func_5316328448(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5316328448;
}
void func_5316328576(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5316328704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5316328704;
}
void func_5316328832(void) {
    extend(33);
    extend(61);
    NEXT();
}
void func_5316328960(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5316328960;
}
void func_5316329088(void) {
    extend(62);
    NEXT();
}
void func_5316329248(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5316329248;
}
void func_5316329376(void) {
    extend(60);
    NEXT();
}
void func_5316329536(void) {
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
    PC = exp_5316329536;
}
void func_5316329664(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_5316329888(void) {
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
    PC = exp_5316329888;
}
void func_5316330016(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_5316330192(void) {
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
    PC = exp_5316330192;
}
void func_5316327680(void) {
    extend(78);
    extend(79);
    extend(84);
    NEXT();
}
void func_5316328320(void) {
    extend(48);
    NEXT();
}
void func_5316327872(void) {
    extend(49);
    NEXT();
}
void func_5316330768(void) {
    extend(50);
    NEXT();
}
void func_5316330896(void) {
    extend(51);
    NEXT();
}
void func_5316331024(void) {
    extend(52);
    NEXT();
}
void func_5316331216(void) {
    extend(53);
    NEXT();
}
void func_5316331344(void) {
    extend(54);
    NEXT();
}
void func_5316331472(void) {
    extend(55);
    NEXT();
}
void func_5316331600(void) {
    extend(56);
    NEXT();
}
void func_5316331152(void) {
    extend(57);
    NEXT();
}
void func_5316327808(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5316327808;
}
void func_5316332144(void) {
    extend(43);
    NEXT();
}
void func_5316328000(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5316328000;
}
void func_5316328128(void) {
    extend(45);
    NEXT();
}
void func_5316332000(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5316332000;
}
void func_5316332368(void) {
    extend(40);
    NEXT();
}
void func_5316332496(void) {
    extend(41);
    NEXT();
}
void func_5316326752(void) {
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
    PC = exp_5316326752;
}
void func_5316333104(void) {
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
void func_5316327488(void) {
    extend(123);
    NEXT();
}
void func_5316333360(void) {
    extend(125);
    NEXT();
}
void func_5316332704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        return;
    }
    store();
    PC = exp_5316332704;
}
void func_5316333664(void) {
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
    PC = exp_5316333664;
}
void func_5316333792(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5316335136(void) {
    extend(97);
    NEXT();
}
void func_5316335264(void) {
    extend(98);
    NEXT();
}
void func_5316335392(void) {
    extend(99);
    NEXT();
}
void func_5316335552(void) {
    extend(100);
    NEXT();
}
void func_5316335680(void) {
    extend(101);
    NEXT();
}
void func_5316335872(void) {
    extend(102);
    NEXT();
}
void func_5316336000(void) {
    extend(103);
    NEXT();
}
void func_5316330320(void) {
    extend(104);
    NEXT();
}
void func_5316330448(void) {
    extend(105);
    NEXT();
}
void func_5316335808(void) {
    extend(106);
    NEXT();
}
void func_5316336064(void) {
    extend(107);
    NEXT();
}
void func_5316336192(void) {
    extend(108);
    NEXT();
}
void func_5316336320(void) {
    extend(109);
    NEXT();
}
void func_5316336448(void) {
    extend(110);
    NEXT();
}
void func_5316336576(void) {
    extend(111);
    NEXT();
}
void func_5316336704(void) {
    extend(112);
    NEXT();
}
void func_5316336832(void) {
    extend(113);
    NEXT();
}
void func_5316330576(void) {
    extend(114);
    NEXT();
}
void func_5316337216(void) {
    extend(115);
    NEXT();
}
void func_5316337344(void) {
    extend(116);
    NEXT();
}
void func_5316337472(void) {
    extend(117);
    NEXT();
}
void func_5316337600(void) {
    extend(118);
    NEXT();
}
void func_5316337728(void) {
    extend(119);
    NEXT();
}
void func_5316337856(void) {
    extend(120);
    NEXT();
}
void func_5316337984(void) {
    extend(121);
    NEXT();
}
void func_5316338112(void) {
    extend(122);
    NEXT();
}
void func_5316338240(void) {
    extend(65);
    NEXT();
}
void func_5316338368(void) {
    extend(66);
    NEXT();
}
void func_5316338496(void) {
    extend(67);
    NEXT();
}
void func_5316338624(void) {
    extend(68);
    NEXT();
}
void func_5316338752(void) {
    extend(69);
    NEXT();
}
void func_5316338880(void) {
    extend(70);
    NEXT();
}
void func_5316339008(void) {
    extend(71);
    NEXT();
}
void func_5316336960(void) {
    extend(72);
    NEXT();
}
void func_5316337088(void) {
    extend(73);
    NEXT();
}
void func_5316339648(void) {
    extend(74);
    NEXT();
}
void func_5316339776(void) {
    extend(75);
    NEXT();
}
void func_5316339904(void) {
    extend(76);
    NEXT();
}
void func_5316340032(void) {
    extend(77);
    NEXT();
}
void func_5316340160(void) {
    extend(78);
    NEXT();
}
void func_5316340288(void) {
    extend(79);
    NEXT();
}
void func_5316340416(void) {
    extend(80);
    NEXT();
}
void func_5316340544(void) {
    extend(81);
    NEXT();
}
void func_5316340672(void) {
    extend(82);
    NEXT();
}
void func_5316340800(void) {
    extend(83);
    NEXT();
}
void func_5316340928(void) {
    extend(84);
    NEXT();
}
void func_5316341056(void) {
    extend(85);
    NEXT();
}
void func_5316341184(void) {
    extend(86);
    NEXT();
}
void func_5316341312(void) {
    extend(87);
    NEXT();
}
void func_5316341440(void) {
    extend(88);
    NEXT();
}
void func_5316341568(void) {
    extend(89);
    NEXT();
}
void func_5316341696(void) {
    extend(90);
    NEXT();
}
void func_5316333488(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5316333488;
}
void func_5316332832(void) {
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
    PC = exp_5316332832;
}
void func_5316334064(void) {
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
    PC = exp_5316334064;
}
void func_5316334192(void) {
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
void func_5316334688(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5316334688;
}
void func_5316334816(void) {
    extend(42);
    NEXT();
}
void func_5316334320(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5316334320;
}
void func_5316334944(void) {
    extend(47);
    NEXT();
}
void func_5316341904(void) {
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
    PC = exp_5316341904;
}
void func_5316342032(void) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5316342160(void) {
    extend(32);
    extend(59);
    extend(32);
    NEXT();
}
void func_5316342288(void) {
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
    PC = exp_5316342288;
}
void func_5316342416(void) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
}
void func_5316342544(void) {
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
    PC = exp_5316342544;
}
void func_5316342672(void) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
}
void func_5316341824(void) {
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
    PC = exp_5316341824;
}
void func_5316334592(void) {
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
    PC =func_5316326112_op0;
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
