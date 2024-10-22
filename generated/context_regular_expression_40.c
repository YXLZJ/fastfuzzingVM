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
void func_5542802496(void);
void func_5542819008(void);
void func_5542819216(void);
void func_5542819424(void);
void func_5542818880(void);
void func_5542820080(void);
void func_5542820208(void);
void func_5542819984(void);
void func_5542819760(void);
void func_5542821776(void);
void func_5542820896(void);
void func_5542820336(void);
void func_5542820464(void);
void func_5542820592(void);
void func_5542820720(void);
void func_5542821024(void);
void func_5542819680(void);
void func_5542819824(void);
void func_5542821472(void);
void func_5542821600(void);
void func_5542821904(void);
void func_5542822032(void);
void func_5542822560(void);
void func_5542822240(void);
void func_5542822160(void);
void func_5542822432(void);
void func_5542822752(void);
void func_5542822880(void);
void func_5542823376(void);
void func_5542823504(void);
void func_5542823632(void);
void func_5542823792(void);
void func_5542823920(void);
void func_5542821280(void);
void func_5542824496(void);
void func_5542824624(void);
void func_5542824752(void);
void func_5542821216(void);
void func_5542823072(void);
void func_5542825072(void);
void func_5542825200(void);
void func_5542825328(void);
void func_5542826800(void);
void func_5542826928(void);
void func_5542827056(void);
void func_5542827216(void);
void func_5542827344(void);
void func_5542827536(void);
void func_5542827664(void);
void func_5542827792(void);
void func_5542827920(void);
void func_5542827472(void);
void func_5542828240(void);
void func_5542828368(void);
void func_5542828496(void);
void func_5542828624(void);
void func_5542828752(void);
void func_5542828880(void);
void func_5542829008(void);
void func_5542828048(void);
void func_5542829392(void);
void func_5542829520(void);
void func_5542829648(void);
void func_5542829776(void);
void func_5542829904(void);
void func_5542824048(void);
void func_5542824176(void);
void func_5542824304(void);
void func_5542824432(void);
void func_5542830032(void);
void func_5542830160(void);
void func_5542830288(void);
void func_5542830416(void);
void func_5542830544(void);
void func_5542830672(void);
void func_5542829136(void);
void func_5542829264(void);
void func_5542831312(void);
void func_5542831440(void);
void func_5542831568(void);
void func_5542831696(void);
void func_5542831824(void);
void func_5542831952(void);
void func_5542832080(void);
void func_5542832208(void);
void func_5542832336(void);
void func_5542832464(void);
void func_5542832592(void);
void func_5542832720(void);
void func_5542832848(void);
void func_5542832976(void);
void func_5542833104(void);
void func_5542833232(void);
void func_5542833360(void);
void func_5542825888(void);
void func_5542826048(void);
void func_5542826176(void);
void func_5542826368(void);
void func_5542826496(void);
void func_5542826304(void);
void func_5542833552(void);
void func_5542833680(void);
void func_5542833808(void);
void func_5542825456(void);
void func_5542825584(void);
void func_5542823280(void);
void func_5542833936(void);
void func_5542834064(void);
void func_5542834192(void);
void func_5542823200(void);
void func_5542834320(void);
void func_5542834976(void);
void func_5542835120(void);
void func_5542835280(void);
void func_5542835408(void);
void func_5542835600(void);
void func_5542835728(void);
void func_5542835856(void);
void func_5542835984(void);
void func_5542835536(void);
void func_5542836304(void);
void func_5542834608(void);
void HALT(void);
void RETURN(void);
Inst func_5542802496_op0[2] = {func_5542822240, RETURN};
Inst func_5542802496_op1[2] = {func_5542821600, RETURN};
Inst func_5542819008_op0[2] = {func_5542822160, RETURN};
Inst func_5542819216_op0[2] = {func_5542821904, RETURN};
Inst func_5542819216_op1[2] = {func_5542820592, RETURN};
Inst func_5542819216_op2[2] = {func_5542820208, RETURN};
Inst func_5542819424_op0[2] = {func_5542820464, RETURN};
Inst func_5542819424_op1[2] = {func_5542822432, RETURN};
Inst func_5542818880_op0[2] = {func_5542822880, RETURN};
Inst func_5542820080_op0[2] = {func_5542823376, RETURN};
Inst func_5542820080_op1[2] = {func_5542823504, RETURN};
Inst func_5542820080_op2[2] = {func_5542823632, RETURN};
Inst func_5542820080_op3[2] = {func_5542823792, RETURN};
Inst func_5542820080_op4[2] = {func_5542823920, RETURN};
Inst func_5542820080_op5[2] = {func_5542821280, RETURN};
Inst func_5542820080_op6[2] = {func_5542824496, RETURN};
Inst func_5542820080_op7[2] = {func_5542824624, RETURN};
Inst func_5542820080_op8[2] = {func_5542824752, RETURN};
Inst func_5542820080_op9[2] = {func_5542821216, RETURN};
Inst func_5542820208_op0[2] = {func_5542819760, RETURN};
Inst func_5542820208_op1[2] = {func_5542819008, RETURN};
Inst func_5542820208_op2[2] = {func_5542819984, RETURN};
Inst func_5542820208_op3[2] = {func_5542819424, RETURN};
Inst func_5542820208_op4[2] = {func_5542821472, RETURN};
Inst func_5542819984_op0[2] = {func_5542823072, RETURN};
Inst func_5542819760_op0[2] = {func_5542825072, RETURN};
Inst func_5542821776_op0[2] = {func_5542826800, RETURN};
Inst func_5542821776_op1[2] = {func_5542826928, RETURN};
Inst func_5542821776_op2[2] = {func_5542827056, RETURN};
Inst func_5542821776_op3[2] = {func_5542827216, RETURN};
Inst func_5542821776_op4[2] = {func_5542827344, RETURN};
Inst func_5542821776_op5[2] = {func_5542827536, RETURN};
Inst func_5542821776_op6[2] = {func_5542827664, RETURN};
Inst func_5542821776_op7[2] = {func_5542827792, RETURN};
Inst func_5542821776_op8[2] = {func_5542827920, RETURN};
Inst func_5542821776_op9[2] = {func_5542827472, RETURN};
Inst func_5542821776_op10[2] = {func_5542828240, RETURN};
Inst func_5542821776_op11[2] = {func_5542828368, RETURN};
Inst func_5542821776_op12[2] = {func_5542828496, RETURN};
Inst func_5542821776_op13[2] = {func_5542828624, RETURN};
Inst func_5542821776_op14[2] = {func_5542828752, RETURN};
Inst func_5542821776_op15[2] = {func_5542828880, RETURN};
Inst func_5542821776_op16[2] = {func_5542829008, RETURN};
Inst func_5542821776_op17[2] = {func_5542828048, RETURN};
Inst func_5542821776_op18[2] = {func_5542829392, RETURN};
Inst func_5542821776_op19[2] = {func_5542829520, RETURN};
Inst func_5542821776_op20[2] = {func_5542829648, RETURN};
Inst func_5542821776_op21[2] = {func_5542829776, RETURN};
Inst func_5542821776_op22[2] = {func_5542829904, RETURN};
Inst func_5542821776_op23[2] = {func_5542824048, RETURN};
Inst func_5542821776_op24[2] = {func_5542824176, RETURN};
Inst func_5542821776_op25[2] = {func_5542824304, RETURN};
Inst func_5542821776_op26[2] = {func_5542824432, RETURN};
Inst func_5542821776_op27[2] = {func_5542830032, RETURN};
Inst func_5542821776_op28[2] = {func_5542830160, RETURN};
Inst func_5542821776_op29[2] = {func_5542830288, RETURN};
Inst func_5542821776_op30[2] = {func_5542830416, RETURN};
Inst func_5542821776_op31[2] = {func_5542830544, RETURN};
Inst func_5542821776_op32[2] = {func_5542830672, RETURN};
Inst func_5542821776_op33[2] = {func_5542829136, RETURN};
Inst func_5542821776_op34[2] = {func_5542829264, RETURN};
Inst func_5542821776_op35[2] = {func_5542831312, RETURN};
Inst func_5542821776_op36[2] = {func_5542831440, RETURN};
Inst func_5542821776_op37[2] = {func_5542831568, RETURN};
Inst func_5542821776_op38[2] = {func_5542831696, RETURN};
Inst func_5542821776_op39[2] = {func_5542831824, RETURN};
Inst func_5542821776_op40[2] = {func_5542831952, RETURN};
Inst func_5542821776_op41[2] = {func_5542832080, RETURN};
Inst func_5542821776_op42[2] = {func_5542832208, RETURN};
Inst func_5542821776_op43[2] = {func_5542832336, RETURN};
Inst func_5542821776_op44[2] = {func_5542832464, RETURN};
Inst func_5542821776_op45[2] = {func_5542832592, RETURN};
Inst func_5542821776_op46[2] = {func_5542832720, RETURN};
Inst func_5542821776_op47[2] = {func_5542832848, RETURN};
Inst func_5542821776_op48[2] = {func_5542832976, RETURN};
Inst func_5542821776_op49[2] = {func_5542833104, RETURN};
Inst func_5542821776_op50[2] = {func_5542833232, RETURN};
Inst func_5542821776_op51[2] = {func_5542833360, RETURN};
Inst func_5542820896_op0[2] = {func_5542822752, RETURN};
Inst func_5542820896_op1[2] = {func_5542822160, RETURN};
Inst func_5542820896_op2[2] = {func_5542825888, RETURN};
Inst func_5542820896_op3[2] = {func_5542826048, RETURN};
Inst func_5542820896_op4[2] = {func_5542826176, RETURN};
Inst func_5542820896_op5[2] = {func_5542826368, RETURN};
Inst func_5542820896_op6[2] = {func_5542823072, RETURN};
Inst func_5542820896_op7[2] = {func_5542826496, RETURN};
Inst func_5542820896_op8[2] = {func_5542825200, RETURN};
Inst func_5542820896_op9[2] = {func_5542825328, RETURN};
Inst func_5542820896_op10[2] = {func_5542826304, RETURN};
Inst func_5542820896_op11[2] = {func_5542833552, RETURN};
Inst func_5542820896_op12[2] = {func_5542833680, RETURN};
Inst func_5542820896_op13[2] = {func_5542833808, RETURN};
Inst func_5542820336_op0[2] = {func_5542825456, RETURN};
Inst func_5542820464_op0[2] = {func_5542821776, RETURN};
Inst func_5542820464_op1[2] = {func_5542820080, RETURN};
Inst func_5542820464_op2[2] = {func_5542822560, RETURN};
Inst func_5542820592_op0[2] = {func_5542823280, RETURN};
Inst func_5542820720_op0[2] = {func_5542833936, RETURN};
Inst func_5542821024_op0[2] = {func_5542834064, RETURN};
Inst func_5542819680_op0[2] = {func_5542821024, RETURN};
Inst func_5542819680_op1[2] = {func_5542819424, RETURN};
Inst func_5542819824_op0[2] = {func_5542819680, RETURN};
Inst func_5542819824_op1[2] = {func_5542823200, RETURN};
Inst func_5542821472_op0[2] = {func_5542820720, RETURN};
Inst func_5542821472_op1[2] = {func_5542820336, RETURN};
Inst func_5542821600_op0[2] = {func_5542818880, RETURN};
Inst func_5542821600_op1[2] = {func_5542819216, RETURN};
Inst func_5542821904_op0[2] = {func_5542834320, RETURN};
Inst func_5542822032_op0[2] = {func_5542802496, HALT};
Inst func_5542822560_op0[2] = {func_5542834976, RETURN};
Inst func_5542822560_op1[2] = {func_5542834192, RETURN};
Inst func_5542822560_op2[2] = {func_5542835120, RETURN};
Inst func_5542822560_op3[2] = {func_5542835280, RETURN};
Inst func_5542822560_op4[2] = {func_5542835408, RETURN};
Inst func_5542822560_op5[2] = {func_5542835600, RETURN};
Inst func_5542822560_op6[2] = {func_5542835728, RETURN};
Inst func_5542822560_op7[2] = {func_5542835856, RETURN};
Inst func_5542822560_op8[2] = {func_5542835984, RETURN};
Inst func_5542822560_op9[2] = {func_5542835536, RETURN};
Inst func_5542822560_op10[2] = {func_5542836304, RETURN};
Inst func_5542822240_op0[2] = {func_5542834608, RETURN};
Inst exp_5542822432[3] = {func_5542822752, func_5542820896, RETURN};
Inst exp_5542822880[3] = {func_5542821600, func_5542819216, RETURN};
Inst exp_5542825072[4] = {func_5542825200, func_5542802496, func_5542825328, RETURN};
Inst exp_5542825456[4] = {func_5542825584, func_5542819824, func_5542833552, RETURN};
Inst exp_5542823280[3] = {func_5542820208, func_5542826048, RETURN};
Inst exp_5542833936[4] = {func_5542826304, func_5542819824, func_5542833552, RETURN};
Inst exp_5542834064[4] = {func_5542819424, func_5542834192, func_5542819424, RETURN};
Inst exp_5542823200[3] = {func_5542819680, func_5542819824, RETURN};
Inst exp_5542834320[3] = {func_5542820208, func_5542825888, RETURN};
Inst exp_5542834608[4] = {func_5542802496, func_5542826496, func_5542821600, RETURN};
void func_5542802496(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5542802496_op0;
        break;
        case 1:
            PC = func_5542802496_op1;
        break;
    }
}
void func_5542819008(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5542819008_op0;
        break;
    }
}
void func_5542819216(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5542819216_op0;
        break;
        case 1:
            PC = func_5542819216_op1;
        break;
        case 2:
            PC = func_5542819216_op2;
        break;
    }
}
void func_5542819424(void) {
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
            PC = func_5542819424_op0;
        break;
        case 1:
            PC = func_5542819424_op1;
        break;
    }
}
void func_5542818880(void) {
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
            PC = func_5542818880_op0;
        break;
    }
}
void func_5542820080(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5542820080_op0;
        break;
        case 1:
            PC = func_5542820080_op1;
        break;
        case 2:
            PC = func_5542820080_op2;
        break;
        case 3:
            PC = func_5542820080_op3;
        break;
        case 4:
            PC = func_5542820080_op4;
        break;
        case 5:
            PC = func_5542820080_op5;
        break;
        case 6:
            PC = func_5542820080_op6;
        break;
        case 7:
            PC = func_5542820080_op7;
        break;
        case 8:
            PC = func_5542820080_op8;
        break;
        case 9:
            PC = func_5542820080_op9;
        break;
    }
}
void func_5542820208(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5542820208_op0;
        break;
        case 1:
            PC = func_5542820208_op1;
        break;
        case 2:
            PC = func_5542820208_op2;
        break;
        case 3:
            PC = func_5542820208_op3;
        break;
        case 4:
            PC = func_5542820208_op4;
        break;
    }
}
void func_5542819984(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5542819984_op0;
        break;
    }
}
void func_5542819760(void) {
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
            PC = func_5542819760_op0;
        break;
    }
}
void func_5542821776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5542821776_op0;
        break;
        case 1:
            PC = func_5542821776_op1;
        break;
        case 2:
            PC = func_5542821776_op2;
        break;
        case 3:
            PC = func_5542821776_op3;
        break;
        case 4:
            PC = func_5542821776_op4;
        break;
        case 5:
            PC = func_5542821776_op5;
        break;
        case 6:
            PC = func_5542821776_op6;
        break;
        case 7:
            PC = func_5542821776_op7;
        break;
        case 8:
            PC = func_5542821776_op8;
        break;
        case 9:
            PC = func_5542821776_op9;
        break;
        case 10:
            PC = func_5542821776_op10;
        break;
        case 11:
            PC = func_5542821776_op11;
        break;
        case 12:
            PC = func_5542821776_op12;
        break;
        case 13:
            PC = func_5542821776_op13;
        break;
        case 14:
            PC = func_5542821776_op14;
        break;
        case 15:
            PC = func_5542821776_op15;
        break;
        case 16:
            PC = func_5542821776_op16;
        break;
        case 17:
            PC = func_5542821776_op17;
        break;
        case 18:
            PC = func_5542821776_op18;
        break;
        case 19:
            PC = func_5542821776_op19;
        break;
        case 20:
            PC = func_5542821776_op20;
        break;
        case 21:
            PC = func_5542821776_op21;
        break;
        case 22:
            PC = func_5542821776_op22;
        break;
        case 23:
            PC = func_5542821776_op23;
        break;
        case 24:
            PC = func_5542821776_op24;
        break;
        case 25:
            PC = func_5542821776_op25;
        break;
        case 26:
            PC = func_5542821776_op26;
        break;
        case 27:
            PC = func_5542821776_op27;
        break;
        case 28:
            PC = func_5542821776_op28;
        break;
        case 29:
            PC = func_5542821776_op29;
        break;
        case 30:
            PC = func_5542821776_op30;
        break;
        case 31:
            PC = func_5542821776_op31;
        break;
        case 32:
            PC = func_5542821776_op32;
        break;
        case 33:
            PC = func_5542821776_op33;
        break;
        case 34:
            PC = func_5542821776_op34;
        break;
        case 35:
            PC = func_5542821776_op35;
        break;
        case 36:
            PC = func_5542821776_op36;
        break;
        case 37:
            PC = func_5542821776_op37;
        break;
        case 38:
            PC = func_5542821776_op38;
        break;
        case 39:
            PC = func_5542821776_op39;
        break;
        case 40:
            PC = func_5542821776_op40;
        break;
        case 41:
            PC = func_5542821776_op41;
        break;
        case 42:
            PC = func_5542821776_op42;
        break;
        case 43:
            PC = func_5542821776_op43;
        break;
        case 44:
            PC = func_5542821776_op44;
        break;
        case 45:
            PC = func_5542821776_op45;
        break;
        case 46:
            PC = func_5542821776_op46;
        break;
        case 47:
            PC = func_5542821776_op47;
        break;
        case 48:
            PC = func_5542821776_op48;
        break;
        case 49:
            PC = func_5542821776_op49;
        break;
        case 50:
            PC = func_5542821776_op50;
        break;
        case 51:
            PC = func_5542821776_op51;
        break;
    }
}
void func_5542820896(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        return;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5542820896_op0;
        break;
        case 1:
            PC = func_5542820896_op1;
        break;
        case 2:
            PC = func_5542820896_op2;
        break;
        case 3:
            PC = func_5542820896_op3;
        break;
        case 4:
            PC = func_5542820896_op4;
        break;
        case 5:
            PC = func_5542820896_op5;
        break;
        case 6:
            PC = func_5542820896_op6;
        break;
        case 7:
            PC = func_5542820896_op7;
        break;
        case 8:
            PC = func_5542820896_op8;
        break;
        case 9:
            PC = func_5542820896_op9;
        break;
        case 10:
            PC = func_5542820896_op10;
        break;
        case 11:
            PC = func_5542820896_op11;
        break;
        case 12:
            PC = func_5542820896_op12;
        break;
        case 13:
            PC = func_5542820896_op13;
        break;
    }
}
void func_5542820336(void) {
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
            PC = func_5542820336_op0;
        break;
    }
}
void func_5542820464(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5542820464_op0;
        break;
        case 1:
            PC = func_5542820464_op1;
        break;
        case 2:
            PC = func_5542820464_op2;
        break;
    }
}
void func_5542820592(void) {
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
            PC = func_5542820592_op0;
        break;
    }
}
void func_5542820720(void) {
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
            PC = func_5542820720_op0;
        break;
    }
}
void func_5542821024(void) {
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
            PC = func_5542821024_op0;
        break;
    }
}
void func_5542819680(void) {
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
            PC = func_5542819680_op0;
        break;
        case 1:
            PC = func_5542819680_op1;
        break;
    }
}
void func_5542819824(void) {
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
            PC = func_5542819824_op0;
        break;
        case 1:
            PC = func_5542819824_op1;
        break;
    }
}
void func_5542821472(void) {
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
            PC = func_5542821472_op0;
        break;
        case 1:
            PC = func_5542821472_op1;
        break;
    }
}
void func_5542821600(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5542821600_op0;
        break;
        case 1:
            PC = func_5542821600_op1;
        break;
    }
}
void func_5542821904(void) {
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
            PC = func_5542821904_op0;
        break;
    }
}
void func_5542822032(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5542822032_op0;
        break;
    }
}
void func_5542822560(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        return;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5542822560_op0;
        break;
        case 1:
            PC = func_5542822560_op1;
        break;
        case 2:
            PC = func_5542822560_op2;
        break;
        case 3:
            PC = func_5542822560_op3;
        break;
        case 4:
            PC = func_5542822560_op4;
        break;
        case 5:
            PC = func_5542822560_op5;
        break;
        case 6:
            PC = func_5542822560_op6;
        break;
        case 7:
            PC = func_5542822560_op7;
        break;
        case 8:
            PC = func_5542822560_op8;
        break;
        case 9:
            PC = func_5542822560_op9;
        break;
        case 10:
            PC = func_5542822560_op10;
        break;
    }
}
void func_5542822240(void) {
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
            PC = func_5542822240_op0;
        break;
    }
}
void func_5542822160(void) {
    extend(46);
    NEXT();
}
void func_5542822432(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5542822432;
}
void func_5542822752(void) {
    extend(92);
    NEXT();
}
void func_5542822880(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5542822880;
}
void func_5542823376(void) {
    extend(48);
    NEXT();
}
void func_5542823504(void) {
    extend(49);
    NEXT();
}
void func_5542823632(void) {
    extend(50);
    NEXT();
}
void func_5542823792(void) {
    extend(51);
    NEXT();
}
void func_5542823920(void) {
    extend(52);
    NEXT();
}
void func_5542821280(void) {
    extend(53);
    NEXT();
}
void func_5542824496(void) {
    extend(54);
    NEXT();
}
void func_5542824624(void) {
    extend(55);
    NEXT();
}
void func_5542824752(void) {
    extend(56);
    NEXT();
}
void func_5542821216(void) {
    extend(57);
    NEXT();
}
void func_5542823072(void) {
    extend(36);
    NEXT();
}
void func_5542825072(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5542825072;
}
void func_5542825200(void) {
    extend(40);
    NEXT();
}
void func_5542825328(void) {
    extend(41);
    NEXT();
}
void func_5542826800(void) {
    extend(97);
    NEXT();
}
void func_5542826928(void) {
    extend(98);
    NEXT();
}
void func_5542827056(void) {
    extend(99);
    NEXT();
}
void func_5542827216(void) {
    extend(100);
    NEXT();
}
void func_5542827344(void) {
    extend(101);
    NEXT();
}
void func_5542827536(void) {
    extend(102);
    NEXT();
}
void func_5542827664(void) {
    extend(103);
    NEXT();
}
void func_5542827792(void) {
    extend(104);
    NEXT();
}
void func_5542827920(void) {
    extend(105);
    NEXT();
}
void func_5542827472(void) {
    extend(106);
    NEXT();
}
void func_5542828240(void) {
    extend(107);
    NEXT();
}
void func_5542828368(void) {
    extend(108);
    NEXT();
}
void func_5542828496(void) {
    extend(109);
    NEXT();
}
void func_5542828624(void) {
    extend(110);
    NEXT();
}
void func_5542828752(void) {
    extend(111);
    NEXT();
}
void func_5542828880(void) {
    extend(112);
    NEXT();
}
void func_5542829008(void) {
    extend(113);
    NEXT();
}
void func_5542828048(void) {
    extend(114);
    NEXT();
}
void func_5542829392(void) {
    extend(115);
    NEXT();
}
void func_5542829520(void) {
    extend(116);
    NEXT();
}
void func_5542829648(void) {
    extend(117);
    NEXT();
}
void func_5542829776(void) {
    extend(118);
    NEXT();
}
void func_5542829904(void) {
    extend(119);
    NEXT();
}
void func_5542824048(void) {
    extend(120);
    NEXT();
}
void func_5542824176(void) {
    extend(121);
    NEXT();
}
void func_5542824304(void) {
    extend(122);
    NEXT();
}
void func_5542824432(void) {
    extend(65);
    NEXT();
}
void func_5542830032(void) {
    extend(66);
    NEXT();
}
void func_5542830160(void) {
    extend(67);
    NEXT();
}
void func_5542830288(void) {
    extend(68);
    NEXT();
}
void func_5542830416(void) {
    extend(69);
    NEXT();
}
void func_5542830544(void) {
    extend(70);
    NEXT();
}
void func_5542830672(void) {
    extend(71);
    NEXT();
}
void func_5542829136(void) {
    extend(72);
    NEXT();
}
void func_5542829264(void) {
    extend(73);
    NEXT();
}
void func_5542831312(void) {
    extend(74);
    NEXT();
}
void func_5542831440(void) {
    extend(75);
    NEXT();
}
void func_5542831568(void) {
    extend(76);
    NEXT();
}
void func_5542831696(void) {
    extend(77);
    NEXT();
}
void func_5542831824(void) {
    extend(78);
    NEXT();
}
void func_5542831952(void) {
    extend(79);
    NEXT();
}
void func_5542832080(void) {
    extend(80);
    NEXT();
}
void func_5542832208(void) {
    extend(81);
    NEXT();
}
void func_5542832336(void) {
    extend(82);
    NEXT();
}
void func_5542832464(void) {
    extend(83);
    NEXT();
}
void func_5542832592(void) {
    extend(84);
    NEXT();
}
void func_5542832720(void) {
    extend(85);
    NEXT();
}
void func_5542832848(void) {
    extend(86);
    NEXT();
}
void func_5542832976(void) {
    extend(87);
    NEXT();
}
void func_5542833104(void) {
    extend(88);
    NEXT();
}
void func_5542833232(void) {
    extend(89);
    NEXT();
}
void func_5542833360(void) {
    extend(90);
    NEXT();
}
void func_5542825888(void) {
    extend(42);
    NEXT();
}
void func_5542826048(void) {
    extend(43);
    NEXT();
}
void func_5542826176(void) {
    extend(63);
    NEXT();
}
void func_5542826368(void) {
    extend(94);
    NEXT();
}
void func_5542826496(void) {
    extend(124);
    NEXT();
}
void func_5542826304(void) {
    extend(91);
    NEXT();
}
void func_5542833552(void) {
    extend(93);
    NEXT();
}
void func_5542833680(void) {
    extend(123);
    NEXT();
}
void func_5542833808(void) {
    extend(125);
    NEXT();
}
void func_5542825456(void) {
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
    PC = exp_5542825456;
}
void func_5542825584(void) {
    extend(91);
    extend(94);
    NEXT();
}
void func_5542823280(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        return;
    }
    store();
    PC = exp_5542823280;
}
void func_5542833936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5542833936;
}
void func_5542834064(void) {
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
    PC = exp_5542834064;
}
void func_5542834192(void) {
    extend(45);
    NEXT();
}
void func_5542823200(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5542823200;
}
void func_5542834320(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        return;
    }
    store();
    PC = exp_5542834320;
}
void func_5542834976(void) {
    extend(95);
    NEXT();
}
void func_5542835120(void) {
    extend(64);
    NEXT();
}
void func_5542835280(void) {
    extend(35);
    NEXT();
}
void func_5542835408(void) {
    extend(37);
    NEXT();
}
void func_5542835600(void) {
    extend(38);
    NEXT();
}
void func_5542835728(void) {
    extend(61);
    NEXT();
}
void func_5542835856(void) {
    extend(126);
    NEXT();
}
void func_5542835984(void) {
    extend(96);
    NEXT();
}
void func_5542835536(void) {
    extend(39);
    NEXT();
}
void func_5542836304(void) {
    extend(34);
    NEXT();
}
void func_5542834608(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5542834608;
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
    PC =func_5542822032_op0;
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
