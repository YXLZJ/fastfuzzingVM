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
        unsigned loop_limit = 8;
        static void * cf[] = {&&func_5215648992, &&func_5215649552, &&func_5215649360, &&func_5215649120, &&func_5215649296, &&func_5215649776, &&func_5215649904, &&func_5215649696, &&func_5215650256, &&func_5215650688, &&func_5215650624, &&func_5215650880, &&func_5215650448, &&func_5215651008, &&func_5215651472, &&func_5215651600, &&func_5215651728, &&func_5215650320, &&func_5215652112, &&func_5215652304, &&func_5215652432, &&func_5215652560, &&func_5215652688, &&func_5215652240, &&func_5215650176, &&func_5215653072, &&func_5215651216, &&func_5215651344, &&func_5215653280, &&func_5215653408, &&func_5215653536, &&func_5215653712, &&func_5215653856, &&func_5215651856, &&func_5215653200, &&func_5215654624, &&func_5215654752, &&func_5215654912, &&func_5215655040, &&func_5215654464, &&func_5215655568, &&func_5215655696, &&RETURN, &&HALT};
        static void **func_5215648992_op0[2] = { cf+10, cf+42};
        static void **func_5215648992_op1[2] = { cf+13, cf+42};
        static void **func_5215649552_op0[2] = { cf+14, cf+42};
        static void **func_5215649552_op1[2] = { cf+15, cf+42};
        static void **func_5215649552_op2[2] = { cf+16, cf+42};
        static void **func_5215649552_op3[2] = { cf+17, cf+42};
        static void **func_5215649552_op4[2] = { cf+18, cf+42};
        static void **func_5215649552_op5[2] = { cf+19, cf+42};
        static void **func_5215649552_op6[2] = { cf+20, cf+42};
        static void **func_5215649552_op7[2] = { cf+21, cf+42};
        static void **func_5215649552_op8[2] = { cf+22, cf+42};
        static void **func_5215649552_op9[2] = { cf+23, cf+42};
        static void **func_5215649360_op0[2] = { cf+24, cf+42};
        static void **func_5215649360_op1[2] = { cf+9, cf+42};
        static void **func_5215649120_op0[2] = { cf+26, cf+42};
        static void **func_5215649120_op1[2] = { cf+6, cf+42};
        static void **func_5215649296_op0[2] = { cf+1, cf+42};
        static void **func_5215649296_op1[2] = { cf+27, cf+42};
        static void **func_5215649776_op0[2] = { cf+28, cf+42};
        static void **func_5215649776_op1[2] = { cf+31, cf+42};
        static void **func_5215649904_op0[2] = { cf+32, cf+42};
        static void **func_5215649696_op0[2] = { cf+9, cf+43};
        static void **func_5215650256_op0[2] = { cf+34, cf+42};
        static void **func_5215650256_op1[2] = { cf+35, cf+42};
        static void **func_5215650256_op2[2] = { cf+36, cf+42};
        static void **func_5215650256_op3[2] = { cf+37, cf+42};
        static void **func_5215650256_op4[2] = { cf+38, cf+42};
        static void **func_5215650688_op0[2] = { cf+5, cf+42};
        static void **func_5215650688_op1[2] = { cf+0, cf+42};
        static void **func_5215650688_op2[2] = { cf+8, cf+42};
        static void **func_5215650688_op3[2] = { cf+4, cf+42};
        static void **func_5215650688_op4[2] = { cf+39, cf+42};
        static void **func_5215650688_op5[2] = { cf+40, cf+42};
        static void **func_5215650688_op6[2] = { cf+41, cf+42};
        static void **exp_5215650624[4] = {cf+11, cf+2, cf+12, cf+42};
        static void **exp_5215651008[3] = {cf+11, cf+12, cf+42};
        static void **exp_5215650176[4] = {cf+9, cf+25, cf+2, cf+42};
        static void **exp_5215651216[4] = {cf+6, cf+25, cf+3, cf+42};
        static void **exp_5215651344[3] = {cf+1, cf+4, cf+42};
        static void **exp_5215653280[4] = {cf+29, cf+3, cf+30, cf+42};
        static void **exp_5215653712[3] = {cf+29, cf+30, cf+42};
        static void **exp_5215653856[4] = {cf+8, cf+33, cf+9, cf+42};
goto LOOP;

func_5215648992:
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
            PC = func_5215648992_op0;
        break;
        case 1:
            PC = func_5215648992_op1;
        break;
    }
    goto ***PC;
func_5215649552:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5215649552_op0;
        break;
        case 1:
            PC = func_5215649552_op1;
        break;
        case 2:
            PC = func_5215649552_op2;
        break;
        case 3:
            PC = func_5215649552_op3;
        break;
        case 4:
            PC = func_5215649552_op4;
        break;
        case 5:
            PC = func_5215649552_op5;
        break;
        case 6:
            PC = func_5215649552_op6;
        break;
        case 7:
            PC = func_5215649552_op7;
        break;
        case 8:
            PC = func_5215649552_op8;
        break;
        case 9:
            PC = func_5215649552_op9;
        break;
    }
    goto ***PC;
func_5215649360:
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
            PC = func_5215649360_op0;
        break;
        case 1:
            PC = func_5215649360_op1;
        break;
    }
    goto ***PC;
func_5215649120:
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
            PC = func_5215649120_op0;
        break;
        case 1:
            PC = func_5215649120_op1;
        break;
    }
    goto ***PC;
func_5215649296:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5215649296_op0;
        break;
        case 1:
            PC = func_5215649296_op1;
        break;
    }
    goto ***PC;
func_5215649776:
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
            PC = func_5215649776_op0;
        break;
        case 1:
            PC = func_5215649776_op1;
        break;
    }
    goto ***PC;
func_5215649904:
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
            PC = func_5215649904_op0;
        break;
    }
    goto ***PC;
func_5215649696:
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
            PC = func_5215649696_op0;
        break;
    }
    goto ***PC;
func_5215650256:
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
            PC = func_5215650256_op0;
        break;
        case 1:
            PC = func_5215650256_op1;
        break;
        case 2:
            PC = func_5215650256_op2;
        break;
        case 3:
            PC = func_5215650256_op3;
        break;
        case 4:
            PC = func_5215650256_op4;
        break;
    }
    goto ***PC;
func_5215650688:
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
            PC = func_5215650688_op0;
        break;
        case 1:
            PC = func_5215650688_op1;
        break;
        case 2:
            PC = func_5215650688_op2;
        break;
        case 3:
            PC = func_5215650688_op3;
        break;
        case 4:
            PC = func_5215650688_op4;
        break;
        case 5:
            PC = func_5215650688_op5;
        break;
        case 6:
            PC = func_5215650688_op6;
        break;
    }
    goto ***PC;
func_5215650624:
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
    PC = exp_5215650624;
    goto ***PC;
func_5215650880:
    extend(91);
    NEXT();
    goto ***PC;
func_5215650448:
    extend(93);
    NEXT();
    goto ***PC;
func_5215651008:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5215651008;
    goto ***PC;
func_5215651472:
    extend(48);
    NEXT();
    goto ***PC;
func_5215651600:
    extend(49);
    NEXT();
    goto ***PC;
func_5215651728:
    extend(50);
    NEXT();
    goto ***PC;
func_5215650320:
    extend(51);
    NEXT();
    goto ***PC;
func_5215652112:
    extend(52);
    NEXT();
    goto ***PC;
func_5215652304:
    extend(53);
    NEXT();
    goto ***PC;
func_5215652432:
    extend(54);
    NEXT();
    goto ***PC;
func_5215652560:
    extend(55);
    NEXT();
    goto ***PC;
func_5215652688:
    extend(56);
    NEXT();
    goto ***PC;
func_5215652240:
    extend(57);
    NEXT();
    goto ***PC;
func_5215650176:
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
    PC = exp_5215650176;
    goto ***PC;
func_5215653072:
    extend(44);
    NEXT();
    goto ***PC;
func_5215651216:
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
    PC = exp_5215651216;
    goto ***PC;
func_5215651344:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5215651344;
    goto ***PC;
func_5215653280:
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
    PC = exp_5215653280;
    goto ***PC;
func_5215653408:
    extend(123);
    NEXT();
    goto ***PC;
func_5215653536:
    extend(125);
    NEXT();
    goto ***PC;
func_5215653712:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5215653712;
    goto ***PC;
func_5215653856:
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
    PC = exp_5215653856;
    goto ***PC;
func_5215651856:
    extend(58);
    NEXT();
    goto ***PC;
func_5215653200:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto ***PC;
func_5215654624:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto ***PC;
func_5215654752:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto ***PC;
func_5215654912:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto ***PC;
func_5215655040:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto ***PC;
func_5215654464:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto ***PC;
func_5215655568:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5215655696:
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
    PC = func_5215649696_op0;
    goto ***PC;
}
