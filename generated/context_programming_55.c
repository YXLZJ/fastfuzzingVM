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
void func_5425376656(void);
void func_5425377408(void);
void func_5425377568(void);
void func_5425377280(void);
void func_5425376928(void);
void func_5425376528(void);
void func_5425377168(void);
void func_5425377696(void);
void func_5425379328(void);
void func_5425376848(void);
void func_5425377888(void);
void func_5425378096(void);
void func_5425378016(void);
void func_5425378528(void);
void func_5425378816(void);
void func_5425378368(void);
void func_5425378288(void);
void func_5425378752(void);
void func_5425379072(void);
void func_5425379200(void);
void func_5425380352(void);
void func_5425380480(void);
void func_5425380608(void);
void func_5425380736(void);
void func_5425380864(void);
void func_5425380992(void);
void func_5425381152(void);
void func_5425381280(void);
void func_5425381440(void);
void func_5425381568(void);
void func_5425381792(void);
void func_5425381920(void);
void func_5425382096(void);
void func_5425379584(void);
void func_5425380224(void);
void func_5425379776(void);
void func_5425382672(void);
void func_5425382800(void);
void func_5425382928(void);
void func_5425383120(void);
void func_5425383248(void);
void func_5425383376(void);
void func_5425383504(void);
void func_5425383056(void);
void func_5425379712(void);
void func_5425384048(void);
void func_5425379904(void);
void func_5425380032(void);
void func_5425383904(void);
void func_5425384272(void);
void func_5425384400(void);
void func_5425378656(void);
void func_5425385008(void);
void func_5425379392(void);
void func_5425385264(void);
void func_5425384608(void);
void func_5425385568(void);
void func_5425385696(void);
void func_5425387040(void);
void func_5425387168(void);
void func_5425387296(void);
void func_5425387456(void);
void func_5425387584(void);
void func_5425387776(void);
void func_5425387904(void);
void func_5425382224(void);
void func_5425382352(void);
void func_5425387712(void);
void func_5425387968(void);
void func_5425388096(void);
void func_5425388224(void);
void func_5425388352(void);
void func_5425388480(void);
void func_5425388608(void);
void func_5425388736(void);
void func_5425382480(void);
void func_5425389120(void);
void func_5425389248(void);
void func_5425389376(void);
void func_5425389504(void);
void func_5425389632(void);
void func_5425389760(void);
void func_5425389888(void);
void func_5425390016(void);
void func_5425390144(void);
void func_5425390272(void);
void func_5425390400(void);
void func_5425390528(void);
void func_5425390656(void);
void func_5425390784(void);
void func_5425390912(void);
void func_5425388864(void);
void func_5425388992(void);
void func_5425391552(void);
void func_5425391680(void);
void func_5425391808(void);
void func_5425391936(void);
void func_5425392064(void);
void func_5425392192(void);
void func_5425392320(void);
void func_5425392448(void);
void func_5425392576(void);
void func_5425392704(void);
void func_5425392832(void);
void func_5425392960(void);
void func_5425393088(void);
void func_5425393216(void);
void func_5425393344(void);
void func_5425393472(void);
void func_5425393600(void);
void func_5425385392(void);
void func_5425384736(void);
void func_5425385968(void);
void func_5425386096(void);
void func_5425386592(void);
void func_5425386720(void);
void func_5425386224(void);
void func_5425386848(void);
void func_5425393808(void);
void func_5425393936(void);
void func_5425394064(void);
void func_5425394192(void);
void func_5425394320(void);
void func_5425394448(void);
void func_5425394576(void);
void func_5425393728(void);
void func_5425386496(void);
void HALT(void);
void RETURN(void);
Inst func_5425376656_op0[2] = {func_5425378752, RETURN};
Inst func_5425377408_op0[2] = {func_5425380352, RETURN};
Inst func_5425377408_op1[2] = {func_5425380608, RETURN};
Inst func_5425377408_op2[2] = {func_5425380864, RETURN};
Inst func_5425377408_op3[2] = {func_5425381152, RETURN};
Inst func_5425377408_op4[2] = {func_5425381440, RETURN};
Inst func_5425377408_op5[2] = {func_5425381792, RETURN};
Inst func_5425377408_op6[2] = {func_5425382096, RETURN};
Inst func_5425377568_op0[2] = {func_5425380224, RETURN};
Inst func_5425377568_op1[2] = {func_5425379776, RETURN};
Inst func_5425377568_op2[2] = {func_5425382672, RETURN};
Inst func_5425377568_op3[2] = {func_5425382800, RETURN};
Inst func_5425377568_op4[2] = {func_5425382928, RETURN};
Inst func_5425377568_op5[2] = {func_5425383120, RETURN};
Inst func_5425377568_op6[2] = {func_5425383248, RETURN};
Inst func_5425377568_op7[2] = {func_5425383376, RETURN};
Inst func_5425377568_op8[2] = {func_5425383504, RETURN};
Inst func_5425377568_op9[2] = {func_5425383056, RETURN};
Inst func_5425377280_op0[2] = {func_5425379712, RETURN};
Inst func_5425377280_op1[2] = {func_5425379904, RETURN};
Inst func_5425377280_op2[2] = {func_5425378816, RETURN};
Inst func_5425376928_op0[2] = {func_5425383904, RETURN};
Inst func_5425376928_op1[2] = {func_5425376848, RETURN};
Inst func_5425376928_op2[2] = {func_5425377168, RETURN};
Inst func_5425376528_op0[2] = {func_5425378656, RETURN};
Inst func_5425377168_op0[2] = {func_5425384608, RETURN};
Inst func_5425377168_op1[2] = {func_5425379328, RETURN};
Inst func_5425377696_op0[2] = {func_5425385568, RETURN};
Inst func_5425379328_op0[2] = {func_5425387040, RETURN};
Inst func_5425379328_op1[2] = {func_5425387168, RETURN};
Inst func_5425379328_op2[2] = {func_5425387296, RETURN};
Inst func_5425379328_op3[2] = {func_5425387456, RETURN};
Inst func_5425379328_op4[2] = {func_5425387584, RETURN};
Inst func_5425379328_op5[2] = {func_5425387776, RETURN};
Inst func_5425379328_op6[2] = {func_5425387904, RETURN};
Inst func_5425379328_op7[2] = {func_5425382224, RETURN};
Inst func_5425379328_op8[2] = {func_5425382352, RETURN};
Inst func_5425379328_op9[2] = {func_5425387712, RETURN};
Inst func_5425379328_op10[2] = {func_5425387968, RETURN};
Inst func_5425379328_op11[2] = {func_5425388096, RETURN};
Inst func_5425379328_op12[2] = {func_5425388224, RETURN};
Inst func_5425379328_op13[2] = {func_5425388352, RETURN};
Inst func_5425379328_op14[2] = {func_5425388480, RETURN};
Inst func_5425379328_op15[2] = {func_5425388608, RETURN};
Inst func_5425379328_op16[2] = {func_5425388736, RETURN};
Inst func_5425379328_op17[2] = {func_5425382480, RETURN};
Inst func_5425379328_op18[2] = {func_5425389120, RETURN};
Inst func_5425379328_op19[2] = {func_5425389248, RETURN};
Inst func_5425379328_op20[2] = {func_5425389376, RETURN};
Inst func_5425379328_op21[2] = {func_5425389504, RETURN};
Inst func_5425379328_op22[2] = {func_5425389632, RETURN};
Inst func_5425379328_op23[2] = {func_5425389760, RETURN};
Inst func_5425379328_op24[2] = {func_5425389888, RETURN};
Inst func_5425379328_op25[2] = {func_5425390016, RETURN};
Inst func_5425379328_op26[2] = {func_5425390144, RETURN};
Inst func_5425379328_op27[2] = {func_5425390272, RETURN};
Inst func_5425379328_op28[2] = {func_5425390400, RETURN};
Inst func_5425379328_op29[2] = {func_5425390528, RETURN};
Inst func_5425379328_op30[2] = {func_5425390656, RETURN};
Inst func_5425379328_op31[2] = {func_5425390784, RETURN};
Inst func_5425379328_op32[2] = {func_5425390912, RETURN};
Inst func_5425379328_op33[2] = {func_5425388864, RETURN};
Inst func_5425379328_op34[2] = {func_5425388992, RETURN};
Inst func_5425379328_op35[2] = {func_5425391552, RETURN};
Inst func_5425379328_op36[2] = {func_5425391680, RETURN};
Inst func_5425379328_op37[2] = {func_5425391808, RETURN};
Inst func_5425379328_op38[2] = {func_5425391936, RETURN};
Inst func_5425379328_op39[2] = {func_5425392064, RETURN};
Inst func_5425379328_op40[2] = {func_5425392192, RETURN};
Inst func_5425379328_op41[2] = {func_5425392320, RETURN};
Inst func_5425379328_op42[2] = {func_5425392448, RETURN};
Inst func_5425379328_op43[2] = {func_5425392576, RETURN};
Inst func_5425379328_op44[2] = {func_5425392704, RETURN};
Inst func_5425379328_op45[2] = {func_5425392832, RETURN};
Inst func_5425379328_op46[2] = {func_5425392960, RETURN};
Inst func_5425379328_op47[2] = {func_5425393088, RETURN};
Inst func_5425379328_op48[2] = {func_5425393216, RETURN};
Inst func_5425379328_op49[2] = {func_5425393344, RETURN};
Inst func_5425379328_op50[2] = {func_5425393472, RETURN};
Inst func_5425379328_op51[2] = {func_5425393600, RETURN};
Inst func_5425376848_op0[2] = {func_5425385392, RETURN};
Inst func_5425376848_op1[2] = {func_5425377568, RETURN};
Inst func_5425377888_op0[2] = {func_5425384736, RETURN};
Inst func_5425377888_op1[2] = {func_5425378528, RETURN};
Inst func_5425378096_op0[2] = {func_5425385968, RETURN};
Inst func_5425378016_op0[2] = {func_5425377888, HALT};
Inst func_5425378528_op0[2] = {func_5425378368, RETURN};
Inst func_5425378528_op1[2] = {func_5425376656, RETURN};
Inst func_5425378528_op2[2] = {func_5425377696, RETURN};
Inst func_5425378528_op3[2] = {func_5425378288, RETURN};
Inst func_5425378528_op4[2] = {func_5425376528, RETURN};
Inst func_5425378528_op5[2] = {func_5425378096, RETURN};
Inst func_5425378816_op0[2] = {func_5425386592, RETURN};
Inst func_5425378816_op1[2] = {func_5425386224, RETURN};
Inst func_5425378816_op2[2] = {func_5425376928, RETURN};
Inst func_5425378368_op0[2] = {func_5425393808, RETURN};
Inst func_5425378368_op1[2] = {func_5425394192, RETURN};
Inst func_5425378368_op2[2] = {func_5425394448, RETURN};
Inst func_5425378288_op0[2] = {func_5425393728, RETURN};
Inst exp_5425378752[5] = {func_5425377168, func_5425379072, func_5425377280, func_5425379200, RETURN};
Inst exp_5425380352[4] = {func_5425377280, func_5425380480, func_5425377280, RETURN};
Inst exp_5425380608[4] = {func_5425377280, func_5425380736, func_5425377280, RETURN};
Inst exp_5425380864[4] = {func_5425377280, func_5425380992, func_5425377280, RETURN};
Inst exp_5425381152[4] = {func_5425377280, func_5425381280, func_5425377280, RETURN};
Inst exp_5425381440[4] = {func_5425377408, func_5425381568, func_5425377408, RETURN};
Inst exp_5425381792[4] = {func_5425377408, func_5425381920, func_5425377408, RETURN};
Inst exp_5425382096[3] = {func_5425379584, func_5425377408, RETURN};
Inst exp_5425379712[4] = {func_5425377280, func_5425384048, func_5425378816, RETURN};
Inst exp_5425379904[4] = {func_5425377280, func_5425380032, func_5425378816, RETURN};
Inst exp_5425383904[4] = {func_5425384272, func_5425377280, func_5425384400, RETURN};
Inst exp_5425378656[8] = {func_5425385008, func_5425377168, func_5425384272, func_5425384400, func_5425379392, func_5425377888, func_5425385264, RETURN};
Inst exp_5425384608[3] = {func_5425379328, func_5425377168, RETURN};
Inst exp_5425385568[8] = {func_5425385696, func_5425384272, func_5425377408, func_5425384400, func_5425379392, func_5425377888, func_5425385264, RETURN};
Inst exp_5425385392[3] = {func_5425377568, func_5425376848, RETURN};
Inst exp_5425384736[3] = {func_5425377888, func_5425378528, RETURN};
Inst exp_5425385968[4] = {func_5425386096, func_5425377280, func_5425379200, RETURN};
Inst exp_5425386592[4] = {func_5425378816, func_5425386720, func_5425376928, RETURN};
Inst exp_5425386224[4] = {func_5425378816, func_5425386848, func_5425376928, RETURN};
Inst exp_5425393808[4] = {func_5425393936, func_5425377168, func_5425394064, RETURN};
Inst exp_5425394192[4] = {func_5425394320, func_5425377168, func_5425394064, RETURN};
Inst exp_5425394448[4] = {func_5425394576, func_5425377168, func_5425394064, RETURN};
Inst exp_5425393728[8] = {func_5425386496, func_5425384272, func_5425377408, func_5425384400, func_5425379392, func_5425377888, func_5425385264, RETURN};
void func_5425376656(void) {
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
            PC = func_5425376656_op0;
        break;
    }
}
void func_5425377408(void) {
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
            PC = func_5425377408_op0;
        break;
        case 1:
            PC = func_5425377408_op1;
        break;
        case 2:
            PC = func_5425377408_op2;
        break;
        case 3:
            PC = func_5425377408_op3;
        break;
        case 4:
            PC = func_5425377408_op4;
        break;
        case 5:
            PC = func_5425377408_op5;
        break;
        case 6:
            PC = func_5425377408_op6;
        break;
    }
}
void func_5425377568(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5425377568_op0;
        break;
        case 1:
            PC = func_5425377568_op1;
        break;
        case 2:
            PC = func_5425377568_op2;
        break;
        case 3:
            PC = func_5425377568_op3;
        break;
        case 4:
            PC = func_5425377568_op4;
        break;
        case 5:
            PC = func_5425377568_op5;
        break;
        case 6:
            PC = func_5425377568_op6;
        break;
        case 7:
            PC = func_5425377568_op7;
        break;
        case 8:
            PC = func_5425377568_op8;
        break;
        case 9:
            PC = func_5425377568_op9;
        break;
    }
}
void func_5425377280(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5425377280_op0;
        break;
        case 1:
            PC = func_5425377280_op1;
        break;
        case 2:
            PC = func_5425377280_op2;
        break;
    }
}
void func_5425376928(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5425376928_op0;
        break;
        case 1:
            PC = func_5425376928_op1;
        break;
        case 2:
            PC = func_5425376928_op2;
        break;
    }
}
void func_5425376528(void) {
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
            PC = func_5425376528_op0;
        break;
    }
}
void func_5425377168(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5425377168_op0;
        break;
        case 1:
            PC = func_5425377168_op1;
        break;
    }
}
void func_5425377696(void) {
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
            PC = func_5425377696_op0;
        break;
    }
}
void func_5425379328(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5425379328_op0;
        break;
        case 1:
            PC = func_5425379328_op1;
        break;
        case 2:
            PC = func_5425379328_op2;
        break;
        case 3:
            PC = func_5425379328_op3;
        break;
        case 4:
            PC = func_5425379328_op4;
        break;
        case 5:
            PC = func_5425379328_op5;
        break;
        case 6:
            PC = func_5425379328_op6;
        break;
        case 7:
            PC = func_5425379328_op7;
        break;
        case 8:
            PC = func_5425379328_op8;
        break;
        case 9:
            PC = func_5425379328_op9;
        break;
        case 10:
            PC = func_5425379328_op10;
        break;
        case 11:
            PC = func_5425379328_op11;
        break;
        case 12:
            PC = func_5425379328_op12;
        break;
        case 13:
            PC = func_5425379328_op13;
        break;
        case 14:
            PC = func_5425379328_op14;
        break;
        case 15:
            PC = func_5425379328_op15;
        break;
        case 16:
            PC = func_5425379328_op16;
        break;
        case 17:
            PC = func_5425379328_op17;
        break;
        case 18:
            PC = func_5425379328_op18;
        break;
        case 19:
            PC = func_5425379328_op19;
        break;
        case 20:
            PC = func_5425379328_op20;
        break;
        case 21:
            PC = func_5425379328_op21;
        break;
        case 22:
            PC = func_5425379328_op22;
        break;
        case 23:
            PC = func_5425379328_op23;
        break;
        case 24:
            PC = func_5425379328_op24;
        break;
        case 25:
            PC = func_5425379328_op25;
        break;
        case 26:
            PC = func_5425379328_op26;
        break;
        case 27:
            PC = func_5425379328_op27;
        break;
        case 28:
            PC = func_5425379328_op28;
        break;
        case 29:
            PC = func_5425379328_op29;
        break;
        case 30:
            PC = func_5425379328_op30;
        break;
        case 31:
            PC = func_5425379328_op31;
        break;
        case 32:
            PC = func_5425379328_op32;
        break;
        case 33:
            PC = func_5425379328_op33;
        break;
        case 34:
            PC = func_5425379328_op34;
        break;
        case 35:
            PC = func_5425379328_op35;
        break;
        case 36:
            PC = func_5425379328_op36;
        break;
        case 37:
            PC = func_5425379328_op37;
        break;
        case 38:
            PC = func_5425379328_op38;
        break;
        case 39:
            PC = func_5425379328_op39;
        break;
        case 40:
            PC = func_5425379328_op40;
        break;
        case 41:
            PC = func_5425379328_op41;
        break;
        case 42:
            PC = func_5425379328_op42;
        break;
        case 43:
            PC = func_5425379328_op43;
        break;
        case 44:
            PC = func_5425379328_op44;
        break;
        case 45:
            PC = func_5425379328_op45;
        break;
        case 46:
            PC = func_5425379328_op46;
        break;
        case 47:
            PC = func_5425379328_op47;
        break;
        case 48:
            PC = func_5425379328_op48;
        break;
        case 49:
            PC = func_5425379328_op49;
        break;
        case 50:
            PC = func_5425379328_op50;
        break;
        case 51:
            PC = func_5425379328_op51;
        break;
    }
}
void func_5425376848(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5425376848_op0;
        break;
        case 1:
            PC = func_5425376848_op1;
        break;
    }
}
void func_5425377888(void) {
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
            PC = func_5425377888_op0;
        break;
        case 1:
            PC = func_5425377888_op1;
        break;
    }
}
void func_5425378096(void) {
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
            PC = func_5425378096_op0;
        break;
    }
}
void func_5425378016(void) {
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
            PC = func_5425378016_op0;
        break;
    }
}
void func_5425378528(void) {
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
            PC = func_5425378528_op0;
        break;
        case 1:
            PC = func_5425378528_op1;
        break;
        case 2:
            PC = func_5425378528_op2;
        break;
        case 3:
            PC = func_5425378528_op3;
        break;
        case 4:
            PC = func_5425378528_op4;
        break;
        case 5:
            PC = func_5425378528_op5;
        break;
    }
}
void func_5425378816(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5425378816_op0;
        break;
        case 1:
            PC = func_5425378816_op1;
        break;
        case 2:
            PC = func_5425378816_op2;
        break;
    }
}
void func_5425378368(void) {
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
            PC = func_5425378368_op0;
        break;
        case 1:
            PC = func_5425378368_op1;
        break;
        case 2:
            PC = func_5425378368_op2;
        break;
    }
}
void func_5425378288(void) {
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
            PC = func_5425378288_op0;
        break;
    }
}
void func_5425378752(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5425378752;
}
void func_5425379072(void) {
    extend(61);
    NEXT();
}
void func_5425379200(void) {
    extend(59);
    NEXT();
}
void func_5425380352(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5425380352;
}
void func_5425380480(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5425380608(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5425380608;
}
void func_5425380736(void) {
    extend(33);
    extend(61);
    NEXT();
}
void func_5425380864(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5425380864;
}
void func_5425380992(void) {
    extend(62);
    NEXT();
}
void func_5425381152(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5425381152;
}
void func_5425381280(void) {
    extend(60);
    NEXT();
}
void func_5425381440(void) {
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
    PC = exp_5425381440;
}
void func_5425381568(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_5425381792(void) {
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
    PC = exp_5425381792;
}
void func_5425381920(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_5425382096(void) {
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
    PC = exp_5425382096;
}
void func_5425379584(void) {
    extend(78);
    extend(79);
    extend(84);
    NEXT();
}
void func_5425380224(void) {
    extend(48);
    NEXT();
}
void func_5425379776(void) {
    extend(49);
    NEXT();
}
void func_5425382672(void) {
    extend(50);
    NEXT();
}
void func_5425382800(void) {
    extend(51);
    NEXT();
}
void func_5425382928(void) {
    extend(52);
    NEXT();
}
void func_5425383120(void) {
    extend(53);
    NEXT();
}
void func_5425383248(void) {
    extend(54);
    NEXT();
}
void func_5425383376(void) {
    extend(55);
    NEXT();
}
void func_5425383504(void) {
    extend(56);
    NEXT();
}
void func_5425383056(void) {
    extend(57);
    NEXT();
}
void func_5425379712(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5425379712;
}
void func_5425384048(void) {
    extend(43);
    NEXT();
}
void func_5425379904(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5425379904;
}
void func_5425380032(void) {
    extend(45);
    NEXT();
}
void func_5425383904(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5425383904;
}
void func_5425384272(void) {
    extend(40);
    NEXT();
}
void func_5425384400(void) {
    extend(41);
    NEXT();
}
void func_5425378656(void) {
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
    PC = exp_5425378656;
}
void func_5425385008(void) {
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
void func_5425379392(void) {
    extend(123);
    NEXT();
}
void func_5425385264(void) {
    extend(125);
    NEXT();
}
void func_5425384608(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        return;
    }
    store();
    PC = exp_5425384608;
}
void func_5425385568(void) {
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
    PC = exp_5425385568;
}
void func_5425385696(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5425387040(void) {
    extend(97);
    NEXT();
}
void func_5425387168(void) {
    extend(98);
    NEXT();
}
void func_5425387296(void) {
    extend(99);
    NEXT();
}
void func_5425387456(void) {
    extend(100);
    NEXT();
}
void func_5425387584(void) {
    extend(101);
    NEXT();
}
void func_5425387776(void) {
    extend(102);
    NEXT();
}
void func_5425387904(void) {
    extend(103);
    NEXT();
}
void func_5425382224(void) {
    extend(104);
    NEXT();
}
void func_5425382352(void) {
    extend(105);
    NEXT();
}
void func_5425387712(void) {
    extend(106);
    NEXT();
}
void func_5425387968(void) {
    extend(107);
    NEXT();
}
void func_5425388096(void) {
    extend(108);
    NEXT();
}
void func_5425388224(void) {
    extend(109);
    NEXT();
}
void func_5425388352(void) {
    extend(110);
    NEXT();
}
void func_5425388480(void) {
    extend(111);
    NEXT();
}
void func_5425388608(void) {
    extend(112);
    NEXT();
}
void func_5425388736(void) {
    extend(113);
    NEXT();
}
void func_5425382480(void) {
    extend(114);
    NEXT();
}
void func_5425389120(void) {
    extend(115);
    NEXT();
}
void func_5425389248(void) {
    extend(116);
    NEXT();
}
void func_5425389376(void) {
    extend(117);
    NEXT();
}
void func_5425389504(void) {
    extend(118);
    NEXT();
}
void func_5425389632(void) {
    extend(119);
    NEXT();
}
void func_5425389760(void) {
    extend(120);
    NEXT();
}
void func_5425389888(void) {
    extend(121);
    NEXT();
}
void func_5425390016(void) {
    extend(122);
    NEXT();
}
void func_5425390144(void) {
    extend(65);
    NEXT();
}
void func_5425390272(void) {
    extend(66);
    NEXT();
}
void func_5425390400(void) {
    extend(67);
    NEXT();
}
void func_5425390528(void) {
    extend(68);
    NEXT();
}
void func_5425390656(void) {
    extend(69);
    NEXT();
}
void func_5425390784(void) {
    extend(70);
    NEXT();
}
void func_5425390912(void) {
    extend(71);
    NEXT();
}
void func_5425388864(void) {
    extend(72);
    NEXT();
}
void func_5425388992(void) {
    extend(73);
    NEXT();
}
void func_5425391552(void) {
    extend(74);
    NEXT();
}
void func_5425391680(void) {
    extend(75);
    NEXT();
}
void func_5425391808(void) {
    extend(76);
    NEXT();
}
void func_5425391936(void) {
    extend(77);
    NEXT();
}
void func_5425392064(void) {
    extend(78);
    NEXT();
}
void func_5425392192(void) {
    extend(79);
    NEXT();
}
void func_5425392320(void) {
    extend(80);
    NEXT();
}
void func_5425392448(void) {
    extend(81);
    NEXT();
}
void func_5425392576(void) {
    extend(82);
    NEXT();
}
void func_5425392704(void) {
    extend(83);
    NEXT();
}
void func_5425392832(void) {
    extend(84);
    NEXT();
}
void func_5425392960(void) {
    extend(85);
    NEXT();
}
void func_5425393088(void) {
    extend(86);
    NEXT();
}
void func_5425393216(void) {
    extend(87);
    NEXT();
}
void func_5425393344(void) {
    extend(88);
    NEXT();
}
void func_5425393472(void) {
    extend(89);
    NEXT();
}
void func_5425393600(void) {
    extend(90);
    NEXT();
}
void func_5425385392(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5425385392;
}
void func_5425384736(void) {
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
    PC = exp_5425384736;
}
void func_5425385968(void) {
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
    PC = exp_5425385968;
}
void func_5425386096(void) {
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
void func_5425386592(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5425386592;
}
void func_5425386720(void) {
    extend(42);
    NEXT();
}
void func_5425386224(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5425386224;
}
void func_5425386848(void) {
    extend(47);
    NEXT();
}
void func_5425393808(void) {
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
    PC = exp_5425393808;
}
void func_5425393936(void) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5425394064(void) {
    extend(32);
    extend(59);
    extend(32);
    NEXT();
}
void func_5425394192(void) {
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
    PC = exp_5425394192;
}
void func_5425394320(void) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
}
void func_5425394448(void) {
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
    PC = exp_5425394448;
}
void func_5425394576(void) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
}
void func_5425393728(void) {
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
    PC = exp_5425393728;
}
void func_5425386496(void) {
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
    PC =func_5425378016_op0;
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
