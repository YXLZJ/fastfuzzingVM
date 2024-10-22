#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 40
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
void func_5039500688(void);
void func_5039501440(void);
void func_5039501600(void);
void func_5039501312(void);
void func_5039500960(void);
void func_5039500560(void);
void func_5039501200(void);
void func_5039501728(void);
void func_5039503360(void);
void func_5039500880(void);
void func_5039501920(void);
void func_5039502128(void);
void func_5039502048(void);
void func_5039502560(void);
void func_5039502848(void);
void func_5039502400(void);
void func_5039502320(void);
void func_5039502784(void);
void func_5039503104(void);
void func_5039503232(void);
void func_5039504384(void);
void func_5039504512(void);
void func_5039504640(void);
void func_5039504768(void);
void func_5039504896(void);
void func_5039505024(void);
void func_5039505184(void);
void func_5039505312(void);
void func_5039505472(void);
void func_5039505600(void);
void func_5039505824(void);
void func_5039505952(void);
void func_5039506128(void);
void func_5039503616(void);
void func_5039504256(void);
void func_5039503808(void);
void func_5039506704(void);
void func_5039506832(void);
void func_5039506960(void);
void func_5039507152(void);
void func_5039507280(void);
void func_5039507408(void);
void func_5039507536(void);
void func_5039507088(void);
void func_5039503744(void);
void func_5039508080(void);
void func_5039503936(void);
void func_5039504064(void);
void func_5039507936(void);
void func_5039508304(void);
void func_5039508432(void);
void func_5039502688(void);
void func_5039509040(void);
void func_5039503424(void);
void func_5039509296(void);
void func_5039508640(void);
void func_5039509600(void);
void func_5039509728(void);
void func_5039511072(void);
void func_5039511200(void);
void func_5039511328(void);
void func_5039511488(void);
void func_5039511616(void);
void func_5039511808(void);
void func_5039511936(void);
void func_5039506256(void);
void func_5039506384(void);
void func_5039511744(void);
void func_5039512000(void);
void func_5039512128(void);
void func_5039512256(void);
void func_5039512384(void);
void func_5039512512(void);
void func_5039512640(void);
void func_5039512768(void);
void func_5039506512(void);
void func_5039513152(void);
void func_5039513280(void);
void func_5039513408(void);
void func_5039513536(void);
void func_5039513664(void);
void func_5039513792(void);
void func_5039513920(void);
void func_5039514048(void);
void func_5039514176(void);
void func_5039514304(void);
void func_5039514432(void);
void func_5039514560(void);
void func_5039514688(void);
void func_5039514816(void);
void func_5039514944(void);
void func_5039512896(void);
void func_5039513024(void);
void func_5039515584(void);
void func_5039515712(void);
void func_5039515840(void);
void func_5039515968(void);
void func_5039516096(void);
void func_5039516224(void);
void func_5039516352(void);
void func_5039516480(void);
void func_5039516608(void);
void func_5039516736(void);
void func_5039516864(void);
void func_5039516992(void);
void func_5039517120(void);
void func_5039517248(void);
void func_5039517376(void);
void func_5039517504(void);
void func_5039517632(void);
void func_5039509424(void);
void func_5039508768(void);
void func_5039510000(void);
void func_5039510128(void);
void func_5039510624(void);
void func_5039510752(void);
void func_5039510256(void);
void func_5039510880(void);
void func_5039517840(void);
void func_5039517968(void);
void func_5039518096(void);
void func_5039518224(void);
void func_5039518352(void);
void func_5039518480(void);
void func_5039518608(void);
void func_5039517760(void);
void func_5039510528(void);
void HALT(void);
void RETURN(void);
Inst func_5039500688_op0[2] = {func_5039502784, RETURN};
Inst func_5039501440_op0[2] = {func_5039504384, RETURN};
Inst func_5039501440_op1[2] = {func_5039504640, RETURN};
Inst func_5039501440_op2[2] = {func_5039504896, RETURN};
Inst func_5039501440_op3[2] = {func_5039505184, RETURN};
Inst func_5039501440_op4[2] = {func_5039505472, RETURN};
Inst func_5039501440_op5[2] = {func_5039505824, RETURN};
Inst func_5039501440_op6[2] = {func_5039506128, RETURN};
Inst func_5039501600_op0[2] = {func_5039504256, RETURN};
Inst func_5039501600_op1[2] = {func_5039503808, RETURN};
Inst func_5039501600_op2[2] = {func_5039506704, RETURN};
Inst func_5039501600_op3[2] = {func_5039506832, RETURN};
Inst func_5039501600_op4[2] = {func_5039506960, RETURN};
Inst func_5039501600_op5[2] = {func_5039507152, RETURN};
Inst func_5039501600_op6[2] = {func_5039507280, RETURN};
Inst func_5039501600_op7[2] = {func_5039507408, RETURN};
Inst func_5039501600_op8[2] = {func_5039507536, RETURN};
Inst func_5039501600_op9[2] = {func_5039507088, RETURN};
Inst func_5039501312_op0[2] = {func_5039503744, RETURN};
Inst func_5039501312_op1[2] = {func_5039503936, RETURN};
Inst func_5039501312_op2[2] = {func_5039502848, RETURN};
Inst func_5039500960_op0[2] = {func_5039507936, RETURN};
Inst func_5039500960_op1[2] = {func_5039500880, RETURN};
Inst func_5039500960_op2[2] = {func_5039501200, RETURN};
Inst func_5039500560_op0[2] = {func_5039502688, RETURN};
Inst func_5039501200_op0[2] = {func_5039508640, RETURN};
Inst func_5039501200_op1[2] = {func_5039503360, RETURN};
Inst func_5039501728_op0[2] = {func_5039509600, RETURN};
Inst func_5039503360_op0[2] = {func_5039511072, RETURN};
Inst func_5039503360_op1[2] = {func_5039511200, RETURN};
Inst func_5039503360_op2[2] = {func_5039511328, RETURN};
Inst func_5039503360_op3[2] = {func_5039511488, RETURN};
Inst func_5039503360_op4[2] = {func_5039511616, RETURN};
Inst func_5039503360_op5[2] = {func_5039511808, RETURN};
Inst func_5039503360_op6[2] = {func_5039511936, RETURN};
Inst func_5039503360_op7[2] = {func_5039506256, RETURN};
Inst func_5039503360_op8[2] = {func_5039506384, RETURN};
Inst func_5039503360_op9[2] = {func_5039511744, RETURN};
Inst func_5039503360_op10[2] = {func_5039512000, RETURN};
Inst func_5039503360_op11[2] = {func_5039512128, RETURN};
Inst func_5039503360_op12[2] = {func_5039512256, RETURN};
Inst func_5039503360_op13[2] = {func_5039512384, RETURN};
Inst func_5039503360_op14[2] = {func_5039512512, RETURN};
Inst func_5039503360_op15[2] = {func_5039512640, RETURN};
Inst func_5039503360_op16[2] = {func_5039512768, RETURN};
Inst func_5039503360_op17[2] = {func_5039506512, RETURN};
Inst func_5039503360_op18[2] = {func_5039513152, RETURN};
Inst func_5039503360_op19[2] = {func_5039513280, RETURN};
Inst func_5039503360_op20[2] = {func_5039513408, RETURN};
Inst func_5039503360_op21[2] = {func_5039513536, RETURN};
Inst func_5039503360_op22[2] = {func_5039513664, RETURN};
Inst func_5039503360_op23[2] = {func_5039513792, RETURN};
Inst func_5039503360_op24[2] = {func_5039513920, RETURN};
Inst func_5039503360_op25[2] = {func_5039514048, RETURN};
Inst func_5039503360_op26[2] = {func_5039514176, RETURN};
Inst func_5039503360_op27[2] = {func_5039514304, RETURN};
Inst func_5039503360_op28[2] = {func_5039514432, RETURN};
Inst func_5039503360_op29[2] = {func_5039514560, RETURN};
Inst func_5039503360_op30[2] = {func_5039514688, RETURN};
Inst func_5039503360_op31[2] = {func_5039514816, RETURN};
Inst func_5039503360_op32[2] = {func_5039514944, RETURN};
Inst func_5039503360_op33[2] = {func_5039512896, RETURN};
Inst func_5039503360_op34[2] = {func_5039513024, RETURN};
Inst func_5039503360_op35[2] = {func_5039515584, RETURN};
Inst func_5039503360_op36[2] = {func_5039515712, RETURN};
Inst func_5039503360_op37[2] = {func_5039515840, RETURN};
Inst func_5039503360_op38[2] = {func_5039515968, RETURN};
Inst func_5039503360_op39[2] = {func_5039516096, RETURN};
Inst func_5039503360_op40[2] = {func_5039516224, RETURN};
Inst func_5039503360_op41[2] = {func_5039516352, RETURN};
Inst func_5039503360_op42[2] = {func_5039516480, RETURN};
Inst func_5039503360_op43[2] = {func_5039516608, RETURN};
Inst func_5039503360_op44[2] = {func_5039516736, RETURN};
Inst func_5039503360_op45[2] = {func_5039516864, RETURN};
Inst func_5039503360_op46[2] = {func_5039516992, RETURN};
Inst func_5039503360_op47[2] = {func_5039517120, RETURN};
Inst func_5039503360_op48[2] = {func_5039517248, RETURN};
Inst func_5039503360_op49[2] = {func_5039517376, RETURN};
Inst func_5039503360_op50[2] = {func_5039517504, RETURN};
Inst func_5039503360_op51[2] = {func_5039517632, RETURN};
Inst func_5039500880_op0[2] = {func_5039509424, RETURN};
Inst func_5039500880_op1[2] = {func_5039501600, RETURN};
Inst func_5039501920_op0[2] = {func_5039508768, RETURN};
Inst func_5039501920_op1[2] = {func_5039502560, RETURN};
Inst func_5039502128_op0[2] = {func_5039510000, RETURN};
Inst func_5039502048_op0[2] = {func_5039501920, HALT};
Inst func_5039502560_op0[2] = {func_5039502400, RETURN};
Inst func_5039502560_op1[2] = {func_5039500688, RETURN};
Inst func_5039502560_op2[2] = {func_5039501728, RETURN};
Inst func_5039502560_op3[2] = {func_5039502320, RETURN};
Inst func_5039502560_op4[2] = {func_5039500560, RETURN};
Inst func_5039502560_op5[2] = {func_5039502128, RETURN};
Inst func_5039502848_op0[2] = {func_5039510624, RETURN};
Inst func_5039502848_op1[2] = {func_5039510256, RETURN};
Inst func_5039502848_op2[2] = {func_5039500960, RETURN};
Inst func_5039502400_op0[2] = {func_5039517840, RETURN};
Inst func_5039502400_op1[2] = {func_5039518224, RETURN};
Inst func_5039502400_op2[2] = {func_5039518480, RETURN};
Inst func_5039502320_op0[2] = {func_5039517760, RETURN};
Inst exp_5039502784[5] = {func_5039501200, func_5039503104, func_5039501312, func_5039503232, RETURN};
Inst exp_5039504384[4] = {func_5039501312, func_5039504512, func_5039501312, RETURN};
Inst exp_5039504640[4] = {func_5039501312, func_5039504768, func_5039501312, RETURN};
Inst exp_5039504896[4] = {func_5039501312, func_5039505024, func_5039501312, RETURN};
Inst exp_5039505184[4] = {func_5039501312, func_5039505312, func_5039501312, RETURN};
Inst exp_5039505472[4] = {func_5039501440, func_5039505600, func_5039501440, RETURN};
Inst exp_5039505824[4] = {func_5039501440, func_5039505952, func_5039501440, RETURN};
Inst exp_5039506128[3] = {func_5039503616, func_5039501440, RETURN};
Inst exp_5039503744[4] = {func_5039501312, func_5039508080, func_5039502848, RETURN};
Inst exp_5039503936[4] = {func_5039501312, func_5039504064, func_5039502848, RETURN};
Inst exp_5039507936[4] = {func_5039508304, func_5039501312, func_5039508432, RETURN};
Inst exp_5039502688[8] = {func_5039509040, func_5039501200, func_5039508304, func_5039508432, func_5039503424, func_5039501920, func_5039509296, RETURN};
Inst exp_5039508640[3] = {func_5039503360, func_5039501200, RETURN};
Inst exp_5039509600[8] = {func_5039509728, func_5039508304, func_5039501440, func_5039508432, func_5039503424, func_5039501920, func_5039509296, RETURN};
Inst exp_5039509424[3] = {func_5039501600, func_5039500880, RETURN};
Inst exp_5039508768[3] = {func_5039501920, func_5039502560, RETURN};
Inst exp_5039510000[4] = {func_5039510128, func_5039501312, func_5039503232, RETURN};
Inst exp_5039510624[4] = {func_5039502848, func_5039510752, func_5039500960, RETURN};
Inst exp_5039510256[4] = {func_5039502848, func_5039510880, func_5039500960, RETURN};
Inst exp_5039517840[4] = {func_5039517968, func_5039501200, func_5039518096, RETURN};
Inst exp_5039518224[4] = {func_5039518352, func_5039501200, func_5039518096, RETURN};
Inst exp_5039518480[4] = {func_5039518608, func_5039501200, func_5039518096, RETURN};
Inst exp_5039517760[8] = {func_5039510528, func_5039508304, func_5039501440, func_5039508432, func_5039503424, func_5039501920, func_5039509296, RETURN};
void func_5039500688(void) {
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
            PC = func_5039500688_op0;
        break;
    }
}
void func_5039501440(void) {
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
            PC = func_5039501440_op0;
        break;
        case 1:
            PC = func_5039501440_op1;
        break;
        case 2:
            PC = func_5039501440_op2;
        break;
        case 3:
            PC = func_5039501440_op3;
        break;
        case 4:
            PC = func_5039501440_op4;
        break;
        case 5:
            PC = func_5039501440_op5;
        break;
        case 6:
            PC = func_5039501440_op6;
        break;
    }
}
void func_5039501600(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5039501600_op0;
        break;
        case 1:
            PC = func_5039501600_op1;
        break;
        case 2:
            PC = func_5039501600_op2;
        break;
        case 3:
            PC = func_5039501600_op3;
        break;
        case 4:
            PC = func_5039501600_op4;
        break;
        case 5:
            PC = func_5039501600_op5;
        break;
        case 6:
            PC = func_5039501600_op6;
        break;
        case 7:
            PC = func_5039501600_op7;
        break;
        case 8:
            PC = func_5039501600_op8;
        break;
        case 9:
            PC = func_5039501600_op9;
        break;
    }
}
void func_5039501312(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5039501312_op0;
        break;
        case 1:
            PC = func_5039501312_op1;
        break;
        case 2:
            PC = func_5039501312_op2;
        break;
    }
}
void func_5039500960(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5039500960_op0;
        break;
        case 1:
            PC = func_5039500960_op1;
        break;
        case 2:
            PC = func_5039500960_op2;
        break;
    }
}
void func_5039500560(void) {
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
            PC = func_5039500560_op0;
        break;
    }
}
void func_5039501200(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5039501200_op0;
        break;
        case 1:
            PC = func_5039501200_op1;
        break;
    }
}
void func_5039501728(void) {
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
            PC = func_5039501728_op0;
        break;
    }
}
void func_5039503360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5039503360_op0;
        break;
        case 1:
            PC = func_5039503360_op1;
        break;
        case 2:
            PC = func_5039503360_op2;
        break;
        case 3:
            PC = func_5039503360_op3;
        break;
        case 4:
            PC = func_5039503360_op4;
        break;
        case 5:
            PC = func_5039503360_op5;
        break;
        case 6:
            PC = func_5039503360_op6;
        break;
        case 7:
            PC = func_5039503360_op7;
        break;
        case 8:
            PC = func_5039503360_op8;
        break;
        case 9:
            PC = func_5039503360_op9;
        break;
        case 10:
            PC = func_5039503360_op10;
        break;
        case 11:
            PC = func_5039503360_op11;
        break;
        case 12:
            PC = func_5039503360_op12;
        break;
        case 13:
            PC = func_5039503360_op13;
        break;
        case 14:
            PC = func_5039503360_op14;
        break;
        case 15:
            PC = func_5039503360_op15;
        break;
        case 16:
            PC = func_5039503360_op16;
        break;
        case 17:
            PC = func_5039503360_op17;
        break;
        case 18:
            PC = func_5039503360_op18;
        break;
        case 19:
            PC = func_5039503360_op19;
        break;
        case 20:
            PC = func_5039503360_op20;
        break;
        case 21:
            PC = func_5039503360_op21;
        break;
        case 22:
            PC = func_5039503360_op22;
        break;
        case 23:
            PC = func_5039503360_op23;
        break;
        case 24:
            PC = func_5039503360_op24;
        break;
        case 25:
            PC = func_5039503360_op25;
        break;
        case 26:
            PC = func_5039503360_op26;
        break;
        case 27:
            PC = func_5039503360_op27;
        break;
        case 28:
            PC = func_5039503360_op28;
        break;
        case 29:
            PC = func_5039503360_op29;
        break;
        case 30:
            PC = func_5039503360_op30;
        break;
        case 31:
            PC = func_5039503360_op31;
        break;
        case 32:
            PC = func_5039503360_op32;
        break;
        case 33:
            PC = func_5039503360_op33;
        break;
        case 34:
            PC = func_5039503360_op34;
        break;
        case 35:
            PC = func_5039503360_op35;
        break;
        case 36:
            PC = func_5039503360_op36;
        break;
        case 37:
            PC = func_5039503360_op37;
        break;
        case 38:
            PC = func_5039503360_op38;
        break;
        case 39:
            PC = func_5039503360_op39;
        break;
        case 40:
            PC = func_5039503360_op40;
        break;
        case 41:
            PC = func_5039503360_op41;
        break;
        case 42:
            PC = func_5039503360_op42;
        break;
        case 43:
            PC = func_5039503360_op43;
        break;
        case 44:
            PC = func_5039503360_op44;
        break;
        case 45:
            PC = func_5039503360_op45;
        break;
        case 46:
            PC = func_5039503360_op46;
        break;
        case 47:
            PC = func_5039503360_op47;
        break;
        case 48:
            PC = func_5039503360_op48;
        break;
        case 49:
            PC = func_5039503360_op49;
        break;
        case 50:
            PC = func_5039503360_op50;
        break;
        case 51:
            PC = func_5039503360_op51;
        break;
    }
}
void func_5039500880(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5039500880_op0;
        break;
        case 1:
            PC = func_5039500880_op1;
        break;
    }
}
void func_5039501920(void) {
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
            PC = func_5039501920_op0;
        break;
        case 1:
            PC = func_5039501920_op1;
        break;
    }
}
void func_5039502128(void) {
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
            PC = func_5039502128_op0;
        break;
    }
}
void func_5039502048(void) {
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
            PC = func_5039502048_op0;
        break;
    }
}
void func_5039502560(void) {
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
            PC = func_5039502560_op0;
        break;
        case 1:
            PC = func_5039502560_op1;
        break;
        case 2:
            PC = func_5039502560_op2;
        break;
        case 3:
            PC = func_5039502560_op3;
        break;
        case 4:
            PC = func_5039502560_op4;
        break;
        case 5:
            PC = func_5039502560_op5;
        break;
    }
}
void func_5039502848(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5039502848_op0;
        break;
        case 1:
            PC = func_5039502848_op1;
        break;
        case 2:
            PC = func_5039502848_op2;
        break;
    }
}
void func_5039502400(void) {
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
            PC = func_5039502400_op0;
        break;
        case 1:
            PC = func_5039502400_op1;
        break;
        case 2:
            PC = func_5039502400_op2;
        break;
    }
}
void func_5039502320(void) {
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
            PC = func_5039502320_op0;
        break;
    }
}
void func_5039502784(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5039502784;
}
void func_5039503104(void) {
    extend(61);
    NEXT();
}
void func_5039503232(void) {
    extend(59);
    NEXT();
}
void func_5039504384(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5039504384;
}
void func_5039504512(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5039504640(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5039504640;
}
void func_5039504768(void) {
    extend(33);
    extend(61);
    NEXT();
}
void func_5039504896(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5039504896;
}
void func_5039505024(void) {
    extend(62);
    NEXT();
}
void func_5039505184(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5039505184;
}
void func_5039505312(void) {
    extend(60);
    NEXT();
}
void func_5039505472(void) {
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
    PC = exp_5039505472;
}
void func_5039505600(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_5039505824(void) {
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
    PC = exp_5039505824;
}
void func_5039505952(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_5039506128(void) {
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
    PC = exp_5039506128;
}
void func_5039503616(void) {
    extend(78);
    extend(79);
    extend(84);
    NEXT();
}
void func_5039504256(void) {
    extend(48);
    NEXT();
}
void func_5039503808(void) {
    extend(49);
    NEXT();
}
void func_5039506704(void) {
    extend(50);
    NEXT();
}
void func_5039506832(void) {
    extend(51);
    NEXT();
}
void func_5039506960(void) {
    extend(52);
    NEXT();
}
void func_5039507152(void) {
    extend(53);
    NEXT();
}
void func_5039507280(void) {
    extend(54);
    NEXT();
}
void func_5039507408(void) {
    extend(55);
    NEXT();
}
void func_5039507536(void) {
    extend(56);
    NEXT();
}
void func_5039507088(void) {
    extend(57);
    NEXT();
}
void func_5039503744(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5039503744;
}
void func_5039508080(void) {
    extend(43);
    NEXT();
}
void func_5039503936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5039503936;
}
void func_5039504064(void) {
    extend(45);
    NEXT();
}
void func_5039507936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5039507936;
}
void func_5039508304(void) {
    extend(40);
    NEXT();
}
void func_5039508432(void) {
    extend(41);
    NEXT();
}
void func_5039502688(void) {
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
    PC = exp_5039502688;
}
void func_5039509040(void) {
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
void func_5039503424(void) {
    extend(123);
    NEXT();
}
void func_5039509296(void) {
    extend(125);
    NEXT();
}
void func_5039508640(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        return;
    }
    store();
    PC = exp_5039508640;
}
void func_5039509600(void) {
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
    PC = exp_5039509600;
}
void func_5039509728(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5039511072(void) {
    extend(97);
    NEXT();
}
void func_5039511200(void) {
    extend(98);
    NEXT();
}
void func_5039511328(void) {
    extend(99);
    NEXT();
}
void func_5039511488(void) {
    extend(100);
    NEXT();
}
void func_5039511616(void) {
    extend(101);
    NEXT();
}
void func_5039511808(void) {
    extend(102);
    NEXT();
}
void func_5039511936(void) {
    extend(103);
    NEXT();
}
void func_5039506256(void) {
    extend(104);
    NEXT();
}
void func_5039506384(void) {
    extend(105);
    NEXT();
}
void func_5039511744(void) {
    extend(106);
    NEXT();
}
void func_5039512000(void) {
    extend(107);
    NEXT();
}
void func_5039512128(void) {
    extend(108);
    NEXT();
}
void func_5039512256(void) {
    extend(109);
    NEXT();
}
void func_5039512384(void) {
    extend(110);
    NEXT();
}
void func_5039512512(void) {
    extend(111);
    NEXT();
}
void func_5039512640(void) {
    extend(112);
    NEXT();
}
void func_5039512768(void) {
    extend(113);
    NEXT();
}
void func_5039506512(void) {
    extend(114);
    NEXT();
}
void func_5039513152(void) {
    extend(115);
    NEXT();
}
void func_5039513280(void) {
    extend(116);
    NEXT();
}
void func_5039513408(void) {
    extend(117);
    NEXT();
}
void func_5039513536(void) {
    extend(118);
    NEXT();
}
void func_5039513664(void) {
    extend(119);
    NEXT();
}
void func_5039513792(void) {
    extend(120);
    NEXT();
}
void func_5039513920(void) {
    extend(121);
    NEXT();
}
void func_5039514048(void) {
    extend(122);
    NEXT();
}
void func_5039514176(void) {
    extend(65);
    NEXT();
}
void func_5039514304(void) {
    extend(66);
    NEXT();
}
void func_5039514432(void) {
    extend(67);
    NEXT();
}
void func_5039514560(void) {
    extend(68);
    NEXT();
}
void func_5039514688(void) {
    extend(69);
    NEXT();
}
void func_5039514816(void) {
    extend(70);
    NEXT();
}
void func_5039514944(void) {
    extend(71);
    NEXT();
}
void func_5039512896(void) {
    extend(72);
    NEXT();
}
void func_5039513024(void) {
    extend(73);
    NEXT();
}
void func_5039515584(void) {
    extend(74);
    NEXT();
}
void func_5039515712(void) {
    extend(75);
    NEXT();
}
void func_5039515840(void) {
    extend(76);
    NEXT();
}
void func_5039515968(void) {
    extend(77);
    NEXT();
}
void func_5039516096(void) {
    extend(78);
    NEXT();
}
void func_5039516224(void) {
    extend(79);
    NEXT();
}
void func_5039516352(void) {
    extend(80);
    NEXT();
}
void func_5039516480(void) {
    extend(81);
    NEXT();
}
void func_5039516608(void) {
    extend(82);
    NEXT();
}
void func_5039516736(void) {
    extend(83);
    NEXT();
}
void func_5039516864(void) {
    extend(84);
    NEXT();
}
void func_5039516992(void) {
    extend(85);
    NEXT();
}
void func_5039517120(void) {
    extend(86);
    NEXT();
}
void func_5039517248(void) {
    extend(87);
    NEXT();
}
void func_5039517376(void) {
    extend(88);
    NEXT();
}
void func_5039517504(void) {
    extend(89);
    NEXT();
}
void func_5039517632(void) {
    extend(90);
    NEXT();
}
void func_5039509424(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5039509424;
}
void func_5039508768(void) {
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
    PC = exp_5039508768;
}
void func_5039510000(void) {
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
    PC = exp_5039510000;
}
void func_5039510128(void) {
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
void func_5039510624(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5039510624;
}
void func_5039510752(void) {
    extend(42);
    NEXT();
}
void func_5039510256(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5039510256;
}
void func_5039510880(void) {
    extend(47);
    NEXT();
}
void func_5039517840(void) {
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
    PC = exp_5039517840;
}
void func_5039517968(void) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5039518096(void) {
    extend(32);
    extend(59);
    extend(32);
    NEXT();
}
void func_5039518224(void) {
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
    PC = exp_5039518224;
}
void func_5039518352(void) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
}
void func_5039518480(void) {
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
    PC = exp_5039518480;
}
void func_5039518608(void) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
}
void func_5039517760(void) {
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
    PC = exp_5039517760;
}
void func_5039510528(void) {
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
    PC =func_5039502048_op0;
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
