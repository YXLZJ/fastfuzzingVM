#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 25
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
        static void * cf[] = {&&func_5307917024, &&func_5307926464, &&func_5307926384, &&func_5307926304, &&func_5307926928, &&func_5307926032, &&func_5307927456, &&func_5307926224, &&func_5307926752, &&func_5307926816, &&func_5307927696, &&func_5307927824, &&func_5307928048, &&func_5307928176, &&func_5307928304, &&func_5307928672, &&func_5307928800, &&func_5307927120, &&func_5307929184, &&func_5307929312, &&func_5307929440, &&func_5307929568, &&func_5307929696, &&func_5307929856, &&func_5307929984, &&func_5307930208, &&func_5307930336, &&func_5307930464, &&func_5307930592, &&func_5307930720, &&func_5307930912, &&func_5307930144, &&func_5307927952, &&func_5307928928, &&func_5307929056, &&func_5307928496, &&func_5307932400, &&func_5307932528, &&func_5307932336, &&func_5307931568, &&func_5307928560, &&func_5307932976, &&func_5307933104, &&func_5307933232, &&func_5307933424, &&func_5307933552, &&func_5307933680, &&func_5307933808, &&func_5307933360, &&func_5307934128, &&func_5307934256, &&func_5307931392, &&func_5307931104, &&func_5307934528, &&func_5307934656, &&RETURN, &&HALT};
        static void **func_5307917024_op0[2] = { cf+12, cf+55};
        static void **func_5307926464_op0[2] = { cf+15, cf+55};
        static void **func_5307926464_op1[2] = { cf+17, cf+55};
        static void **func_5307926464_op2[2] = { cf+19, cf+55};
        static void **func_5307926384_op0[2] = { cf+21, cf+55};
        static void **func_5307926384_op1[2] = { cf+11, cf+55};
        static void **func_5307926384_op2[2] = { cf+23, cf+55};
        static void **func_5307926304_op0[2] = { cf+6, cf+55};
        static void **func_5307926304_op1[2] = { cf+4, cf+55};
        static void **func_5307926928_op0[2] = { cf+25, cf+55};
        static void **func_5307926928_op1[2] = { cf+26, cf+55};
        static void **func_5307926928_op2[2] = { cf+27, cf+55};
        static void **func_5307926928_op3[2] = { cf+28, cf+55};
        static void **func_5307926928_op4[2] = { cf+29, cf+55};
        static void **func_5307926928_op5[2] = { cf+30, cf+55};
        static void **func_5307926032_op0[2] = { cf+31, cf+55};
        static void **func_5307926032_op1[2] = { cf+38, cf+55};
        static void **func_5307927456_op0[2] = { cf+39, cf+55};
        static void **func_5307927456_op1[2] = { cf+40, cf+55};
        static void **func_5307927456_op2[2] = { cf+41, cf+55};
        static void **func_5307927456_op3[2] = { cf+42, cf+55};
        static void **func_5307927456_op4[2] = { cf+43, cf+55};
        static void **func_5307927456_op5[2] = { cf+44, cf+55};
        static void **func_5307927456_op6[2] = { cf+45, cf+55};
        static void **func_5307927456_op7[2] = { cf+46, cf+55};
        static void **func_5307927456_op8[2] = { cf+47, cf+55};
        static void **func_5307927456_op9[2] = { cf+48, cf+55};
        static void **func_5307926224_op0[2] = { cf+49, cf+55};
        static void **func_5307926752_op0[2] = { cf+5, cf+56};
        static void **func_5307926816_op0[2] = { cf+5, cf+55};
        static void **func_5307926816_op1[2] = { cf+0, cf+55};
        static void **func_5307926816_op2[2] = { cf+7, cf+55};
        static void **func_5307927696_op0[2] = { cf+51, cf+55};
        static void **func_5307927696_op1[2] = { cf+52, cf+55};
        static void **func_5307927824_op0[2] = { cf+3, cf+55};
        static void **func_5307927824_op1[2] = { cf+53, cf+55};
        static void **exp_5307928048[5] = {cf+4, cf+13, cf+2, cf+14, cf+55};
        static void **exp_5307928672[4] = {cf+2, cf+16, cf+2, cf+55};
        static void **exp_5307927120[4] = {cf+2, cf+18, cf+2, cf+55};
        static void **exp_5307929312[4] = {cf+2, cf+20, cf+2, cf+55};
        static void **exp_5307929568[4] = {cf+11, cf+22, cf+2, cf+55};
        static void **exp_5307929856[4] = {cf+11, cf+24, cf+2, cf+55};
        static void **exp_5307930144[12] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+37, cf+35, cf+10, cf+36, cf+55};
        static void **exp_5307932336[8] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+55};
        static void **exp_5307934128[6] = {cf+50, cf+33, cf+2, cf+34, cf+14, cf+55};
        static void **exp_5307931392[3] = {cf+9, cf+10, cf+55};
        static void **exp_5307931104[1] = {cf+55};
        static void **exp_5307934528[4] = {cf+3, cf+54, cf+11, cf+55};
goto LOOP;

func_5307917024:
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
            PC = func_5307917024_op0;
        break;
    }
    goto ***PC;
func_5307926464:
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
            PC = func_5307926464_op0;
        break;
        case 1:
            PC = func_5307926464_op1;
        break;
        case 2:
            PC = func_5307926464_op2;
        break;
    }
    goto ***PC;
func_5307926384:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5307926384_op0;
        break;
        case 1:
            PC = func_5307926384_op1;
        break;
        case 2:
            PC = func_5307926384_op2;
        break;
    }
    goto ***PC;
func_5307926304:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5307926304_op0;
        break;
        case 1:
            PC = func_5307926304_op1;
        break;
    }
    goto ***PC;
func_5307926928:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5307926928_op0;
        break;
        case 1:
            PC = func_5307926928_op1;
        break;
        case 2:
            PC = func_5307926928_op2;
        break;
        case 3:
            PC = func_5307926928_op3;
        break;
        case 4:
            PC = func_5307926928_op4;
        break;
        case 5:
            PC = func_5307926928_op5;
        break;
    }
    goto ***PC;
func_5307926032:
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
            PC = func_5307926032_op0;
        break;
        case 1:
            PC = func_5307926032_op1;
        break;
    }
    goto ***PC;
func_5307927456:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5307927456_op0;
        break;
        case 1:
            PC = func_5307927456_op1;
        break;
        case 2:
            PC = func_5307927456_op2;
        break;
        case 3:
            PC = func_5307927456_op3;
        break;
        case 4:
            PC = func_5307927456_op4;
        break;
        case 5:
            PC = func_5307927456_op5;
        break;
        case 6:
            PC = func_5307927456_op6;
        break;
        case 7:
            PC = func_5307927456_op7;
        break;
        case 8:
            PC = func_5307927456_op8;
        break;
        case 9:
            PC = func_5307927456_op9;
        break;
    }
    goto ***PC;
func_5307926224:
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
            PC = func_5307926224_op0;
        break;
    }
    goto ***PC;
func_5307926752:
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
            PC = func_5307926752_op0;
        break;
    }
    goto ***PC;
func_5307926816:
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
            PC = func_5307926816_op0;
        break;
        case 1:
            PC = func_5307926816_op1;
        break;
        case 2:
            PC = func_5307926816_op2;
        break;
    }
    goto ***PC;
func_5307927696:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5307927696_op0;
        break;
        case 1:
            PC = func_5307927696_op1;
        break;
    }
    goto ***PC;
func_5307927824:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5307927824_op0;
        break;
        case 1:
            PC = func_5307927824_op1;
        break;
    }
    goto ***PC;
func_5307928048:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307928048;
    goto ***PC;
func_5307928176:
    extend(61);
    NEXT();
    goto ***PC;
func_5307928304:
    extend(59);
    NEXT();
    goto ***PC;
func_5307928672:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307928672;
    goto ***PC;
func_5307928800:
    extend(62);
    NEXT();
    goto ***PC;
func_5307927120:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307927120;
    goto ***PC;
func_5307929184:
    extend(60);
    NEXT();
    goto ***PC;
func_5307929312:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307929312;
    goto ***PC;
func_5307929440:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5307929568:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307929568;
    goto ***PC;
func_5307929696:
    extend(43);
    NEXT();
    goto ***PC;
func_5307929856:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307929856;
    goto ***PC;
func_5307929984:
    extend(45);
    NEXT();
    goto ***PC;
func_5307930208:
    extend(120);
    NEXT();
    goto ***PC;
func_5307930336:
    extend(121);
    NEXT();
    goto ***PC;
func_5307930464:
    extend(122);
    NEXT();
    goto ***PC;
func_5307930592:
    extend(97);
    NEXT();
    goto ***PC;
func_5307930720:
    extend(98);
    NEXT();
    goto ***PC;
func_5307930912:
    extend(99);
    NEXT();
    goto ***PC;
func_5307930144:
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
    PC = exp_5307930144;
    goto ***PC;
func_5307927952:
    extend(105);
    extend(102);
    NEXT();
    goto ***PC;
func_5307928928:
    extend(40);
    NEXT();
    goto ***PC;
func_5307929056:
    extend(41);
    NEXT();
    goto ***PC;
func_5307928496:
    extend(123);
    NEXT();
    goto ***PC;
func_5307932400:
    extend(125);
    NEXT();
    goto ***PC;
func_5307932528:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5307932336:
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
    PC = exp_5307932336;
    goto ***PC;
func_5307931568:
    extend(48);
    NEXT();
    goto ***PC;
func_5307928560:
    extend(49);
    NEXT();
    goto ***PC;
func_5307932976:
    extend(50);
    NEXT();
    goto ***PC;
func_5307933104:
    extend(51);
    NEXT();
    goto ***PC;
func_5307933232:
    extend(52);
    NEXT();
    goto ***PC;
func_5307933424:
    extend(53);
    NEXT();
    goto ***PC;
func_5307933552:
    extend(54);
    NEXT();
    goto ***PC;
func_5307933680:
    extend(55);
    NEXT();
    goto ***PC;
func_5307933808:
    extend(56);
    NEXT();
    goto ***PC;
func_5307933360:
    extend(57);
    NEXT();
    goto ***PC;
func_5307934128:
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
    PC = exp_5307934128;
    goto ***PC;
func_5307934256:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto ***PC;
func_5307931392:
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
    PC = exp_5307931392;
    goto ***PC;
func_5307931104:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307931104;
    goto ***PC;
func_5307934528:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307934528;
    goto ***PC;
func_5307934656:
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
    PC = func_5307926752_op0;
    goto ***PC;
}
