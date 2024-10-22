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
void func_5458931088(void);
void func_5458931840(void);
void func_5458932000(void);
void func_5458931712(void);
void func_5458931360(void);
void func_5458930960(void);
void func_5458931600(void);
void func_5458932128(void);
void func_5458933760(void);
void func_5458931280(void);
void func_5458932320(void);
void func_5458932528(void);
void func_5458932448(void);
void func_5458932960(void);
void func_5458933248(void);
void func_5458932800(void);
void func_5458932720(void);
void func_5458933184(void);
void func_5458933504(void);
void func_5458933632(void);
void func_5458934784(void);
void func_5458934912(void);
void func_5458935040(void);
void func_5458935168(void);
void func_5458935296(void);
void func_5458935424(void);
void func_5458935584(void);
void func_5458935712(void);
void func_5458935872(void);
void func_5458936000(void);
void func_5458936224(void);
void func_5458936352(void);
void func_5458936528(void);
void func_5458934016(void);
void func_5458934656(void);
void func_5458934208(void);
void func_5458937104(void);
void func_5458937232(void);
void func_5458937360(void);
void func_5458937552(void);
void func_5458937680(void);
void func_5458937808(void);
void func_5458937936(void);
void func_5458937488(void);
void func_5458934144(void);
void func_5458938480(void);
void func_5458934336(void);
void func_5458934464(void);
void func_5458938336(void);
void func_5458938704(void);
void func_5458938832(void);
void func_5458933088(void);
void func_5458939440(void);
void func_5458933824(void);
void func_5458939696(void);
void func_5458939040(void);
void func_5458940000(void);
void func_5458940128(void);
void func_5458941472(void);
void func_5458941600(void);
void func_5458941728(void);
void func_5458941888(void);
void func_5458942016(void);
void func_5458942208(void);
void func_5458942336(void);
void func_5458936656(void);
void func_5458936784(void);
void func_5458942144(void);
void func_5458942400(void);
void func_5458942528(void);
void func_5458942656(void);
void func_5458942784(void);
void func_5458942912(void);
void func_5458943040(void);
void func_5458943168(void);
void func_5458936912(void);
void func_5458943552(void);
void func_5458943680(void);
void func_5458943808(void);
void func_5458943936(void);
void func_5458944064(void);
void func_5458944192(void);
void func_5458944320(void);
void func_5458944448(void);
void func_5458944576(void);
void func_5458944704(void);
void func_5458944832(void);
void func_5458944960(void);
void func_5458945088(void);
void func_5458945216(void);
void func_5458945344(void);
void func_5458943296(void);
void func_5458943424(void);
void func_5458945984(void);
void func_5458946112(void);
void func_5458946240(void);
void func_5458946368(void);
void func_5458946496(void);
void func_5458946624(void);
void func_5458946752(void);
void func_5458946880(void);
void func_5458947008(void);
void func_5458947136(void);
void func_5458947264(void);
void func_5458947392(void);
void func_5458947520(void);
void func_5458947648(void);
void func_5458947776(void);
void func_5458947904(void);
void func_5458948032(void);
void func_5458939824(void);
void func_5458939168(void);
void func_5458940400(void);
void func_5458940528(void);
void func_5458941024(void);
void func_5458941152(void);
void func_5458940656(void);
void func_5458941280(void);
void func_5458948240(void);
void func_5458948368(void);
void func_5458948496(void);
void func_5458948624(void);
void func_5458948752(void);
void func_5458948880(void);
void func_5458949008(void);
void func_5458948160(void);
void func_5458940928(void);
void HALT(void);
void RETURN(void);
Inst func_5458931088_op0[2] = {func_5458933184, RETURN};
Inst func_5458931840_op0[2] = {func_5458934784, RETURN};
Inst func_5458931840_op1[2] = {func_5458935040, RETURN};
Inst func_5458931840_op2[2] = {func_5458935296, RETURN};
Inst func_5458931840_op3[2] = {func_5458935584, RETURN};
Inst func_5458931840_op4[2] = {func_5458935872, RETURN};
Inst func_5458931840_op5[2] = {func_5458936224, RETURN};
Inst func_5458931840_op6[2] = {func_5458936528, RETURN};
Inst func_5458932000_op0[2] = {func_5458934656, RETURN};
Inst func_5458932000_op1[2] = {func_5458934208, RETURN};
Inst func_5458932000_op2[2] = {func_5458937104, RETURN};
Inst func_5458932000_op3[2] = {func_5458937232, RETURN};
Inst func_5458932000_op4[2] = {func_5458937360, RETURN};
Inst func_5458932000_op5[2] = {func_5458937552, RETURN};
Inst func_5458932000_op6[2] = {func_5458937680, RETURN};
Inst func_5458932000_op7[2] = {func_5458937808, RETURN};
Inst func_5458932000_op8[2] = {func_5458937936, RETURN};
Inst func_5458932000_op9[2] = {func_5458937488, RETURN};
Inst func_5458931712_op0[2] = {func_5458934144, RETURN};
Inst func_5458931712_op1[2] = {func_5458934336, RETURN};
Inst func_5458931712_op2[2] = {func_5458933248, RETURN};
Inst func_5458931360_op0[2] = {func_5458938336, RETURN};
Inst func_5458931360_op1[2] = {func_5458931280, RETURN};
Inst func_5458931360_op2[2] = {func_5458931600, RETURN};
Inst func_5458930960_op0[2] = {func_5458933088, RETURN};
Inst func_5458931600_op0[2] = {func_5458939040, RETURN};
Inst func_5458931600_op1[2] = {func_5458933760, RETURN};
Inst func_5458932128_op0[2] = {func_5458940000, RETURN};
Inst func_5458933760_op0[2] = {func_5458941472, RETURN};
Inst func_5458933760_op1[2] = {func_5458941600, RETURN};
Inst func_5458933760_op2[2] = {func_5458941728, RETURN};
Inst func_5458933760_op3[2] = {func_5458941888, RETURN};
Inst func_5458933760_op4[2] = {func_5458942016, RETURN};
Inst func_5458933760_op5[2] = {func_5458942208, RETURN};
Inst func_5458933760_op6[2] = {func_5458942336, RETURN};
Inst func_5458933760_op7[2] = {func_5458936656, RETURN};
Inst func_5458933760_op8[2] = {func_5458936784, RETURN};
Inst func_5458933760_op9[2] = {func_5458942144, RETURN};
Inst func_5458933760_op10[2] = {func_5458942400, RETURN};
Inst func_5458933760_op11[2] = {func_5458942528, RETURN};
Inst func_5458933760_op12[2] = {func_5458942656, RETURN};
Inst func_5458933760_op13[2] = {func_5458942784, RETURN};
Inst func_5458933760_op14[2] = {func_5458942912, RETURN};
Inst func_5458933760_op15[2] = {func_5458943040, RETURN};
Inst func_5458933760_op16[2] = {func_5458943168, RETURN};
Inst func_5458933760_op17[2] = {func_5458936912, RETURN};
Inst func_5458933760_op18[2] = {func_5458943552, RETURN};
Inst func_5458933760_op19[2] = {func_5458943680, RETURN};
Inst func_5458933760_op20[2] = {func_5458943808, RETURN};
Inst func_5458933760_op21[2] = {func_5458943936, RETURN};
Inst func_5458933760_op22[2] = {func_5458944064, RETURN};
Inst func_5458933760_op23[2] = {func_5458944192, RETURN};
Inst func_5458933760_op24[2] = {func_5458944320, RETURN};
Inst func_5458933760_op25[2] = {func_5458944448, RETURN};
Inst func_5458933760_op26[2] = {func_5458944576, RETURN};
Inst func_5458933760_op27[2] = {func_5458944704, RETURN};
Inst func_5458933760_op28[2] = {func_5458944832, RETURN};
Inst func_5458933760_op29[2] = {func_5458944960, RETURN};
Inst func_5458933760_op30[2] = {func_5458945088, RETURN};
Inst func_5458933760_op31[2] = {func_5458945216, RETURN};
Inst func_5458933760_op32[2] = {func_5458945344, RETURN};
Inst func_5458933760_op33[2] = {func_5458943296, RETURN};
Inst func_5458933760_op34[2] = {func_5458943424, RETURN};
Inst func_5458933760_op35[2] = {func_5458945984, RETURN};
Inst func_5458933760_op36[2] = {func_5458946112, RETURN};
Inst func_5458933760_op37[2] = {func_5458946240, RETURN};
Inst func_5458933760_op38[2] = {func_5458946368, RETURN};
Inst func_5458933760_op39[2] = {func_5458946496, RETURN};
Inst func_5458933760_op40[2] = {func_5458946624, RETURN};
Inst func_5458933760_op41[2] = {func_5458946752, RETURN};
Inst func_5458933760_op42[2] = {func_5458946880, RETURN};
Inst func_5458933760_op43[2] = {func_5458947008, RETURN};
Inst func_5458933760_op44[2] = {func_5458947136, RETURN};
Inst func_5458933760_op45[2] = {func_5458947264, RETURN};
Inst func_5458933760_op46[2] = {func_5458947392, RETURN};
Inst func_5458933760_op47[2] = {func_5458947520, RETURN};
Inst func_5458933760_op48[2] = {func_5458947648, RETURN};
Inst func_5458933760_op49[2] = {func_5458947776, RETURN};
Inst func_5458933760_op50[2] = {func_5458947904, RETURN};
Inst func_5458933760_op51[2] = {func_5458948032, RETURN};
Inst func_5458931280_op0[2] = {func_5458939824, RETURN};
Inst func_5458931280_op1[2] = {func_5458932000, RETURN};
Inst func_5458932320_op0[2] = {func_5458939168, RETURN};
Inst func_5458932320_op1[2] = {func_5458932960, RETURN};
Inst func_5458932528_op0[2] = {func_5458940400, RETURN};
Inst func_5458932448_op0[2] = {func_5458932320, HALT};
Inst func_5458932960_op0[2] = {func_5458932800, RETURN};
Inst func_5458932960_op1[2] = {func_5458931088, RETURN};
Inst func_5458932960_op2[2] = {func_5458932128, RETURN};
Inst func_5458932960_op3[2] = {func_5458932720, RETURN};
Inst func_5458932960_op4[2] = {func_5458930960, RETURN};
Inst func_5458932960_op5[2] = {func_5458932528, RETURN};
Inst func_5458933248_op0[2] = {func_5458941024, RETURN};
Inst func_5458933248_op1[2] = {func_5458940656, RETURN};
Inst func_5458933248_op2[2] = {func_5458931360, RETURN};
Inst func_5458932800_op0[2] = {func_5458948240, RETURN};
Inst func_5458932800_op1[2] = {func_5458948624, RETURN};
Inst func_5458932800_op2[2] = {func_5458948880, RETURN};
Inst func_5458932720_op0[2] = {func_5458948160, RETURN};
Inst exp_5458933184[5] = {func_5458931600, func_5458933504, func_5458931712, func_5458933632, RETURN};
Inst exp_5458934784[4] = {func_5458931712, func_5458934912, func_5458931712, RETURN};
Inst exp_5458935040[4] = {func_5458931712, func_5458935168, func_5458931712, RETURN};
Inst exp_5458935296[4] = {func_5458931712, func_5458935424, func_5458931712, RETURN};
Inst exp_5458935584[4] = {func_5458931712, func_5458935712, func_5458931712, RETURN};
Inst exp_5458935872[4] = {func_5458931840, func_5458936000, func_5458931840, RETURN};
Inst exp_5458936224[4] = {func_5458931840, func_5458936352, func_5458931840, RETURN};
Inst exp_5458936528[3] = {func_5458934016, func_5458931840, RETURN};
Inst exp_5458934144[4] = {func_5458931712, func_5458938480, func_5458933248, RETURN};
Inst exp_5458934336[4] = {func_5458931712, func_5458934464, func_5458933248, RETURN};
Inst exp_5458938336[4] = {func_5458938704, func_5458931712, func_5458938832, RETURN};
Inst exp_5458933088[8] = {func_5458939440, func_5458931600, func_5458938704, func_5458938832, func_5458933824, func_5458932320, func_5458939696, RETURN};
Inst exp_5458939040[3] = {func_5458933760, func_5458931600, RETURN};
Inst exp_5458940000[8] = {func_5458940128, func_5458938704, func_5458931840, func_5458938832, func_5458933824, func_5458932320, func_5458939696, RETURN};
Inst exp_5458939824[3] = {func_5458932000, func_5458931280, RETURN};
Inst exp_5458939168[3] = {func_5458932320, func_5458932960, RETURN};
Inst exp_5458940400[4] = {func_5458940528, func_5458931712, func_5458933632, RETURN};
Inst exp_5458941024[4] = {func_5458933248, func_5458941152, func_5458931360, RETURN};
Inst exp_5458940656[4] = {func_5458933248, func_5458941280, func_5458931360, RETURN};
Inst exp_5458948240[4] = {func_5458948368, func_5458931600, func_5458948496, RETURN};
Inst exp_5458948624[4] = {func_5458948752, func_5458931600, func_5458948496, RETURN};
Inst exp_5458948880[4] = {func_5458949008, func_5458931600, func_5458948496, RETURN};
Inst exp_5458948160[8] = {func_5458940928, func_5458938704, func_5458931840, func_5458938832, func_5458933824, func_5458932320, func_5458939696, RETURN};
void func_5458931088(void) {
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
            PC = func_5458931088_op0;
        break;
    }
}
void func_5458931840(void) {
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
            PC = func_5458931840_op0;
        break;
        case 1:
            PC = func_5458931840_op1;
        break;
        case 2:
            PC = func_5458931840_op2;
        break;
        case 3:
            PC = func_5458931840_op3;
        break;
        case 4:
            PC = func_5458931840_op4;
        break;
        case 5:
            PC = func_5458931840_op5;
        break;
        case 6:
            PC = func_5458931840_op6;
        break;
    }
}
void func_5458932000(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5458932000_op0;
        break;
        case 1:
            PC = func_5458932000_op1;
        break;
        case 2:
            PC = func_5458932000_op2;
        break;
        case 3:
            PC = func_5458932000_op3;
        break;
        case 4:
            PC = func_5458932000_op4;
        break;
        case 5:
            PC = func_5458932000_op5;
        break;
        case 6:
            PC = func_5458932000_op6;
        break;
        case 7:
            PC = func_5458932000_op7;
        break;
        case 8:
            PC = func_5458932000_op8;
        break;
        case 9:
            PC = func_5458932000_op9;
        break;
    }
}
void func_5458931712(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5458931712_op0;
        break;
        case 1:
            PC = func_5458931712_op1;
        break;
        case 2:
            PC = func_5458931712_op2;
        break;
    }
}
void func_5458931360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5458931360_op0;
        break;
        case 1:
            PC = func_5458931360_op1;
        break;
        case 2:
            PC = func_5458931360_op2;
        break;
    }
}
void func_5458930960(void) {
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
            PC = func_5458930960_op0;
        break;
    }
}
void func_5458931600(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5458931600_op0;
        break;
        case 1:
            PC = func_5458931600_op1;
        break;
    }
}
void func_5458932128(void) {
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
            PC = func_5458932128_op0;
        break;
    }
}
void func_5458933760(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5458933760_op0;
        break;
        case 1:
            PC = func_5458933760_op1;
        break;
        case 2:
            PC = func_5458933760_op2;
        break;
        case 3:
            PC = func_5458933760_op3;
        break;
        case 4:
            PC = func_5458933760_op4;
        break;
        case 5:
            PC = func_5458933760_op5;
        break;
        case 6:
            PC = func_5458933760_op6;
        break;
        case 7:
            PC = func_5458933760_op7;
        break;
        case 8:
            PC = func_5458933760_op8;
        break;
        case 9:
            PC = func_5458933760_op9;
        break;
        case 10:
            PC = func_5458933760_op10;
        break;
        case 11:
            PC = func_5458933760_op11;
        break;
        case 12:
            PC = func_5458933760_op12;
        break;
        case 13:
            PC = func_5458933760_op13;
        break;
        case 14:
            PC = func_5458933760_op14;
        break;
        case 15:
            PC = func_5458933760_op15;
        break;
        case 16:
            PC = func_5458933760_op16;
        break;
        case 17:
            PC = func_5458933760_op17;
        break;
        case 18:
            PC = func_5458933760_op18;
        break;
        case 19:
            PC = func_5458933760_op19;
        break;
        case 20:
            PC = func_5458933760_op20;
        break;
        case 21:
            PC = func_5458933760_op21;
        break;
        case 22:
            PC = func_5458933760_op22;
        break;
        case 23:
            PC = func_5458933760_op23;
        break;
        case 24:
            PC = func_5458933760_op24;
        break;
        case 25:
            PC = func_5458933760_op25;
        break;
        case 26:
            PC = func_5458933760_op26;
        break;
        case 27:
            PC = func_5458933760_op27;
        break;
        case 28:
            PC = func_5458933760_op28;
        break;
        case 29:
            PC = func_5458933760_op29;
        break;
        case 30:
            PC = func_5458933760_op30;
        break;
        case 31:
            PC = func_5458933760_op31;
        break;
        case 32:
            PC = func_5458933760_op32;
        break;
        case 33:
            PC = func_5458933760_op33;
        break;
        case 34:
            PC = func_5458933760_op34;
        break;
        case 35:
            PC = func_5458933760_op35;
        break;
        case 36:
            PC = func_5458933760_op36;
        break;
        case 37:
            PC = func_5458933760_op37;
        break;
        case 38:
            PC = func_5458933760_op38;
        break;
        case 39:
            PC = func_5458933760_op39;
        break;
        case 40:
            PC = func_5458933760_op40;
        break;
        case 41:
            PC = func_5458933760_op41;
        break;
        case 42:
            PC = func_5458933760_op42;
        break;
        case 43:
            PC = func_5458933760_op43;
        break;
        case 44:
            PC = func_5458933760_op44;
        break;
        case 45:
            PC = func_5458933760_op45;
        break;
        case 46:
            PC = func_5458933760_op46;
        break;
        case 47:
            PC = func_5458933760_op47;
        break;
        case 48:
            PC = func_5458933760_op48;
        break;
        case 49:
            PC = func_5458933760_op49;
        break;
        case 50:
            PC = func_5458933760_op50;
        break;
        case 51:
            PC = func_5458933760_op51;
        break;
    }
}
void func_5458931280(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5458931280_op0;
        break;
        case 1:
            PC = func_5458931280_op1;
        break;
    }
}
void func_5458932320(void) {
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
            PC = func_5458932320_op0;
        break;
        case 1:
            PC = func_5458932320_op1;
        break;
    }
}
void func_5458932528(void) {
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
            PC = func_5458932528_op0;
        break;
    }
}
void func_5458932448(void) {
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
            PC = func_5458932448_op0;
        break;
    }
}
void func_5458932960(void) {
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
            PC = func_5458932960_op0;
        break;
        case 1:
            PC = func_5458932960_op1;
        break;
        case 2:
            PC = func_5458932960_op2;
        break;
        case 3:
            PC = func_5458932960_op3;
        break;
        case 4:
            PC = func_5458932960_op4;
        break;
        case 5:
            PC = func_5458932960_op5;
        break;
    }
}
void func_5458933248(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5458933248_op0;
        break;
        case 1:
            PC = func_5458933248_op1;
        break;
        case 2:
            PC = func_5458933248_op2;
        break;
    }
}
void func_5458932800(void) {
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
            PC = func_5458932800_op0;
        break;
        case 1:
            PC = func_5458932800_op1;
        break;
        case 2:
            PC = func_5458932800_op2;
        break;
    }
}
void func_5458932720(void) {
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
            PC = func_5458932720_op0;
        break;
    }
}
void func_5458933184(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5458933184;
}
void func_5458933504(void) {
    extend(61);
    NEXT();
}
void func_5458933632(void) {
    extend(59);
    NEXT();
}
void func_5458934784(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5458934784;
}
void func_5458934912(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5458935040(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5458935040;
}
void func_5458935168(void) {
    extend(33);
    extend(61);
    NEXT();
}
void func_5458935296(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5458935296;
}
void func_5458935424(void) {
    extend(62);
    NEXT();
}
void func_5458935584(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5458935584;
}
void func_5458935712(void) {
    extend(60);
    NEXT();
}
void func_5458935872(void) {
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
    PC = exp_5458935872;
}
void func_5458936000(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_5458936224(void) {
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
    PC = exp_5458936224;
}
void func_5458936352(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_5458936528(void) {
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
    PC = exp_5458936528;
}
void func_5458934016(void) {
    extend(78);
    extend(79);
    extend(84);
    NEXT();
}
void func_5458934656(void) {
    extend(48);
    NEXT();
}
void func_5458934208(void) {
    extend(49);
    NEXT();
}
void func_5458937104(void) {
    extend(50);
    NEXT();
}
void func_5458937232(void) {
    extend(51);
    NEXT();
}
void func_5458937360(void) {
    extend(52);
    NEXT();
}
void func_5458937552(void) {
    extend(53);
    NEXT();
}
void func_5458937680(void) {
    extend(54);
    NEXT();
}
void func_5458937808(void) {
    extend(55);
    NEXT();
}
void func_5458937936(void) {
    extend(56);
    NEXT();
}
void func_5458937488(void) {
    extend(57);
    NEXT();
}
void func_5458934144(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5458934144;
}
void func_5458938480(void) {
    extend(43);
    NEXT();
}
void func_5458934336(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5458934336;
}
void func_5458934464(void) {
    extend(45);
    NEXT();
}
void func_5458938336(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5458938336;
}
void func_5458938704(void) {
    extend(40);
    NEXT();
}
void func_5458938832(void) {
    extend(41);
    NEXT();
}
void func_5458933088(void) {
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
    PC = exp_5458933088;
}
void func_5458939440(void) {
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
void func_5458933824(void) {
    extend(123);
    NEXT();
}
void func_5458939696(void) {
    extend(125);
    NEXT();
}
void func_5458939040(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        return;
    }
    store();
    PC = exp_5458939040;
}
void func_5458940000(void) {
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
    PC = exp_5458940000;
}
void func_5458940128(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5458941472(void) {
    extend(97);
    NEXT();
}
void func_5458941600(void) {
    extend(98);
    NEXT();
}
void func_5458941728(void) {
    extend(99);
    NEXT();
}
void func_5458941888(void) {
    extend(100);
    NEXT();
}
void func_5458942016(void) {
    extend(101);
    NEXT();
}
void func_5458942208(void) {
    extend(102);
    NEXT();
}
void func_5458942336(void) {
    extend(103);
    NEXT();
}
void func_5458936656(void) {
    extend(104);
    NEXT();
}
void func_5458936784(void) {
    extend(105);
    NEXT();
}
void func_5458942144(void) {
    extend(106);
    NEXT();
}
void func_5458942400(void) {
    extend(107);
    NEXT();
}
void func_5458942528(void) {
    extend(108);
    NEXT();
}
void func_5458942656(void) {
    extend(109);
    NEXT();
}
void func_5458942784(void) {
    extend(110);
    NEXT();
}
void func_5458942912(void) {
    extend(111);
    NEXT();
}
void func_5458943040(void) {
    extend(112);
    NEXT();
}
void func_5458943168(void) {
    extend(113);
    NEXT();
}
void func_5458936912(void) {
    extend(114);
    NEXT();
}
void func_5458943552(void) {
    extend(115);
    NEXT();
}
void func_5458943680(void) {
    extend(116);
    NEXT();
}
void func_5458943808(void) {
    extend(117);
    NEXT();
}
void func_5458943936(void) {
    extend(118);
    NEXT();
}
void func_5458944064(void) {
    extend(119);
    NEXT();
}
void func_5458944192(void) {
    extend(120);
    NEXT();
}
void func_5458944320(void) {
    extend(121);
    NEXT();
}
void func_5458944448(void) {
    extend(122);
    NEXT();
}
void func_5458944576(void) {
    extend(65);
    NEXT();
}
void func_5458944704(void) {
    extend(66);
    NEXT();
}
void func_5458944832(void) {
    extend(67);
    NEXT();
}
void func_5458944960(void) {
    extend(68);
    NEXT();
}
void func_5458945088(void) {
    extend(69);
    NEXT();
}
void func_5458945216(void) {
    extend(70);
    NEXT();
}
void func_5458945344(void) {
    extend(71);
    NEXT();
}
void func_5458943296(void) {
    extend(72);
    NEXT();
}
void func_5458943424(void) {
    extend(73);
    NEXT();
}
void func_5458945984(void) {
    extend(74);
    NEXT();
}
void func_5458946112(void) {
    extend(75);
    NEXT();
}
void func_5458946240(void) {
    extend(76);
    NEXT();
}
void func_5458946368(void) {
    extend(77);
    NEXT();
}
void func_5458946496(void) {
    extend(78);
    NEXT();
}
void func_5458946624(void) {
    extend(79);
    NEXT();
}
void func_5458946752(void) {
    extend(80);
    NEXT();
}
void func_5458946880(void) {
    extend(81);
    NEXT();
}
void func_5458947008(void) {
    extend(82);
    NEXT();
}
void func_5458947136(void) {
    extend(83);
    NEXT();
}
void func_5458947264(void) {
    extend(84);
    NEXT();
}
void func_5458947392(void) {
    extend(85);
    NEXT();
}
void func_5458947520(void) {
    extend(86);
    NEXT();
}
void func_5458947648(void) {
    extend(87);
    NEXT();
}
void func_5458947776(void) {
    extend(88);
    NEXT();
}
void func_5458947904(void) {
    extend(89);
    NEXT();
}
void func_5458948032(void) {
    extend(90);
    NEXT();
}
void func_5458939824(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5458939824;
}
void func_5458939168(void) {
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
    PC = exp_5458939168;
}
void func_5458940400(void) {
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
    PC = exp_5458940400;
}
void func_5458940528(void) {
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
void func_5458941024(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5458941024;
}
void func_5458941152(void) {
    extend(42);
    NEXT();
}
void func_5458940656(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5458940656;
}
void func_5458941280(void) {
    extend(47);
    NEXT();
}
void func_5458948240(void) {
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
    PC = exp_5458948240;
}
void func_5458948368(void) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5458948496(void) {
    extend(32);
    extend(59);
    extend(32);
    NEXT();
}
void func_5458948624(void) {
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
    PC = exp_5458948624;
}
void func_5458948752(void) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
}
void func_5458948880(void) {
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
    PC = exp_5458948880;
}
void func_5458949008(void) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
}
void func_5458948160(void) {
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
    PC = exp_5458948160;
}
void func_5458940928(void) {
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
    PC =func_5458932448_op0;
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
