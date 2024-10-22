#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 30
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
    void ***PC; // program counter (now a void pointer)

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
        void *frames[MAX_DEPTH];     // the first pointer of frames
        void **top;              // the top of stack
    } Stack;

    Stack stack;

    bool endless = false;

    int main() {
        seed = time(NULL);
        FILE *fp = fopen("output.txt", "w");
        initStack();
        unsigned loop_limit = 12;
        static void * cf[] = {&&func_5727347424, &&func_5727356864, &&func_5727356784, &&func_5727356704, &&func_5727357328, &&func_5727356432, &&func_5727357856, &&func_5727356624, &&func_5727357152, &&func_5727357216, &&func_5727358096, &&func_5727358224, &&func_5727358448, &&func_5727358576, &&func_5727358704, &&func_5727359072, &&func_5727359200, &&func_5727357520, &&func_5727359584, &&func_5727359712, &&func_5727359840, &&func_5727359968, &&func_5727360096, &&func_5727360256, &&func_5727360384, &&func_5727360608, &&func_5727360736, &&func_5727360864, &&func_5727360992, &&func_5727361120, &&func_5727361312, &&func_5727360544, &&func_5727358352, &&func_5727359328, &&func_5727359456, &&func_5727358896, &&func_5727362800, &&func_5727362928, &&func_5727362736, &&func_5727361968, &&func_5727358960, &&func_5727363376, &&func_5727363504, &&func_5727363632, &&func_5727363824, &&func_5727363952, &&func_5727364080, &&func_5727364208, &&func_5727363760, &&func_5727364528, &&func_5727364656, &&func_5727361792, &&func_5727361504, &&func_5727364928, &&func_5727365056, &&RETURN, &&HALT};
        static void **func_5727347424_op0[2] = { cf+12, cf+55};
        static void **func_5727356864_op0[2] = { cf+15, cf+55};
        static void **func_5727356864_op1[2] = { cf+17, cf+55};
        static void **func_5727356864_op2[2] = { cf+19, cf+55};
        static void **func_5727356784_op0[2] = { cf+21, cf+55};
        static void **func_5727356784_op1[2] = { cf+11, cf+55};
        static void **func_5727356784_op2[2] = { cf+23, cf+55};
        static void **func_5727356704_op0[2] = { cf+6, cf+55};
        static void **func_5727356704_op1[2] = { cf+4, cf+55};
        static void **func_5727357328_op0[2] = { cf+25, cf+55};
        static void **func_5727357328_op1[2] = { cf+26, cf+55};
        static void **func_5727357328_op2[2] = { cf+27, cf+55};
        static void **func_5727357328_op3[2] = { cf+28, cf+55};
        static void **func_5727357328_op4[2] = { cf+29, cf+55};
        static void **func_5727357328_op5[2] = { cf+30, cf+55};
        static void **func_5727356432_op0[2] = { cf+31, cf+55};
        static void **func_5727356432_op1[2] = { cf+38, cf+55};
        static void **func_5727357856_op0[2] = { cf+39, cf+55};
        static void **func_5727357856_op1[2] = { cf+40, cf+55};
        static void **func_5727357856_op2[2] = { cf+41, cf+55};
        static void **func_5727357856_op3[2] = { cf+42, cf+55};
        static void **func_5727357856_op4[2] = { cf+43, cf+55};
        static void **func_5727357856_op5[2] = { cf+44, cf+55};
        static void **func_5727357856_op6[2] = { cf+45, cf+55};
        static void **func_5727357856_op7[2] = { cf+46, cf+55};
        static void **func_5727357856_op8[2] = { cf+47, cf+55};
        static void **func_5727357856_op9[2] = { cf+48, cf+55};
        static void **func_5727356624_op0[2] = { cf+49, cf+55};
        static void **func_5727357152_op0[2] = { cf+5, cf+56};
        static void **func_5727357216_op0[2] = { cf+5, cf+55};
        static void **func_5727357216_op1[2] = { cf+0, cf+55};
        static void **func_5727357216_op2[2] = { cf+7, cf+55};
        static void **func_5727358096_op0[2] = { cf+51, cf+55};
        static void **func_5727358096_op1[2] = { cf+52, cf+55};
        static void **func_5727358224_op0[2] = { cf+3, cf+55};
        static void **func_5727358224_op1[2] = { cf+53, cf+55};
        static void **exp_5727358448[5] = {cf+4, cf+13, cf+2, cf+14, cf+55};
        static void **exp_5727359072[4] = {cf+2, cf+16, cf+2, cf+55};
        static void **exp_5727357520[4] = {cf+2, cf+18, cf+2, cf+55};
        static void **exp_5727359712[4] = {cf+2, cf+20, cf+2, cf+55};
        static void **exp_5727359968[4] = {cf+11, cf+22, cf+2, cf+55};
        static void **exp_5727360256[4] = {cf+11, cf+24, cf+2, cf+55};
        static void **exp_5727360544[12] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+37, cf+35, cf+10, cf+36, cf+55};
        static void **exp_5727362736[8] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+55};
        static void **exp_5727364528[6] = {cf+50, cf+33, cf+2, cf+34, cf+14, cf+55};
        static void **exp_5727361792[3] = {cf+9, cf+10, cf+55};
        static void **exp_5727361504[1] = {cf+55};
        static void **exp_5727364928[4] = {cf+3, cf+54, cf+11, cf+55};
goto LOOP;

func_5727347424:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5727347424_op0;
        break;
    }
    goto ***PC;
func_5727356864:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5727356864_op0;
        break;
        case 1:
            PC = func_5727356864_op1;
        break;
        case 2:
            PC = func_5727356864_op2;
        break;
    }
    goto ***PC;
func_5727356784:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5727356784_op0;
        break;
        case 1:
            PC = func_5727356784_op1;
        break;
        case 2:
            PC = func_5727356784_op2;
        break;
    }
    goto ***PC;
func_5727356704:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5727356704_op0;
        break;
        case 1:
            PC = func_5727356704_op1;
        break;
    }
    goto ***PC;
func_5727357328:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5727357328_op0;
        break;
        case 1:
            PC = func_5727357328_op1;
        break;
        case 2:
            PC = func_5727357328_op2;
        break;
        case 3:
            PC = func_5727357328_op3;
        break;
        case 4:
            PC = func_5727357328_op4;
        break;
        case 5:
            PC = func_5727357328_op5;
        break;
    }
    goto ***PC;
func_5727356432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5727356432_op0;
        break;
        case 1:
            PC = func_5727356432_op1;
        break;
    }
    goto ***PC;
func_5727357856:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5727357856_op0;
        break;
        case 1:
            PC = func_5727357856_op1;
        break;
        case 2:
            PC = func_5727357856_op2;
        break;
        case 3:
            PC = func_5727357856_op3;
        break;
        case 4:
            PC = func_5727357856_op4;
        break;
        case 5:
            PC = func_5727357856_op5;
        break;
        case 6:
            PC = func_5727357856_op6;
        break;
        case 7:
            PC = func_5727357856_op7;
        break;
        case 8:
            PC = func_5727357856_op8;
        break;
        case 9:
            PC = func_5727357856_op9;
        break;
    }
    goto ***PC;
func_5727356624:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5727356624_op0;
        break;
    }
    goto ***PC;
func_5727357152:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5727357152_op0;
        break;
    }
    goto ***PC;
func_5727357216:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5727357216_op0;
        break;
        case 1:
            PC = func_5727357216_op1;
        break;
        case 2:
            PC = func_5727357216_op2;
        break;
    }
    goto ***PC;
func_5727358096:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5727358096_op0;
        break;
        case 1:
            PC = func_5727358096_op1;
        break;
    }
    goto ***PC;
func_5727358224:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5727358224_op0;
        break;
        case 1:
            PC = func_5727358224_op1;
        break;
    }
    goto ***PC;
func_5727358448:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5727358448;
    goto ***PC;
func_5727358576:
    extend(61);
    NEXT();
    goto ***PC;
func_5727358704:
    extend(59);
    NEXT();
    goto ***PC;
func_5727359072:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5727359072;
    goto ***PC;
func_5727359200:
    extend(62);
    NEXT();
    goto ***PC;
func_5727357520:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5727357520;
    goto ***PC;
func_5727359584:
    extend(60);
    NEXT();
    goto ***PC;
func_5727359712:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5727359712;
    goto ***PC;
func_5727359840:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5727359968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5727359968;
    goto ***PC;
func_5727360096:
    extend(43);
    NEXT();
    goto ***PC;
func_5727360256:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5727360256;
    goto ***PC;
func_5727360384:
    extend(45);
    NEXT();
    goto ***PC;
func_5727360608:
    extend(120);
    NEXT();
    goto ***PC;
func_5727360736:
    extend(121);
    NEXT();
    goto ***PC;
func_5727360864:
    extend(122);
    NEXT();
    goto ***PC;
func_5727360992:
    extend(97);
    NEXT();
    goto ***PC;
func_5727361120:
    extend(98);
    NEXT();
    goto ***PC;
func_5727361312:
    extend(99);
    NEXT();
    goto ***PC;
func_5727360544:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        extend(101);
        extend(108);
        extend(115);
        extend(101);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5727360544;
    goto ***PC;
func_5727358352:
    extend(105);
    extend(102);
    NEXT();
    goto ***PC;
func_5727359328:
    extend(40);
    NEXT();
    goto ***PC;
func_5727359456:
    extend(41);
    NEXT();
    goto ***PC;
func_5727358896:
    extend(123);
    NEXT();
    goto ***PC;
func_5727362800:
    extend(125);
    NEXT();
    goto ***PC;
func_5727362928:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5727362736:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5727362736;
    goto ***PC;
func_5727361968:
    extend(48);
    NEXT();
    goto ***PC;
func_5727358960:
    extend(49);
    NEXT();
    goto ***PC;
func_5727363376:
    extend(50);
    NEXT();
    goto ***PC;
func_5727363504:
    extend(51);
    NEXT();
    goto ***PC;
func_5727363632:
    extend(52);
    NEXT();
    goto ***PC;
func_5727363824:
    extend(53);
    NEXT();
    goto ***PC;
func_5727363952:
    extend(54);
    NEXT();
    goto ***PC;
func_5727364080:
    extend(55);
    NEXT();
    goto ***PC;
func_5727364208:
    extend(56);
    NEXT();
    goto ***PC;
func_5727363760:
    extend(57);
    NEXT();
    goto ***PC;
func_5727364528:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5727364528;
    goto ***PC;
func_5727364656:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto ***PC;
func_5727361792:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5727361792;
    goto ***PC;
func_5727361504:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5727361504;
    goto ***PC;
func_5727364928:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5727364928;
    goto ***PC;
func_5727365056:
    extend(42);
    NEXT();
    goto ***PC;
HALT:
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
RETURN:
    PC = *(--stack.top);
    PC++;
    goto ***PC;
LOOP:
    PC = func_5727357152_op0;
    goto ***PC;
}
