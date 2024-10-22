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
        unsigned loop_limit = 8;
        static void * cf[] = {&&func_5149581744, &&func_5149582304, &&func_5149582112, &&func_5149581872, &&func_5149582048, &&func_5149582528, &&func_5149582656, &&func_5149582448, &&func_5149583008, &&func_5149583440, &&func_5149583376, &&func_5149583632, &&func_5149583200, &&func_5149583760, &&func_5149584224, &&func_5149584352, &&func_5149584480, &&func_5149583072, &&func_5149584864, &&func_5149585056, &&func_5149585184, &&func_5149585312, &&func_5149585440, &&func_5149584992, &&func_5149582928, &&func_5149585824, &&func_5149583968, &&func_5149584096, &&func_5149586032, &&func_5149586160, &&func_5149586288, &&func_5149586464, &&func_5149586608, &&func_5149584608, &&func_5149585952, &&func_5149587376, &&func_5149587504, &&func_5149587664, &&func_5149587792, &&func_5149587216, &&func_5149588320, &&func_5149588448, &&RETURN, &&HALT};
        static void **func_5149581744_op0[2] = { cf+10, cf+42};
        static void **func_5149581744_op1[2] = { cf+13, cf+42};
        static void **func_5149582304_op0[2] = { cf+14, cf+42};
        static void **func_5149582304_op1[2] = { cf+15, cf+42};
        static void **func_5149582304_op2[2] = { cf+16, cf+42};
        static void **func_5149582304_op3[2] = { cf+17, cf+42};
        static void **func_5149582304_op4[2] = { cf+18, cf+42};
        static void **func_5149582304_op5[2] = { cf+19, cf+42};
        static void **func_5149582304_op6[2] = { cf+20, cf+42};
        static void **func_5149582304_op7[2] = { cf+21, cf+42};
        static void **func_5149582304_op8[2] = { cf+22, cf+42};
        static void **func_5149582304_op9[2] = { cf+23, cf+42};
        static void **func_5149582112_op0[2] = { cf+24, cf+42};
        static void **func_5149582112_op1[2] = { cf+9, cf+42};
        static void **func_5149581872_op0[2] = { cf+26, cf+42};
        static void **func_5149581872_op1[2] = { cf+6, cf+42};
        static void **func_5149582048_op0[2] = { cf+1, cf+42};
        static void **func_5149582048_op1[2] = { cf+27, cf+42};
        static void **func_5149582528_op0[2] = { cf+28, cf+42};
        static void **func_5149582528_op1[2] = { cf+31, cf+42};
        static void **func_5149582656_op0[2] = { cf+32, cf+42};
        static void **func_5149582448_op0[2] = { cf+9, cf+43};
        static void **func_5149583008_op0[2] = { cf+34, cf+42};
        static void **func_5149583008_op1[2] = { cf+35, cf+42};
        static void **func_5149583008_op2[2] = { cf+36, cf+42};
        static void **func_5149583008_op3[2] = { cf+37, cf+42};
        static void **func_5149583008_op4[2] = { cf+38, cf+42};
        static void **func_5149583440_op0[2] = { cf+5, cf+42};
        static void **func_5149583440_op1[2] = { cf+0, cf+42};
        static void **func_5149583440_op2[2] = { cf+8, cf+42};
        static void **func_5149583440_op3[2] = { cf+4, cf+42};
        static void **func_5149583440_op4[2] = { cf+39, cf+42};
        static void **func_5149583440_op5[2] = { cf+40, cf+42};
        static void **func_5149583440_op6[2] = { cf+41, cf+42};
        static void **exp_5149583376[4] = {cf+11, cf+2, cf+12, cf+42};
        static void **exp_5149583760[3] = {cf+11, cf+12, cf+42};
        static void **exp_5149582928[4] = {cf+9, cf+25, cf+2, cf+42};
        static void **exp_5149583968[4] = {cf+6, cf+25, cf+3, cf+42};
        static void **exp_5149584096[3] = {cf+1, cf+4, cf+42};
        static void **exp_5149586032[4] = {cf+29, cf+3, cf+30, cf+42};
        static void **exp_5149586464[3] = {cf+29, cf+30, cf+42};
        static void **exp_5149586608[4] = {cf+8, cf+33, cf+9, cf+42};
goto LOOP;

func_5149581744:
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
            PC = func_5149581744_op0;
        break;
        case 1:
            PC = func_5149581744_op1;
        break;
    }
    goto ***PC;
func_5149582304:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5149582304_op0;
        break;
        case 1:
            PC = func_5149582304_op1;
        break;
        case 2:
            PC = func_5149582304_op2;
        break;
        case 3:
            PC = func_5149582304_op3;
        break;
        case 4:
            PC = func_5149582304_op4;
        break;
        case 5:
            PC = func_5149582304_op5;
        break;
        case 6:
            PC = func_5149582304_op6;
        break;
        case 7:
            PC = func_5149582304_op7;
        break;
        case 8:
            PC = func_5149582304_op8;
        break;
        case 9:
            PC = func_5149582304_op9;
        break;
    }
    goto ***PC;
func_5149582112:
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
            PC = func_5149582112_op0;
        break;
        case 1:
            PC = func_5149582112_op1;
        break;
    }
    goto ***PC;
func_5149581872:
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
            PC = func_5149581872_op0;
        break;
        case 1:
            PC = func_5149581872_op1;
        break;
    }
    goto ***PC;
func_5149582048:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5149582048_op0;
        break;
        case 1:
            PC = func_5149582048_op1;
        break;
    }
    goto ***PC;
func_5149582528:
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
            PC = func_5149582528_op0;
        break;
        case 1:
            PC = func_5149582528_op1;
        break;
    }
    goto ***PC;
func_5149582656:
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
            PC = func_5149582656_op0;
        break;
    }
    goto ***PC;
func_5149582448:
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
            PC = func_5149582448_op0;
        break;
    }
    goto ***PC;
func_5149583008:
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
            PC = func_5149583008_op0;
        break;
        case 1:
            PC = func_5149583008_op1;
        break;
        case 2:
            PC = func_5149583008_op2;
        break;
        case 3:
            PC = func_5149583008_op3;
        break;
        case 4:
            PC = func_5149583008_op4;
        break;
    }
    goto ***PC;
func_5149583440:
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
            PC = func_5149583440_op0;
        break;
        case 1:
            PC = func_5149583440_op1;
        break;
        case 2:
            PC = func_5149583440_op2;
        break;
        case 3:
            PC = func_5149583440_op3;
        break;
        case 4:
            PC = func_5149583440_op4;
        break;
        case 5:
            PC = func_5149583440_op5;
        break;
        case 6:
            PC = func_5149583440_op6;
        break;
    }
    goto ***PC;
func_5149583376:
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
    PC = exp_5149583376;
    goto ***PC;
func_5149583632:
    extend(91);
    NEXT();
    goto ***PC;
func_5149583200:
    extend(93);
    NEXT();
    goto ***PC;
func_5149583760:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5149583760;
    goto ***PC;
func_5149584224:
    extend(48);
    NEXT();
    goto ***PC;
func_5149584352:
    extend(49);
    NEXT();
    goto ***PC;
func_5149584480:
    extend(50);
    NEXT();
    goto ***PC;
func_5149583072:
    extend(51);
    NEXT();
    goto ***PC;
func_5149584864:
    extend(52);
    NEXT();
    goto ***PC;
func_5149585056:
    extend(53);
    NEXT();
    goto ***PC;
func_5149585184:
    extend(54);
    NEXT();
    goto ***PC;
func_5149585312:
    extend(55);
    NEXT();
    goto ***PC;
func_5149585440:
    extend(56);
    NEXT();
    goto ***PC;
func_5149584992:
    extend(57);
    NEXT();
    goto ***PC;
func_5149582928:
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
    PC = exp_5149582928;
    goto ***PC;
func_5149585824:
    extend(44);
    NEXT();
    goto ***PC;
func_5149583968:
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
    PC = exp_5149583968;
    goto ***PC;
func_5149584096:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5149584096;
    goto ***PC;
func_5149586032:
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
    PC = exp_5149586032;
    goto ***PC;
func_5149586160:
    extend(123);
    NEXT();
    goto ***PC;
func_5149586288:
    extend(125);
    NEXT();
    goto ***PC;
func_5149586464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5149586464;
    goto ***PC;
func_5149586608:
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
    PC = exp_5149586608;
    goto ***PC;
func_5149584608:
    extend(58);
    NEXT();
    goto ***PC;
func_5149585952:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto ***PC;
func_5149587376:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto ***PC;
func_5149587504:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto ***PC;
func_5149587664:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto ***PC;
func_5149587792:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto ***PC;
func_5149587216:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto ***PC;
func_5149588320:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5149588448:
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
    PC = func_5149582448_op0;
    goto ***PC;
}
