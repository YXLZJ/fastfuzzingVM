#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 55
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
        static void * cf[] = {&&func_4997538528, &&func_4997547968, &&func_4997547888, &&func_4997547808, &&func_4997548432, &&func_4997547536, &&func_4997548960, &&func_4997547728, &&func_4997548256, &&func_4997548320, &&func_4997549200, &&func_4997549328, &&func_4997549552, &&func_4997549680, &&func_4997549808, &&func_4997550176, &&func_4997550304, &&func_4997548624, &&func_4997550688, &&func_4997550816, &&func_4997550944, &&func_4997551072, &&func_4997551200, &&func_4997551360, &&func_4997551488, &&func_4997551712, &&func_4997551840, &&func_4997551968, &&func_4997552096, &&func_4997552224, &&func_4997552416, &&func_4997551648, &&func_4997549456, &&func_4997550432, &&func_4997550560, &&func_4997550000, &&func_4997553904, &&func_4997554032, &&func_4997553840, &&func_4997553072, &&func_4997550064, &&func_4997554480, &&func_4997554608, &&func_4997554736, &&func_4997554928, &&func_4997555056, &&func_4997555184, &&func_4997555312, &&func_4997554864, &&func_4997555632, &&func_4997555760, &&func_4997552896, &&func_4997552608, &&func_4997556032, &&func_4997556160, &&RETURN, &&HALT};
        static void **func_4997538528_op0[2] = { cf+12, cf+55};
        static void **func_4997547968_op0[2] = { cf+15, cf+55};
        static void **func_4997547968_op1[2] = { cf+17, cf+55};
        static void **func_4997547968_op2[2] = { cf+19, cf+55};
        static void **func_4997547888_op0[2] = { cf+21, cf+55};
        static void **func_4997547888_op1[2] = { cf+11, cf+55};
        static void **func_4997547888_op2[2] = { cf+23, cf+55};
        static void **func_4997547808_op0[2] = { cf+6, cf+55};
        static void **func_4997547808_op1[2] = { cf+4, cf+55};
        static void **func_4997548432_op0[2] = { cf+25, cf+55};
        static void **func_4997548432_op1[2] = { cf+26, cf+55};
        static void **func_4997548432_op2[2] = { cf+27, cf+55};
        static void **func_4997548432_op3[2] = { cf+28, cf+55};
        static void **func_4997548432_op4[2] = { cf+29, cf+55};
        static void **func_4997548432_op5[2] = { cf+30, cf+55};
        static void **func_4997547536_op0[2] = { cf+31, cf+55};
        static void **func_4997547536_op1[2] = { cf+38, cf+55};
        static void **func_4997548960_op0[2] = { cf+39, cf+55};
        static void **func_4997548960_op1[2] = { cf+40, cf+55};
        static void **func_4997548960_op2[2] = { cf+41, cf+55};
        static void **func_4997548960_op3[2] = { cf+42, cf+55};
        static void **func_4997548960_op4[2] = { cf+43, cf+55};
        static void **func_4997548960_op5[2] = { cf+44, cf+55};
        static void **func_4997548960_op6[2] = { cf+45, cf+55};
        static void **func_4997548960_op7[2] = { cf+46, cf+55};
        static void **func_4997548960_op8[2] = { cf+47, cf+55};
        static void **func_4997548960_op9[2] = { cf+48, cf+55};
        static void **func_4997547728_op0[2] = { cf+49, cf+55};
        static void **func_4997548256_op0[2] = { cf+5, cf+56};
        static void **func_4997548320_op0[2] = { cf+5, cf+55};
        static void **func_4997548320_op1[2] = { cf+0, cf+55};
        static void **func_4997548320_op2[2] = { cf+7, cf+55};
        static void **func_4997549200_op0[2] = { cf+51, cf+55};
        static void **func_4997549200_op1[2] = { cf+52, cf+55};
        static void **func_4997549328_op0[2] = { cf+3, cf+55};
        static void **func_4997549328_op1[2] = { cf+53, cf+55};
        static void **exp_4997549552[5] = {cf+4, cf+13, cf+2, cf+14, cf+55};
        static void **exp_4997550176[4] = {cf+2, cf+16, cf+2, cf+55};
        static void **exp_4997548624[4] = {cf+2, cf+18, cf+2, cf+55};
        static void **exp_4997550816[4] = {cf+2, cf+20, cf+2, cf+55};
        static void **exp_4997551072[4] = {cf+11, cf+22, cf+2, cf+55};
        static void **exp_4997551360[4] = {cf+11, cf+24, cf+2, cf+55};
        static void **exp_4997551648[12] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+37, cf+35, cf+10, cf+36, cf+55};
        static void **exp_4997553840[8] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+55};
        static void **exp_4997555632[6] = {cf+50, cf+33, cf+2, cf+34, cf+14, cf+55};
        static void **exp_4997552896[3] = {cf+9, cf+10, cf+55};
        static void **exp_4997552608[1] = {cf+55};
        static void **exp_4997556032[4] = {cf+3, cf+54, cf+11, cf+55};
goto LOOP;

func_4997538528:
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
            PC = func_4997538528_op0;
        break;
    }
    goto ***PC;
func_4997547968:
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
            PC = func_4997547968_op0;
        break;
        case 1:
            PC = func_4997547968_op1;
        break;
        case 2:
            PC = func_4997547968_op2;
        break;
    }
    goto ***PC;
func_4997547888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4997547888_op0;
        break;
        case 1:
            PC = func_4997547888_op1;
        break;
        case 2:
            PC = func_4997547888_op2;
        break;
    }
    goto ***PC;
func_4997547808:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997547808_op0;
        break;
        case 1:
            PC = func_4997547808_op1;
        break;
    }
    goto ***PC;
func_4997548432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_4997548432_op0;
        break;
        case 1:
            PC = func_4997548432_op1;
        break;
        case 2:
            PC = func_4997548432_op2;
        break;
        case 3:
            PC = func_4997548432_op3;
        break;
        case 4:
            PC = func_4997548432_op4;
        break;
        case 5:
            PC = func_4997548432_op5;
        break;
    }
    goto ***PC;
func_4997547536:
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
            PC = func_4997547536_op0;
        break;
        case 1:
            PC = func_4997547536_op1;
        break;
    }
    goto ***PC;
func_4997548960:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4997548960_op0;
        break;
        case 1:
            PC = func_4997548960_op1;
        break;
        case 2:
            PC = func_4997548960_op2;
        break;
        case 3:
            PC = func_4997548960_op3;
        break;
        case 4:
            PC = func_4997548960_op4;
        break;
        case 5:
            PC = func_4997548960_op5;
        break;
        case 6:
            PC = func_4997548960_op6;
        break;
        case 7:
            PC = func_4997548960_op7;
        break;
        case 8:
            PC = func_4997548960_op8;
        break;
        case 9:
            PC = func_4997548960_op9;
        break;
    }
    goto ***PC;
func_4997547728:
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
            PC = func_4997547728_op0;
        break;
    }
    goto ***PC;
func_4997548256:
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
            PC = func_4997548256_op0;
        break;
    }
    goto ***PC;
func_4997548320:
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
            PC = func_4997548320_op0;
        break;
        case 1:
            PC = func_4997548320_op1;
        break;
        case 2:
            PC = func_4997548320_op2;
        break;
    }
    goto ***PC;
func_4997549200:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997549200_op0;
        break;
        case 1:
            PC = func_4997549200_op1;
        break;
    }
    goto ***PC;
func_4997549328:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997549328_op0;
        break;
        case 1:
            PC = func_4997549328_op1;
        break;
    }
    goto ***PC;
func_4997549552:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997549552;
    goto ***PC;
func_4997549680:
    extend(61);
    NEXT();
    goto ***PC;
func_4997549808:
    extend(59);
    NEXT();
    goto ***PC;
func_4997550176:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997550176;
    goto ***PC;
func_4997550304:
    extend(62);
    NEXT();
    goto ***PC;
func_4997548624:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997548624;
    goto ***PC;
func_4997550688:
    extend(60);
    NEXT();
    goto ***PC;
func_4997550816:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997550816;
    goto ***PC;
func_4997550944:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_4997551072:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997551072;
    goto ***PC;
func_4997551200:
    extend(43);
    NEXT();
    goto ***PC;
func_4997551360:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997551360;
    goto ***PC;
func_4997551488:
    extend(45);
    NEXT();
    goto ***PC;
func_4997551712:
    extend(120);
    NEXT();
    goto ***PC;
func_4997551840:
    extend(121);
    NEXT();
    goto ***PC;
func_4997551968:
    extend(122);
    NEXT();
    goto ***PC;
func_4997552096:
    extend(97);
    NEXT();
    goto ***PC;
func_4997552224:
    extend(98);
    NEXT();
    goto ***PC;
func_4997552416:
    extend(99);
    NEXT();
    goto ***PC;
func_4997551648:
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
    PC = exp_4997551648;
    goto ***PC;
func_4997549456:
    extend(105);
    extend(102);
    NEXT();
    goto ***PC;
func_4997550432:
    extend(40);
    NEXT();
    goto ***PC;
func_4997550560:
    extend(41);
    NEXT();
    goto ***PC;
func_4997550000:
    extend(123);
    NEXT();
    goto ***PC;
func_4997553904:
    extend(125);
    NEXT();
    goto ***PC;
func_4997554032:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_4997553840:
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
    PC = exp_4997553840;
    goto ***PC;
func_4997553072:
    extend(48);
    NEXT();
    goto ***PC;
func_4997550064:
    extend(49);
    NEXT();
    goto ***PC;
func_4997554480:
    extend(50);
    NEXT();
    goto ***PC;
func_4997554608:
    extend(51);
    NEXT();
    goto ***PC;
func_4997554736:
    extend(52);
    NEXT();
    goto ***PC;
func_4997554928:
    extend(53);
    NEXT();
    goto ***PC;
func_4997555056:
    extend(54);
    NEXT();
    goto ***PC;
func_4997555184:
    extend(55);
    NEXT();
    goto ***PC;
func_4997555312:
    extend(56);
    NEXT();
    goto ***PC;
func_4997554864:
    extend(57);
    NEXT();
    goto ***PC;
func_4997555632:
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
    PC = exp_4997555632;
    goto ***PC;
func_4997555760:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto ***PC;
func_4997552896:
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
    PC = exp_4997552896;
    goto ***PC;
func_4997552608:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997552608;
    goto ***PC;
func_4997556032:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997556032;
    goto ***PC;
func_4997556160:
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
    PC = func_4997548256_op0;
    goto ***PC;
}
