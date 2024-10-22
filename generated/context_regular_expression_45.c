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
void func_5198869568(void);
void func_5198886080(void);
void func_5198886288(void);
void func_5198886496(void);
void func_5198885952(void);
void func_5198887152(void);
void func_5198887280(void);
void func_5198887056(void);
void func_5198886832(void);
void func_5198888848(void);
void func_5198887968(void);
void func_5198887408(void);
void func_5198887536(void);
void func_5198887664(void);
void func_5198887792(void);
void func_5198888096(void);
void func_5198886752(void);
void func_5198886896(void);
void func_5198888544(void);
void func_5198888672(void);
void func_5198888976(void);
void func_5198889104(void);
void func_5198889632(void);
void func_5198889312(void);
void func_5198889232(void);
void func_5198889504(void);
void func_5198889824(void);
void func_5198889952(void);
void func_5198890448(void);
void func_5198890576(void);
void func_5198890704(void);
void func_5198890864(void);
void func_5198890992(void);
void func_5198888352(void);
void func_5198891568(void);
void func_5198891696(void);
void func_5198891824(void);
void func_5198888288(void);
void func_5198890144(void);
void func_5198892144(void);
void func_5198892272(void);
void func_5198892400(void);
void func_5198893872(void);
void func_5198894000(void);
void func_5198894128(void);
void func_5198894288(void);
void func_5198894416(void);
void func_5198894608(void);
void func_5198894736(void);
void func_5198894864(void);
void func_5198894992(void);
void func_5198894544(void);
void func_5198895312(void);
void func_5198895440(void);
void func_5198895568(void);
void func_5198895696(void);
void func_5198895824(void);
void func_5198895952(void);
void func_5198896080(void);
void func_5198895120(void);
void func_5198896464(void);
void func_5198896592(void);
void func_5198896720(void);
void func_5198896848(void);
void func_5198896976(void);
void func_5198891120(void);
void func_5198891248(void);
void func_5198891376(void);
void func_5198891504(void);
void func_5198897104(void);
void func_5198897232(void);
void func_5198897360(void);
void func_5198897488(void);
void func_5198897616(void);
void func_5198897744(void);
void func_5198896208(void);
void func_5198896336(void);
void func_5198898384(void);
void func_5198898512(void);
void func_5198898640(void);
void func_5198898768(void);
void func_5198898896(void);
void func_5198899024(void);
void func_5198899152(void);
void func_5198899280(void);
void func_5198899408(void);
void func_5198899536(void);
void func_5198899664(void);
void func_5198899792(void);
void func_5198899920(void);
void func_5198900048(void);
void func_5198900176(void);
void func_5198900304(void);
void func_5198900432(void);
void func_5198892960(void);
void func_5198893120(void);
void func_5198893248(void);
void func_5198893440(void);
void func_5198893568(void);
void func_5198893376(void);
void func_5198900624(void);
void func_5198900752(void);
void func_5198900880(void);
void func_5198892528(void);
void func_5198892656(void);
void func_5198890352(void);
void func_5198901008(void);
void func_5198901136(void);
void func_5198901264(void);
void func_5198890272(void);
void func_5198901392(void);
void func_5198902048(void);
void func_5198902192(void);
void func_5198902352(void);
void func_5198902480(void);
void func_5198902672(void);
void func_5198902800(void);
void func_5198902928(void);
void func_5198903056(void);
void func_5198902608(void);
void func_5198903376(void);
void func_5198901680(void);
void HALT(void);
void RETURN(void);
Inst func_5198869568_op0[2] = {func_5198889312, RETURN};
Inst func_5198869568_op1[2] = {func_5198888672, RETURN};
Inst func_5198886080_op0[2] = {func_5198889232, RETURN};
Inst func_5198886288_op0[2] = {func_5198888976, RETURN};
Inst func_5198886288_op1[2] = {func_5198887664, RETURN};
Inst func_5198886288_op2[2] = {func_5198887280, RETURN};
Inst func_5198886496_op0[2] = {func_5198887536, RETURN};
Inst func_5198886496_op1[2] = {func_5198889504, RETURN};
Inst func_5198885952_op0[2] = {func_5198889952, RETURN};
Inst func_5198887152_op0[2] = {func_5198890448, RETURN};
Inst func_5198887152_op1[2] = {func_5198890576, RETURN};
Inst func_5198887152_op2[2] = {func_5198890704, RETURN};
Inst func_5198887152_op3[2] = {func_5198890864, RETURN};
Inst func_5198887152_op4[2] = {func_5198890992, RETURN};
Inst func_5198887152_op5[2] = {func_5198888352, RETURN};
Inst func_5198887152_op6[2] = {func_5198891568, RETURN};
Inst func_5198887152_op7[2] = {func_5198891696, RETURN};
Inst func_5198887152_op8[2] = {func_5198891824, RETURN};
Inst func_5198887152_op9[2] = {func_5198888288, RETURN};
Inst func_5198887280_op0[2] = {func_5198886832, RETURN};
Inst func_5198887280_op1[2] = {func_5198886080, RETURN};
Inst func_5198887280_op2[2] = {func_5198887056, RETURN};
Inst func_5198887280_op3[2] = {func_5198886496, RETURN};
Inst func_5198887280_op4[2] = {func_5198888544, RETURN};
Inst func_5198887056_op0[2] = {func_5198890144, RETURN};
Inst func_5198886832_op0[2] = {func_5198892144, RETURN};
Inst func_5198888848_op0[2] = {func_5198893872, RETURN};
Inst func_5198888848_op1[2] = {func_5198894000, RETURN};
Inst func_5198888848_op2[2] = {func_5198894128, RETURN};
Inst func_5198888848_op3[2] = {func_5198894288, RETURN};
Inst func_5198888848_op4[2] = {func_5198894416, RETURN};
Inst func_5198888848_op5[2] = {func_5198894608, RETURN};
Inst func_5198888848_op6[2] = {func_5198894736, RETURN};
Inst func_5198888848_op7[2] = {func_5198894864, RETURN};
Inst func_5198888848_op8[2] = {func_5198894992, RETURN};
Inst func_5198888848_op9[2] = {func_5198894544, RETURN};
Inst func_5198888848_op10[2] = {func_5198895312, RETURN};
Inst func_5198888848_op11[2] = {func_5198895440, RETURN};
Inst func_5198888848_op12[2] = {func_5198895568, RETURN};
Inst func_5198888848_op13[2] = {func_5198895696, RETURN};
Inst func_5198888848_op14[2] = {func_5198895824, RETURN};
Inst func_5198888848_op15[2] = {func_5198895952, RETURN};
Inst func_5198888848_op16[2] = {func_5198896080, RETURN};
Inst func_5198888848_op17[2] = {func_5198895120, RETURN};
Inst func_5198888848_op18[2] = {func_5198896464, RETURN};
Inst func_5198888848_op19[2] = {func_5198896592, RETURN};
Inst func_5198888848_op20[2] = {func_5198896720, RETURN};
Inst func_5198888848_op21[2] = {func_5198896848, RETURN};
Inst func_5198888848_op22[2] = {func_5198896976, RETURN};
Inst func_5198888848_op23[2] = {func_5198891120, RETURN};
Inst func_5198888848_op24[2] = {func_5198891248, RETURN};
Inst func_5198888848_op25[2] = {func_5198891376, RETURN};
Inst func_5198888848_op26[2] = {func_5198891504, RETURN};
Inst func_5198888848_op27[2] = {func_5198897104, RETURN};
Inst func_5198888848_op28[2] = {func_5198897232, RETURN};
Inst func_5198888848_op29[2] = {func_5198897360, RETURN};
Inst func_5198888848_op30[2] = {func_5198897488, RETURN};
Inst func_5198888848_op31[2] = {func_5198897616, RETURN};
Inst func_5198888848_op32[2] = {func_5198897744, RETURN};
Inst func_5198888848_op33[2] = {func_5198896208, RETURN};
Inst func_5198888848_op34[2] = {func_5198896336, RETURN};
Inst func_5198888848_op35[2] = {func_5198898384, RETURN};
Inst func_5198888848_op36[2] = {func_5198898512, RETURN};
Inst func_5198888848_op37[2] = {func_5198898640, RETURN};
Inst func_5198888848_op38[2] = {func_5198898768, RETURN};
Inst func_5198888848_op39[2] = {func_5198898896, RETURN};
Inst func_5198888848_op40[2] = {func_5198899024, RETURN};
Inst func_5198888848_op41[2] = {func_5198899152, RETURN};
Inst func_5198888848_op42[2] = {func_5198899280, RETURN};
Inst func_5198888848_op43[2] = {func_5198899408, RETURN};
Inst func_5198888848_op44[2] = {func_5198899536, RETURN};
Inst func_5198888848_op45[2] = {func_5198899664, RETURN};
Inst func_5198888848_op46[2] = {func_5198899792, RETURN};
Inst func_5198888848_op47[2] = {func_5198899920, RETURN};
Inst func_5198888848_op48[2] = {func_5198900048, RETURN};
Inst func_5198888848_op49[2] = {func_5198900176, RETURN};
Inst func_5198888848_op50[2] = {func_5198900304, RETURN};
Inst func_5198888848_op51[2] = {func_5198900432, RETURN};
Inst func_5198887968_op0[2] = {func_5198889824, RETURN};
Inst func_5198887968_op1[2] = {func_5198889232, RETURN};
Inst func_5198887968_op2[2] = {func_5198892960, RETURN};
Inst func_5198887968_op3[2] = {func_5198893120, RETURN};
Inst func_5198887968_op4[2] = {func_5198893248, RETURN};
Inst func_5198887968_op5[2] = {func_5198893440, RETURN};
Inst func_5198887968_op6[2] = {func_5198890144, RETURN};
Inst func_5198887968_op7[2] = {func_5198893568, RETURN};
Inst func_5198887968_op8[2] = {func_5198892272, RETURN};
Inst func_5198887968_op9[2] = {func_5198892400, RETURN};
Inst func_5198887968_op10[2] = {func_5198893376, RETURN};
Inst func_5198887968_op11[2] = {func_5198900624, RETURN};
Inst func_5198887968_op12[2] = {func_5198900752, RETURN};
Inst func_5198887968_op13[2] = {func_5198900880, RETURN};
Inst func_5198887408_op0[2] = {func_5198892528, RETURN};
Inst func_5198887536_op0[2] = {func_5198888848, RETURN};
Inst func_5198887536_op1[2] = {func_5198887152, RETURN};
Inst func_5198887536_op2[2] = {func_5198889632, RETURN};
Inst func_5198887664_op0[2] = {func_5198890352, RETURN};
Inst func_5198887792_op0[2] = {func_5198901008, RETURN};
Inst func_5198888096_op0[2] = {func_5198901136, RETURN};
Inst func_5198886752_op0[2] = {func_5198888096, RETURN};
Inst func_5198886752_op1[2] = {func_5198886496, RETURN};
Inst func_5198886896_op0[2] = {func_5198886752, RETURN};
Inst func_5198886896_op1[2] = {func_5198890272, RETURN};
Inst func_5198888544_op0[2] = {func_5198887792, RETURN};
Inst func_5198888544_op1[2] = {func_5198887408, RETURN};
Inst func_5198888672_op0[2] = {func_5198885952, RETURN};
Inst func_5198888672_op1[2] = {func_5198886288, RETURN};
Inst func_5198888976_op0[2] = {func_5198901392, RETURN};
Inst func_5198889104_op0[2] = {func_5198869568, HALT};
Inst func_5198889632_op0[2] = {func_5198902048, RETURN};
Inst func_5198889632_op1[2] = {func_5198901264, RETURN};
Inst func_5198889632_op2[2] = {func_5198902192, RETURN};
Inst func_5198889632_op3[2] = {func_5198902352, RETURN};
Inst func_5198889632_op4[2] = {func_5198902480, RETURN};
Inst func_5198889632_op5[2] = {func_5198902672, RETURN};
Inst func_5198889632_op6[2] = {func_5198902800, RETURN};
Inst func_5198889632_op7[2] = {func_5198902928, RETURN};
Inst func_5198889632_op8[2] = {func_5198903056, RETURN};
Inst func_5198889632_op9[2] = {func_5198902608, RETURN};
Inst func_5198889632_op10[2] = {func_5198903376, RETURN};
Inst func_5198889312_op0[2] = {func_5198901680, RETURN};
Inst exp_5198889504[3] = {func_5198889824, func_5198887968, RETURN};
Inst exp_5198889952[3] = {func_5198888672, func_5198886288, RETURN};
Inst exp_5198892144[4] = {func_5198892272, func_5198869568, func_5198892400, RETURN};
Inst exp_5198892528[4] = {func_5198892656, func_5198886896, func_5198900624, RETURN};
Inst exp_5198890352[3] = {func_5198887280, func_5198893120, RETURN};
Inst exp_5198901008[4] = {func_5198893376, func_5198886896, func_5198900624, RETURN};
Inst exp_5198901136[4] = {func_5198886496, func_5198901264, func_5198886496, RETURN};
Inst exp_5198890272[3] = {func_5198886752, func_5198886896, RETURN};
Inst exp_5198901392[3] = {func_5198887280, func_5198892960, RETURN};
Inst exp_5198901680[4] = {func_5198869568, func_5198893568, func_5198888672, RETURN};
void func_5198869568(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5198869568_op0;
        break;
        case 1:
            PC = func_5198869568_op1;
        break;
    }
}
void func_5198886080(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5198886080_op0;
        break;
    }
}
void func_5198886288(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5198886288_op0;
        break;
        case 1:
            PC = func_5198886288_op1;
        break;
        case 2:
            PC = func_5198886288_op2;
        break;
    }
}
void func_5198886496(void) {
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
            PC = func_5198886496_op0;
        break;
        case 1:
            PC = func_5198886496_op1;
        break;
    }
}
void func_5198885952(void) {
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
            PC = func_5198885952_op0;
        break;
    }
}
void func_5198887152(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5198887152_op0;
        break;
        case 1:
            PC = func_5198887152_op1;
        break;
        case 2:
            PC = func_5198887152_op2;
        break;
        case 3:
            PC = func_5198887152_op3;
        break;
        case 4:
            PC = func_5198887152_op4;
        break;
        case 5:
            PC = func_5198887152_op5;
        break;
        case 6:
            PC = func_5198887152_op6;
        break;
        case 7:
            PC = func_5198887152_op7;
        break;
        case 8:
            PC = func_5198887152_op8;
        break;
        case 9:
            PC = func_5198887152_op9;
        break;
    }
}
void func_5198887280(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5198887280_op0;
        break;
        case 1:
            PC = func_5198887280_op1;
        break;
        case 2:
            PC = func_5198887280_op2;
        break;
        case 3:
            PC = func_5198887280_op3;
        break;
        case 4:
            PC = func_5198887280_op4;
        break;
    }
}
void func_5198887056(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5198887056_op0;
        break;
    }
}
void func_5198886832(void) {
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
            PC = func_5198886832_op0;
        break;
    }
}
void func_5198888848(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5198888848_op0;
        break;
        case 1:
            PC = func_5198888848_op1;
        break;
        case 2:
            PC = func_5198888848_op2;
        break;
        case 3:
            PC = func_5198888848_op3;
        break;
        case 4:
            PC = func_5198888848_op4;
        break;
        case 5:
            PC = func_5198888848_op5;
        break;
        case 6:
            PC = func_5198888848_op6;
        break;
        case 7:
            PC = func_5198888848_op7;
        break;
        case 8:
            PC = func_5198888848_op8;
        break;
        case 9:
            PC = func_5198888848_op9;
        break;
        case 10:
            PC = func_5198888848_op10;
        break;
        case 11:
            PC = func_5198888848_op11;
        break;
        case 12:
            PC = func_5198888848_op12;
        break;
        case 13:
            PC = func_5198888848_op13;
        break;
        case 14:
            PC = func_5198888848_op14;
        break;
        case 15:
            PC = func_5198888848_op15;
        break;
        case 16:
            PC = func_5198888848_op16;
        break;
        case 17:
            PC = func_5198888848_op17;
        break;
        case 18:
            PC = func_5198888848_op18;
        break;
        case 19:
            PC = func_5198888848_op19;
        break;
        case 20:
            PC = func_5198888848_op20;
        break;
        case 21:
            PC = func_5198888848_op21;
        break;
        case 22:
            PC = func_5198888848_op22;
        break;
        case 23:
            PC = func_5198888848_op23;
        break;
        case 24:
            PC = func_5198888848_op24;
        break;
        case 25:
            PC = func_5198888848_op25;
        break;
        case 26:
            PC = func_5198888848_op26;
        break;
        case 27:
            PC = func_5198888848_op27;
        break;
        case 28:
            PC = func_5198888848_op28;
        break;
        case 29:
            PC = func_5198888848_op29;
        break;
        case 30:
            PC = func_5198888848_op30;
        break;
        case 31:
            PC = func_5198888848_op31;
        break;
        case 32:
            PC = func_5198888848_op32;
        break;
        case 33:
            PC = func_5198888848_op33;
        break;
        case 34:
            PC = func_5198888848_op34;
        break;
        case 35:
            PC = func_5198888848_op35;
        break;
        case 36:
            PC = func_5198888848_op36;
        break;
        case 37:
            PC = func_5198888848_op37;
        break;
        case 38:
            PC = func_5198888848_op38;
        break;
        case 39:
            PC = func_5198888848_op39;
        break;
        case 40:
            PC = func_5198888848_op40;
        break;
        case 41:
            PC = func_5198888848_op41;
        break;
        case 42:
            PC = func_5198888848_op42;
        break;
        case 43:
            PC = func_5198888848_op43;
        break;
        case 44:
            PC = func_5198888848_op44;
        break;
        case 45:
            PC = func_5198888848_op45;
        break;
        case 46:
            PC = func_5198888848_op46;
        break;
        case 47:
            PC = func_5198888848_op47;
        break;
        case 48:
            PC = func_5198888848_op48;
        break;
        case 49:
            PC = func_5198888848_op49;
        break;
        case 50:
            PC = func_5198888848_op50;
        break;
        case 51:
            PC = func_5198888848_op51;
        break;
    }
}
void func_5198887968(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        return;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5198887968_op0;
        break;
        case 1:
            PC = func_5198887968_op1;
        break;
        case 2:
            PC = func_5198887968_op2;
        break;
        case 3:
            PC = func_5198887968_op3;
        break;
        case 4:
            PC = func_5198887968_op4;
        break;
        case 5:
            PC = func_5198887968_op5;
        break;
        case 6:
            PC = func_5198887968_op6;
        break;
        case 7:
            PC = func_5198887968_op7;
        break;
        case 8:
            PC = func_5198887968_op8;
        break;
        case 9:
            PC = func_5198887968_op9;
        break;
        case 10:
            PC = func_5198887968_op10;
        break;
        case 11:
            PC = func_5198887968_op11;
        break;
        case 12:
            PC = func_5198887968_op12;
        break;
        case 13:
            PC = func_5198887968_op13;
        break;
    }
}
void func_5198887408(void) {
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
            PC = func_5198887408_op0;
        break;
    }
}
void func_5198887536(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5198887536_op0;
        break;
        case 1:
            PC = func_5198887536_op1;
        break;
        case 2:
            PC = func_5198887536_op2;
        break;
    }
}
void func_5198887664(void) {
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
            PC = func_5198887664_op0;
        break;
    }
}
void func_5198887792(void) {
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
            PC = func_5198887792_op0;
        break;
    }
}
void func_5198888096(void) {
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
            PC = func_5198888096_op0;
        break;
    }
}
void func_5198886752(void) {
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
            PC = func_5198886752_op0;
        break;
        case 1:
            PC = func_5198886752_op1;
        break;
    }
}
void func_5198886896(void) {
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
            PC = func_5198886896_op0;
        break;
        case 1:
            PC = func_5198886896_op1;
        break;
    }
}
void func_5198888544(void) {
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
            PC = func_5198888544_op0;
        break;
        case 1:
            PC = func_5198888544_op1;
        break;
    }
}
void func_5198888672(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5198888672_op0;
        break;
        case 1:
            PC = func_5198888672_op1;
        break;
    }
}
void func_5198888976(void) {
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
            PC = func_5198888976_op0;
        break;
    }
}
void func_5198889104(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5198889104_op0;
        break;
    }
}
void func_5198889632(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        return;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5198889632_op0;
        break;
        case 1:
            PC = func_5198889632_op1;
        break;
        case 2:
            PC = func_5198889632_op2;
        break;
        case 3:
            PC = func_5198889632_op3;
        break;
        case 4:
            PC = func_5198889632_op4;
        break;
        case 5:
            PC = func_5198889632_op5;
        break;
        case 6:
            PC = func_5198889632_op6;
        break;
        case 7:
            PC = func_5198889632_op7;
        break;
        case 8:
            PC = func_5198889632_op8;
        break;
        case 9:
            PC = func_5198889632_op9;
        break;
        case 10:
            PC = func_5198889632_op10;
        break;
    }
}
void func_5198889312(void) {
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
            PC = func_5198889312_op0;
        break;
    }
}
void func_5198889232(void) {
    extend(46);
    NEXT();
}
void func_5198889504(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5198889504;
}
void func_5198889824(void) {
    extend(92);
    NEXT();
}
void func_5198889952(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5198889952;
}
void func_5198890448(void) {
    extend(48);
    NEXT();
}
void func_5198890576(void) {
    extend(49);
    NEXT();
}
void func_5198890704(void) {
    extend(50);
    NEXT();
}
void func_5198890864(void) {
    extend(51);
    NEXT();
}
void func_5198890992(void) {
    extend(52);
    NEXT();
}
void func_5198888352(void) {
    extend(53);
    NEXT();
}
void func_5198891568(void) {
    extend(54);
    NEXT();
}
void func_5198891696(void) {
    extend(55);
    NEXT();
}
void func_5198891824(void) {
    extend(56);
    NEXT();
}
void func_5198888288(void) {
    extend(57);
    NEXT();
}
void func_5198890144(void) {
    extend(36);
    NEXT();
}
void func_5198892144(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5198892144;
}
void func_5198892272(void) {
    extend(40);
    NEXT();
}
void func_5198892400(void) {
    extend(41);
    NEXT();
}
void func_5198893872(void) {
    extend(97);
    NEXT();
}
void func_5198894000(void) {
    extend(98);
    NEXT();
}
void func_5198894128(void) {
    extend(99);
    NEXT();
}
void func_5198894288(void) {
    extend(100);
    NEXT();
}
void func_5198894416(void) {
    extend(101);
    NEXT();
}
void func_5198894608(void) {
    extend(102);
    NEXT();
}
void func_5198894736(void) {
    extend(103);
    NEXT();
}
void func_5198894864(void) {
    extend(104);
    NEXT();
}
void func_5198894992(void) {
    extend(105);
    NEXT();
}
void func_5198894544(void) {
    extend(106);
    NEXT();
}
void func_5198895312(void) {
    extend(107);
    NEXT();
}
void func_5198895440(void) {
    extend(108);
    NEXT();
}
void func_5198895568(void) {
    extend(109);
    NEXT();
}
void func_5198895696(void) {
    extend(110);
    NEXT();
}
void func_5198895824(void) {
    extend(111);
    NEXT();
}
void func_5198895952(void) {
    extend(112);
    NEXT();
}
void func_5198896080(void) {
    extend(113);
    NEXT();
}
void func_5198895120(void) {
    extend(114);
    NEXT();
}
void func_5198896464(void) {
    extend(115);
    NEXT();
}
void func_5198896592(void) {
    extend(116);
    NEXT();
}
void func_5198896720(void) {
    extend(117);
    NEXT();
}
void func_5198896848(void) {
    extend(118);
    NEXT();
}
void func_5198896976(void) {
    extend(119);
    NEXT();
}
void func_5198891120(void) {
    extend(120);
    NEXT();
}
void func_5198891248(void) {
    extend(121);
    NEXT();
}
void func_5198891376(void) {
    extend(122);
    NEXT();
}
void func_5198891504(void) {
    extend(65);
    NEXT();
}
void func_5198897104(void) {
    extend(66);
    NEXT();
}
void func_5198897232(void) {
    extend(67);
    NEXT();
}
void func_5198897360(void) {
    extend(68);
    NEXT();
}
void func_5198897488(void) {
    extend(69);
    NEXT();
}
void func_5198897616(void) {
    extend(70);
    NEXT();
}
void func_5198897744(void) {
    extend(71);
    NEXT();
}
void func_5198896208(void) {
    extend(72);
    NEXT();
}
void func_5198896336(void) {
    extend(73);
    NEXT();
}
void func_5198898384(void) {
    extend(74);
    NEXT();
}
void func_5198898512(void) {
    extend(75);
    NEXT();
}
void func_5198898640(void) {
    extend(76);
    NEXT();
}
void func_5198898768(void) {
    extend(77);
    NEXT();
}
void func_5198898896(void) {
    extend(78);
    NEXT();
}
void func_5198899024(void) {
    extend(79);
    NEXT();
}
void func_5198899152(void) {
    extend(80);
    NEXT();
}
void func_5198899280(void) {
    extend(81);
    NEXT();
}
void func_5198899408(void) {
    extend(82);
    NEXT();
}
void func_5198899536(void) {
    extend(83);
    NEXT();
}
void func_5198899664(void) {
    extend(84);
    NEXT();
}
void func_5198899792(void) {
    extend(85);
    NEXT();
}
void func_5198899920(void) {
    extend(86);
    NEXT();
}
void func_5198900048(void) {
    extend(87);
    NEXT();
}
void func_5198900176(void) {
    extend(88);
    NEXT();
}
void func_5198900304(void) {
    extend(89);
    NEXT();
}
void func_5198900432(void) {
    extend(90);
    NEXT();
}
void func_5198892960(void) {
    extend(42);
    NEXT();
}
void func_5198893120(void) {
    extend(43);
    NEXT();
}
void func_5198893248(void) {
    extend(63);
    NEXT();
}
void func_5198893440(void) {
    extend(94);
    NEXT();
}
void func_5198893568(void) {
    extend(124);
    NEXT();
}
void func_5198893376(void) {
    extend(91);
    NEXT();
}
void func_5198900624(void) {
    extend(93);
    NEXT();
}
void func_5198900752(void) {
    extend(123);
    NEXT();
}
void func_5198900880(void) {
    extend(125);
    NEXT();
}
void func_5198892528(void) {
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
    PC = exp_5198892528;
}
void func_5198892656(void) {
    extend(91);
    extend(94);
    NEXT();
}
void func_5198890352(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        return;
    }
    store();
    PC = exp_5198890352;
}
void func_5198901008(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5198901008;
}
void func_5198901136(void) {
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
    PC = exp_5198901136;
}
void func_5198901264(void) {
    extend(45);
    NEXT();
}
void func_5198890272(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5198890272;
}
void func_5198901392(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        return;
    }
    store();
    PC = exp_5198901392;
}
void func_5198902048(void) {
    extend(95);
    NEXT();
}
void func_5198902192(void) {
    extend(64);
    NEXT();
}
void func_5198902352(void) {
    extend(35);
    NEXT();
}
void func_5198902480(void) {
    extend(37);
    NEXT();
}
void func_5198902672(void) {
    extend(38);
    NEXT();
}
void func_5198902800(void) {
    extend(61);
    NEXT();
}
void func_5198902928(void) {
    extend(126);
    NEXT();
}
void func_5198903056(void) {
    extend(96);
    NEXT();
}
void func_5198902608(void) {
    extend(39);
    NEXT();
}
void func_5198903376(void) {
    extend(34);
    NEXT();
}
void func_5198901680(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5198901680;
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
    PC =func_5198889104_op0;
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
