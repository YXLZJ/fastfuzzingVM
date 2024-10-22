#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 50
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
void func_4804619664(void);
void func_4804620416(void);
void func_4804620576(void);
void func_4804620288(void);
void func_4804619936(void);
void func_4804619536(void);
void func_4804620176(void);
void func_4804620704(void);
void func_4804622336(void);
void func_4804619856(void);
void func_4804620896(void);
void func_4804621104(void);
void func_4804621024(void);
void func_4804621536(void);
void func_4804621824(void);
void func_4804621376(void);
void func_4804621296(void);
void func_4804621760(void);
void func_4804622080(void);
void func_4804622208(void);
void func_4804623360(void);
void func_4804623488(void);
void func_4804623616(void);
void func_4804623744(void);
void func_4804623872(void);
void func_4804624000(void);
void func_4804624160(void);
void func_4804624288(void);
void func_4804624448(void);
void func_4804624576(void);
void func_4804624800(void);
void func_4804624928(void);
void func_4804625104(void);
void func_4804622592(void);
void func_4804623232(void);
void func_4804622784(void);
void func_4804625680(void);
void func_4804625808(void);
void func_4804625936(void);
void func_4804626128(void);
void func_4804626256(void);
void func_4804626384(void);
void func_4804626512(void);
void func_4804626064(void);
void func_4804622720(void);
void func_4804627056(void);
void func_4804622912(void);
void func_4804623040(void);
void func_4804626912(void);
void func_4804627280(void);
void func_4804627408(void);
void func_4804621664(void);
void func_4804628016(void);
void func_4804622400(void);
void func_4804628272(void);
void func_4804627616(void);
void func_4804628576(void);
void func_4804628704(void);
void func_4804630048(void);
void func_4804630176(void);
void func_4804630304(void);
void func_4804630464(void);
void func_4804630592(void);
void func_4804630784(void);
void func_4804630912(void);
void func_4804625232(void);
void func_4804625360(void);
void func_4804630720(void);
void func_4804630976(void);
void func_4804631104(void);
void func_4804631232(void);
void func_4804631360(void);
void func_4804631488(void);
void func_4804631616(void);
void func_4804631744(void);
void func_4804625488(void);
void func_4804632128(void);
void func_4804632256(void);
void func_4804632384(void);
void func_4804632512(void);
void func_4804632640(void);
void func_4804632768(void);
void func_4804632896(void);
void func_4804633024(void);
void func_4804633152(void);
void func_4804633280(void);
void func_4804633408(void);
void func_4804633536(void);
void func_4804633664(void);
void func_4804633792(void);
void func_4804633920(void);
void func_4804631872(void);
void func_4804632000(void);
void func_4804634560(void);
void func_4804634688(void);
void func_4804634816(void);
void func_4804634944(void);
void func_4804635072(void);
void func_4804635200(void);
void func_4804635328(void);
void func_4804635456(void);
void func_4804635584(void);
void func_4804635712(void);
void func_4804635840(void);
void func_4804635968(void);
void func_4804636096(void);
void func_4804636224(void);
void func_4804636352(void);
void func_4804636480(void);
void func_4804636608(void);
void func_4804628400(void);
void func_4804627744(void);
void func_4804628976(void);
void func_4804629104(void);
void func_4804629600(void);
void func_4804629728(void);
void func_4804629232(void);
void func_4804629856(void);
void func_4804636816(void);
void func_4804636944(void);
void func_4804637072(void);
void func_4804637200(void);
void func_4804637328(void);
void func_4804637456(void);
void func_4804637584(void);
void func_4804636736(void);
void func_4804629504(void);
void HALT(void);
void RETURN(void);
Inst func_4804619664_op0[2] = {func_4804621760, RETURN};
Inst func_4804620416_op0[2] = {func_4804623360, RETURN};
Inst func_4804620416_op1[2] = {func_4804623616, RETURN};
Inst func_4804620416_op2[2] = {func_4804623872, RETURN};
Inst func_4804620416_op3[2] = {func_4804624160, RETURN};
Inst func_4804620416_op4[2] = {func_4804624448, RETURN};
Inst func_4804620416_op5[2] = {func_4804624800, RETURN};
Inst func_4804620416_op6[2] = {func_4804625104, RETURN};
Inst func_4804620576_op0[2] = {func_4804623232, RETURN};
Inst func_4804620576_op1[2] = {func_4804622784, RETURN};
Inst func_4804620576_op2[2] = {func_4804625680, RETURN};
Inst func_4804620576_op3[2] = {func_4804625808, RETURN};
Inst func_4804620576_op4[2] = {func_4804625936, RETURN};
Inst func_4804620576_op5[2] = {func_4804626128, RETURN};
Inst func_4804620576_op6[2] = {func_4804626256, RETURN};
Inst func_4804620576_op7[2] = {func_4804626384, RETURN};
Inst func_4804620576_op8[2] = {func_4804626512, RETURN};
Inst func_4804620576_op9[2] = {func_4804626064, RETURN};
Inst func_4804620288_op0[2] = {func_4804622720, RETURN};
Inst func_4804620288_op1[2] = {func_4804622912, RETURN};
Inst func_4804620288_op2[2] = {func_4804621824, RETURN};
Inst func_4804619936_op0[2] = {func_4804626912, RETURN};
Inst func_4804619936_op1[2] = {func_4804619856, RETURN};
Inst func_4804619936_op2[2] = {func_4804620176, RETURN};
Inst func_4804619536_op0[2] = {func_4804621664, RETURN};
Inst func_4804620176_op0[2] = {func_4804627616, RETURN};
Inst func_4804620176_op1[2] = {func_4804622336, RETURN};
Inst func_4804620704_op0[2] = {func_4804628576, RETURN};
Inst func_4804622336_op0[2] = {func_4804630048, RETURN};
Inst func_4804622336_op1[2] = {func_4804630176, RETURN};
Inst func_4804622336_op2[2] = {func_4804630304, RETURN};
Inst func_4804622336_op3[2] = {func_4804630464, RETURN};
Inst func_4804622336_op4[2] = {func_4804630592, RETURN};
Inst func_4804622336_op5[2] = {func_4804630784, RETURN};
Inst func_4804622336_op6[2] = {func_4804630912, RETURN};
Inst func_4804622336_op7[2] = {func_4804625232, RETURN};
Inst func_4804622336_op8[2] = {func_4804625360, RETURN};
Inst func_4804622336_op9[2] = {func_4804630720, RETURN};
Inst func_4804622336_op10[2] = {func_4804630976, RETURN};
Inst func_4804622336_op11[2] = {func_4804631104, RETURN};
Inst func_4804622336_op12[2] = {func_4804631232, RETURN};
Inst func_4804622336_op13[2] = {func_4804631360, RETURN};
Inst func_4804622336_op14[2] = {func_4804631488, RETURN};
Inst func_4804622336_op15[2] = {func_4804631616, RETURN};
Inst func_4804622336_op16[2] = {func_4804631744, RETURN};
Inst func_4804622336_op17[2] = {func_4804625488, RETURN};
Inst func_4804622336_op18[2] = {func_4804632128, RETURN};
Inst func_4804622336_op19[2] = {func_4804632256, RETURN};
Inst func_4804622336_op20[2] = {func_4804632384, RETURN};
Inst func_4804622336_op21[2] = {func_4804632512, RETURN};
Inst func_4804622336_op22[2] = {func_4804632640, RETURN};
Inst func_4804622336_op23[2] = {func_4804632768, RETURN};
Inst func_4804622336_op24[2] = {func_4804632896, RETURN};
Inst func_4804622336_op25[2] = {func_4804633024, RETURN};
Inst func_4804622336_op26[2] = {func_4804633152, RETURN};
Inst func_4804622336_op27[2] = {func_4804633280, RETURN};
Inst func_4804622336_op28[2] = {func_4804633408, RETURN};
Inst func_4804622336_op29[2] = {func_4804633536, RETURN};
Inst func_4804622336_op30[2] = {func_4804633664, RETURN};
Inst func_4804622336_op31[2] = {func_4804633792, RETURN};
Inst func_4804622336_op32[2] = {func_4804633920, RETURN};
Inst func_4804622336_op33[2] = {func_4804631872, RETURN};
Inst func_4804622336_op34[2] = {func_4804632000, RETURN};
Inst func_4804622336_op35[2] = {func_4804634560, RETURN};
Inst func_4804622336_op36[2] = {func_4804634688, RETURN};
Inst func_4804622336_op37[2] = {func_4804634816, RETURN};
Inst func_4804622336_op38[2] = {func_4804634944, RETURN};
Inst func_4804622336_op39[2] = {func_4804635072, RETURN};
Inst func_4804622336_op40[2] = {func_4804635200, RETURN};
Inst func_4804622336_op41[2] = {func_4804635328, RETURN};
Inst func_4804622336_op42[2] = {func_4804635456, RETURN};
Inst func_4804622336_op43[2] = {func_4804635584, RETURN};
Inst func_4804622336_op44[2] = {func_4804635712, RETURN};
Inst func_4804622336_op45[2] = {func_4804635840, RETURN};
Inst func_4804622336_op46[2] = {func_4804635968, RETURN};
Inst func_4804622336_op47[2] = {func_4804636096, RETURN};
Inst func_4804622336_op48[2] = {func_4804636224, RETURN};
Inst func_4804622336_op49[2] = {func_4804636352, RETURN};
Inst func_4804622336_op50[2] = {func_4804636480, RETURN};
Inst func_4804622336_op51[2] = {func_4804636608, RETURN};
Inst func_4804619856_op0[2] = {func_4804628400, RETURN};
Inst func_4804619856_op1[2] = {func_4804620576, RETURN};
Inst func_4804620896_op0[2] = {func_4804627744, RETURN};
Inst func_4804620896_op1[2] = {func_4804621536, RETURN};
Inst func_4804621104_op0[2] = {func_4804628976, RETURN};
Inst func_4804621024_op0[2] = {func_4804620896, HALT};
Inst func_4804621536_op0[2] = {func_4804621376, RETURN};
Inst func_4804621536_op1[2] = {func_4804619664, RETURN};
Inst func_4804621536_op2[2] = {func_4804620704, RETURN};
Inst func_4804621536_op3[2] = {func_4804621296, RETURN};
Inst func_4804621536_op4[2] = {func_4804619536, RETURN};
Inst func_4804621536_op5[2] = {func_4804621104, RETURN};
Inst func_4804621824_op0[2] = {func_4804629600, RETURN};
Inst func_4804621824_op1[2] = {func_4804629232, RETURN};
Inst func_4804621824_op2[2] = {func_4804619936, RETURN};
Inst func_4804621376_op0[2] = {func_4804636816, RETURN};
Inst func_4804621376_op1[2] = {func_4804637200, RETURN};
Inst func_4804621376_op2[2] = {func_4804637456, RETURN};
Inst func_4804621296_op0[2] = {func_4804636736, RETURN};
Inst exp_4804621760[5] = {func_4804620176, func_4804622080, func_4804620288, func_4804622208, RETURN};
Inst exp_4804623360[4] = {func_4804620288, func_4804623488, func_4804620288, RETURN};
Inst exp_4804623616[4] = {func_4804620288, func_4804623744, func_4804620288, RETURN};
Inst exp_4804623872[4] = {func_4804620288, func_4804624000, func_4804620288, RETURN};
Inst exp_4804624160[4] = {func_4804620288, func_4804624288, func_4804620288, RETURN};
Inst exp_4804624448[4] = {func_4804620416, func_4804624576, func_4804620416, RETURN};
Inst exp_4804624800[4] = {func_4804620416, func_4804624928, func_4804620416, RETURN};
Inst exp_4804625104[3] = {func_4804622592, func_4804620416, RETURN};
Inst exp_4804622720[4] = {func_4804620288, func_4804627056, func_4804621824, RETURN};
Inst exp_4804622912[4] = {func_4804620288, func_4804623040, func_4804621824, RETURN};
Inst exp_4804626912[4] = {func_4804627280, func_4804620288, func_4804627408, RETURN};
Inst exp_4804621664[8] = {func_4804628016, func_4804620176, func_4804627280, func_4804627408, func_4804622400, func_4804620896, func_4804628272, RETURN};
Inst exp_4804627616[3] = {func_4804622336, func_4804620176, RETURN};
Inst exp_4804628576[8] = {func_4804628704, func_4804627280, func_4804620416, func_4804627408, func_4804622400, func_4804620896, func_4804628272, RETURN};
Inst exp_4804628400[3] = {func_4804620576, func_4804619856, RETURN};
Inst exp_4804627744[3] = {func_4804620896, func_4804621536, RETURN};
Inst exp_4804628976[4] = {func_4804629104, func_4804620288, func_4804622208, RETURN};
Inst exp_4804629600[4] = {func_4804621824, func_4804629728, func_4804619936, RETURN};
Inst exp_4804629232[4] = {func_4804621824, func_4804629856, func_4804619936, RETURN};
Inst exp_4804636816[4] = {func_4804636944, func_4804620176, func_4804637072, RETURN};
Inst exp_4804637200[4] = {func_4804637328, func_4804620176, func_4804637072, RETURN};
Inst exp_4804637456[4] = {func_4804637584, func_4804620176, func_4804637072, RETURN};
Inst exp_4804636736[8] = {func_4804629504, func_4804627280, func_4804620416, func_4804627408, func_4804622400, func_4804620896, func_4804628272, RETURN};
void func_4804619664(void) {
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
            PC = func_4804619664_op0;
        break;
    }
}
void func_4804620416(void) {
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
            PC = func_4804620416_op0;
        break;
        case 1:
            PC = func_4804620416_op1;
        break;
        case 2:
            PC = func_4804620416_op2;
        break;
        case 3:
            PC = func_4804620416_op3;
        break;
        case 4:
            PC = func_4804620416_op4;
        break;
        case 5:
            PC = func_4804620416_op5;
        break;
        case 6:
            PC = func_4804620416_op6;
        break;
    }
}
void func_4804620576(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4804620576_op0;
        break;
        case 1:
            PC = func_4804620576_op1;
        break;
        case 2:
            PC = func_4804620576_op2;
        break;
        case 3:
            PC = func_4804620576_op3;
        break;
        case 4:
            PC = func_4804620576_op4;
        break;
        case 5:
            PC = func_4804620576_op5;
        break;
        case 6:
            PC = func_4804620576_op6;
        break;
        case 7:
            PC = func_4804620576_op7;
        break;
        case 8:
            PC = func_4804620576_op8;
        break;
        case 9:
            PC = func_4804620576_op9;
        break;
    }
}
void func_4804620288(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4804620288_op0;
        break;
        case 1:
            PC = func_4804620288_op1;
        break;
        case 2:
            PC = func_4804620288_op2;
        break;
    }
}
void func_4804619936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4804619936_op0;
        break;
        case 1:
            PC = func_4804619936_op1;
        break;
        case 2:
            PC = func_4804619936_op2;
        break;
    }
}
void func_4804619536(void) {
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
            PC = func_4804619536_op0;
        break;
    }
}
void func_4804620176(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4804620176_op0;
        break;
        case 1:
            PC = func_4804620176_op1;
        break;
    }
}
void func_4804620704(void) {
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
            PC = func_4804620704_op0;
        break;
    }
}
void func_4804622336(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_4804622336_op0;
        break;
        case 1:
            PC = func_4804622336_op1;
        break;
        case 2:
            PC = func_4804622336_op2;
        break;
        case 3:
            PC = func_4804622336_op3;
        break;
        case 4:
            PC = func_4804622336_op4;
        break;
        case 5:
            PC = func_4804622336_op5;
        break;
        case 6:
            PC = func_4804622336_op6;
        break;
        case 7:
            PC = func_4804622336_op7;
        break;
        case 8:
            PC = func_4804622336_op8;
        break;
        case 9:
            PC = func_4804622336_op9;
        break;
        case 10:
            PC = func_4804622336_op10;
        break;
        case 11:
            PC = func_4804622336_op11;
        break;
        case 12:
            PC = func_4804622336_op12;
        break;
        case 13:
            PC = func_4804622336_op13;
        break;
        case 14:
            PC = func_4804622336_op14;
        break;
        case 15:
            PC = func_4804622336_op15;
        break;
        case 16:
            PC = func_4804622336_op16;
        break;
        case 17:
            PC = func_4804622336_op17;
        break;
        case 18:
            PC = func_4804622336_op18;
        break;
        case 19:
            PC = func_4804622336_op19;
        break;
        case 20:
            PC = func_4804622336_op20;
        break;
        case 21:
            PC = func_4804622336_op21;
        break;
        case 22:
            PC = func_4804622336_op22;
        break;
        case 23:
            PC = func_4804622336_op23;
        break;
        case 24:
            PC = func_4804622336_op24;
        break;
        case 25:
            PC = func_4804622336_op25;
        break;
        case 26:
            PC = func_4804622336_op26;
        break;
        case 27:
            PC = func_4804622336_op27;
        break;
        case 28:
            PC = func_4804622336_op28;
        break;
        case 29:
            PC = func_4804622336_op29;
        break;
        case 30:
            PC = func_4804622336_op30;
        break;
        case 31:
            PC = func_4804622336_op31;
        break;
        case 32:
            PC = func_4804622336_op32;
        break;
        case 33:
            PC = func_4804622336_op33;
        break;
        case 34:
            PC = func_4804622336_op34;
        break;
        case 35:
            PC = func_4804622336_op35;
        break;
        case 36:
            PC = func_4804622336_op36;
        break;
        case 37:
            PC = func_4804622336_op37;
        break;
        case 38:
            PC = func_4804622336_op38;
        break;
        case 39:
            PC = func_4804622336_op39;
        break;
        case 40:
            PC = func_4804622336_op40;
        break;
        case 41:
            PC = func_4804622336_op41;
        break;
        case 42:
            PC = func_4804622336_op42;
        break;
        case 43:
            PC = func_4804622336_op43;
        break;
        case 44:
            PC = func_4804622336_op44;
        break;
        case 45:
            PC = func_4804622336_op45;
        break;
        case 46:
            PC = func_4804622336_op46;
        break;
        case 47:
            PC = func_4804622336_op47;
        break;
        case 48:
            PC = func_4804622336_op48;
        break;
        case 49:
            PC = func_4804622336_op49;
        break;
        case 50:
            PC = func_4804622336_op50;
        break;
        case 51:
            PC = func_4804622336_op51;
        break;
    }
}
void func_4804619856(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4804619856_op0;
        break;
        case 1:
            PC = func_4804619856_op1;
        break;
    }
}
void func_4804620896(void) {
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
            PC = func_4804620896_op0;
        break;
        case 1:
            PC = func_4804620896_op1;
        break;
    }
}
void func_4804621104(void) {
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
            PC = func_4804621104_op0;
        break;
    }
}
void func_4804621024(void) {
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
            PC = func_4804621024_op0;
        break;
    }
}
void func_4804621536(void) {
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
            PC = func_4804621536_op0;
        break;
        case 1:
            PC = func_4804621536_op1;
        break;
        case 2:
            PC = func_4804621536_op2;
        break;
        case 3:
            PC = func_4804621536_op3;
        break;
        case 4:
            PC = func_4804621536_op4;
        break;
        case 5:
            PC = func_4804621536_op5;
        break;
    }
}
void func_4804621824(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4804621824_op0;
        break;
        case 1:
            PC = func_4804621824_op1;
        break;
        case 2:
            PC = func_4804621824_op2;
        break;
    }
}
void func_4804621376(void) {
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
            PC = func_4804621376_op0;
        break;
        case 1:
            PC = func_4804621376_op1;
        break;
        case 2:
            PC = func_4804621376_op2;
        break;
    }
}
void func_4804621296(void) {
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
            PC = func_4804621296_op0;
        break;
    }
}
void func_4804621760(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_4804621760;
}
void func_4804622080(void) {
    extend(61);
    NEXT();
}
void func_4804622208(void) {
    extend(59);
    NEXT();
}
void func_4804623360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4804623360;
}
void func_4804623488(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_4804623616(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4804623616;
}
void func_4804623744(void) {
    extend(33);
    extend(61);
    NEXT();
}
void func_4804623872(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4804623872;
}
void func_4804624000(void) {
    extend(62);
    NEXT();
}
void func_4804624160(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4804624160;
}
void func_4804624288(void) {
    extend(60);
    NEXT();
}
void func_4804624448(void) {
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
    PC = exp_4804624448;
}
void func_4804624576(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_4804624800(void) {
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
    PC = exp_4804624800;
}
void func_4804624928(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_4804625104(void) {
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
    PC = exp_4804625104;
}
void func_4804622592(void) {
    extend(78);
    extend(79);
    extend(84);
    NEXT();
}
void func_4804623232(void) {
    extend(48);
    NEXT();
}
void func_4804622784(void) {
    extend(49);
    NEXT();
}
void func_4804625680(void) {
    extend(50);
    NEXT();
}
void func_4804625808(void) {
    extend(51);
    NEXT();
}
void func_4804625936(void) {
    extend(52);
    NEXT();
}
void func_4804626128(void) {
    extend(53);
    NEXT();
}
void func_4804626256(void) {
    extend(54);
    NEXT();
}
void func_4804626384(void) {
    extend(55);
    NEXT();
}
void func_4804626512(void) {
    extend(56);
    NEXT();
}
void func_4804626064(void) {
    extend(57);
    NEXT();
}
void func_4804622720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4804622720;
}
void func_4804627056(void) {
    extend(43);
    NEXT();
}
void func_4804622912(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4804622912;
}
void func_4804623040(void) {
    extend(45);
    NEXT();
}
void func_4804626912(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_4804626912;
}
void func_4804627280(void) {
    extend(40);
    NEXT();
}
void func_4804627408(void) {
    extend(41);
    NEXT();
}
void func_4804621664(void) {
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
    PC = exp_4804621664;
}
void func_4804628016(void) {
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
void func_4804622400(void) {
    extend(123);
    NEXT();
}
void func_4804628272(void) {
    extend(125);
    NEXT();
}
void func_4804627616(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        return;
    }
    store();
    PC = exp_4804627616;
}
void func_4804628576(void) {
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
    PC = exp_4804628576;
}
void func_4804628704(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_4804630048(void) {
    extend(97);
    NEXT();
}
void func_4804630176(void) {
    extend(98);
    NEXT();
}
void func_4804630304(void) {
    extend(99);
    NEXT();
}
void func_4804630464(void) {
    extend(100);
    NEXT();
}
void func_4804630592(void) {
    extend(101);
    NEXT();
}
void func_4804630784(void) {
    extend(102);
    NEXT();
}
void func_4804630912(void) {
    extend(103);
    NEXT();
}
void func_4804625232(void) {
    extend(104);
    NEXT();
}
void func_4804625360(void) {
    extend(105);
    NEXT();
}
void func_4804630720(void) {
    extend(106);
    NEXT();
}
void func_4804630976(void) {
    extend(107);
    NEXT();
}
void func_4804631104(void) {
    extend(108);
    NEXT();
}
void func_4804631232(void) {
    extend(109);
    NEXT();
}
void func_4804631360(void) {
    extend(110);
    NEXT();
}
void func_4804631488(void) {
    extend(111);
    NEXT();
}
void func_4804631616(void) {
    extend(112);
    NEXT();
}
void func_4804631744(void) {
    extend(113);
    NEXT();
}
void func_4804625488(void) {
    extend(114);
    NEXT();
}
void func_4804632128(void) {
    extend(115);
    NEXT();
}
void func_4804632256(void) {
    extend(116);
    NEXT();
}
void func_4804632384(void) {
    extend(117);
    NEXT();
}
void func_4804632512(void) {
    extend(118);
    NEXT();
}
void func_4804632640(void) {
    extend(119);
    NEXT();
}
void func_4804632768(void) {
    extend(120);
    NEXT();
}
void func_4804632896(void) {
    extend(121);
    NEXT();
}
void func_4804633024(void) {
    extend(122);
    NEXT();
}
void func_4804633152(void) {
    extend(65);
    NEXT();
}
void func_4804633280(void) {
    extend(66);
    NEXT();
}
void func_4804633408(void) {
    extend(67);
    NEXT();
}
void func_4804633536(void) {
    extend(68);
    NEXT();
}
void func_4804633664(void) {
    extend(69);
    NEXT();
}
void func_4804633792(void) {
    extend(70);
    NEXT();
}
void func_4804633920(void) {
    extend(71);
    NEXT();
}
void func_4804631872(void) {
    extend(72);
    NEXT();
}
void func_4804632000(void) {
    extend(73);
    NEXT();
}
void func_4804634560(void) {
    extend(74);
    NEXT();
}
void func_4804634688(void) {
    extend(75);
    NEXT();
}
void func_4804634816(void) {
    extend(76);
    NEXT();
}
void func_4804634944(void) {
    extend(77);
    NEXT();
}
void func_4804635072(void) {
    extend(78);
    NEXT();
}
void func_4804635200(void) {
    extend(79);
    NEXT();
}
void func_4804635328(void) {
    extend(80);
    NEXT();
}
void func_4804635456(void) {
    extend(81);
    NEXT();
}
void func_4804635584(void) {
    extend(82);
    NEXT();
}
void func_4804635712(void) {
    extend(83);
    NEXT();
}
void func_4804635840(void) {
    extend(84);
    NEXT();
}
void func_4804635968(void) {
    extend(85);
    NEXT();
}
void func_4804636096(void) {
    extend(86);
    NEXT();
}
void func_4804636224(void) {
    extend(87);
    NEXT();
}
void func_4804636352(void) {
    extend(88);
    NEXT();
}
void func_4804636480(void) {
    extend(89);
    NEXT();
}
void func_4804636608(void) {
    extend(90);
    NEXT();
}
void func_4804628400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4804628400;
}
void func_4804627744(void) {
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
    PC = exp_4804627744;
}
void func_4804628976(void) {
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
    PC = exp_4804628976;
}
void func_4804629104(void) {
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
void func_4804629600(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4804629600;
}
void func_4804629728(void) {
    extend(42);
    NEXT();
}
void func_4804629232(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4804629232;
}
void func_4804629856(void) {
    extend(47);
    NEXT();
}
void func_4804636816(void) {
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
    PC = exp_4804636816;
}
void func_4804636944(void) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_4804637072(void) {
    extend(32);
    extend(59);
    extend(32);
    NEXT();
}
void func_4804637200(void) {
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
    PC = exp_4804637200;
}
void func_4804637328(void) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
}
void func_4804637456(void) {
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
    PC = exp_4804637456;
}
void func_4804637584(void) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
}
void func_4804636736(void) {
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
    PC = exp_4804636736;
}
void func_4804629504(void) {
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
    PC =func_4804621024_op0;
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
