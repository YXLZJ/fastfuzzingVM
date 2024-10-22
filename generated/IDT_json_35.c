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
        unsigned loop_limit = 8;
        static void * cf[] = {&&func_4997545184, &&func_4997545744, &&func_4997545552, &&func_4997545312, &&func_4997545488, &&func_4997545968, &&func_4997546096, &&func_4997545888, &&func_4997546448, &&func_4997546880, &&func_4997546816, &&func_4997547072, &&func_4997546640, &&func_4997547200, &&func_4997547664, &&func_4997547792, &&func_4997547920, &&func_4997546512, &&func_4997548304, &&func_4997548496, &&func_4997548624, &&func_4997548752, &&func_4997548880, &&func_4997548432, &&func_4997546368, &&func_4997549264, &&func_4997547408, &&func_4997547536, &&func_4997549472, &&func_4997549600, &&func_4997549728, &&func_4997549904, &&func_4997550048, &&func_4997548048, &&func_4997549392, &&func_4997550816, &&func_4997550944, &&func_4997551104, &&func_4997551232, &&func_4997550656, &&func_4997551760, &&func_4997551888, &&RETURN, &&HALT};
        static void **func_4997545184_op0[2] = { cf+10, cf+42};
        static void **func_4997545184_op1[2] = { cf+13, cf+42};
        static void **func_4997545744_op0[2] = { cf+14, cf+42};
        static void **func_4997545744_op1[2] = { cf+15, cf+42};
        static void **func_4997545744_op2[2] = { cf+16, cf+42};
        static void **func_4997545744_op3[2] = { cf+17, cf+42};
        static void **func_4997545744_op4[2] = { cf+18, cf+42};
        static void **func_4997545744_op5[2] = { cf+19, cf+42};
        static void **func_4997545744_op6[2] = { cf+20, cf+42};
        static void **func_4997545744_op7[2] = { cf+21, cf+42};
        static void **func_4997545744_op8[2] = { cf+22, cf+42};
        static void **func_4997545744_op9[2] = { cf+23, cf+42};
        static void **func_4997545552_op0[2] = { cf+24, cf+42};
        static void **func_4997545552_op1[2] = { cf+9, cf+42};
        static void **func_4997545312_op0[2] = { cf+26, cf+42};
        static void **func_4997545312_op1[2] = { cf+6, cf+42};
        static void **func_4997545488_op0[2] = { cf+1, cf+42};
        static void **func_4997545488_op1[2] = { cf+27, cf+42};
        static void **func_4997545968_op0[2] = { cf+28, cf+42};
        static void **func_4997545968_op1[2] = { cf+31, cf+42};
        static void **func_4997546096_op0[2] = { cf+32, cf+42};
        static void **func_4997545888_op0[2] = { cf+9, cf+43};
        static void **func_4997546448_op0[2] = { cf+34, cf+42};
        static void **func_4997546448_op1[2] = { cf+35, cf+42};
        static void **func_4997546448_op2[2] = { cf+36, cf+42};
        static void **func_4997546448_op3[2] = { cf+37, cf+42};
        static void **func_4997546448_op4[2] = { cf+38, cf+42};
        static void **func_4997546880_op0[2] = { cf+5, cf+42};
        static void **func_4997546880_op1[2] = { cf+0, cf+42};
        static void **func_4997546880_op2[2] = { cf+8, cf+42};
        static void **func_4997546880_op3[2] = { cf+4, cf+42};
        static void **func_4997546880_op4[2] = { cf+39, cf+42};
        static void **func_4997546880_op5[2] = { cf+40, cf+42};
        static void **func_4997546880_op6[2] = { cf+41, cf+42};
        static void **exp_4997546816[4] = {cf+11, cf+2, cf+12, cf+42};
        static void **exp_4997547200[3] = {cf+11, cf+12, cf+42};
        static void **exp_4997546368[4] = {cf+9, cf+25, cf+2, cf+42};
        static void **exp_4997547408[4] = {cf+6, cf+25, cf+3, cf+42};
        static void **exp_4997547536[3] = {cf+1, cf+4, cf+42};
        static void **exp_4997549472[4] = {cf+29, cf+3, cf+30, cf+42};
        static void **exp_4997549904[3] = {cf+29, cf+30, cf+42};
        static void **exp_4997550048[4] = {cf+8, cf+33, cf+9, cf+42};
goto LOOP;

func_4997545184:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997545184_op0;
        break;
        case 1:
            PC = func_4997545184_op1;
        break;
    }
    goto ***PC;
func_4997545744:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4997545744_op0;
        break;
        case 1:
            PC = func_4997545744_op1;
        break;
        case 2:
            PC = func_4997545744_op2;
        break;
        case 3:
            PC = func_4997545744_op3;
        break;
        case 4:
            PC = func_4997545744_op4;
        break;
        case 5:
            PC = func_4997545744_op5;
        break;
        case 6:
            PC = func_4997545744_op6;
        break;
        case 7:
            PC = func_4997545744_op7;
        break;
        case 8:
            PC = func_4997545744_op8;
        break;
        case 9:
            PC = func_4997545744_op9;
        break;
    }
    goto ***PC;
func_4997545552:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997545552_op0;
        break;
        case 1:
            PC = func_4997545552_op1;
        break;
    }
    goto ***PC;
func_4997545312:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997545312_op0;
        break;
        case 1:
            PC = func_4997545312_op1;
        break;
    }
    goto ***PC;
func_4997545488:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997545488_op0;
        break;
        case 1:
            PC = func_4997545488_op1;
        break;
    }
    goto ***PC;
func_4997545968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997545968_op0;
        break;
        case 1:
            PC = func_4997545968_op1;
        break;
    }
    goto ***PC;
func_4997546096:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4997546096_op0;
        break;
    }
    goto ***PC;
func_4997545888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4997545888_op0;
        break;
    }
    goto ***PC;
func_4997546448:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        NEXT();
        goto ***PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_4997546448_op0;
        break;
        case 1:
            PC = func_4997546448_op1;
        break;
        case 2:
            PC = func_4997546448_op2;
        break;
        case 3:
            PC = func_4997546448_op3;
        break;
        case 4:
            PC = func_4997546448_op4;
        break;
    }
    goto ***PC;
func_4997546880:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    xor(7);
    store();
    switch (branch) {
        case 0:
            PC = func_4997546880_op0;
        break;
        case 1:
            PC = func_4997546880_op1;
        break;
        case 2:
            PC = func_4997546880_op2;
        break;
        case 3:
            PC = func_4997546880_op3;
        break;
        case 4:
            PC = func_4997546880_op4;
        break;
        case 5:
            PC = func_4997546880_op5;
        break;
        case 6:
            PC = func_4997546880_op6;
        break;
    }
    goto ***PC;
func_4997546816:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997546816;
    goto ***PC;
func_4997547072:
    extend(91);
    NEXT();
    goto ***PC;
func_4997546640:
    extend(93);
    NEXT();
    goto ***PC;
func_4997547200:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997547200;
    goto ***PC;
func_4997547664:
    extend(48);
    NEXT();
    goto ***PC;
func_4997547792:
    extend(49);
    NEXT();
    goto ***PC;
func_4997547920:
    extend(50);
    NEXT();
    goto ***PC;
func_4997546512:
    extend(51);
    NEXT();
    goto ***PC;
func_4997548304:
    extend(52);
    NEXT();
    goto ***PC;
func_4997548496:
    extend(53);
    NEXT();
    goto ***PC;
func_4997548624:
    extend(54);
    NEXT();
    goto ***PC;
func_4997548752:
    extend(55);
    NEXT();
    goto ***PC;
func_4997548880:
    extend(56);
    NEXT();
    goto ***PC;
func_4997548432:
    extend(57);
    NEXT();
    goto ***PC;
func_4997546368:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997546368;
    goto ***PC;
func_4997549264:
    extend(44);
    NEXT();
    goto ***PC;
func_4997547408:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997547408;
    goto ***PC;
func_4997547536:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997547536;
    goto ***PC;
func_4997549472:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997549472;
    goto ***PC;
func_4997549600:
    extend(123);
    NEXT();
    goto ***PC;
func_4997549728:
    extend(125);
    NEXT();
    goto ***PC;
func_4997549904:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997549904;
    goto ***PC;
func_4997550048:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997550048;
    goto ***PC;
func_4997548048:
    extend(58);
    NEXT();
    goto ***PC;
func_4997549392:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto ***PC;
func_4997550816:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto ***PC;
func_4997550944:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto ***PC;
func_4997551104:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto ***PC;
func_4997551232:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto ***PC;
func_4997550656:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto ***PC;
func_4997551760:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_4997551888:
    extend(110);
    extend(117);
    extend(108);
    extend(108);
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
    PC = func_4997545888_op0;
    goto ***PC;
}
