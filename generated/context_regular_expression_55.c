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
void func_5710574656(void);
void func_5710591168(void);
void func_5710591376(void);
void func_5710591584(void);
void func_5710591040(void);
void func_5710592240(void);
void func_5710592368(void);
void func_5710592144(void);
void func_5710591920(void);
void func_5710593936(void);
void func_5710593056(void);
void func_5710592496(void);
void func_5710592624(void);
void func_5710592752(void);
void func_5710592880(void);
void func_5710593184(void);
void func_5710591840(void);
void func_5710591984(void);
void func_5710593632(void);
void func_5710593760(void);
void func_5710594064(void);
void func_5710594192(void);
void func_5710594720(void);
void func_5710594400(void);
void func_5710594320(void);
void func_5710594592(void);
void func_5710594912(void);
void func_5710595040(void);
void func_5710595536(void);
void func_5710595664(void);
void func_5710595792(void);
void func_5710595952(void);
void func_5710596080(void);
void func_5710593440(void);
void func_5710596656(void);
void func_5710596784(void);
void func_5710596912(void);
void func_5710593376(void);
void func_5710595232(void);
void func_5710597232(void);
void func_5710597360(void);
void func_5710597488(void);
void func_5710598960(void);
void func_5710599088(void);
void func_5710599216(void);
void func_5710599376(void);
void func_5710599504(void);
void func_5710599696(void);
void func_5710599824(void);
void func_5710599952(void);
void func_5710600080(void);
void func_5710599632(void);
void func_5710600400(void);
void func_5710600528(void);
void func_5710600656(void);
void func_5710600784(void);
void func_5710600912(void);
void func_5710601040(void);
void func_5710601168(void);
void func_5710600208(void);
void func_5710601552(void);
void func_5710601680(void);
void func_5710601808(void);
void func_5710601936(void);
void func_5710602064(void);
void func_5710596208(void);
void func_5710596336(void);
void func_5710596464(void);
void func_5710596592(void);
void func_5710602192(void);
void func_5710602320(void);
void func_5710602448(void);
void func_5710602576(void);
void func_5710602704(void);
void func_5710602832(void);
void func_5710601296(void);
void func_5710601424(void);
void func_5710603472(void);
void func_5710603600(void);
void func_5710603728(void);
void func_5710603856(void);
void func_5710603984(void);
void func_5710604112(void);
void func_5710604240(void);
void func_5710604368(void);
void func_5710604496(void);
void func_5710604624(void);
void func_5710604752(void);
void func_5710604880(void);
void func_5710605008(void);
void func_5710605136(void);
void func_5710605264(void);
void func_5710605392(void);
void func_5710605520(void);
void func_5710598048(void);
void func_5710598208(void);
void func_5710598336(void);
void func_5710598528(void);
void func_5710598656(void);
void func_5710598464(void);
void func_5710605712(void);
void func_5710605840(void);
void func_5710605968(void);
void func_5710597616(void);
void func_5710597744(void);
void func_5710595440(void);
void func_5710606096(void);
void func_5710606224(void);
void func_5710606352(void);
void func_5710595360(void);
void func_5710606480(void);
void func_5710607136(void);
void func_5710607280(void);
void func_5710607440(void);
void func_5710607568(void);
void func_5710607760(void);
void func_5710607888(void);
void func_5710608016(void);
void func_5710608144(void);
void func_5710607696(void);
void func_5710608464(void);
void func_5710606768(void);
void HALT(void);
void RETURN(void);
Inst func_5710574656_op0[2] = {func_5710594400, RETURN};
Inst func_5710574656_op1[2] = {func_5710593760, RETURN};
Inst func_5710591168_op0[2] = {func_5710594320, RETURN};
Inst func_5710591376_op0[2] = {func_5710594064, RETURN};
Inst func_5710591376_op1[2] = {func_5710592752, RETURN};
Inst func_5710591376_op2[2] = {func_5710592368, RETURN};
Inst func_5710591584_op0[2] = {func_5710592624, RETURN};
Inst func_5710591584_op1[2] = {func_5710594592, RETURN};
Inst func_5710591040_op0[2] = {func_5710595040, RETURN};
Inst func_5710592240_op0[2] = {func_5710595536, RETURN};
Inst func_5710592240_op1[2] = {func_5710595664, RETURN};
Inst func_5710592240_op2[2] = {func_5710595792, RETURN};
Inst func_5710592240_op3[2] = {func_5710595952, RETURN};
Inst func_5710592240_op4[2] = {func_5710596080, RETURN};
Inst func_5710592240_op5[2] = {func_5710593440, RETURN};
Inst func_5710592240_op6[2] = {func_5710596656, RETURN};
Inst func_5710592240_op7[2] = {func_5710596784, RETURN};
Inst func_5710592240_op8[2] = {func_5710596912, RETURN};
Inst func_5710592240_op9[2] = {func_5710593376, RETURN};
Inst func_5710592368_op0[2] = {func_5710591920, RETURN};
Inst func_5710592368_op1[2] = {func_5710591168, RETURN};
Inst func_5710592368_op2[2] = {func_5710592144, RETURN};
Inst func_5710592368_op3[2] = {func_5710591584, RETURN};
Inst func_5710592368_op4[2] = {func_5710593632, RETURN};
Inst func_5710592144_op0[2] = {func_5710595232, RETURN};
Inst func_5710591920_op0[2] = {func_5710597232, RETURN};
Inst func_5710593936_op0[2] = {func_5710598960, RETURN};
Inst func_5710593936_op1[2] = {func_5710599088, RETURN};
Inst func_5710593936_op2[2] = {func_5710599216, RETURN};
Inst func_5710593936_op3[2] = {func_5710599376, RETURN};
Inst func_5710593936_op4[2] = {func_5710599504, RETURN};
Inst func_5710593936_op5[2] = {func_5710599696, RETURN};
Inst func_5710593936_op6[2] = {func_5710599824, RETURN};
Inst func_5710593936_op7[2] = {func_5710599952, RETURN};
Inst func_5710593936_op8[2] = {func_5710600080, RETURN};
Inst func_5710593936_op9[2] = {func_5710599632, RETURN};
Inst func_5710593936_op10[2] = {func_5710600400, RETURN};
Inst func_5710593936_op11[2] = {func_5710600528, RETURN};
Inst func_5710593936_op12[2] = {func_5710600656, RETURN};
Inst func_5710593936_op13[2] = {func_5710600784, RETURN};
Inst func_5710593936_op14[2] = {func_5710600912, RETURN};
Inst func_5710593936_op15[2] = {func_5710601040, RETURN};
Inst func_5710593936_op16[2] = {func_5710601168, RETURN};
Inst func_5710593936_op17[2] = {func_5710600208, RETURN};
Inst func_5710593936_op18[2] = {func_5710601552, RETURN};
Inst func_5710593936_op19[2] = {func_5710601680, RETURN};
Inst func_5710593936_op20[2] = {func_5710601808, RETURN};
Inst func_5710593936_op21[2] = {func_5710601936, RETURN};
Inst func_5710593936_op22[2] = {func_5710602064, RETURN};
Inst func_5710593936_op23[2] = {func_5710596208, RETURN};
Inst func_5710593936_op24[2] = {func_5710596336, RETURN};
Inst func_5710593936_op25[2] = {func_5710596464, RETURN};
Inst func_5710593936_op26[2] = {func_5710596592, RETURN};
Inst func_5710593936_op27[2] = {func_5710602192, RETURN};
Inst func_5710593936_op28[2] = {func_5710602320, RETURN};
Inst func_5710593936_op29[2] = {func_5710602448, RETURN};
Inst func_5710593936_op30[2] = {func_5710602576, RETURN};
Inst func_5710593936_op31[2] = {func_5710602704, RETURN};
Inst func_5710593936_op32[2] = {func_5710602832, RETURN};
Inst func_5710593936_op33[2] = {func_5710601296, RETURN};
Inst func_5710593936_op34[2] = {func_5710601424, RETURN};
Inst func_5710593936_op35[2] = {func_5710603472, RETURN};
Inst func_5710593936_op36[2] = {func_5710603600, RETURN};
Inst func_5710593936_op37[2] = {func_5710603728, RETURN};
Inst func_5710593936_op38[2] = {func_5710603856, RETURN};
Inst func_5710593936_op39[2] = {func_5710603984, RETURN};
Inst func_5710593936_op40[2] = {func_5710604112, RETURN};
Inst func_5710593936_op41[2] = {func_5710604240, RETURN};
Inst func_5710593936_op42[2] = {func_5710604368, RETURN};
Inst func_5710593936_op43[2] = {func_5710604496, RETURN};
Inst func_5710593936_op44[2] = {func_5710604624, RETURN};
Inst func_5710593936_op45[2] = {func_5710604752, RETURN};
Inst func_5710593936_op46[2] = {func_5710604880, RETURN};
Inst func_5710593936_op47[2] = {func_5710605008, RETURN};
Inst func_5710593936_op48[2] = {func_5710605136, RETURN};
Inst func_5710593936_op49[2] = {func_5710605264, RETURN};
Inst func_5710593936_op50[2] = {func_5710605392, RETURN};
Inst func_5710593936_op51[2] = {func_5710605520, RETURN};
Inst func_5710593056_op0[2] = {func_5710594912, RETURN};
Inst func_5710593056_op1[2] = {func_5710594320, RETURN};
Inst func_5710593056_op2[2] = {func_5710598048, RETURN};
Inst func_5710593056_op3[2] = {func_5710598208, RETURN};
Inst func_5710593056_op4[2] = {func_5710598336, RETURN};
Inst func_5710593056_op5[2] = {func_5710598528, RETURN};
Inst func_5710593056_op6[2] = {func_5710595232, RETURN};
Inst func_5710593056_op7[2] = {func_5710598656, RETURN};
Inst func_5710593056_op8[2] = {func_5710597360, RETURN};
Inst func_5710593056_op9[2] = {func_5710597488, RETURN};
Inst func_5710593056_op10[2] = {func_5710598464, RETURN};
Inst func_5710593056_op11[2] = {func_5710605712, RETURN};
Inst func_5710593056_op12[2] = {func_5710605840, RETURN};
Inst func_5710593056_op13[2] = {func_5710605968, RETURN};
Inst func_5710592496_op0[2] = {func_5710597616, RETURN};
Inst func_5710592624_op0[2] = {func_5710593936, RETURN};
Inst func_5710592624_op1[2] = {func_5710592240, RETURN};
Inst func_5710592624_op2[2] = {func_5710594720, RETURN};
Inst func_5710592752_op0[2] = {func_5710595440, RETURN};
Inst func_5710592880_op0[2] = {func_5710606096, RETURN};
Inst func_5710593184_op0[2] = {func_5710606224, RETURN};
Inst func_5710591840_op0[2] = {func_5710593184, RETURN};
Inst func_5710591840_op1[2] = {func_5710591584, RETURN};
Inst func_5710591984_op0[2] = {func_5710591840, RETURN};
Inst func_5710591984_op1[2] = {func_5710595360, RETURN};
Inst func_5710593632_op0[2] = {func_5710592880, RETURN};
Inst func_5710593632_op1[2] = {func_5710592496, RETURN};
Inst func_5710593760_op0[2] = {func_5710591040, RETURN};
Inst func_5710593760_op1[2] = {func_5710591376, RETURN};
Inst func_5710594064_op0[2] = {func_5710606480, RETURN};
Inst func_5710594192_op0[2] = {func_5710574656, HALT};
Inst func_5710594720_op0[2] = {func_5710607136, RETURN};
Inst func_5710594720_op1[2] = {func_5710606352, RETURN};
Inst func_5710594720_op2[2] = {func_5710607280, RETURN};
Inst func_5710594720_op3[2] = {func_5710607440, RETURN};
Inst func_5710594720_op4[2] = {func_5710607568, RETURN};
Inst func_5710594720_op5[2] = {func_5710607760, RETURN};
Inst func_5710594720_op6[2] = {func_5710607888, RETURN};
Inst func_5710594720_op7[2] = {func_5710608016, RETURN};
Inst func_5710594720_op8[2] = {func_5710608144, RETURN};
Inst func_5710594720_op9[2] = {func_5710607696, RETURN};
Inst func_5710594720_op10[2] = {func_5710608464, RETURN};
Inst func_5710594400_op0[2] = {func_5710606768, RETURN};
Inst exp_5710594592[3] = {func_5710594912, func_5710593056, RETURN};
Inst exp_5710595040[3] = {func_5710593760, func_5710591376, RETURN};
Inst exp_5710597232[4] = {func_5710597360, func_5710574656, func_5710597488, RETURN};
Inst exp_5710597616[4] = {func_5710597744, func_5710591984, func_5710605712, RETURN};
Inst exp_5710595440[3] = {func_5710592368, func_5710598208, RETURN};
Inst exp_5710606096[4] = {func_5710598464, func_5710591984, func_5710605712, RETURN};
Inst exp_5710606224[4] = {func_5710591584, func_5710606352, func_5710591584, RETURN};
Inst exp_5710595360[3] = {func_5710591840, func_5710591984, RETURN};
Inst exp_5710606480[3] = {func_5710592368, func_5710598048, RETURN};
Inst exp_5710606768[4] = {func_5710574656, func_5710598656, func_5710593760, RETURN};
void func_5710574656(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5710574656_op0;
        break;
        case 1:
            PC = func_5710574656_op1;
        break;
    }
}
void func_5710591168(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5710591168_op0;
        break;
    }
}
void func_5710591376(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5710591376_op0;
        break;
        case 1:
            PC = func_5710591376_op1;
        break;
        case 2:
            PC = func_5710591376_op2;
        break;
    }
}
void func_5710591584(void) {
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
            PC = func_5710591584_op0;
        break;
        case 1:
            PC = func_5710591584_op1;
        break;
    }
}
void func_5710591040(void) {
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
            PC = func_5710591040_op0;
        break;
    }
}
void func_5710592240(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5710592240_op0;
        break;
        case 1:
            PC = func_5710592240_op1;
        break;
        case 2:
            PC = func_5710592240_op2;
        break;
        case 3:
            PC = func_5710592240_op3;
        break;
        case 4:
            PC = func_5710592240_op4;
        break;
        case 5:
            PC = func_5710592240_op5;
        break;
        case 6:
            PC = func_5710592240_op6;
        break;
        case 7:
            PC = func_5710592240_op7;
        break;
        case 8:
            PC = func_5710592240_op8;
        break;
        case 9:
            PC = func_5710592240_op9;
        break;
    }
}
void func_5710592368(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5710592368_op0;
        break;
        case 1:
            PC = func_5710592368_op1;
        break;
        case 2:
            PC = func_5710592368_op2;
        break;
        case 3:
            PC = func_5710592368_op3;
        break;
        case 4:
            PC = func_5710592368_op4;
        break;
    }
}
void func_5710592144(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5710592144_op0;
        break;
    }
}
void func_5710591920(void) {
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
            PC = func_5710591920_op0;
        break;
    }
}
void func_5710593936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5710593936_op0;
        break;
        case 1:
            PC = func_5710593936_op1;
        break;
        case 2:
            PC = func_5710593936_op2;
        break;
        case 3:
            PC = func_5710593936_op3;
        break;
        case 4:
            PC = func_5710593936_op4;
        break;
        case 5:
            PC = func_5710593936_op5;
        break;
        case 6:
            PC = func_5710593936_op6;
        break;
        case 7:
            PC = func_5710593936_op7;
        break;
        case 8:
            PC = func_5710593936_op8;
        break;
        case 9:
            PC = func_5710593936_op9;
        break;
        case 10:
            PC = func_5710593936_op10;
        break;
        case 11:
            PC = func_5710593936_op11;
        break;
        case 12:
            PC = func_5710593936_op12;
        break;
        case 13:
            PC = func_5710593936_op13;
        break;
        case 14:
            PC = func_5710593936_op14;
        break;
        case 15:
            PC = func_5710593936_op15;
        break;
        case 16:
            PC = func_5710593936_op16;
        break;
        case 17:
            PC = func_5710593936_op17;
        break;
        case 18:
            PC = func_5710593936_op18;
        break;
        case 19:
            PC = func_5710593936_op19;
        break;
        case 20:
            PC = func_5710593936_op20;
        break;
        case 21:
            PC = func_5710593936_op21;
        break;
        case 22:
            PC = func_5710593936_op22;
        break;
        case 23:
            PC = func_5710593936_op23;
        break;
        case 24:
            PC = func_5710593936_op24;
        break;
        case 25:
            PC = func_5710593936_op25;
        break;
        case 26:
            PC = func_5710593936_op26;
        break;
        case 27:
            PC = func_5710593936_op27;
        break;
        case 28:
            PC = func_5710593936_op28;
        break;
        case 29:
            PC = func_5710593936_op29;
        break;
        case 30:
            PC = func_5710593936_op30;
        break;
        case 31:
            PC = func_5710593936_op31;
        break;
        case 32:
            PC = func_5710593936_op32;
        break;
        case 33:
            PC = func_5710593936_op33;
        break;
        case 34:
            PC = func_5710593936_op34;
        break;
        case 35:
            PC = func_5710593936_op35;
        break;
        case 36:
            PC = func_5710593936_op36;
        break;
        case 37:
            PC = func_5710593936_op37;
        break;
        case 38:
            PC = func_5710593936_op38;
        break;
        case 39:
            PC = func_5710593936_op39;
        break;
        case 40:
            PC = func_5710593936_op40;
        break;
        case 41:
            PC = func_5710593936_op41;
        break;
        case 42:
            PC = func_5710593936_op42;
        break;
        case 43:
            PC = func_5710593936_op43;
        break;
        case 44:
            PC = func_5710593936_op44;
        break;
        case 45:
            PC = func_5710593936_op45;
        break;
        case 46:
            PC = func_5710593936_op46;
        break;
        case 47:
            PC = func_5710593936_op47;
        break;
        case 48:
            PC = func_5710593936_op48;
        break;
        case 49:
            PC = func_5710593936_op49;
        break;
        case 50:
            PC = func_5710593936_op50;
        break;
        case 51:
            PC = func_5710593936_op51;
        break;
    }
}
void func_5710593056(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        return;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5710593056_op0;
        break;
        case 1:
            PC = func_5710593056_op1;
        break;
        case 2:
            PC = func_5710593056_op2;
        break;
        case 3:
            PC = func_5710593056_op3;
        break;
        case 4:
            PC = func_5710593056_op4;
        break;
        case 5:
            PC = func_5710593056_op5;
        break;
        case 6:
            PC = func_5710593056_op6;
        break;
        case 7:
            PC = func_5710593056_op7;
        break;
        case 8:
            PC = func_5710593056_op8;
        break;
        case 9:
            PC = func_5710593056_op9;
        break;
        case 10:
            PC = func_5710593056_op10;
        break;
        case 11:
            PC = func_5710593056_op11;
        break;
        case 12:
            PC = func_5710593056_op12;
        break;
        case 13:
            PC = func_5710593056_op13;
        break;
    }
}
void func_5710592496(void) {
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
            PC = func_5710592496_op0;
        break;
    }
}
void func_5710592624(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5710592624_op0;
        break;
        case 1:
            PC = func_5710592624_op1;
        break;
        case 2:
            PC = func_5710592624_op2;
        break;
    }
}
void func_5710592752(void) {
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
            PC = func_5710592752_op0;
        break;
    }
}
void func_5710592880(void) {
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
            PC = func_5710592880_op0;
        break;
    }
}
void func_5710593184(void) {
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
            PC = func_5710593184_op0;
        break;
    }
}
void func_5710591840(void) {
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
            PC = func_5710591840_op0;
        break;
        case 1:
            PC = func_5710591840_op1;
        break;
    }
}
void func_5710591984(void) {
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
            PC = func_5710591984_op0;
        break;
        case 1:
            PC = func_5710591984_op1;
        break;
    }
}
void func_5710593632(void) {
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
            PC = func_5710593632_op0;
        break;
        case 1:
            PC = func_5710593632_op1;
        break;
    }
}
void func_5710593760(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5710593760_op0;
        break;
        case 1:
            PC = func_5710593760_op1;
        break;
    }
}
void func_5710594064(void) {
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
            PC = func_5710594064_op0;
        break;
    }
}
void func_5710594192(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5710594192_op0;
        break;
    }
}
void func_5710594720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        return;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5710594720_op0;
        break;
        case 1:
            PC = func_5710594720_op1;
        break;
        case 2:
            PC = func_5710594720_op2;
        break;
        case 3:
            PC = func_5710594720_op3;
        break;
        case 4:
            PC = func_5710594720_op4;
        break;
        case 5:
            PC = func_5710594720_op5;
        break;
        case 6:
            PC = func_5710594720_op6;
        break;
        case 7:
            PC = func_5710594720_op7;
        break;
        case 8:
            PC = func_5710594720_op8;
        break;
        case 9:
            PC = func_5710594720_op9;
        break;
        case 10:
            PC = func_5710594720_op10;
        break;
    }
}
void func_5710594400(void) {
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
            PC = func_5710594400_op0;
        break;
    }
}
void func_5710594320(void) {
    extend(46);
    NEXT();
}
void func_5710594592(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5710594592;
}
void func_5710594912(void) {
    extend(92);
    NEXT();
}
void func_5710595040(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5710595040;
}
void func_5710595536(void) {
    extend(48);
    NEXT();
}
void func_5710595664(void) {
    extend(49);
    NEXT();
}
void func_5710595792(void) {
    extend(50);
    NEXT();
}
void func_5710595952(void) {
    extend(51);
    NEXT();
}
void func_5710596080(void) {
    extend(52);
    NEXT();
}
void func_5710593440(void) {
    extend(53);
    NEXT();
}
void func_5710596656(void) {
    extend(54);
    NEXT();
}
void func_5710596784(void) {
    extend(55);
    NEXT();
}
void func_5710596912(void) {
    extend(56);
    NEXT();
}
void func_5710593376(void) {
    extend(57);
    NEXT();
}
void func_5710595232(void) {
    extend(36);
    NEXT();
}
void func_5710597232(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5710597232;
}
void func_5710597360(void) {
    extend(40);
    NEXT();
}
void func_5710597488(void) {
    extend(41);
    NEXT();
}
void func_5710598960(void) {
    extend(97);
    NEXT();
}
void func_5710599088(void) {
    extend(98);
    NEXT();
}
void func_5710599216(void) {
    extend(99);
    NEXT();
}
void func_5710599376(void) {
    extend(100);
    NEXT();
}
void func_5710599504(void) {
    extend(101);
    NEXT();
}
void func_5710599696(void) {
    extend(102);
    NEXT();
}
void func_5710599824(void) {
    extend(103);
    NEXT();
}
void func_5710599952(void) {
    extend(104);
    NEXT();
}
void func_5710600080(void) {
    extend(105);
    NEXT();
}
void func_5710599632(void) {
    extend(106);
    NEXT();
}
void func_5710600400(void) {
    extend(107);
    NEXT();
}
void func_5710600528(void) {
    extend(108);
    NEXT();
}
void func_5710600656(void) {
    extend(109);
    NEXT();
}
void func_5710600784(void) {
    extend(110);
    NEXT();
}
void func_5710600912(void) {
    extend(111);
    NEXT();
}
void func_5710601040(void) {
    extend(112);
    NEXT();
}
void func_5710601168(void) {
    extend(113);
    NEXT();
}
void func_5710600208(void) {
    extend(114);
    NEXT();
}
void func_5710601552(void) {
    extend(115);
    NEXT();
}
void func_5710601680(void) {
    extend(116);
    NEXT();
}
void func_5710601808(void) {
    extend(117);
    NEXT();
}
void func_5710601936(void) {
    extend(118);
    NEXT();
}
void func_5710602064(void) {
    extend(119);
    NEXT();
}
void func_5710596208(void) {
    extend(120);
    NEXT();
}
void func_5710596336(void) {
    extend(121);
    NEXT();
}
void func_5710596464(void) {
    extend(122);
    NEXT();
}
void func_5710596592(void) {
    extend(65);
    NEXT();
}
void func_5710602192(void) {
    extend(66);
    NEXT();
}
void func_5710602320(void) {
    extend(67);
    NEXT();
}
void func_5710602448(void) {
    extend(68);
    NEXT();
}
void func_5710602576(void) {
    extend(69);
    NEXT();
}
void func_5710602704(void) {
    extend(70);
    NEXT();
}
void func_5710602832(void) {
    extend(71);
    NEXT();
}
void func_5710601296(void) {
    extend(72);
    NEXT();
}
void func_5710601424(void) {
    extend(73);
    NEXT();
}
void func_5710603472(void) {
    extend(74);
    NEXT();
}
void func_5710603600(void) {
    extend(75);
    NEXT();
}
void func_5710603728(void) {
    extend(76);
    NEXT();
}
void func_5710603856(void) {
    extend(77);
    NEXT();
}
void func_5710603984(void) {
    extend(78);
    NEXT();
}
void func_5710604112(void) {
    extend(79);
    NEXT();
}
void func_5710604240(void) {
    extend(80);
    NEXT();
}
void func_5710604368(void) {
    extend(81);
    NEXT();
}
void func_5710604496(void) {
    extend(82);
    NEXT();
}
void func_5710604624(void) {
    extend(83);
    NEXT();
}
void func_5710604752(void) {
    extend(84);
    NEXT();
}
void func_5710604880(void) {
    extend(85);
    NEXT();
}
void func_5710605008(void) {
    extend(86);
    NEXT();
}
void func_5710605136(void) {
    extend(87);
    NEXT();
}
void func_5710605264(void) {
    extend(88);
    NEXT();
}
void func_5710605392(void) {
    extend(89);
    NEXT();
}
void func_5710605520(void) {
    extend(90);
    NEXT();
}
void func_5710598048(void) {
    extend(42);
    NEXT();
}
void func_5710598208(void) {
    extend(43);
    NEXT();
}
void func_5710598336(void) {
    extend(63);
    NEXT();
}
void func_5710598528(void) {
    extend(94);
    NEXT();
}
void func_5710598656(void) {
    extend(124);
    NEXT();
}
void func_5710598464(void) {
    extend(91);
    NEXT();
}
void func_5710605712(void) {
    extend(93);
    NEXT();
}
void func_5710605840(void) {
    extend(123);
    NEXT();
}
void func_5710605968(void) {
    extend(125);
    NEXT();
}
void func_5710597616(void) {
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
    PC = exp_5710597616;
}
void func_5710597744(void) {
    extend(91);
    extend(94);
    NEXT();
}
void func_5710595440(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        return;
    }
    store();
    PC = exp_5710595440;
}
void func_5710606096(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5710606096;
}
void func_5710606224(void) {
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
    PC = exp_5710606224;
}
void func_5710606352(void) {
    extend(45);
    NEXT();
}
void func_5710595360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5710595360;
}
void func_5710606480(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        return;
    }
    store();
    PC = exp_5710606480;
}
void func_5710607136(void) {
    extend(95);
    NEXT();
}
void func_5710607280(void) {
    extend(64);
    NEXT();
}
void func_5710607440(void) {
    extend(35);
    NEXT();
}
void func_5710607568(void) {
    extend(37);
    NEXT();
}
void func_5710607760(void) {
    extend(38);
    NEXT();
}
void func_5710607888(void) {
    extend(61);
    NEXT();
}
void func_5710608016(void) {
    extend(126);
    NEXT();
}
void func_5710608144(void) {
    extend(96);
    NEXT();
}
void func_5710607696(void) {
    extend(39);
    NEXT();
}
void func_5710608464(void) {
    extend(34);
    NEXT();
}
void func_5710606768(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5710606768;
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
    PC =func_5710594192_op0;
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
