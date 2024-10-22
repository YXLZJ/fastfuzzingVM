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
void func_5601522752(void);
void func_5601539264(void);
void func_5601539472(void);
void func_5601539680(void);
void func_5601539136(void);
void func_5601540336(void);
void func_5601540464(void);
void func_5601540240(void);
void func_5601540016(void);
void func_5601542032(void);
void func_5601541152(void);
void func_5601540592(void);
void func_5601540720(void);
void func_5601540848(void);
void func_5601540976(void);
void func_5601541280(void);
void func_5601539936(void);
void func_5601540080(void);
void func_5601541728(void);
void func_5601541856(void);
void func_5601542160(void);
void func_5601542288(void);
void func_5601542816(void);
void func_5601542496(void);
void func_5601542416(void);
void func_5601542688(void);
void func_5601543008(void);
void func_5601543136(void);
void func_5601543632(void);
void func_5601543760(void);
void func_5601543888(void);
void func_5601544048(void);
void func_5601544176(void);
void func_5601541536(void);
void func_5601544752(void);
void func_5601544880(void);
void func_5601545008(void);
void func_5601541472(void);
void func_5601543328(void);
void func_5601545328(void);
void func_5601545456(void);
void func_5601545584(void);
void func_5601547056(void);
void func_5601547184(void);
void func_5601547312(void);
void func_5601547472(void);
void func_5601547600(void);
void func_5601547792(void);
void func_5601547920(void);
void func_5601548048(void);
void func_5601548176(void);
void func_5601547728(void);
void func_5601548496(void);
void func_5601548624(void);
void func_5601548752(void);
void func_5601548880(void);
void func_5601549008(void);
void func_5601549136(void);
void func_5601549264(void);
void func_5601548304(void);
void func_5601549648(void);
void func_5601549776(void);
void func_5601549904(void);
void func_5601550032(void);
void func_5601550160(void);
void func_5601544304(void);
void func_5601544432(void);
void func_5601544560(void);
void func_5601544688(void);
void func_5601550288(void);
void func_5601550416(void);
void func_5601550544(void);
void func_5601550672(void);
void func_5601550800(void);
void func_5601550928(void);
void func_5601549392(void);
void func_5601549520(void);
void func_5601551568(void);
void func_5601551696(void);
void func_5601551824(void);
void func_5601551952(void);
void func_5601552080(void);
void func_5601552208(void);
void func_5601552336(void);
void func_5601552464(void);
void func_5601552592(void);
void func_5601552720(void);
void func_5601552848(void);
void func_5601552976(void);
void func_5601553104(void);
void func_5601553232(void);
void func_5601553360(void);
void func_5601553488(void);
void func_5601553616(void);
void func_5601546144(void);
void func_5601546304(void);
void func_5601546432(void);
void func_5601546624(void);
void func_5601546752(void);
void func_5601546560(void);
void func_5601553808(void);
void func_5601553936(void);
void func_5601554064(void);
void func_5601545712(void);
void func_5601545840(void);
void func_5601543536(void);
void func_5601554192(void);
void func_5601554320(void);
void func_5601554448(void);
void func_5601543456(void);
void func_5601554576(void);
void func_5601555232(void);
void func_5601555376(void);
void func_5601555536(void);
void func_5601555664(void);
void func_5601555856(void);
void func_5601555984(void);
void func_5601556112(void);
void func_5601556240(void);
void func_5601555792(void);
void func_5601556560(void);
void func_5601554864(void);
void HALT(void);
void RETURN(void);
Inst func_5601522752_op0[2] = {func_5601542496, RETURN};
Inst func_5601522752_op1[2] = {func_5601541856, RETURN};
Inst func_5601539264_op0[2] = {func_5601542416, RETURN};
Inst func_5601539472_op0[2] = {func_5601542160, RETURN};
Inst func_5601539472_op1[2] = {func_5601540848, RETURN};
Inst func_5601539472_op2[2] = {func_5601540464, RETURN};
Inst func_5601539680_op0[2] = {func_5601540720, RETURN};
Inst func_5601539680_op1[2] = {func_5601542688, RETURN};
Inst func_5601539136_op0[2] = {func_5601543136, RETURN};
Inst func_5601540336_op0[2] = {func_5601543632, RETURN};
Inst func_5601540336_op1[2] = {func_5601543760, RETURN};
Inst func_5601540336_op2[2] = {func_5601543888, RETURN};
Inst func_5601540336_op3[2] = {func_5601544048, RETURN};
Inst func_5601540336_op4[2] = {func_5601544176, RETURN};
Inst func_5601540336_op5[2] = {func_5601541536, RETURN};
Inst func_5601540336_op6[2] = {func_5601544752, RETURN};
Inst func_5601540336_op7[2] = {func_5601544880, RETURN};
Inst func_5601540336_op8[2] = {func_5601545008, RETURN};
Inst func_5601540336_op9[2] = {func_5601541472, RETURN};
Inst func_5601540464_op0[2] = {func_5601540016, RETURN};
Inst func_5601540464_op1[2] = {func_5601539264, RETURN};
Inst func_5601540464_op2[2] = {func_5601540240, RETURN};
Inst func_5601540464_op3[2] = {func_5601539680, RETURN};
Inst func_5601540464_op4[2] = {func_5601541728, RETURN};
Inst func_5601540240_op0[2] = {func_5601543328, RETURN};
Inst func_5601540016_op0[2] = {func_5601545328, RETURN};
Inst func_5601542032_op0[2] = {func_5601547056, RETURN};
Inst func_5601542032_op1[2] = {func_5601547184, RETURN};
Inst func_5601542032_op2[2] = {func_5601547312, RETURN};
Inst func_5601542032_op3[2] = {func_5601547472, RETURN};
Inst func_5601542032_op4[2] = {func_5601547600, RETURN};
Inst func_5601542032_op5[2] = {func_5601547792, RETURN};
Inst func_5601542032_op6[2] = {func_5601547920, RETURN};
Inst func_5601542032_op7[2] = {func_5601548048, RETURN};
Inst func_5601542032_op8[2] = {func_5601548176, RETURN};
Inst func_5601542032_op9[2] = {func_5601547728, RETURN};
Inst func_5601542032_op10[2] = {func_5601548496, RETURN};
Inst func_5601542032_op11[2] = {func_5601548624, RETURN};
Inst func_5601542032_op12[2] = {func_5601548752, RETURN};
Inst func_5601542032_op13[2] = {func_5601548880, RETURN};
Inst func_5601542032_op14[2] = {func_5601549008, RETURN};
Inst func_5601542032_op15[2] = {func_5601549136, RETURN};
Inst func_5601542032_op16[2] = {func_5601549264, RETURN};
Inst func_5601542032_op17[2] = {func_5601548304, RETURN};
Inst func_5601542032_op18[2] = {func_5601549648, RETURN};
Inst func_5601542032_op19[2] = {func_5601549776, RETURN};
Inst func_5601542032_op20[2] = {func_5601549904, RETURN};
Inst func_5601542032_op21[2] = {func_5601550032, RETURN};
Inst func_5601542032_op22[2] = {func_5601550160, RETURN};
Inst func_5601542032_op23[2] = {func_5601544304, RETURN};
Inst func_5601542032_op24[2] = {func_5601544432, RETURN};
Inst func_5601542032_op25[2] = {func_5601544560, RETURN};
Inst func_5601542032_op26[2] = {func_5601544688, RETURN};
Inst func_5601542032_op27[2] = {func_5601550288, RETURN};
Inst func_5601542032_op28[2] = {func_5601550416, RETURN};
Inst func_5601542032_op29[2] = {func_5601550544, RETURN};
Inst func_5601542032_op30[2] = {func_5601550672, RETURN};
Inst func_5601542032_op31[2] = {func_5601550800, RETURN};
Inst func_5601542032_op32[2] = {func_5601550928, RETURN};
Inst func_5601542032_op33[2] = {func_5601549392, RETURN};
Inst func_5601542032_op34[2] = {func_5601549520, RETURN};
Inst func_5601542032_op35[2] = {func_5601551568, RETURN};
Inst func_5601542032_op36[2] = {func_5601551696, RETURN};
Inst func_5601542032_op37[2] = {func_5601551824, RETURN};
Inst func_5601542032_op38[2] = {func_5601551952, RETURN};
Inst func_5601542032_op39[2] = {func_5601552080, RETURN};
Inst func_5601542032_op40[2] = {func_5601552208, RETURN};
Inst func_5601542032_op41[2] = {func_5601552336, RETURN};
Inst func_5601542032_op42[2] = {func_5601552464, RETURN};
Inst func_5601542032_op43[2] = {func_5601552592, RETURN};
Inst func_5601542032_op44[2] = {func_5601552720, RETURN};
Inst func_5601542032_op45[2] = {func_5601552848, RETURN};
Inst func_5601542032_op46[2] = {func_5601552976, RETURN};
Inst func_5601542032_op47[2] = {func_5601553104, RETURN};
Inst func_5601542032_op48[2] = {func_5601553232, RETURN};
Inst func_5601542032_op49[2] = {func_5601553360, RETURN};
Inst func_5601542032_op50[2] = {func_5601553488, RETURN};
Inst func_5601542032_op51[2] = {func_5601553616, RETURN};
Inst func_5601541152_op0[2] = {func_5601543008, RETURN};
Inst func_5601541152_op1[2] = {func_5601542416, RETURN};
Inst func_5601541152_op2[2] = {func_5601546144, RETURN};
Inst func_5601541152_op3[2] = {func_5601546304, RETURN};
Inst func_5601541152_op4[2] = {func_5601546432, RETURN};
Inst func_5601541152_op5[2] = {func_5601546624, RETURN};
Inst func_5601541152_op6[2] = {func_5601543328, RETURN};
Inst func_5601541152_op7[2] = {func_5601546752, RETURN};
Inst func_5601541152_op8[2] = {func_5601545456, RETURN};
Inst func_5601541152_op9[2] = {func_5601545584, RETURN};
Inst func_5601541152_op10[2] = {func_5601546560, RETURN};
Inst func_5601541152_op11[2] = {func_5601553808, RETURN};
Inst func_5601541152_op12[2] = {func_5601553936, RETURN};
Inst func_5601541152_op13[2] = {func_5601554064, RETURN};
Inst func_5601540592_op0[2] = {func_5601545712, RETURN};
Inst func_5601540720_op0[2] = {func_5601542032, RETURN};
Inst func_5601540720_op1[2] = {func_5601540336, RETURN};
Inst func_5601540720_op2[2] = {func_5601542816, RETURN};
Inst func_5601540848_op0[2] = {func_5601543536, RETURN};
Inst func_5601540976_op0[2] = {func_5601554192, RETURN};
Inst func_5601541280_op0[2] = {func_5601554320, RETURN};
Inst func_5601539936_op0[2] = {func_5601541280, RETURN};
Inst func_5601539936_op1[2] = {func_5601539680, RETURN};
Inst func_5601540080_op0[2] = {func_5601539936, RETURN};
Inst func_5601540080_op1[2] = {func_5601543456, RETURN};
Inst func_5601541728_op0[2] = {func_5601540976, RETURN};
Inst func_5601541728_op1[2] = {func_5601540592, RETURN};
Inst func_5601541856_op0[2] = {func_5601539136, RETURN};
Inst func_5601541856_op1[2] = {func_5601539472, RETURN};
Inst func_5601542160_op0[2] = {func_5601554576, RETURN};
Inst func_5601542288_op0[2] = {func_5601522752, HALT};
Inst func_5601542816_op0[2] = {func_5601555232, RETURN};
Inst func_5601542816_op1[2] = {func_5601554448, RETURN};
Inst func_5601542816_op2[2] = {func_5601555376, RETURN};
Inst func_5601542816_op3[2] = {func_5601555536, RETURN};
Inst func_5601542816_op4[2] = {func_5601555664, RETURN};
Inst func_5601542816_op5[2] = {func_5601555856, RETURN};
Inst func_5601542816_op6[2] = {func_5601555984, RETURN};
Inst func_5601542816_op7[2] = {func_5601556112, RETURN};
Inst func_5601542816_op8[2] = {func_5601556240, RETURN};
Inst func_5601542816_op9[2] = {func_5601555792, RETURN};
Inst func_5601542816_op10[2] = {func_5601556560, RETURN};
Inst func_5601542496_op0[2] = {func_5601554864, RETURN};
Inst exp_5601542688[3] = {func_5601543008, func_5601541152, RETURN};
Inst exp_5601543136[3] = {func_5601541856, func_5601539472, RETURN};
Inst exp_5601545328[4] = {func_5601545456, func_5601522752, func_5601545584, RETURN};
Inst exp_5601545712[4] = {func_5601545840, func_5601540080, func_5601553808, RETURN};
Inst exp_5601543536[3] = {func_5601540464, func_5601546304, RETURN};
Inst exp_5601554192[4] = {func_5601546560, func_5601540080, func_5601553808, RETURN};
Inst exp_5601554320[4] = {func_5601539680, func_5601554448, func_5601539680, RETURN};
Inst exp_5601543456[3] = {func_5601539936, func_5601540080, RETURN};
Inst exp_5601554576[3] = {func_5601540464, func_5601546144, RETURN};
Inst exp_5601554864[4] = {func_5601522752, func_5601546752, func_5601541856, RETURN};
void func_5601522752(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5601522752_op0;
        break;
        case 1:
            PC = func_5601522752_op1;
        break;
    }
}
void func_5601539264(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5601539264_op0;
        break;
    }
}
void func_5601539472(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5601539472_op0;
        break;
        case 1:
            PC = func_5601539472_op1;
        break;
        case 2:
            PC = func_5601539472_op2;
        break;
    }
}
void func_5601539680(void) {
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
            PC = func_5601539680_op0;
        break;
        case 1:
            PC = func_5601539680_op1;
        break;
    }
}
void func_5601539136(void) {
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
            PC = func_5601539136_op0;
        break;
    }
}
void func_5601540336(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5601540336_op0;
        break;
        case 1:
            PC = func_5601540336_op1;
        break;
        case 2:
            PC = func_5601540336_op2;
        break;
        case 3:
            PC = func_5601540336_op3;
        break;
        case 4:
            PC = func_5601540336_op4;
        break;
        case 5:
            PC = func_5601540336_op5;
        break;
        case 6:
            PC = func_5601540336_op6;
        break;
        case 7:
            PC = func_5601540336_op7;
        break;
        case 8:
            PC = func_5601540336_op8;
        break;
        case 9:
            PC = func_5601540336_op9;
        break;
    }
}
void func_5601540464(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5601540464_op0;
        break;
        case 1:
            PC = func_5601540464_op1;
        break;
        case 2:
            PC = func_5601540464_op2;
        break;
        case 3:
            PC = func_5601540464_op3;
        break;
        case 4:
            PC = func_5601540464_op4;
        break;
    }
}
void func_5601540240(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5601540240_op0;
        break;
    }
}
void func_5601540016(void) {
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
            PC = func_5601540016_op0;
        break;
    }
}
void func_5601542032(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        return;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5601542032_op0;
        break;
        case 1:
            PC = func_5601542032_op1;
        break;
        case 2:
            PC = func_5601542032_op2;
        break;
        case 3:
            PC = func_5601542032_op3;
        break;
        case 4:
            PC = func_5601542032_op4;
        break;
        case 5:
            PC = func_5601542032_op5;
        break;
        case 6:
            PC = func_5601542032_op6;
        break;
        case 7:
            PC = func_5601542032_op7;
        break;
        case 8:
            PC = func_5601542032_op8;
        break;
        case 9:
            PC = func_5601542032_op9;
        break;
        case 10:
            PC = func_5601542032_op10;
        break;
        case 11:
            PC = func_5601542032_op11;
        break;
        case 12:
            PC = func_5601542032_op12;
        break;
        case 13:
            PC = func_5601542032_op13;
        break;
        case 14:
            PC = func_5601542032_op14;
        break;
        case 15:
            PC = func_5601542032_op15;
        break;
        case 16:
            PC = func_5601542032_op16;
        break;
        case 17:
            PC = func_5601542032_op17;
        break;
        case 18:
            PC = func_5601542032_op18;
        break;
        case 19:
            PC = func_5601542032_op19;
        break;
        case 20:
            PC = func_5601542032_op20;
        break;
        case 21:
            PC = func_5601542032_op21;
        break;
        case 22:
            PC = func_5601542032_op22;
        break;
        case 23:
            PC = func_5601542032_op23;
        break;
        case 24:
            PC = func_5601542032_op24;
        break;
        case 25:
            PC = func_5601542032_op25;
        break;
        case 26:
            PC = func_5601542032_op26;
        break;
        case 27:
            PC = func_5601542032_op27;
        break;
        case 28:
            PC = func_5601542032_op28;
        break;
        case 29:
            PC = func_5601542032_op29;
        break;
        case 30:
            PC = func_5601542032_op30;
        break;
        case 31:
            PC = func_5601542032_op31;
        break;
        case 32:
            PC = func_5601542032_op32;
        break;
        case 33:
            PC = func_5601542032_op33;
        break;
        case 34:
            PC = func_5601542032_op34;
        break;
        case 35:
            PC = func_5601542032_op35;
        break;
        case 36:
            PC = func_5601542032_op36;
        break;
        case 37:
            PC = func_5601542032_op37;
        break;
        case 38:
            PC = func_5601542032_op38;
        break;
        case 39:
            PC = func_5601542032_op39;
        break;
        case 40:
            PC = func_5601542032_op40;
        break;
        case 41:
            PC = func_5601542032_op41;
        break;
        case 42:
            PC = func_5601542032_op42;
        break;
        case 43:
            PC = func_5601542032_op43;
        break;
        case 44:
            PC = func_5601542032_op44;
        break;
        case 45:
            PC = func_5601542032_op45;
        break;
        case 46:
            PC = func_5601542032_op46;
        break;
        case 47:
            PC = func_5601542032_op47;
        break;
        case 48:
            PC = func_5601542032_op48;
        break;
        case 49:
            PC = func_5601542032_op49;
        break;
        case 50:
            PC = func_5601542032_op50;
        break;
        case 51:
            PC = func_5601542032_op51;
        break;
    }
}
void func_5601541152(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        return;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5601541152_op0;
        break;
        case 1:
            PC = func_5601541152_op1;
        break;
        case 2:
            PC = func_5601541152_op2;
        break;
        case 3:
            PC = func_5601541152_op3;
        break;
        case 4:
            PC = func_5601541152_op4;
        break;
        case 5:
            PC = func_5601541152_op5;
        break;
        case 6:
            PC = func_5601541152_op6;
        break;
        case 7:
            PC = func_5601541152_op7;
        break;
        case 8:
            PC = func_5601541152_op8;
        break;
        case 9:
            PC = func_5601541152_op9;
        break;
        case 10:
            PC = func_5601541152_op10;
        break;
        case 11:
            PC = func_5601541152_op11;
        break;
        case 12:
            PC = func_5601541152_op12;
        break;
        case 13:
            PC = func_5601541152_op13;
        break;
    }
}
void func_5601540592(void) {
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
            PC = func_5601540592_op0;
        break;
    }
}
void func_5601540720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5601540720_op0;
        break;
        case 1:
            PC = func_5601540720_op1;
        break;
        case 2:
            PC = func_5601540720_op2;
        break;
    }
}
void func_5601540848(void) {
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
            PC = func_5601540848_op0;
        break;
    }
}
void func_5601540976(void) {
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
            PC = func_5601540976_op0;
        break;
    }
}
void func_5601541280(void) {
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
            PC = func_5601541280_op0;
        break;
    }
}
void func_5601539936(void) {
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
            PC = func_5601539936_op0;
        break;
        case 1:
            PC = func_5601539936_op1;
        break;
    }
}
void func_5601540080(void) {
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
            PC = func_5601540080_op0;
        break;
        case 1:
            PC = func_5601540080_op1;
        break;
    }
}
void func_5601541728(void) {
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
            PC = func_5601541728_op0;
        break;
        case 1:
            PC = func_5601541728_op1;
        break;
    }
}
void func_5601541856(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5601541856_op0;
        break;
        case 1:
            PC = func_5601541856_op1;
        break;
    }
}
void func_5601542160(void) {
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
            PC = func_5601542160_op0;
        break;
    }
}
void func_5601542288(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5601542288_op0;
        break;
    }
}
void func_5601542816(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        return;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5601542816_op0;
        break;
        case 1:
            PC = func_5601542816_op1;
        break;
        case 2:
            PC = func_5601542816_op2;
        break;
        case 3:
            PC = func_5601542816_op3;
        break;
        case 4:
            PC = func_5601542816_op4;
        break;
        case 5:
            PC = func_5601542816_op5;
        break;
        case 6:
            PC = func_5601542816_op6;
        break;
        case 7:
            PC = func_5601542816_op7;
        break;
        case 8:
            PC = func_5601542816_op8;
        break;
        case 9:
            PC = func_5601542816_op9;
        break;
        case 10:
            PC = func_5601542816_op10;
        break;
    }
}
void func_5601542496(void) {
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
            PC = func_5601542496_op0;
        break;
    }
}
void func_5601542416(void) {
    extend(46);
    NEXT();
}
void func_5601542688(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5601542688;
}
void func_5601543008(void) {
    extend(92);
    NEXT();
}
void func_5601543136(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5601543136;
}
void func_5601543632(void) {
    extend(48);
    NEXT();
}
void func_5601543760(void) {
    extend(49);
    NEXT();
}
void func_5601543888(void) {
    extend(50);
    NEXT();
}
void func_5601544048(void) {
    extend(51);
    NEXT();
}
void func_5601544176(void) {
    extend(52);
    NEXT();
}
void func_5601541536(void) {
    extend(53);
    NEXT();
}
void func_5601544752(void) {
    extend(54);
    NEXT();
}
void func_5601544880(void) {
    extend(55);
    NEXT();
}
void func_5601545008(void) {
    extend(56);
    NEXT();
}
void func_5601541472(void) {
    extend(57);
    NEXT();
}
void func_5601543328(void) {
    extend(36);
    NEXT();
}
void func_5601545328(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5601545328;
}
void func_5601545456(void) {
    extend(40);
    NEXT();
}
void func_5601545584(void) {
    extend(41);
    NEXT();
}
void func_5601547056(void) {
    extend(97);
    NEXT();
}
void func_5601547184(void) {
    extend(98);
    NEXT();
}
void func_5601547312(void) {
    extend(99);
    NEXT();
}
void func_5601547472(void) {
    extend(100);
    NEXT();
}
void func_5601547600(void) {
    extend(101);
    NEXT();
}
void func_5601547792(void) {
    extend(102);
    NEXT();
}
void func_5601547920(void) {
    extend(103);
    NEXT();
}
void func_5601548048(void) {
    extend(104);
    NEXT();
}
void func_5601548176(void) {
    extend(105);
    NEXT();
}
void func_5601547728(void) {
    extend(106);
    NEXT();
}
void func_5601548496(void) {
    extend(107);
    NEXT();
}
void func_5601548624(void) {
    extend(108);
    NEXT();
}
void func_5601548752(void) {
    extend(109);
    NEXT();
}
void func_5601548880(void) {
    extend(110);
    NEXT();
}
void func_5601549008(void) {
    extend(111);
    NEXT();
}
void func_5601549136(void) {
    extend(112);
    NEXT();
}
void func_5601549264(void) {
    extend(113);
    NEXT();
}
void func_5601548304(void) {
    extend(114);
    NEXT();
}
void func_5601549648(void) {
    extend(115);
    NEXT();
}
void func_5601549776(void) {
    extend(116);
    NEXT();
}
void func_5601549904(void) {
    extend(117);
    NEXT();
}
void func_5601550032(void) {
    extend(118);
    NEXT();
}
void func_5601550160(void) {
    extend(119);
    NEXT();
}
void func_5601544304(void) {
    extend(120);
    NEXT();
}
void func_5601544432(void) {
    extend(121);
    NEXT();
}
void func_5601544560(void) {
    extend(122);
    NEXT();
}
void func_5601544688(void) {
    extend(65);
    NEXT();
}
void func_5601550288(void) {
    extend(66);
    NEXT();
}
void func_5601550416(void) {
    extend(67);
    NEXT();
}
void func_5601550544(void) {
    extend(68);
    NEXT();
}
void func_5601550672(void) {
    extend(69);
    NEXT();
}
void func_5601550800(void) {
    extend(70);
    NEXT();
}
void func_5601550928(void) {
    extend(71);
    NEXT();
}
void func_5601549392(void) {
    extend(72);
    NEXT();
}
void func_5601549520(void) {
    extend(73);
    NEXT();
}
void func_5601551568(void) {
    extend(74);
    NEXT();
}
void func_5601551696(void) {
    extend(75);
    NEXT();
}
void func_5601551824(void) {
    extend(76);
    NEXT();
}
void func_5601551952(void) {
    extend(77);
    NEXT();
}
void func_5601552080(void) {
    extend(78);
    NEXT();
}
void func_5601552208(void) {
    extend(79);
    NEXT();
}
void func_5601552336(void) {
    extend(80);
    NEXT();
}
void func_5601552464(void) {
    extend(81);
    NEXT();
}
void func_5601552592(void) {
    extend(82);
    NEXT();
}
void func_5601552720(void) {
    extend(83);
    NEXT();
}
void func_5601552848(void) {
    extend(84);
    NEXT();
}
void func_5601552976(void) {
    extend(85);
    NEXT();
}
void func_5601553104(void) {
    extend(86);
    NEXT();
}
void func_5601553232(void) {
    extend(87);
    NEXT();
}
void func_5601553360(void) {
    extend(88);
    NEXT();
}
void func_5601553488(void) {
    extend(89);
    NEXT();
}
void func_5601553616(void) {
    extend(90);
    NEXT();
}
void func_5601546144(void) {
    extend(42);
    NEXT();
}
void func_5601546304(void) {
    extend(43);
    NEXT();
}
void func_5601546432(void) {
    extend(63);
    NEXT();
}
void func_5601546624(void) {
    extend(94);
    NEXT();
}
void func_5601546752(void) {
    extend(124);
    NEXT();
}
void func_5601546560(void) {
    extend(91);
    NEXT();
}
void func_5601553808(void) {
    extend(93);
    NEXT();
}
void func_5601553936(void) {
    extend(123);
    NEXT();
}
void func_5601554064(void) {
    extend(125);
    NEXT();
}
void func_5601545712(void) {
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
    PC = exp_5601545712;
}
void func_5601545840(void) {
    extend(91);
    extend(94);
    NEXT();
}
void func_5601543536(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        return;
    }
    store();
    PC = exp_5601543536;
}
void func_5601554192(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5601554192;
}
void func_5601554320(void) {
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
    PC = exp_5601554320;
}
void func_5601554448(void) {
    extend(45);
    NEXT();
}
void func_5601543456(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5601543456;
}
void func_5601554576(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        return;
    }
    store();
    PC = exp_5601554576;
}
void func_5601555232(void) {
    extend(95);
    NEXT();
}
void func_5601555376(void) {
    extend(64);
    NEXT();
}
void func_5601555536(void) {
    extend(35);
    NEXT();
}
void func_5601555664(void) {
    extend(37);
    NEXT();
}
void func_5601555856(void) {
    extend(38);
    NEXT();
}
void func_5601555984(void) {
    extend(61);
    NEXT();
}
void func_5601556112(void) {
    extend(126);
    NEXT();
}
void func_5601556240(void) {
    extend(96);
    NEXT();
}
void func_5601555792(void) {
    extend(39);
    NEXT();
}
void func_5601556560(void) {
    extend(34);
    NEXT();
}
void func_5601554864(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        return;
    }
    store();
    PC = exp_5601554864;
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
    PC =func_5601542288_op0;
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
