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
        static void * cf[] = {&&func_4804607200, &&func_4804607760, &&func_4804607568, &&func_4804607328, &&func_4804607504, &&func_4804607984, &&func_4804608112, &&func_4804607904, &&func_4804608464, &&func_4804608896, &&func_4804608832, &&func_4804609088, &&func_4804608656, &&func_4804609216, &&func_4804609680, &&func_4804609808, &&func_4804609936, &&func_4804608528, &&func_4804610320, &&func_4804610512, &&func_4804610640, &&func_4804610768, &&func_4804610896, &&func_4804610448, &&func_4804608384, &&func_4804611280, &&func_4804609424, &&func_4804609552, &&func_4804611488, &&func_4804611616, &&func_4804611744, &&func_4804611920, &&func_4804612064, &&func_4804610064, &&func_4804611408, &&func_4804612832, &&func_4804612960, &&func_4804613120, &&func_4804613248, &&func_4804612672, &&func_4804613776, &&func_4804613904, &&RETURN, &&HALT};
        static void **func_4804607200_op0[2] = { cf+10, cf+42};
        static void **func_4804607200_op1[2] = { cf+13, cf+42};
        static void **func_4804607760_op0[2] = { cf+14, cf+42};
        static void **func_4804607760_op1[2] = { cf+15, cf+42};
        static void **func_4804607760_op2[2] = { cf+16, cf+42};
        static void **func_4804607760_op3[2] = { cf+17, cf+42};
        static void **func_4804607760_op4[2] = { cf+18, cf+42};
        static void **func_4804607760_op5[2] = { cf+19, cf+42};
        static void **func_4804607760_op6[2] = { cf+20, cf+42};
        static void **func_4804607760_op7[2] = { cf+21, cf+42};
        static void **func_4804607760_op8[2] = { cf+22, cf+42};
        static void **func_4804607760_op9[2] = { cf+23, cf+42};
        static void **func_4804607568_op0[2] = { cf+24, cf+42};
        static void **func_4804607568_op1[2] = { cf+9, cf+42};
        static void **func_4804607328_op0[2] = { cf+26, cf+42};
        static void **func_4804607328_op1[2] = { cf+6, cf+42};
        static void **func_4804607504_op0[2] = { cf+1, cf+42};
        static void **func_4804607504_op1[2] = { cf+27, cf+42};
        static void **func_4804607984_op0[2] = { cf+28, cf+42};
        static void **func_4804607984_op1[2] = { cf+31, cf+42};
        static void **func_4804608112_op0[2] = { cf+32, cf+42};
        static void **func_4804607904_op0[2] = { cf+9, cf+43};
        static void **func_4804608464_op0[2] = { cf+34, cf+42};
        static void **func_4804608464_op1[2] = { cf+35, cf+42};
        static void **func_4804608464_op2[2] = { cf+36, cf+42};
        static void **func_4804608464_op3[2] = { cf+37, cf+42};
        static void **func_4804608464_op4[2] = { cf+38, cf+42};
        static void **func_4804608896_op0[2] = { cf+5, cf+42};
        static void **func_4804608896_op1[2] = { cf+0, cf+42};
        static void **func_4804608896_op2[2] = { cf+8, cf+42};
        static void **func_4804608896_op3[2] = { cf+4, cf+42};
        static void **func_4804608896_op4[2] = { cf+39, cf+42};
        static void **func_4804608896_op5[2] = { cf+40, cf+42};
        static void **func_4804608896_op6[2] = { cf+41, cf+42};
        static void **exp_4804608832[4] = {cf+11, cf+2, cf+12, cf+42};
        static void **exp_4804609216[3] = {cf+11, cf+12, cf+42};
        static void **exp_4804608384[4] = {cf+9, cf+25, cf+2, cf+42};
        static void **exp_4804609424[4] = {cf+6, cf+25, cf+3, cf+42};
        static void **exp_4804609552[3] = {cf+1, cf+4, cf+42};
        static void **exp_4804611488[4] = {cf+29, cf+3, cf+30, cf+42};
        static void **exp_4804611920[3] = {cf+29, cf+30, cf+42};
        static void **exp_4804612064[4] = {cf+8, cf+33, cf+9, cf+42};
goto LOOP;

func_4804607200:
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
            PC = func_4804607200_op0;
        break;
        case 1:
            PC = func_4804607200_op1;
        break;
    }
    goto ***PC;
func_4804607760:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4804607760_op0;
        break;
        case 1:
            PC = func_4804607760_op1;
        break;
        case 2:
            PC = func_4804607760_op2;
        break;
        case 3:
            PC = func_4804607760_op3;
        break;
        case 4:
            PC = func_4804607760_op4;
        break;
        case 5:
            PC = func_4804607760_op5;
        break;
        case 6:
            PC = func_4804607760_op6;
        break;
        case 7:
            PC = func_4804607760_op7;
        break;
        case 8:
            PC = func_4804607760_op8;
        break;
        case 9:
            PC = func_4804607760_op9;
        break;
    }
    goto ***PC;
func_4804607568:
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
            PC = func_4804607568_op0;
        break;
        case 1:
            PC = func_4804607568_op1;
        break;
    }
    goto ***PC;
func_4804607328:
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
            PC = func_4804607328_op0;
        break;
        case 1:
            PC = func_4804607328_op1;
        break;
    }
    goto ***PC;
func_4804607504:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4804607504_op0;
        break;
        case 1:
            PC = func_4804607504_op1;
        break;
    }
    goto ***PC;
func_4804607984:
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
            PC = func_4804607984_op0;
        break;
        case 1:
            PC = func_4804607984_op1;
        break;
    }
    goto ***PC;
func_4804608112:
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
            PC = func_4804608112_op0;
        break;
    }
    goto ***PC;
func_4804607904:
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
            PC = func_4804607904_op0;
        break;
    }
    goto ***PC;
func_4804608464:
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
            PC = func_4804608464_op0;
        break;
        case 1:
            PC = func_4804608464_op1;
        break;
        case 2:
            PC = func_4804608464_op2;
        break;
        case 3:
            PC = func_4804608464_op3;
        break;
        case 4:
            PC = func_4804608464_op4;
        break;
    }
    goto ***PC;
func_4804608896:
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
            PC = func_4804608896_op0;
        break;
        case 1:
            PC = func_4804608896_op1;
        break;
        case 2:
            PC = func_4804608896_op2;
        break;
        case 3:
            PC = func_4804608896_op3;
        break;
        case 4:
            PC = func_4804608896_op4;
        break;
        case 5:
            PC = func_4804608896_op5;
        break;
        case 6:
            PC = func_4804608896_op6;
        break;
    }
    goto ***PC;
func_4804608832:
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
    PC = exp_4804608832;
    goto ***PC;
func_4804609088:
    extend(91);
    NEXT();
    goto ***PC;
func_4804608656:
    extend(93);
    NEXT();
    goto ***PC;
func_4804609216:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4804609216;
    goto ***PC;
func_4804609680:
    extend(48);
    NEXT();
    goto ***PC;
func_4804609808:
    extend(49);
    NEXT();
    goto ***PC;
func_4804609936:
    extend(50);
    NEXT();
    goto ***PC;
func_4804608528:
    extend(51);
    NEXT();
    goto ***PC;
func_4804610320:
    extend(52);
    NEXT();
    goto ***PC;
func_4804610512:
    extend(53);
    NEXT();
    goto ***PC;
func_4804610640:
    extend(54);
    NEXT();
    goto ***PC;
func_4804610768:
    extend(55);
    NEXT();
    goto ***PC;
func_4804610896:
    extend(56);
    NEXT();
    goto ***PC;
func_4804610448:
    extend(57);
    NEXT();
    goto ***PC;
func_4804608384:
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
    PC = exp_4804608384;
    goto ***PC;
func_4804611280:
    extend(44);
    NEXT();
    goto ***PC;
func_4804609424:
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
    PC = exp_4804609424;
    goto ***PC;
func_4804609552:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4804609552;
    goto ***PC;
func_4804611488:
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
    PC = exp_4804611488;
    goto ***PC;
func_4804611616:
    extend(123);
    NEXT();
    goto ***PC;
func_4804611744:
    extend(125);
    NEXT();
    goto ***PC;
func_4804611920:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4804611920;
    goto ***PC;
func_4804612064:
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
    PC = exp_4804612064;
    goto ***PC;
func_4804610064:
    extend(58);
    NEXT();
    goto ***PC;
func_4804611408:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto ***PC;
func_4804612832:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto ***PC;
func_4804612960:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto ***PC;
func_4804613120:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto ***PC;
func_4804613248:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto ***PC;
func_4804612672:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto ***PC;
func_4804613776:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_4804613904:
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
    PC = func_4804607904_op0;
    goto ***PC;
}
