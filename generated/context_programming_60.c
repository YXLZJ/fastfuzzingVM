#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 60
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
void func_5257604496(void);
void func_5257605248(void);
void func_5257605408(void);
void func_5257605120(void);
void func_5257604768(void);
void func_5257604368(void);
void func_5257605008(void);
void func_5257605536(void);
void func_5257607168(void);
void func_5257604688(void);
void func_5257605728(void);
void func_5257605936(void);
void func_5257605856(void);
void func_5257606368(void);
void func_5257606656(void);
void func_5257606208(void);
void func_5257606128(void);
void func_5257606592(void);
void func_5257606912(void);
void func_5257607040(void);
void func_5257608192(void);
void func_5257608320(void);
void func_5257608448(void);
void func_5257608576(void);
void func_5257608704(void);
void func_5257608832(void);
void func_5257608992(void);
void func_5257609120(void);
void func_5257609280(void);
void func_5257609408(void);
void func_5257609632(void);
void func_5257609760(void);
void func_5257609936(void);
void func_5257607424(void);
void func_5257608064(void);
void func_5257607616(void);
void func_5257610512(void);
void func_5257610640(void);
void func_5257610768(void);
void func_5257610960(void);
void func_5257611088(void);
void func_5257611216(void);
void func_5257611344(void);
void func_5257610896(void);
void func_5257607552(void);
void func_5257611888(void);
void func_5257607744(void);
void func_5257607872(void);
void func_5257611744(void);
void func_5257612112(void);
void func_5257612240(void);
void func_5257606496(void);
void func_5257612848(void);
void func_5257607232(void);
void func_5257613104(void);
void func_5257612448(void);
void func_5257613408(void);
void func_5257613536(void);
void func_5257614880(void);
void func_5257615008(void);
void func_5257615136(void);
void func_5257615296(void);
void func_5257615424(void);
void func_5257615616(void);
void func_5257615744(void);
void func_5257610064(void);
void func_5257610192(void);
void func_5257615552(void);
void func_5257615808(void);
void func_5257615936(void);
void func_5257616064(void);
void func_5257616192(void);
void func_5257616320(void);
void func_5257616448(void);
void func_5257616576(void);
void func_5257610320(void);
void func_5257616960(void);
void func_5257617088(void);
void func_5257617216(void);
void func_5257617344(void);
void func_5257617472(void);
void func_5257617600(void);
void func_5257617728(void);
void func_5257617856(void);
void func_5257617984(void);
void func_5257618112(void);
void func_5257618240(void);
void func_5257618368(void);
void func_5257618496(void);
void func_5257618624(void);
void func_5257618752(void);
void func_5257616704(void);
void func_5257616832(void);
void func_5257619392(void);
void func_5257619520(void);
void func_5257619648(void);
void func_5257619776(void);
void func_5257619904(void);
void func_5257620032(void);
void func_5257620160(void);
void func_5257620288(void);
void func_5257620416(void);
void func_5257620544(void);
void func_5257620672(void);
void func_5257620800(void);
void func_5257620928(void);
void func_5257621056(void);
void func_5257621184(void);
void func_5257621312(void);
void func_5257621440(void);
void func_5257613232(void);
void func_5257612576(void);
void func_5257613808(void);
void func_5257613936(void);
void func_5257614432(void);
void func_5257614560(void);
void func_5257614064(void);
void func_5257614688(void);
void func_5257621648(void);
void func_5257621776(void);
void func_5257621904(void);
void func_5257622032(void);
void func_5257622160(void);
void func_5257622288(void);
void func_5257622416(void);
void func_5257621568(void);
void func_5257614336(void);
void HALT(void);
void RETURN(void);
Inst func_5257604496_op0[2] = {func_5257606592, RETURN};
Inst func_5257605248_op0[2] = {func_5257608192, RETURN};
Inst func_5257605248_op1[2] = {func_5257608448, RETURN};
Inst func_5257605248_op2[2] = {func_5257608704, RETURN};
Inst func_5257605248_op3[2] = {func_5257608992, RETURN};
Inst func_5257605248_op4[2] = {func_5257609280, RETURN};
Inst func_5257605248_op5[2] = {func_5257609632, RETURN};
Inst func_5257605248_op6[2] = {func_5257609936, RETURN};
Inst func_5257605408_op0[2] = {func_5257608064, RETURN};
Inst func_5257605408_op1[2] = {func_5257607616, RETURN};
Inst func_5257605408_op2[2] = {func_5257610512, RETURN};
Inst func_5257605408_op3[2] = {func_5257610640, RETURN};
Inst func_5257605408_op4[2] = {func_5257610768, RETURN};
Inst func_5257605408_op5[2] = {func_5257610960, RETURN};
Inst func_5257605408_op6[2] = {func_5257611088, RETURN};
Inst func_5257605408_op7[2] = {func_5257611216, RETURN};
Inst func_5257605408_op8[2] = {func_5257611344, RETURN};
Inst func_5257605408_op9[2] = {func_5257610896, RETURN};
Inst func_5257605120_op0[2] = {func_5257607552, RETURN};
Inst func_5257605120_op1[2] = {func_5257607744, RETURN};
Inst func_5257605120_op2[2] = {func_5257606656, RETURN};
Inst func_5257604768_op0[2] = {func_5257611744, RETURN};
Inst func_5257604768_op1[2] = {func_5257604688, RETURN};
Inst func_5257604768_op2[2] = {func_5257605008, RETURN};
Inst func_5257604368_op0[2] = {func_5257606496, RETURN};
Inst func_5257605008_op0[2] = {func_5257612448, RETURN};
Inst func_5257605008_op1[2] = {func_5257607168, RETURN};
Inst func_5257605536_op0[2] = {func_5257613408, RETURN};
Inst func_5257607168_op0[2] = {func_5257614880, RETURN};
Inst func_5257607168_op1[2] = {func_5257615008, RETURN};
Inst func_5257607168_op2[2] = {func_5257615136, RETURN};
Inst func_5257607168_op3[2] = {func_5257615296, RETURN};
Inst func_5257607168_op4[2] = {func_5257615424, RETURN};
Inst func_5257607168_op5[2] = {func_5257615616, RETURN};
Inst func_5257607168_op6[2] = {func_5257615744, RETURN};
Inst func_5257607168_op7[2] = {func_5257610064, RETURN};
Inst func_5257607168_op8[2] = {func_5257610192, RETURN};
Inst func_5257607168_op9[2] = {func_5257615552, RETURN};
Inst func_5257607168_op10[2] = {func_5257615808, RETURN};
Inst func_5257607168_op11[2] = {func_5257615936, RETURN};
Inst func_5257607168_op12[2] = {func_5257616064, RETURN};
Inst func_5257607168_op13[2] = {func_5257616192, RETURN};
Inst func_5257607168_op14[2] = {func_5257616320, RETURN};
Inst func_5257607168_op15[2] = {func_5257616448, RETURN};
Inst func_5257607168_op16[2] = {func_5257616576, RETURN};
Inst func_5257607168_op17[2] = {func_5257610320, RETURN};
Inst func_5257607168_op18[2] = {func_5257616960, RETURN};
Inst func_5257607168_op19[2] = {func_5257617088, RETURN};
Inst func_5257607168_op20[2] = {func_5257617216, RETURN};
Inst func_5257607168_op21[2] = {func_5257617344, RETURN};
Inst func_5257607168_op22[2] = {func_5257617472, RETURN};
Inst func_5257607168_op23[2] = {func_5257617600, RETURN};
Inst func_5257607168_op24[2] = {func_5257617728, RETURN};
Inst func_5257607168_op25[2] = {func_5257617856, RETURN};
Inst func_5257607168_op26[2] = {func_5257617984, RETURN};
Inst func_5257607168_op27[2] = {func_5257618112, RETURN};
Inst func_5257607168_op28[2] = {func_5257618240, RETURN};
Inst func_5257607168_op29[2] = {func_5257618368, RETURN};
Inst func_5257607168_op30[2] = {func_5257618496, RETURN};
Inst func_5257607168_op31[2] = {func_5257618624, RETURN};
Inst func_5257607168_op32[2] = {func_5257618752, RETURN};
Inst func_5257607168_op33[2] = {func_5257616704, RETURN};
Inst func_5257607168_op34[2] = {func_5257616832, RETURN};
Inst func_5257607168_op35[2] = {func_5257619392, RETURN};
Inst func_5257607168_op36[2] = {func_5257619520, RETURN};
Inst func_5257607168_op37[2] = {func_5257619648, RETURN};
Inst func_5257607168_op38[2] = {func_5257619776, RETURN};
Inst func_5257607168_op39[2] = {func_5257619904, RETURN};
Inst func_5257607168_op40[2] = {func_5257620032, RETURN};
Inst func_5257607168_op41[2] = {func_5257620160, RETURN};
Inst func_5257607168_op42[2] = {func_5257620288, RETURN};
Inst func_5257607168_op43[2] = {func_5257620416, RETURN};
Inst func_5257607168_op44[2] = {func_5257620544, RETURN};
Inst func_5257607168_op45[2] = {func_5257620672, RETURN};
Inst func_5257607168_op46[2] = {func_5257620800, RETURN};
Inst func_5257607168_op47[2] = {func_5257620928, RETURN};
Inst func_5257607168_op48[2] = {func_5257621056, RETURN};
Inst func_5257607168_op49[2] = {func_5257621184, RETURN};
Inst func_5257607168_op50[2] = {func_5257621312, RETURN};
Inst func_5257607168_op51[2] = {func_5257621440, RETURN};
Inst func_5257604688_op0[2] = {func_5257613232, RETURN};
Inst func_5257604688_op1[2] = {func_5257605408, RETURN};
Inst func_5257605728_op0[2] = {func_5257612576, RETURN};
Inst func_5257605728_op1[2] = {func_5257606368, RETURN};
Inst func_5257605936_op0[2] = {func_5257613808, RETURN};
Inst func_5257605856_op0[2] = {func_5257605728, HALT};
Inst func_5257606368_op0[2] = {func_5257606208, RETURN};
Inst func_5257606368_op1[2] = {func_5257604496, RETURN};
Inst func_5257606368_op2[2] = {func_5257605536, RETURN};
Inst func_5257606368_op3[2] = {func_5257606128, RETURN};
Inst func_5257606368_op4[2] = {func_5257604368, RETURN};
Inst func_5257606368_op5[2] = {func_5257605936, RETURN};
Inst func_5257606656_op0[2] = {func_5257614432, RETURN};
Inst func_5257606656_op1[2] = {func_5257614064, RETURN};
Inst func_5257606656_op2[2] = {func_5257604768, RETURN};
Inst func_5257606208_op0[2] = {func_5257621648, RETURN};
Inst func_5257606208_op1[2] = {func_5257622032, RETURN};
Inst func_5257606208_op2[2] = {func_5257622288, RETURN};
Inst func_5257606128_op0[2] = {func_5257621568, RETURN};
Inst exp_5257606592[5] = {func_5257605008, func_5257606912, func_5257605120, func_5257607040, RETURN};
Inst exp_5257608192[4] = {func_5257605120, func_5257608320, func_5257605120, RETURN};
Inst exp_5257608448[4] = {func_5257605120, func_5257608576, func_5257605120, RETURN};
Inst exp_5257608704[4] = {func_5257605120, func_5257608832, func_5257605120, RETURN};
Inst exp_5257608992[4] = {func_5257605120, func_5257609120, func_5257605120, RETURN};
Inst exp_5257609280[4] = {func_5257605248, func_5257609408, func_5257605248, RETURN};
Inst exp_5257609632[4] = {func_5257605248, func_5257609760, func_5257605248, RETURN};
Inst exp_5257609936[3] = {func_5257607424, func_5257605248, RETURN};
Inst exp_5257607552[4] = {func_5257605120, func_5257611888, func_5257606656, RETURN};
Inst exp_5257607744[4] = {func_5257605120, func_5257607872, func_5257606656, RETURN};
Inst exp_5257611744[4] = {func_5257612112, func_5257605120, func_5257612240, RETURN};
Inst exp_5257606496[8] = {func_5257612848, func_5257605008, func_5257612112, func_5257612240, func_5257607232, func_5257605728, func_5257613104, RETURN};
Inst exp_5257612448[3] = {func_5257607168, func_5257605008, RETURN};
Inst exp_5257613408[8] = {func_5257613536, func_5257612112, func_5257605248, func_5257612240, func_5257607232, func_5257605728, func_5257613104, RETURN};
Inst exp_5257613232[3] = {func_5257605408, func_5257604688, RETURN};
Inst exp_5257612576[3] = {func_5257605728, func_5257606368, RETURN};
Inst exp_5257613808[4] = {func_5257613936, func_5257605120, func_5257607040, RETURN};
Inst exp_5257614432[4] = {func_5257606656, func_5257614560, func_5257604768, RETURN};
Inst exp_5257614064[4] = {func_5257606656, func_5257614688, func_5257604768, RETURN};
Inst exp_5257621648[4] = {func_5257621776, func_5257605008, func_5257621904, RETURN};
Inst exp_5257622032[4] = {func_5257622160, func_5257605008, func_5257621904, RETURN};
Inst exp_5257622288[4] = {func_5257622416, func_5257605008, func_5257621904, RETURN};
Inst exp_5257621568[8] = {func_5257614336, func_5257612112, func_5257605248, func_5257612240, func_5257607232, func_5257605728, func_5257613104, RETURN};
void func_5257604496(void) {
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
            PC = func_5257604496_op0;
        break;
    }
}
void func_5257605248(void) {
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
            PC = func_5257605248_op0;
        break;
        case 1:
            PC = func_5257605248_op1;
        break;
        case 2:
            PC = func_5257605248_op2;
        break;
        case 3:
            PC = func_5257605248_op3;
        break;
        case 4:
            PC = func_5257605248_op4;
        break;
        case 5:
            PC = func_5257605248_op5;
        break;
        case 6:
            PC = func_5257605248_op6;
        break;
    }
}
void func_5257605408(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5257605408_op0;
        break;
        case 1:
            PC = func_5257605408_op1;
        break;
        case 2:
            PC = func_5257605408_op2;
        break;
        case 3:
            PC = func_5257605408_op3;
        break;
        case 4:
            PC = func_5257605408_op4;
        break;
        case 5:
            PC = func_5257605408_op5;
        break;
        case 6:
            PC = func_5257605408_op6;
        break;
        case 7:
            PC = func_5257605408_op7;
        break;
        case 8:
            PC = func_5257605408_op8;
        break;
        case 9:
            PC = func_5257605408_op9;
        break;
    }
}
void func_5257605120(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5257605120_op0;
        break;
        case 1:
            PC = func_5257605120_op1;
        break;
        case 2:
            PC = func_5257605120_op2;
        break;
    }
}
void func_5257604768(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5257604768_op0;
        break;
        case 1:
            PC = func_5257604768_op1;
        break;
        case 2:
            PC = func_5257604768_op2;
        break;
    }
}
void func_5257604368(void) {
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
            PC = func_5257604368_op0;
        break;
    }
}
void func_5257605008(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5257605008_op0;
        break;
        case 1:
            PC = func_5257605008_op1;
        break;
    }
}
void func_5257605536(void) {
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
            PC = func_5257605536_op0;
        break;
    }
}
void func_5257607168(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5257607168_op0;
        break;
        case 1:
            PC = func_5257607168_op1;
        break;
        case 2:
            PC = func_5257607168_op2;
        break;
        case 3:
            PC = func_5257607168_op3;
        break;
        case 4:
            PC = func_5257607168_op4;
        break;
        case 5:
            PC = func_5257607168_op5;
        break;
        case 6:
            PC = func_5257607168_op6;
        break;
        case 7:
            PC = func_5257607168_op7;
        break;
        case 8:
            PC = func_5257607168_op8;
        break;
        case 9:
            PC = func_5257607168_op9;
        break;
        case 10:
            PC = func_5257607168_op10;
        break;
        case 11:
            PC = func_5257607168_op11;
        break;
        case 12:
            PC = func_5257607168_op12;
        break;
        case 13:
            PC = func_5257607168_op13;
        break;
        case 14:
            PC = func_5257607168_op14;
        break;
        case 15:
            PC = func_5257607168_op15;
        break;
        case 16:
            PC = func_5257607168_op16;
        break;
        case 17:
            PC = func_5257607168_op17;
        break;
        case 18:
            PC = func_5257607168_op18;
        break;
        case 19:
            PC = func_5257607168_op19;
        break;
        case 20:
            PC = func_5257607168_op20;
        break;
        case 21:
            PC = func_5257607168_op21;
        break;
        case 22:
            PC = func_5257607168_op22;
        break;
        case 23:
            PC = func_5257607168_op23;
        break;
        case 24:
            PC = func_5257607168_op24;
        break;
        case 25:
            PC = func_5257607168_op25;
        break;
        case 26:
            PC = func_5257607168_op26;
        break;
        case 27:
            PC = func_5257607168_op27;
        break;
        case 28:
            PC = func_5257607168_op28;
        break;
        case 29:
            PC = func_5257607168_op29;
        break;
        case 30:
            PC = func_5257607168_op30;
        break;
        case 31:
            PC = func_5257607168_op31;
        break;
        case 32:
            PC = func_5257607168_op32;
        break;
        case 33:
            PC = func_5257607168_op33;
        break;
        case 34:
            PC = func_5257607168_op34;
        break;
        case 35:
            PC = func_5257607168_op35;
        break;
        case 36:
            PC = func_5257607168_op36;
        break;
        case 37:
            PC = func_5257607168_op37;
        break;
        case 38:
            PC = func_5257607168_op38;
        break;
        case 39:
            PC = func_5257607168_op39;
        break;
        case 40:
            PC = func_5257607168_op40;
        break;
        case 41:
            PC = func_5257607168_op41;
        break;
        case 42:
            PC = func_5257607168_op42;
        break;
        case 43:
            PC = func_5257607168_op43;
        break;
        case 44:
            PC = func_5257607168_op44;
        break;
        case 45:
            PC = func_5257607168_op45;
        break;
        case 46:
            PC = func_5257607168_op46;
        break;
        case 47:
            PC = func_5257607168_op47;
        break;
        case 48:
            PC = func_5257607168_op48;
        break;
        case 49:
            PC = func_5257607168_op49;
        break;
        case 50:
            PC = func_5257607168_op50;
        break;
        case 51:
            PC = func_5257607168_op51;
        break;
    }
}
void func_5257604688(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5257604688_op0;
        break;
        case 1:
            PC = func_5257604688_op1;
        break;
    }
}
void func_5257605728(void) {
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
            PC = func_5257605728_op0;
        break;
        case 1:
            PC = func_5257605728_op1;
        break;
    }
}
void func_5257605936(void) {
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
            PC = func_5257605936_op0;
        break;
    }
}
void func_5257605856(void) {
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
            PC = func_5257605856_op0;
        break;
    }
}
void func_5257606368(void) {
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
            PC = func_5257606368_op0;
        break;
        case 1:
            PC = func_5257606368_op1;
        break;
        case 2:
            PC = func_5257606368_op2;
        break;
        case 3:
            PC = func_5257606368_op3;
        break;
        case 4:
            PC = func_5257606368_op4;
        break;
        case 5:
            PC = func_5257606368_op5;
        break;
    }
}
void func_5257606656(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5257606656_op0;
        break;
        case 1:
            PC = func_5257606656_op1;
        break;
        case 2:
            PC = func_5257606656_op2;
        break;
    }
}
void func_5257606208(void) {
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
            PC = func_5257606208_op0;
        break;
        case 1:
            PC = func_5257606208_op1;
        break;
        case 2:
            PC = func_5257606208_op2;
        break;
    }
}
void func_5257606128(void) {
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
            PC = func_5257606128_op0;
        break;
    }
}
void func_5257606592(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5257606592;
}
void func_5257606912(void) {
    extend(61);
    NEXT();
}
void func_5257607040(void) {
    extend(59);
    NEXT();
}
void func_5257608192(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5257608192;
}
void func_5257608320(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5257608448(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5257608448;
}
void func_5257608576(void) {
    extend(33);
    extend(61);
    NEXT();
}
void func_5257608704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5257608704;
}
void func_5257608832(void) {
    extend(62);
    NEXT();
}
void func_5257608992(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5257608992;
}
void func_5257609120(void) {
    extend(60);
    NEXT();
}
void func_5257609280(void) {
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
    PC = exp_5257609280;
}
void func_5257609408(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_5257609632(void) {
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
    PC = exp_5257609632;
}
void func_5257609760(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_5257609936(void) {
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
    PC = exp_5257609936;
}
void func_5257607424(void) {
    extend(78);
    extend(79);
    extend(84);
    NEXT();
}
void func_5257608064(void) {
    extend(48);
    NEXT();
}
void func_5257607616(void) {
    extend(49);
    NEXT();
}
void func_5257610512(void) {
    extend(50);
    NEXT();
}
void func_5257610640(void) {
    extend(51);
    NEXT();
}
void func_5257610768(void) {
    extend(52);
    NEXT();
}
void func_5257610960(void) {
    extend(53);
    NEXT();
}
void func_5257611088(void) {
    extend(54);
    NEXT();
}
void func_5257611216(void) {
    extend(55);
    NEXT();
}
void func_5257611344(void) {
    extend(56);
    NEXT();
}
void func_5257610896(void) {
    extend(57);
    NEXT();
}
void func_5257607552(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5257607552;
}
void func_5257611888(void) {
    extend(43);
    NEXT();
}
void func_5257607744(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5257607744;
}
void func_5257607872(void) {
    extend(45);
    NEXT();
}
void func_5257611744(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5257611744;
}
void func_5257612112(void) {
    extend(40);
    NEXT();
}
void func_5257612240(void) {
    extend(41);
    NEXT();
}
void func_5257606496(void) {
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
    PC = exp_5257606496;
}
void func_5257612848(void) {
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
void func_5257607232(void) {
    extend(123);
    NEXT();
}
void func_5257613104(void) {
    extend(125);
    NEXT();
}
void func_5257612448(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        return;
    }
    store();
    PC = exp_5257612448;
}
void func_5257613408(void) {
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
    PC = exp_5257613408;
}
void func_5257613536(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5257614880(void) {
    extend(97);
    NEXT();
}
void func_5257615008(void) {
    extend(98);
    NEXT();
}
void func_5257615136(void) {
    extend(99);
    NEXT();
}
void func_5257615296(void) {
    extend(100);
    NEXT();
}
void func_5257615424(void) {
    extend(101);
    NEXT();
}
void func_5257615616(void) {
    extend(102);
    NEXT();
}
void func_5257615744(void) {
    extend(103);
    NEXT();
}
void func_5257610064(void) {
    extend(104);
    NEXT();
}
void func_5257610192(void) {
    extend(105);
    NEXT();
}
void func_5257615552(void) {
    extend(106);
    NEXT();
}
void func_5257615808(void) {
    extend(107);
    NEXT();
}
void func_5257615936(void) {
    extend(108);
    NEXT();
}
void func_5257616064(void) {
    extend(109);
    NEXT();
}
void func_5257616192(void) {
    extend(110);
    NEXT();
}
void func_5257616320(void) {
    extend(111);
    NEXT();
}
void func_5257616448(void) {
    extend(112);
    NEXT();
}
void func_5257616576(void) {
    extend(113);
    NEXT();
}
void func_5257610320(void) {
    extend(114);
    NEXT();
}
void func_5257616960(void) {
    extend(115);
    NEXT();
}
void func_5257617088(void) {
    extend(116);
    NEXT();
}
void func_5257617216(void) {
    extend(117);
    NEXT();
}
void func_5257617344(void) {
    extend(118);
    NEXT();
}
void func_5257617472(void) {
    extend(119);
    NEXT();
}
void func_5257617600(void) {
    extend(120);
    NEXT();
}
void func_5257617728(void) {
    extend(121);
    NEXT();
}
void func_5257617856(void) {
    extend(122);
    NEXT();
}
void func_5257617984(void) {
    extend(65);
    NEXT();
}
void func_5257618112(void) {
    extend(66);
    NEXT();
}
void func_5257618240(void) {
    extend(67);
    NEXT();
}
void func_5257618368(void) {
    extend(68);
    NEXT();
}
void func_5257618496(void) {
    extend(69);
    NEXT();
}
void func_5257618624(void) {
    extend(70);
    NEXT();
}
void func_5257618752(void) {
    extend(71);
    NEXT();
}
void func_5257616704(void) {
    extend(72);
    NEXT();
}
void func_5257616832(void) {
    extend(73);
    NEXT();
}
void func_5257619392(void) {
    extend(74);
    NEXT();
}
void func_5257619520(void) {
    extend(75);
    NEXT();
}
void func_5257619648(void) {
    extend(76);
    NEXT();
}
void func_5257619776(void) {
    extend(77);
    NEXT();
}
void func_5257619904(void) {
    extend(78);
    NEXT();
}
void func_5257620032(void) {
    extend(79);
    NEXT();
}
void func_5257620160(void) {
    extend(80);
    NEXT();
}
void func_5257620288(void) {
    extend(81);
    NEXT();
}
void func_5257620416(void) {
    extend(82);
    NEXT();
}
void func_5257620544(void) {
    extend(83);
    NEXT();
}
void func_5257620672(void) {
    extend(84);
    NEXT();
}
void func_5257620800(void) {
    extend(85);
    NEXT();
}
void func_5257620928(void) {
    extend(86);
    NEXT();
}
void func_5257621056(void) {
    extend(87);
    NEXT();
}
void func_5257621184(void) {
    extend(88);
    NEXT();
}
void func_5257621312(void) {
    extend(89);
    NEXT();
}
void func_5257621440(void) {
    extend(90);
    NEXT();
}
void func_5257613232(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5257613232;
}
void func_5257612576(void) {
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
    PC = exp_5257612576;
}
void func_5257613808(void) {
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
    PC = exp_5257613808;
}
void func_5257613936(void) {
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
void func_5257614432(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5257614432;
}
void func_5257614560(void) {
    extend(42);
    NEXT();
}
void func_5257614064(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5257614064;
}
void func_5257614688(void) {
    extend(47);
    NEXT();
}
void func_5257621648(void) {
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
    PC = exp_5257621648;
}
void func_5257621776(void) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5257621904(void) {
    extend(32);
    extend(59);
    extend(32);
    NEXT();
}
void func_5257622032(void) {
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
    PC = exp_5257622032;
}
void func_5257622160(void) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
}
void func_5257622288(void) {
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
    PC = exp_5257622288;
}
void func_5257622416(void) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
}
void func_5257621568(void) {
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
    PC = exp_5257621568;
}
void func_5257614336(void) {
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
    PC =func_5257605856_op0;
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
