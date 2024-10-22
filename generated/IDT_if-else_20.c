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
        static void * cf[] = {&&func_4812989152, &&func_4812998592, &&func_4812998512, &&func_4812998432, &&func_4812999056, &&func_4812998160, &&func_4812999584, &&func_4812998352, &&func_4812998880, &&func_4812998944, &&func_4812999824, &&func_4812999952, &&func_4813000176, &&func_4813000304, &&func_4813000432, &&func_4813000800, &&func_4813000928, &&func_4812999248, &&func_4813001312, &&func_4813001440, &&func_4813001568, &&func_4813001696, &&func_4813001824, &&func_4813001984, &&func_4813002112, &&func_4813002336, &&func_4813002464, &&func_4813002592, &&func_4813002720, &&func_4813002848, &&func_4813003040, &&func_4813002272, &&func_4813000080, &&func_4813001056, &&func_4813001184, &&func_4813000624, &&func_4813004528, &&func_4813004656, &&func_4813004464, &&func_4813003696, &&func_4813000688, &&func_4813005104, &&func_4813005232, &&func_4813005360, &&func_4813005552, &&func_4813005680, &&func_4813005808, &&func_4813005936, &&func_4813005488, &&func_4813006256, &&func_4813006384, &&func_4813003520, &&func_4813003232, &&func_4813006656, &&func_4813006784, &&RETURN, &&HALT};
        static void **func_4812989152_op0[2] = { cf+12, cf+55};
        static void **func_4812998592_op0[2] = { cf+15, cf+55};
        static void **func_4812998592_op1[2] = { cf+17, cf+55};
        static void **func_4812998592_op2[2] = { cf+19, cf+55};
        static void **func_4812998512_op0[2] = { cf+21, cf+55};
        static void **func_4812998512_op1[2] = { cf+11, cf+55};
        static void **func_4812998512_op2[2] = { cf+23, cf+55};
        static void **func_4812998432_op0[2] = { cf+6, cf+55};
        static void **func_4812998432_op1[2] = { cf+4, cf+55};
        static void **func_4812999056_op0[2] = { cf+25, cf+55};
        static void **func_4812999056_op1[2] = { cf+26, cf+55};
        static void **func_4812999056_op2[2] = { cf+27, cf+55};
        static void **func_4812999056_op3[2] = { cf+28, cf+55};
        static void **func_4812999056_op4[2] = { cf+29, cf+55};
        static void **func_4812999056_op5[2] = { cf+30, cf+55};
        static void **func_4812998160_op0[2] = { cf+31, cf+55};
        static void **func_4812998160_op1[2] = { cf+38, cf+55};
        static void **func_4812999584_op0[2] = { cf+39, cf+55};
        static void **func_4812999584_op1[2] = { cf+40, cf+55};
        static void **func_4812999584_op2[2] = { cf+41, cf+55};
        static void **func_4812999584_op3[2] = { cf+42, cf+55};
        static void **func_4812999584_op4[2] = { cf+43, cf+55};
        static void **func_4812999584_op5[2] = { cf+44, cf+55};
        static void **func_4812999584_op6[2] = { cf+45, cf+55};
        static void **func_4812999584_op7[2] = { cf+46, cf+55};
        static void **func_4812999584_op8[2] = { cf+47, cf+55};
        static void **func_4812999584_op9[2] = { cf+48, cf+55};
        static void **func_4812998352_op0[2] = { cf+49, cf+55};
        static void **func_4812998880_op0[2] = { cf+5, cf+56};
        static void **func_4812998944_op0[2] = { cf+5, cf+55};
        static void **func_4812998944_op1[2] = { cf+0, cf+55};
        static void **func_4812998944_op2[2] = { cf+7, cf+55};
        static void **func_4812999824_op0[2] = { cf+51, cf+55};
        static void **func_4812999824_op1[2] = { cf+52, cf+55};
        static void **func_4812999952_op0[2] = { cf+3, cf+55};
        static void **func_4812999952_op1[2] = { cf+53, cf+55};
        static void **exp_4813000176[5] = {cf+4, cf+13, cf+2, cf+14, cf+55};
        static void **exp_4813000800[4] = {cf+2, cf+16, cf+2, cf+55};
        static void **exp_4812999248[4] = {cf+2, cf+18, cf+2, cf+55};
        static void **exp_4813001440[4] = {cf+2, cf+20, cf+2, cf+55};
        static void **exp_4813001696[4] = {cf+11, cf+22, cf+2, cf+55};
        static void **exp_4813001984[4] = {cf+11, cf+24, cf+2, cf+55};
        static void **exp_4813002272[12] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+37, cf+35, cf+10, cf+36, cf+55};
        static void **exp_4813004464[8] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+55};
        static void **exp_4813006256[6] = {cf+50, cf+33, cf+2, cf+34, cf+14, cf+55};
        static void **exp_4813003520[3] = {cf+9, cf+10, cf+55};
        static void **exp_4813003232[1] = {cf+55};
        static void **exp_4813006656[4] = {cf+3, cf+54, cf+11, cf+55};
goto LOOP;

func_4812989152:
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
            PC = func_4812989152_op0;
        break;
    }
    goto ***PC;
func_4812998592:
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
            PC = func_4812998592_op0;
        break;
        case 1:
            PC = func_4812998592_op1;
        break;
        case 2:
            PC = func_4812998592_op2;
        break;
    }
    goto ***PC;
func_4812998512:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4812998512_op0;
        break;
        case 1:
            PC = func_4812998512_op1;
        break;
        case 2:
            PC = func_4812998512_op2;
        break;
    }
    goto ***PC;
func_4812998432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4812998432_op0;
        break;
        case 1:
            PC = func_4812998432_op1;
        break;
    }
    goto ***PC;
func_4812999056:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_4812999056_op0;
        break;
        case 1:
            PC = func_4812999056_op1;
        break;
        case 2:
            PC = func_4812999056_op2;
        break;
        case 3:
            PC = func_4812999056_op3;
        break;
        case 4:
            PC = func_4812999056_op4;
        break;
        case 5:
            PC = func_4812999056_op5;
        break;
    }
    goto ***PC;
func_4812998160:
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
            PC = func_4812998160_op0;
        break;
        case 1:
            PC = func_4812998160_op1;
        break;
    }
    goto ***PC;
func_4812999584:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4812999584_op0;
        break;
        case 1:
            PC = func_4812999584_op1;
        break;
        case 2:
            PC = func_4812999584_op2;
        break;
        case 3:
            PC = func_4812999584_op3;
        break;
        case 4:
            PC = func_4812999584_op4;
        break;
        case 5:
            PC = func_4812999584_op5;
        break;
        case 6:
            PC = func_4812999584_op6;
        break;
        case 7:
            PC = func_4812999584_op7;
        break;
        case 8:
            PC = func_4812999584_op8;
        break;
        case 9:
            PC = func_4812999584_op9;
        break;
    }
    goto ***PC;
func_4812998352:
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
            PC = func_4812998352_op0;
        break;
    }
    goto ***PC;
func_4812998880:
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
            PC = func_4812998880_op0;
        break;
    }
    goto ***PC;
func_4812998944:
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
            PC = func_4812998944_op0;
        break;
        case 1:
            PC = func_4812998944_op1;
        break;
        case 2:
            PC = func_4812998944_op2;
        break;
    }
    goto ***PC;
func_4812999824:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4812999824_op0;
        break;
        case 1:
            PC = func_4812999824_op1;
        break;
    }
    goto ***PC;
func_4812999952:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4812999952_op0;
        break;
        case 1:
            PC = func_4812999952_op1;
        break;
    }
    goto ***PC;
func_4813000176:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4813000176;
    goto ***PC;
func_4813000304:
    extend(61);
    NEXT();
    goto ***PC;
func_4813000432:
    extend(59);
    NEXT();
    goto ***PC;
func_4813000800:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4813000800;
    goto ***PC;
func_4813000928:
    extend(62);
    NEXT();
    goto ***PC;
func_4812999248:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4812999248;
    goto ***PC;
func_4813001312:
    extend(60);
    NEXT();
    goto ***PC;
func_4813001440:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4813001440;
    goto ***PC;
func_4813001568:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_4813001696:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4813001696;
    goto ***PC;
func_4813001824:
    extend(43);
    NEXT();
    goto ***PC;
func_4813001984:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4813001984;
    goto ***PC;
func_4813002112:
    extend(45);
    NEXT();
    goto ***PC;
func_4813002336:
    extend(120);
    NEXT();
    goto ***PC;
func_4813002464:
    extend(121);
    NEXT();
    goto ***PC;
func_4813002592:
    extend(122);
    NEXT();
    goto ***PC;
func_4813002720:
    extend(97);
    NEXT();
    goto ***PC;
func_4813002848:
    extend(98);
    NEXT();
    goto ***PC;
func_4813003040:
    extend(99);
    NEXT();
    goto ***PC;
func_4813002272:
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
    PC = exp_4813002272;
    goto ***PC;
func_4813000080:
    extend(105);
    extend(102);
    NEXT();
    goto ***PC;
func_4813001056:
    extend(40);
    NEXT();
    goto ***PC;
func_4813001184:
    extend(41);
    NEXT();
    goto ***PC;
func_4813000624:
    extend(123);
    NEXT();
    goto ***PC;
func_4813004528:
    extend(125);
    NEXT();
    goto ***PC;
func_4813004656:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_4813004464:
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
    PC = exp_4813004464;
    goto ***PC;
func_4813003696:
    extend(48);
    NEXT();
    goto ***PC;
func_4813000688:
    extend(49);
    NEXT();
    goto ***PC;
func_4813005104:
    extend(50);
    NEXT();
    goto ***PC;
func_4813005232:
    extend(51);
    NEXT();
    goto ***PC;
func_4813005360:
    extend(52);
    NEXT();
    goto ***PC;
func_4813005552:
    extend(53);
    NEXT();
    goto ***PC;
func_4813005680:
    extend(54);
    NEXT();
    goto ***PC;
func_4813005808:
    extend(55);
    NEXT();
    goto ***PC;
func_4813005936:
    extend(56);
    NEXT();
    goto ***PC;
func_4813005488:
    extend(57);
    NEXT();
    goto ***PC;
func_4813006256:
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
    PC = exp_4813006256;
    goto ***PC;
func_4813006384:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto ***PC;
func_4813003520:
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
    PC = exp_4813003520;
    goto ***PC;
func_4813003232:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4813003232;
    goto ***PC;
func_4813006656:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4813006656;
    goto ***PC;
func_4813006784:
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
    PC = func_4812998880_op0;
    goto ***PC;
}
