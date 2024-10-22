#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 45
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
void func_4787842448(void);
void func_4787843200(void);
void func_4787843360(void);
void func_4787843072(void);
void func_4787842720(void);
void func_4787842320(void);
void func_4787842960(void);
void func_4787843488(void);
void func_4787845120(void);
void func_4787842640(void);
void func_4787843680(void);
void func_4787843888(void);
void func_4787843808(void);
void func_4787844320(void);
void func_4787844608(void);
void func_4787844160(void);
void func_4787844080(void);
void func_4787844544(void);
void func_4787844864(void);
void func_4787844992(void);
void func_4787846144(void);
void func_4787846272(void);
void func_4787846400(void);
void func_4787846528(void);
void func_4787846656(void);
void func_4787846784(void);
void func_4787846944(void);
void func_4787847072(void);
void func_4787847232(void);
void func_4787847360(void);
void func_4787847584(void);
void func_4787847712(void);
void func_4787847888(void);
void func_4787845376(void);
void func_4787846016(void);
void func_4787845568(void);
void func_4787848464(void);
void func_4787848592(void);
void func_4787848720(void);
void func_4787848912(void);
void func_4787849040(void);
void func_4787849168(void);
void func_4787849296(void);
void func_4787848848(void);
void func_4787845504(void);
void func_4787849840(void);
void func_4787845696(void);
void func_4787845824(void);
void func_4787849696(void);
void func_4787850064(void);
void func_4787850192(void);
void func_4787844448(void);
void func_4787850800(void);
void func_4787845184(void);
void func_4787851056(void);
void func_4787850400(void);
void func_4787851360(void);
void func_4787851488(void);
void func_4787852832(void);
void func_4787852960(void);
void func_4787853088(void);
void func_4787853248(void);
void func_4787853376(void);
void func_4787853568(void);
void func_4787853696(void);
void func_4787848016(void);
void func_4787848144(void);
void func_4787853504(void);
void func_4787853760(void);
void func_4787853888(void);
void func_4787854016(void);
void func_4787854144(void);
void func_4787854272(void);
void func_4787854400(void);
void func_4787854528(void);
void func_4787848272(void);
void func_4787854912(void);
void func_4787855040(void);
void func_4787855168(void);
void func_4787855296(void);
void func_4787855424(void);
void func_4787855552(void);
void func_4787855680(void);
void func_4787855808(void);
void func_4787855936(void);
void func_4787856064(void);
void func_4787856192(void);
void func_4787856320(void);
void func_4787856448(void);
void func_4787856576(void);
void func_4787856704(void);
void func_4787854656(void);
void func_4787854784(void);
void func_4787857344(void);
void func_4787857472(void);
void func_4787857600(void);
void func_4787857728(void);
void func_4787857856(void);
void func_4787857984(void);
void func_4787858112(void);
void func_4787858240(void);
void func_4787858368(void);
void func_4787858496(void);
void func_4787858624(void);
void func_4787858752(void);
void func_4787858880(void);
void func_4787859008(void);
void func_4787859136(void);
void func_4787859264(void);
void func_4787859392(void);
void func_4787851184(void);
void func_4787850528(void);
void func_4787851760(void);
void func_4787851888(void);
void func_4787852384(void);
void func_4787852512(void);
void func_4787852016(void);
void func_4787852640(void);
void func_4787859600(void);
void func_4787859728(void);
void func_4787859856(void);
void func_4787859984(void);
void func_4787860112(void);
void func_4787860240(void);
void func_4787860368(void);
void func_4787859520(void);
void func_4787852288(void);
void HALT(void);
void RETURN(void);
Inst func_4787842448_op0[2] = {func_4787844544, RETURN};
Inst func_4787843200_op0[2] = {func_4787846144, RETURN};
Inst func_4787843200_op1[2] = {func_4787846400, RETURN};
Inst func_4787843200_op2[2] = {func_4787846656, RETURN};
Inst func_4787843200_op3[2] = {func_4787846944, RETURN};
Inst func_4787843200_op4[2] = {func_4787847232, RETURN};
Inst func_4787843200_op5[2] = {func_4787847584, RETURN};
Inst func_4787843200_op6[2] = {func_4787847888, RETURN};
Inst func_4787843360_op0[2] = {func_4787846016, RETURN};
Inst func_4787843360_op1[2] = {func_4787845568, RETURN};
Inst func_4787843360_op2[2] = {func_4787848464, RETURN};
Inst func_4787843360_op3[2] = {func_4787848592, RETURN};
Inst func_4787843360_op4[2] = {func_4787848720, RETURN};
Inst func_4787843360_op5[2] = {func_4787848912, RETURN};
Inst func_4787843360_op6[2] = {func_4787849040, RETURN};
Inst func_4787843360_op7[2] = {func_4787849168, RETURN};
Inst func_4787843360_op8[2] = {func_4787849296, RETURN};
Inst func_4787843360_op9[2] = {func_4787848848, RETURN};
Inst func_4787843072_op0[2] = {func_4787845504, RETURN};
Inst func_4787843072_op1[2] = {func_4787845696, RETURN};
Inst func_4787843072_op2[2] = {func_4787844608, RETURN};
Inst func_4787842720_op0[2] = {func_4787849696, RETURN};
Inst func_4787842720_op1[2] = {func_4787842640, RETURN};
Inst func_4787842720_op2[2] = {func_4787842960, RETURN};
Inst func_4787842320_op0[2] = {func_4787844448, RETURN};
Inst func_4787842960_op0[2] = {func_4787850400, RETURN};
Inst func_4787842960_op1[2] = {func_4787845120, RETURN};
Inst func_4787843488_op0[2] = {func_4787851360, RETURN};
Inst func_4787845120_op0[2] = {func_4787852832, RETURN};
Inst func_4787845120_op1[2] = {func_4787852960, RETURN};
Inst func_4787845120_op2[2] = {func_4787853088, RETURN};
Inst func_4787845120_op3[2] = {func_4787853248, RETURN};
Inst func_4787845120_op4[2] = {func_4787853376, RETURN};
Inst func_4787845120_op5[2] = {func_4787853568, RETURN};
Inst func_4787845120_op6[2] = {func_4787853696, RETURN};
Inst func_4787845120_op7[2] = {func_4787848016, RETURN};
Inst func_4787845120_op8[2] = {func_4787848144, RETURN};
Inst func_4787845120_op9[2] = {func_4787853504, RETURN};
Inst func_4787845120_op10[2] = {func_4787853760, RETURN};
Inst func_4787845120_op11[2] = {func_4787853888, RETURN};
Inst func_4787845120_op12[2] = {func_4787854016, RETURN};
Inst func_4787845120_op13[2] = {func_4787854144, RETURN};
Inst func_4787845120_op14[2] = {func_4787854272, RETURN};
Inst func_4787845120_op15[2] = {func_4787854400, RETURN};
Inst func_4787845120_op16[2] = {func_4787854528, RETURN};
Inst func_4787845120_op17[2] = {func_4787848272, RETURN};
Inst func_4787845120_op18[2] = {func_4787854912, RETURN};
Inst func_4787845120_op19[2] = {func_4787855040, RETURN};
Inst func_4787845120_op20[2] = {func_4787855168, RETURN};
Inst func_4787845120_op21[2] = {func_4787855296, RETURN};
Inst func_4787845120_op22[2] = {func_4787855424, RETURN};
Inst func_4787845120_op23[2] = {func_4787855552, RETURN};
Inst func_4787845120_op24[2] = {func_4787855680, RETURN};
Inst func_4787845120_op25[2] = {func_4787855808, RETURN};
Inst func_4787845120_op26[2] = {func_4787855936, RETURN};
Inst func_4787845120_op27[2] = {func_4787856064, RETURN};
Inst func_4787845120_op28[2] = {func_4787856192, RETURN};
Inst func_4787845120_op29[2] = {func_4787856320, RETURN};
Inst func_4787845120_op30[2] = {func_4787856448, RETURN};
Inst func_4787845120_op31[2] = {func_4787856576, RETURN};
Inst func_4787845120_op32[2] = {func_4787856704, RETURN};
Inst func_4787845120_op33[2] = {func_4787854656, RETURN};
Inst func_4787845120_op34[2] = {func_4787854784, RETURN};
Inst func_4787845120_op35[2] = {func_4787857344, RETURN};
Inst func_4787845120_op36[2] = {func_4787857472, RETURN};
Inst func_4787845120_op37[2] = {func_4787857600, RETURN};
Inst func_4787845120_op38[2] = {func_4787857728, RETURN};
Inst func_4787845120_op39[2] = {func_4787857856, RETURN};
Inst func_4787845120_op40[2] = {func_4787857984, RETURN};
Inst func_4787845120_op41[2] = {func_4787858112, RETURN};
Inst func_4787845120_op42[2] = {func_4787858240, RETURN};
Inst func_4787845120_op43[2] = {func_4787858368, RETURN};
Inst func_4787845120_op44[2] = {func_4787858496, RETURN};
Inst func_4787845120_op45[2] = {func_4787858624, RETURN};
Inst func_4787845120_op46[2] = {func_4787858752, RETURN};
Inst func_4787845120_op47[2] = {func_4787858880, RETURN};
Inst func_4787845120_op48[2] = {func_4787859008, RETURN};
Inst func_4787845120_op49[2] = {func_4787859136, RETURN};
Inst func_4787845120_op50[2] = {func_4787859264, RETURN};
Inst func_4787845120_op51[2] = {func_4787859392, RETURN};
Inst func_4787842640_op0[2] = {func_4787851184, RETURN};
Inst func_4787842640_op1[2] = {func_4787843360, RETURN};
Inst func_4787843680_op0[2] = {func_4787850528, RETURN};
Inst func_4787843680_op1[2] = {func_4787844320, RETURN};
Inst func_4787843888_op0[2] = {func_4787851760, RETURN};
Inst func_4787843808_op0[2] = {func_4787843680, HALT};
Inst func_4787844320_op0[2] = {func_4787844160, RETURN};
Inst func_4787844320_op1[2] = {func_4787842448, RETURN};
Inst func_4787844320_op2[2] = {func_4787843488, RETURN};
Inst func_4787844320_op3[2] = {func_4787844080, RETURN};
Inst func_4787844320_op4[2] = {func_4787842320, RETURN};
Inst func_4787844320_op5[2] = {func_4787843888, RETURN};
Inst func_4787844608_op0[2] = {func_4787852384, RETURN};
Inst func_4787844608_op1[2] = {func_4787852016, RETURN};
Inst func_4787844608_op2[2] = {func_4787842720, RETURN};
Inst func_4787844160_op0[2] = {func_4787859600, RETURN};
Inst func_4787844160_op1[2] = {func_4787859984, RETURN};
Inst func_4787844160_op2[2] = {func_4787860240, RETURN};
Inst func_4787844080_op0[2] = {func_4787859520, RETURN};
Inst exp_4787844544[5] = {func_4787842960, func_4787844864, func_4787843072, func_4787844992, RETURN};
Inst exp_4787846144[4] = {func_4787843072, func_4787846272, func_4787843072, RETURN};
Inst exp_4787846400[4] = {func_4787843072, func_4787846528, func_4787843072, RETURN};
Inst exp_4787846656[4] = {func_4787843072, func_4787846784, func_4787843072, RETURN};
Inst exp_4787846944[4] = {func_4787843072, func_4787847072, func_4787843072, RETURN};
Inst exp_4787847232[4] = {func_4787843200, func_4787847360, func_4787843200, RETURN};
Inst exp_4787847584[4] = {func_4787843200, func_4787847712, func_4787843200, RETURN};
Inst exp_4787847888[3] = {func_4787845376, func_4787843200, RETURN};
Inst exp_4787845504[4] = {func_4787843072, func_4787849840, func_4787844608, RETURN};
Inst exp_4787845696[4] = {func_4787843072, func_4787845824, func_4787844608, RETURN};
Inst exp_4787849696[4] = {func_4787850064, func_4787843072, func_4787850192, RETURN};
Inst exp_4787844448[8] = {func_4787850800, func_4787842960, func_4787850064, func_4787850192, func_4787845184, func_4787843680, func_4787851056, RETURN};
Inst exp_4787850400[3] = {func_4787845120, func_4787842960, RETURN};
Inst exp_4787851360[8] = {func_4787851488, func_4787850064, func_4787843200, func_4787850192, func_4787845184, func_4787843680, func_4787851056, RETURN};
Inst exp_4787851184[3] = {func_4787843360, func_4787842640, RETURN};
Inst exp_4787850528[3] = {func_4787843680, func_4787844320, RETURN};
Inst exp_4787851760[4] = {func_4787851888, func_4787843072, func_4787844992, RETURN};
Inst exp_4787852384[4] = {func_4787844608, func_4787852512, func_4787842720, RETURN};
Inst exp_4787852016[4] = {func_4787844608, func_4787852640, func_4787842720, RETURN};
Inst exp_4787859600[4] = {func_4787859728, func_4787842960, func_4787859856, RETURN};
Inst exp_4787859984[4] = {func_4787860112, func_4787842960, func_4787859856, RETURN};
Inst exp_4787860240[4] = {func_4787860368, func_4787842960, func_4787859856, RETURN};
Inst exp_4787859520[8] = {func_4787852288, func_4787850064, func_4787843200, func_4787850192, func_4787845184, func_4787843680, func_4787851056, RETURN};
void func_4787842448(void) {
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
            PC = func_4787842448_op0;
        break;
    }
}
void func_4787843200(void) {
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
            PC = func_4787843200_op0;
        break;
        case 1:
            PC = func_4787843200_op1;
        break;
        case 2:
            PC = func_4787843200_op2;
        break;
        case 3:
            PC = func_4787843200_op3;
        break;
        case 4:
            PC = func_4787843200_op4;
        break;
        case 5:
            PC = func_4787843200_op5;
        break;
        case 6:
            PC = func_4787843200_op6;
        break;
    }
}
void func_4787843360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4787843360_op0;
        break;
        case 1:
            PC = func_4787843360_op1;
        break;
        case 2:
            PC = func_4787843360_op2;
        break;
        case 3:
            PC = func_4787843360_op3;
        break;
        case 4:
            PC = func_4787843360_op4;
        break;
        case 5:
            PC = func_4787843360_op5;
        break;
        case 6:
            PC = func_4787843360_op6;
        break;
        case 7:
            PC = func_4787843360_op7;
        break;
        case 8:
            PC = func_4787843360_op8;
        break;
        case 9:
            PC = func_4787843360_op9;
        break;
    }
}
void func_4787843072(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4787843072_op0;
        break;
        case 1:
            PC = func_4787843072_op1;
        break;
        case 2:
            PC = func_4787843072_op2;
        break;
    }
}
void func_4787842720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4787842720_op0;
        break;
        case 1:
            PC = func_4787842720_op1;
        break;
        case 2:
            PC = func_4787842720_op2;
        break;
    }
}
void func_4787842320(void) {
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
            PC = func_4787842320_op0;
        break;
    }
}
void func_4787842960(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4787842960_op0;
        break;
        case 1:
            PC = func_4787842960_op1;
        break;
    }
}
void func_4787843488(void) {
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
            PC = func_4787843488_op0;
        break;
    }
}
void func_4787845120(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_4787845120_op0;
        break;
        case 1:
            PC = func_4787845120_op1;
        break;
        case 2:
            PC = func_4787845120_op2;
        break;
        case 3:
            PC = func_4787845120_op3;
        break;
        case 4:
            PC = func_4787845120_op4;
        break;
        case 5:
            PC = func_4787845120_op5;
        break;
        case 6:
            PC = func_4787845120_op6;
        break;
        case 7:
            PC = func_4787845120_op7;
        break;
        case 8:
            PC = func_4787845120_op8;
        break;
        case 9:
            PC = func_4787845120_op9;
        break;
        case 10:
            PC = func_4787845120_op10;
        break;
        case 11:
            PC = func_4787845120_op11;
        break;
        case 12:
            PC = func_4787845120_op12;
        break;
        case 13:
            PC = func_4787845120_op13;
        break;
        case 14:
            PC = func_4787845120_op14;
        break;
        case 15:
            PC = func_4787845120_op15;
        break;
        case 16:
            PC = func_4787845120_op16;
        break;
        case 17:
            PC = func_4787845120_op17;
        break;
        case 18:
            PC = func_4787845120_op18;
        break;
        case 19:
            PC = func_4787845120_op19;
        break;
        case 20:
            PC = func_4787845120_op20;
        break;
        case 21:
            PC = func_4787845120_op21;
        break;
        case 22:
            PC = func_4787845120_op22;
        break;
        case 23:
            PC = func_4787845120_op23;
        break;
        case 24:
            PC = func_4787845120_op24;
        break;
        case 25:
            PC = func_4787845120_op25;
        break;
        case 26:
            PC = func_4787845120_op26;
        break;
        case 27:
            PC = func_4787845120_op27;
        break;
        case 28:
            PC = func_4787845120_op28;
        break;
        case 29:
            PC = func_4787845120_op29;
        break;
        case 30:
            PC = func_4787845120_op30;
        break;
        case 31:
            PC = func_4787845120_op31;
        break;
        case 32:
            PC = func_4787845120_op32;
        break;
        case 33:
            PC = func_4787845120_op33;
        break;
        case 34:
            PC = func_4787845120_op34;
        break;
        case 35:
            PC = func_4787845120_op35;
        break;
        case 36:
            PC = func_4787845120_op36;
        break;
        case 37:
            PC = func_4787845120_op37;
        break;
        case 38:
            PC = func_4787845120_op38;
        break;
        case 39:
            PC = func_4787845120_op39;
        break;
        case 40:
            PC = func_4787845120_op40;
        break;
        case 41:
            PC = func_4787845120_op41;
        break;
        case 42:
            PC = func_4787845120_op42;
        break;
        case 43:
            PC = func_4787845120_op43;
        break;
        case 44:
            PC = func_4787845120_op44;
        break;
        case 45:
            PC = func_4787845120_op45;
        break;
        case 46:
            PC = func_4787845120_op46;
        break;
        case 47:
            PC = func_4787845120_op47;
        break;
        case 48:
            PC = func_4787845120_op48;
        break;
        case 49:
            PC = func_4787845120_op49;
        break;
        case 50:
            PC = func_4787845120_op50;
        break;
        case 51:
            PC = func_4787845120_op51;
        break;
    }
}
void func_4787842640(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4787842640_op0;
        break;
        case 1:
            PC = func_4787842640_op1;
        break;
    }
}
void func_4787843680(void) {
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
            PC = func_4787843680_op0;
        break;
        case 1:
            PC = func_4787843680_op1;
        break;
    }
}
void func_4787843888(void) {
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
            PC = func_4787843888_op0;
        break;
    }
}
void func_4787843808(void) {
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
            PC = func_4787843808_op0;
        break;
    }
}
void func_4787844320(void) {
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
            PC = func_4787844320_op0;
        break;
        case 1:
            PC = func_4787844320_op1;
        break;
        case 2:
            PC = func_4787844320_op2;
        break;
        case 3:
            PC = func_4787844320_op3;
        break;
        case 4:
            PC = func_4787844320_op4;
        break;
        case 5:
            PC = func_4787844320_op5;
        break;
    }
}
void func_4787844608(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4787844608_op0;
        break;
        case 1:
            PC = func_4787844608_op1;
        break;
        case 2:
            PC = func_4787844608_op2;
        break;
    }
}
void func_4787844160(void) {
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
            PC = func_4787844160_op0;
        break;
        case 1:
            PC = func_4787844160_op1;
        break;
        case 2:
            PC = func_4787844160_op2;
        break;
    }
}
void func_4787844080(void) {
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
            PC = func_4787844080_op0;
        break;
    }
}
void func_4787844544(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_4787844544;
}
void func_4787844864(void) {
    extend(61);
    NEXT();
}
void func_4787844992(void) {
    extend(59);
    NEXT();
}
void func_4787846144(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4787846144;
}
void func_4787846272(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_4787846400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4787846400;
}
void func_4787846528(void) {
    extend(33);
    extend(61);
    NEXT();
}
void func_4787846656(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4787846656;
}
void func_4787846784(void) {
    extend(62);
    NEXT();
}
void func_4787846944(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4787846944;
}
void func_4787847072(void) {
    extend(60);
    NEXT();
}
void func_4787847232(void) {
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
    PC = exp_4787847232;
}
void func_4787847360(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_4787847584(void) {
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
    PC = exp_4787847584;
}
void func_4787847712(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_4787847888(void) {
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
    PC = exp_4787847888;
}
void func_4787845376(void) {
    extend(78);
    extend(79);
    extend(84);
    NEXT();
}
void func_4787846016(void) {
    extend(48);
    NEXT();
}
void func_4787845568(void) {
    extend(49);
    NEXT();
}
void func_4787848464(void) {
    extend(50);
    NEXT();
}
void func_4787848592(void) {
    extend(51);
    NEXT();
}
void func_4787848720(void) {
    extend(52);
    NEXT();
}
void func_4787848912(void) {
    extend(53);
    NEXT();
}
void func_4787849040(void) {
    extend(54);
    NEXT();
}
void func_4787849168(void) {
    extend(55);
    NEXT();
}
void func_4787849296(void) {
    extend(56);
    NEXT();
}
void func_4787848848(void) {
    extend(57);
    NEXT();
}
void func_4787845504(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4787845504;
}
void func_4787849840(void) {
    extend(43);
    NEXT();
}
void func_4787845696(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4787845696;
}
void func_4787845824(void) {
    extend(45);
    NEXT();
}
void func_4787849696(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_4787849696;
}
void func_4787850064(void) {
    extend(40);
    NEXT();
}
void func_4787850192(void) {
    extend(41);
    NEXT();
}
void func_4787844448(void) {
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
    PC = exp_4787844448;
}
void func_4787850800(void) {
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
void func_4787845184(void) {
    extend(123);
    NEXT();
}
void func_4787851056(void) {
    extend(125);
    NEXT();
}
void func_4787850400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        return;
    }
    store();
    PC = exp_4787850400;
}
void func_4787851360(void) {
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
    PC = exp_4787851360;
}
void func_4787851488(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_4787852832(void) {
    extend(97);
    NEXT();
}
void func_4787852960(void) {
    extend(98);
    NEXT();
}
void func_4787853088(void) {
    extend(99);
    NEXT();
}
void func_4787853248(void) {
    extend(100);
    NEXT();
}
void func_4787853376(void) {
    extend(101);
    NEXT();
}
void func_4787853568(void) {
    extend(102);
    NEXT();
}
void func_4787853696(void) {
    extend(103);
    NEXT();
}
void func_4787848016(void) {
    extend(104);
    NEXT();
}
void func_4787848144(void) {
    extend(105);
    NEXT();
}
void func_4787853504(void) {
    extend(106);
    NEXT();
}
void func_4787853760(void) {
    extend(107);
    NEXT();
}
void func_4787853888(void) {
    extend(108);
    NEXT();
}
void func_4787854016(void) {
    extend(109);
    NEXT();
}
void func_4787854144(void) {
    extend(110);
    NEXT();
}
void func_4787854272(void) {
    extend(111);
    NEXT();
}
void func_4787854400(void) {
    extend(112);
    NEXT();
}
void func_4787854528(void) {
    extend(113);
    NEXT();
}
void func_4787848272(void) {
    extend(114);
    NEXT();
}
void func_4787854912(void) {
    extend(115);
    NEXT();
}
void func_4787855040(void) {
    extend(116);
    NEXT();
}
void func_4787855168(void) {
    extend(117);
    NEXT();
}
void func_4787855296(void) {
    extend(118);
    NEXT();
}
void func_4787855424(void) {
    extend(119);
    NEXT();
}
void func_4787855552(void) {
    extend(120);
    NEXT();
}
void func_4787855680(void) {
    extend(121);
    NEXT();
}
void func_4787855808(void) {
    extend(122);
    NEXT();
}
void func_4787855936(void) {
    extend(65);
    NEXT();
}
void func_4787856064(void) {
    extend(66);
    NEXT();
}
void func_4787856192(void) {
    extend(67);
    NEXT();
}
void func_4787856320(void) {
    extend(68);
    NEXT();
}
void func_4787856448(void) {
    extend(69);
    NEXT();
}
void func_4787856576(void) {
    extend(70);
    NEXT();
}
void func_4787856704(void) {
    extend(71);
    NEXT();
}
void func_4787854656(void) {
    extend(72);
    NEXT();
}
void func_4787854784(void) {
    extend(73);
    NEXT();
}
void func_4787857344(void) {
    extend(74);
    NEXT();
}
void func_4787857472(void) {
    extend(75);
    NEXT();
}
void func_4787857600(void) {
    extend(76);
    NEXT();
}
void func_4787857728(void) {
    extend(77);
    NEXT();
}
void func_4787857856(void) {
    extend(78);
    NEXT();
}
void func_4787857984(void) {
    extend(79);
    NEXT();
}
void func_4787858112(void) {
    extend(80);
    NEXT();
}
void func_4787858240(void) {
    extend(81);
    NEXT();
}
void func_4787858368(void) {
    extend(82);
    NEXT();
}
void func_4787858496(void) {
    extend(83);
    NEXT();
}
void func_4787858624(void) {
    extend(84);
    NEXT();
}
void func_4787858752(void) {
    extend(85);
    NEXT();
}
void func_4787858880(void) {
    extend(86);
    NEXT();
}
void func_4787859008(void) {
    extend(87);
    NEXT();
}
void func_4787859136(void) {
    extend(88);
    NEXT();
}
void func_4787859264(void) {
    extend(89);
    NEXT();
}
void func_4787859392(void) {
    extend(90);
    NEXT();
}
void func_4787851184(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4787851184;
}
void func_4787850528(void) {
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
    PC = exp_4787850528;
}
void func_4787851760(void) {
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
    PC = exp_4787851760;
}
void func_4787851888(void) {
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
void func_4787852384(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4787852384;
}
void func_4787852512(void) {
    extend(42);
    NEXT();
}
void func_4787852016(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4787852016;
}
void func_4787852640(void) {
    extend(47);
    NEXT();
}
void func_4787859600(void) {
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
    PC = exp_4787859600;
}
void func_4787859728(void) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_4787859856(void) {
    extend(32);
    extend(59);
    extend(32);
    NEXT();
}
void func_4787859984(void) {
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
    PC = exp_4787859984;
}
void func_4787860112(void) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
}
void func_4787860240(void) {
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
    PC = exp_4787860240;
}
void func_4787860368(void) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
}
void func_4787859520(void) {
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
    PC = exp_4787859520;
}
void func_4787852288(void) {
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
    PC =func_4787843808_op0;
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
