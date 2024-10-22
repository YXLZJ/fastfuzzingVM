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
void func_5668631616(void);
void func_5668648128(void);
void func_5668648336(void);
void func_5668648544(void);
void func_5668648000(void);
void func_5668649200(void);
void func_5668649328(void);
void func_5668649104(void);
void func_5668648880(void);
void func_5668650896(void);
void func_5668650016(void);
void func_5668649456(void);
void func_5668649584(void);
void func_5668649712(void);
void func_5668649840(void);
void func_5668650144(void);
void func_5668648800(void);
void func_5668648944(void);
void func_5668650592(void);
void func_5668650720(void);
void func_5668651024(void);
void func_5668651152(void);
void func_5668651680(void);
void func_5668651360(void);
void func_5668651280(void);
void func_5668651552(void);
void func_5668651872(void);
void func_5668652000(void);
void func_5668652496(void);
void func_5668652624(void);
void func_5668652752(void);
void func_5668652912(void);
void func_5668653040(void);
void func_5668650400(void);
void func_5668653616(void);
void func_5668653744(void);
void func_5668653872(void);
void func_5668650336(void);
void func_5668652192(void);
void func_5668654192(void);
void func_5668654320(void);
void func_5668654448(void);
void func_5668655920(void);
void func_5668656048(void);
void func_5668656176(void);
void func_5668656336(void);
void func_5668656464(void);
void func_5668656656(void);
void func_5668656784(void);
void func_5668656912(void);
void func_5668657040(void);
void func_5668656592(void);
void func_5668657360(void);
void func_5668657488(void);
void func_5668657616(void);
void func_5668657744(void);
void func_5668657872(void);
void func_5668658000(void);
void func_5668658128(void);
void func_5668657168(void);
void func_5668658512(void);
void func_5668658640(void);
void func_5668658768(void);
void func_5668658896(void);
void func_5668659024(void);
void func_5668653168(void);
void func_5668653296(void);
void func_5668653424(void);
void func_5668653552(void);
void func_5668659152(void);
void func_5668659280(void);
void func_5668659408(void);
void func_5668659536(void);
void func_5668659664(void);
void func_5668659792(void);
void func_5668658256(void);
void func_5668658384(void);
void func_5668660432(void);
void func_5668660560(void);
void func_5668660688(void);
void func_5668660816(void);
void func_5668660944(void);
void func_5668661072(void);
void func_5668661200(void);
void func_5668661328(void);
void func_5668661456(void);
void func_5668661584(void);
void func_5668661712(void);
void func_5668661840(void);
void func_5668661968(void);
void func_5668662096(void);
void func_5668662224(void);
void func_5668662352(void);
void func_5668662480(void);
void func_5668655008(void);
void func_5668655168(void);
void func_5668655296(void);
void func_5668655488(void);
void func_5668655616(void);
void func_5668655424(void);
void func_5668662672(void);
void func_5668662800(void);
void func_5668662928(void);
void func_5668654576(void);
void func_5668654704(void);
void func_5668652400(void);
void func_5668663056(void);
void func_5668663184(void);
void func_5668663312(void);
void func_5668652320(void);
void func_5668663440(void);
void func_5668664096(void);
void func_5668664240(void);
void func_5668664400(void);
void func_5668664528(void);
void func_5668664720(void);
void func_5668664848(void);
void func_5668664976(void);
void func_5668665104(void);
void func_5668664656(void);
void func_5668665424(void);
void func_5668663728(void);
void HALT(void);
void RETURN(void);
Inst func_5668631616_op0[2] = {func_5668651360, RETURN};
Inst func_5668631616_op1[2] = {func_5668650720, RETURN};
Inst func_5668648128_op0[2] = {func_5668651280, RETURN};
Inst func_5668648336_op0[2] = {func_5668651024, RETURN};
Inst func_5668648336_op1[2] = {func_5668649712, RETURN};
Inst func_5668648336_op2[2] = {func_5668649328, RETURN};
Inst func_5668648544_op0[2] = {func_5668649584, RETURN};
Inst func_5668648544_op1[2] = {func_5668651552, RETURN};
Inst func_5668648000_op0[2] = {func_5668652000, RETURN};
Inst func_5668649200_op0[2] = {func_5668652496, RETURN};
Inst func_5668649200_op1[2] = {func_5668652624, RETURN};
Inst func_5668649200_op2[2] = {func_5668652752, RETURN};
Inst func_5668649200_op3[2] = {func_5668652912, RETURN};
Inst func_5668649200_op4[2] = {func_5668653040, RETURN};
Inst func_5668649200_op5[2] = {func_5668650400, RETURN};
Inst func_5668649200_op6[2] = {func_5668653616, RETURN};
Inst func_5668649200_op7[2] = {func_5668653744, RETURN};
Inst func_5668649200_op8[2] = {func_5668653872, RETURN};
Inst func_5668649200_op9[2] = {func_5668650336, RETURN};
Inst func_5668649328_op0[2] = {func_5668648880, RETURN};
Inst func_5668649328_op1[2] = {func_5668648128, RETURN};
Inst func_5668649328_op2[2] = {func_5668649104, RETURN};
Inst func_5668649328_op3[2] = {func_5668648544, RETURN};
Inst func_5668649328_op4[2] = {func_5668650592, RETURN};
Inst func_5668649104_op0[2] = {func_5668652192, RETURN};
Inst func_5668648880_op0[2] = {func_5668654192, RETURN};
Inst func_5668650896_op0[2] = {func_5668655920, RETURN};
Inst func_5668650896_op1[2] = {func_5668656048, RETURN};
Inst func_5668650896_op2[2] = {func_5668656176, RETURN};
Inst func_5668650896_op3[2] = {func_5668656336, RETURN};
Inst func_5668650896_op4[2] = {func_5668656464, RETURN};
Inst func_5668650896_op5[2] = {func_5668656656, RETURN};
Inst func_5668650896_op6[2] = {func_5668656784, RETURN};
Inst func_5668650896_op7[2] = {func_5668656912, RETURN};
Inst func_5668650896_op8[2] = {func_5668657040, RETURN};
Inst func_5668650896_op9[2] = {func_5668656592, RETURN};
Inst func_5668650896_op10[2] = {func_5668657360, RETURN};
Inst func_5668650896_op11[2] = {func_5668657488, RETURN};
Inst func_5668650896_op12[2] = {func_5668657616, RETURN};
Inst func_5668650896_op13[2] = {func_5668657744, RETURN};
Inst func_5668650896_op14[2] = {func_5668657872, RETURN};
Inst func_5668650896_op15[2] = {func_5668658000, RETURN};
Inst func_5668650896_op16[2] = {func_5668658128, RETURN};
Inst func_5668650896_op17[2] = {func_5668657168, RETURN};
Inst func_5668650896_op18[2] = {func_5668658512, RETURN};
Inst func_5668650896_op19[2] = {func_5668658640, RETURN};
Inst func_5668650896_op20[2] = {func_5668658768, RETURN};
Inst func_5668650896_op21[2] = {func_5668658896, RETURN};
Inst func_5668650896_op22[2] = {func_5668659024, RETURN};
Inst func_5668650896_op23[2] = {func_5668653168, RETURN};
Inst func_5668650896_op24[2] = {func_5668653296, RETURN};
Inst func_5668650896_op25[2] = {func_5668653424, RETURN};
Inst func_5668650896_op26[2] = {func_5668653552, RETURN};
Inst func_5668650896_op27[2] = {func_5668659152, RETURN};
Inst func_5668650896_op28[2] = {func_5668659280, RETURN};
Inst func_5668650896_op29[2] = {func_5668659408, RETURN};
Inst func_5668650896_op30[2] = {func_5668659536, RETURN};
Inst func_5668650896_op31[2] = {func_5668659664, RETURN};
Inst func_5668650896_op32[2] = {func_5668659792, RETURN};
Inst func_5668650896_op33[2] = {func_5668658256, RETURN};
Inst func_5668650896_op34[2] = {func_5668658384, RETURN};
Inst func_5668650896_op35[2] = {func_5668660432, RETURN};
Inst func_5668650896_op36[2] = {func_5668660560, RETURN};
Inst func_5668650896_op37[2] = {func_5668660688, RETURN};
Inst func_5668650896_op38[2] = {func_5668660816, RETURN};
Inst func_5668650896_op39[2] = {func_5668660944, RETURN};
Inst func_5668650896_op40[2] = {func_5668661072, RETURN};
Inst func_5668650896_op41[2] = {func_5668661200, RETURN};
Inst func_5668650896_op42[2] = {func_5668661328, RETURN};
Inst func_5668650896_op43[2] = {func_5668661456, RETURN};
Inst func_5668650896_op44[2] = {func_5668661584, RETURN};
Inst func_5668650896_op45[2] = {func_5668661712, RETURN};
Inst func_5668650896_op46[2] = {func_5668661840, RETURN};
Inst func_5668650896_op47[2] = {func_5668661968, RETURN};
Inst func_5668650896_op48[2] = {func_5668662096, RETURN};
Inst func_5668650896_op49[2] = {func_5668662224, RETURN};
Inst func_5668650896_op50[2] = {func_5668662352, RETURN};
Inst func_5668650896_op51[2] = {func_5668662480, RETURN};
Inst func_5668650016_op0[2] = {func_5668651872, RETURN};
Inst func_5668650016_op1[2] = {func_5668651280, RETURN};
Inst func_5668650016_op2[2] = {func_5668655008, RETURN};
Inst func_5668650016_op3[2] = {func_5668655168, RETURN};
Inst func_5668650016_op4[2] = {func_5668655296, RETURN};
Inst func_5668650016_op5[2] = {func_5668655488, RETURN};
Inst func_5668650016_op6[2] = {func_5668652192, RETURN};
Inst func_5668650016_op7[2] = {func_5668655616, RETURN};
Inst func_5668650016_op8[2] = {func_5668654320, RETURN};
Inst func_5668650016_op9[2] = {func_5668654448, RETURN};
Inst func_5668650016_op10[2] = {func_5668655424, RETURN};
Inst func_5668650016_op11[2] = {func_5668662672, RETURN};
Inst func_5668650016_op12[2] = {func_5668662800, RETURN};
Inst func_5668650016_op13[2] = {func_5668662928, RETURN};
Inst func_5668649456_op0[2] = {func_5668654576, RETURN};
Inst func_5668649584_op0[2] = {func_5668650896, RETURN};
Inst func_5668649584_op1[2] = {func_5668649200, RETURN};
Inst func_5668649584_op2[2] = {func_5668651680, RETURN};
Inst func_5668649712_op0[2] = {func_5668652400, RETURN};
Inst func_5668649840_op0[2] = {func_5668663056, RETURN};
Inst func_5668650144_op0[2] = {func_5668663184, RETURN};
Inst func_5668648800_op0[2] = {func_5668650144, RETURN};
Inst func_5668648800_op1[2] = {func_5668648544, RETURN};
Inst func_5668648944_op0[2] = {func_5668648800, RETURN};
Inst func_5668648944_op1[2] = {func_5668652320, RETURN};
Inst func_5668650592_op0[2] = {func_5668649840, RETURN};
Inst func_5668650592_op1[2] = {func_5668649456, RETURN};
Inst func_5668650720_op0[2] = {func_5668648000, RETURN};
Inst func_5668650720_op1[2] = {func_5668648336, RETURN};
Inst func_5668651024_op0[2] = {func_5668663440, RETURN};
Inst func_5668651152_op0[2] = {func_5668631616, HALT};
Inst func_5668651680_op0[2] = {func_5668664096, RETURN};
Inst func_5668651680_op1[2] = {func_5668663312, RETURN};
Inst func_5668651680_op2[2] = {func_5668664240, RETURN};
Inst func_5668651680_op3[2] = {func_5668664400, RETURN};
Inst func_5668651680_op4[2] = {func_5668664528, RETURN};
Inst func_5668651680_op5[2] = {func_5668664720, RETURN};
Inst func_5668651680_op6[2] = {func_5668664848, RETURN};
Inst func_5668651680_op7[2] = {func_5668664976, RETURN};
Inst func_5668651680_op8[2] = {func_5668665104, RETURN};
Inst func_5668651680_op9[2] = {func_5668664656, RETURN};
Inst func_5668651680_op10[2] = {func_5668665424, RETURN};
Inst func_5668651360_op0[2] = {func_5668663728, RETURN};
Inst exp_5668651552[3] = {func_5668651872, func_5668650016, RETURN};
Inst exp_5668652000[3] = {func_5668650720, func_5668648336, RETURN};
Inst exp_5668654192[4] = {func_5668654320, func_5668631616, func_5668654448, RETURN};
Inst exp_5668654576[4] = {func_5668654704, func_5668648944, func_5668662672, RETURN};
Inst exp_5668652400[3] = {func_5668649328, func_5668655168, RETURN};
Inst exp_5668663056[4] = {func_5668655424, func_5668648944, func_5668662672, RETURN};
Inst exp_5668663184[4] = {func_5668648544, func_5668663312, func_5668648544, RETURN};
Inst exp_5668652320[3] = {func_5668648800, func_5668648944, RETURN};
Inst exp_5668663440[3] = {func_5668649328, func_5668655008, RETURN};
Inst exp_5668663728[4] = {func_5668631616, func_5668655616, func_5668650720, RETURN};
void func_5668631616(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5668631616_op0;
        break;
        case 1:
            PC = func_5668631616_op1;
        break;
    }
}
void func_5668648128(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5668648128_op0;
        break;
    }
}
void func_5668648336(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5668648336_op0;
        break;
        case 1:
            PC = func_5668648336_op1;
        break;
        case 2:
            PC = func_5668648336_op2;
        break;
    }
}
void func_5668648544(void) {
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
            PC = func_5668648544_op0;
        break;
        case 1:
            PC = func_5668648544_op1;
        break;
    }
}
void func_5668648000(void) {
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
            PC = func_5668648000_op0;
        break;
    }
}
void func_5668649200(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5668649200_op0;
        break;
        case 1:
            PC = func_5668649200_op1;
        break;
        case 2:
            PC = func_5668649200_op2;
        break;
        case 3:
            PC = func_5668649200_op3;
        break;
        case 4:
            PC = func_5668649200_op4;
        break;
        case 5:
            PC = func_5668649200_op5;
        break;
        case 6:
            PC = func_5668649200_op6;
        break;
        case 7:
            PC = func_5668649200_op7;
        break;
        case 8:
            PC = func_5668649200_op8;
        break;
        case 9:
            PC = func_5668649200_op9;
        break;
    }
}
void func_5668649328(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5668649328_op0;
        break;
        case 1:
            PC = func_5668649328_op1;
        break;
        case 2:
            PC = func_5668649328_op2;
        break;
        case 3:
            PC = func_5668649328_op3;
        break;
        case 4:
            PC = func_5668649328_op4;
        break;
    }
}
void func_5668649104(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5668649104_op0;
        break;
    }
}
void func_5668648880(void) {
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
            PC = func_5668648880_op0;
        break;
    }
}
void func_5668650896(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5668650896_op0;
        break;
        case 1:
            PC = func_5668650896_op1;
        break;
        case 2:
            PC = func_5668650896_op2;
        break;
        case 3:
            PC = func_5668650896_op3;
        break;
        case 4:
            PC = func_5668650896_op4;
        break;
        case 5:
            PC = func_5668650896_op5;
        break;
        case 6:
            PC = func_5668650896_op6;
        break;
        case 7:
            PC = func_5668650896_op7;
        break;
        case 8:
            PC = func_5668650896_op8;
        break;
        case 9:
            PC = func_5668650896_op9;
        break;
        case 10:
            PC = func_5668650896_op10;
        break;
        case 11:
            PC = func_5668650896_op11;
        break;
        case 12:
            PC = func_5668650896_op12;
        break;
        case 13:
            PC = func_5668650896_op13;
        break;
        case 14:
            PC = func_5668650896_op14;
        break;
        case 15:
            PC = func_5668650896_op15;
        break;
        case 16:
            PC = func_5668650896_op16;
        break;
        case 17:
            PC = func_5668650896_op17;
        break;
        case 18:
            PC = func_5668650896_op18;
        break;
        case 19:
            PC = func_5668650896_op19;
        break;
        case 20:
            PC = func_5668650896_op20;
        break;
        case 21:
            PC = func_5668650896_op21;
        break;
        case 22:
            PC = func_5668650896_op22;
        break;
        case 23:
            PC = func_5668650896_op23;
        break;
        case 24:
            PC = func_5668650896_op24;
        break;
        case 25:
            PC = func_5668650896_op25;
        break;
        case 26:
            PC = func_5668650896_op26;
        break;
        case 27:
            PC = func_5668650896_op27;
        break;
        case 28:
            PC = func_5668650896_op28;
        break;
        case 29:
            PC = func_5668650896_op29;
        break;
        case 30:
            PC = func_5668650896_op30;
        break;
        case 31:
            PC = func_5668650896_op31;
        break;
        case 32:
            PC = func_5668650896_op32;
        break;
        case 33:
            PC = func_5668650896_op33;
        break;
        case 34:
            PC = func_5668650896_op34;
        break;
        case 35:
            PC = func_5668650896_op35;
        break;
        case 36:
            PC = func_5668650896_op36;
        break;
        case 37:
            PC = func_5668650896_op37;
        break;
        case 38:
            PC = func_5668650896_op38;
        break;
        case 39:
            PC = func_5668650896_op39;
        break;
        case 40:
            PC = func_5668650896_op40;
        break;
        case 41:
            PC = func_5668650896_op41;
        break;
        case 42:
            PC = func_5668650896_op42;
        break;
        case 43:
            PC = func_5668650896_op43;
        break;
        case 44:
            PC = func_5668650896_op44;
        break;
        case 45:
            PC = func_5668650896_op45;
        break;
        case 46:
            PC = func_5668650896_op46;
        break;
        case 47:
            PC = func_5668650896_op47;
        break;
        case 48:
            PC = func_5668650896_op48;
        break;
        case 49:
            PC = func_5668650896_op49;
        break;
        case 50:
            PC = func_5668650896_op50;
        break;
        case 51:
            PC = func_5668650896_op51;
        break;
    }
}
void func_5668650016(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        return;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5668650016_op0;
        break;
        case 1:
            PC = func_5668650016_op1;
        break;
        case 2:
            PC = func_5668650016_op2;
        break;
        case 3:
            PC = func_5668650016_op3;
        break;
        case 4:
            PC = func_5668650016_op4;
        break;
        case 5:
            PC = func_5668650016_op5;
        break;
        case 6:
            PC = func_5668650016_op6;
        break;
        case 7:
            PC = func_5668650016_op7;
        break;
        case 8:
            PC = func_5668650016_op8;
        break;
        case 9:
            PC = func_5668650016_op9;
        break;
        case 10:
            PC = func_5668650016_op10;
        break;
        case 11:
            PC = func_5668650016_op11;
        break;
        case 12:
            PC = func_5668650016_op12;
        break;
        case 13:
            PC = func_5668650016_op13;
        break;
    }
}
void func_5668649456(void) {
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
            PC = func_5668649456_op0;
        break;
    }
}
void func_5668649584(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5668649584_op0;
        break;
        case 1:
            PC = func_5668649584_op1;
        break;
        case 2:
            PC = func_5668649584_op2;
        break;
    }
}
void func_5668649712(void) {
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
            PC = func_5668649712_op0;
        break;
    }
}
void func_5668649840(void) {
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
            PC = func_5668649840_op0;
        break;
    }
}
void func_5668650144(void) {
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
            PC = func_5668650144_op0;
        break;
    }
}
void func_5668648800(void) {
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
            PC = func_5668648800_op0;
        break;
        case 1:
            PC = func_5668648800_op1;
        break;
    }
}
void func_5668648944(void) {
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
            PC = func_5668648944_op0;
        break;
        case 1:
            PC = func_5668648944_op1;
        break;
    }
}
void func_5668650592(void) {
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
            PC = func_5668650592_op0;
        break;
        case 1:
            PC = func_5668650592_op1;
        break;
    }
}
void func_5668650720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5668650720_op0;
        break;
        case 1:
            PC = func_5668650720_op1;
        break;
    }
}
void func_5668651024(void) {
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
            PC = func_5668651024_op0;
        break;
    }
}
void func_5668651152(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5668651152_op0;
        break;
    }
}
void func_5668651680(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        return;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5668651680_op0;
        break;
        case 1:
            PC = func_5668651680_op1;
        break;
        case 2:
            PC = func_5668651680_op2;
        break;
        case 3:
            PC = func_5668651680_op3;
        break;
        case 4:
            PC = func_5668651680_op4;
        break;
        case 5:
            PC = func_5668651680_op5;
        break;
        case 6:
            PC = func_5668651680_op6;
        break;
        case 7:
            PC = func_5668651680_op7;
        break;
        case 8:
            PC = func_5668651680_op8;
        break;
        case 9:
            PC = func_5668651680_op9;
        break;
        case 10:
            PC = func_5668651680_op10;
        break;
    }
}
void func_5668651360(void) {
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
            PC = func_5668651360_op0;
        break;
    }
}
void func_5668651280(void) {
    extend(46);
    NEXT();
}
void func_5668651552(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5668651552;
}
void func_5668651872(void) {
    extend(92);
    NEXT();
}
void func_5668652000(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5668652000;
}
void func_5668652496(void) {
    extend(48);
    NEXT();
}
void func_5668652624(void) {
    extend(49);
    NEXT();
}
void func_5668652752(void) {
    extend(50);
    NEXT();
}
void func_5668652912(void) {
    extend(51);
    NEXT();
}
void func_5668653040(void) {
    extend(52);
    NEXT();
}
void func_5668650400(void) {
    extend(53);
    NEXT();
}
void func_5668653616(void) {
    extend(54);
    NEXT();
}
void func_5668653744(void) {
    extend(55);
    NEXT();
}
void func_5668653872(void) {
    extend(56);
    NEXT();
}
void func_5668650336(void) {
    extend(57);
    NEXT();
}
void func_5668652192(void) {
    extend(36);
    NEXT();
}
void func_5668654192(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5668654192;
}
void func_5668654320(void) {
    extend(40);
    NEXT();
}
void func_5668654448(void) {
    extend(41);
    NEXT();
}
void func_5668655920(void) {
    extend(97);
    NEXT();
}
void func_5668656048(void) {
    extend(98);
    NEXT();
}
void func_5668656176(void) {
    extend(99);
    NEXT();
}
void func_5668656336(void) {
    extend(100);
    NEXT();
}
void func_5668656464(void) {
    extend(101);
    NEXT();
}
void func_5668656656(void) {
    extend(102);
    NEXT();
}
void func_5668656784(void) {
    extend(103);
    NEXT();
}
void func_5668656912(void) {
    extend(104);
    NEXT();
}
void func_5668657040(void) {
    extend(105);
    NEXT();
}
void func_5668656592(void) {
    extend(106);
    NEXT();
}
void func_5668657360(void) {
    extend(107);
    NEXT();
}
void func_5668657488(void) {
    extend(108);
    NEXT();
}
void func_5668657616(void) {
    extend(109);
    NEXT();
}
void func_5668657744(void) {
    extend(110);
    NEXT();
}
void func_5668657872(void) {
    extend(111);
    NEXT();
}
void func_5668658000(void) {
    extend(112);
    NEXT();
}
void func_5668658128(void) {
    extend(113);
    NEXT();
}
void func_5668657168(void) {
    extend(114);
    NEXT();
}
void func_5668658512(void) {
    extend(115);
    NEXT();
}
void func_5668658640(void) {
    extend(116);
    NEXT();
}
void func_5668658768(void) {
    extend(117);
    NEXT();
}
void func_5668658896(void) {
    extend(118);
    NEXT();
}
void func_5668659024(void) {
    extend(119);
    NEXT();
}
void func_5668653168(void) {
    extend(120);
    NEXT();
}
void func_5668653296(void) {
    extend(121);
    NEXT();
}
void func_5668653424(void) {
    extend(122);
    NEXT();
}
void func_5668653552(void) {
    extend(65);
    NEXT();
}
void func_5668659152(void) {
    extend(66);
    NEXT();
}
void func_5668659280(void) {
    extend(67);
    NEXT();
}
void func_5668659408(void) {
    extend(68);
    NEXT();
}
void func_5668659536(void) {
    extend(69);
    NEXT();
}
void func_5668659664(void) {
    extend(70);
    NEXT();
}
void func_5668659792(void) {
    extend(71);
    NEXT();
}
void func_5668658256(void) {
    extend(72);
    NEXT();
}
void func_5668658384(void) {
    extend(73);
    NEXT();
}
void func_5668660432(void) {
    extend(74);
    NEXT();
}
void func_5668660560(void) {
    extend(75);
    NEXT();
}
void func_5668660688(void) {
    extend(76);
    NEXT();
}
void func_5668660816(void) {
    extend(77);
    NEXT();
}
void func_5668660944(void) {
    extend(78);
    NEXT();
}
void func_5668661072(void) {
    extend(79);
    NEXT();
}
void func_5668661200(void) {
    extend(80);
    NEXT();
}
void func_5668661328(void) {
    extend(81);
    NEXT();
}
void func_5668661456(void) {
    extend(82);
    NEXT();
}
void func_5668661584(void) {
    extend(83);
    NEXT();
}
void func_5668661712(void) {
    extend(84);
    NEXT();
}
void func_5668661840(void) {
    extend(85);
    NEXT();
}
void func_5668661968(void) {
    extend(86);
    NEXT();
}
void func_5668662096(void) {
    extend(87);
    NEXT();
}
void func_5668662224(void) {
    extend(88);
    NEXT();
}
void func_5668662352(void) {
    extend(89);
    NEXT();
}
void func_5668662480(void) {
    extend(90);
    NEXT();
}
void func_5668655008(void) {
    extend(42);
    NEXT();
}
void func_5668655168(void) {
    extend(43);
    NEXT();
}
void func_5668655296(void) {
    extend(63);
    NEXT();
}
void func_5668655488(void) {
    extend(94);
    NEXT();
}
void func_5668655616(void) {
    extend(124);
    NEXT();
}
void func_5668655424(void) {
    extend(91);
    NEXT();
}
void func_5668662672(void) {
    extend(93);
    NEXT();
}
void func_5668662800(void) {
    extend(123);
    NEXT();
}
void func_5668662928(void) {
    extend(125);
    NEXT();
}
void func_5668654576(void) {
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
    PC = exp_5668654576;
}
void func_5668654704(void) {
    extend(91);
    extend(94);
    NEXT();
}
void func_5668652400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        return;
    }
    store();
    PC = exp_5668652400;
}
void func_5668663056(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5668663056;
}
void func_5668663184(void) {
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
    PC = exp_5668663184;
}
void func_5668663312(void) {
    extend(45);
    NEXT();
}
void func_5668652320(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5668652320;
}
void func_5668663440(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        return;
    }
    store();
    PC = exp_5668663440;
}
void func_5668664096(void) {
    extend(95);
    NEXT();
}
void func_5668664240(void) {
    extend(64);
    NEXT();
}
void func_5668664400(void) {
    extend(35);
    NEXT();
}
void func_5668664528(void) {
    extend(37);
    NEXT();
}
void func_5668664720(void) {
    extend(38);
    NEXT();
}
void func_5668664848(void) {
    extend(61);
    NEXT();
}
void func_5668664976(void) {
    extend(126);
    NEXT();
}
void func_5668665104(void) {
    extend(96);
    NEXT();
}
void func_5668664656(void) {
    extend(39);
    NEXT();
}
void func_5668665424(void) {
    extend(34);
    NEXT();
}
void func_5668663728(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5668663728;
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
    PC =func_5668651152_op0;
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
