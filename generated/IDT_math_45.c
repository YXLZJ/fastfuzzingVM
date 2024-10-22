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
        unsigned loop_limit = 6;
        static void * cf[] = {&&func_5718962944, &&func_5718963072, &&func_5718962496, &&func_5718962768, &&func_5718962624, &&func_5718962560, &&func_5718963936, &&func_5718963264, &&func_5718964128, &&func_5718964352, &&func_5718964480, &&func_5718964672, &&func_5718964800, &&func_5718964928, &&func_5718965056, &&func_5718964608, &&func_5718965456, &&func_5718963632, &&func_5718964192, &&func_5718965776, &&func_5718963328, &&func_5718965904, &&func_5718966032, &&func_5718966192, &&func_5718966480, &&func_5718966608, &&func_5718966736, &&func_5718966864, &&RETURN, &&HALT};
        static void **func_5718962944_op0[2] = { cf+6, cf+28};
        static void **func_5718962944_op1[2] = { cf+7, cf+28};
        static void **func_5718962944_op2[2] = { cf+8, cf+28};
        static void **func_5718962944_op3[2] = { cf+9, cf+28};
        static void **func_5718962944_op4[2] = { cf+10, cf+28};
        static void **func_5718962944_op5[2] = { cf+11, cf+28};
        static void **func_5718962944_op6[2] = { cf+12, cf+28};
        static void **func_5718962944_op7[2] = { cf+13, cf+28};
        static void **func_5718962944_op8[2] = { cf+14, cf+28};
        static void **func_5718962944_op9[2] = { cf+15, cf+28};
        static void **func_5718963072_op0[2] = { cf+16, cf+28};
        static void **func_5718963072_op1[2] = { cf+18, cf+28};
        static void **func_5718963072_op2[2] = { cf+5, cf+28};
        static void **func_5718962496_op0[2] = { cf+20, cf+28};
        static void **func_5718962496_op1[2] = { cf+3, cf+28};
        static void **func_5718962768_op0[2] = { cf+23, cf+28};
        static void **func_5718962768_op1[2] = { cf+0, cf+28};
        static void **func_5718962624_op0[2] = { cf+1, cf+29};
        static void **func_5718962560_op0[2] = { cf+24, cf+28};
        static void **func_5718962560_op1[2] = { cf+26, cf+28};
        static void **func_5718962560_op2[2] = { cf+2, cf+28};
        static void **exp_5718965456[4] = {cf+5, cf+17, cf+1, cf+28};
        static void **exp_5718964192[4] = {cf+5, cf+19, cf+1, cf+28};
        static void **exp_5718963328[4] = {cf+21, cf+1, cf+22, cf+28};
        static void **exp_5718966192[3] = {cf+0, cf+3, cf+28};
        static void **exp_5718966480[4] = {cf+2, cf+25, cf+5, cf+28};
        static void **exp_5718966736[4] = {cf+2, cf+27, cf+5, cf+28};
goto LOOP;

func_5718962944:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5718962944_op0;
        break;
        case 1:
            PC = func_5718962944_op1;
        break;
        case 2:
            PC = func_5718962944_op2;
        break;
        case 3:
            PC = func_5718962944_op3;
        break;
        case 4:
            PC = func_5718962944_op4;
        break;
        case 5:
            PC = func_5718962944_op5;
        break;
        case 6:
            PC = func_5718962944_op6;
        break;
        case 7:
            PC = func_5718962944_op7;
        break;
        case 8:
            PC = func_5718962944_op8;
        break;
        case 9:
            PC = func_5718962944_op9;
        break;
    }
    goto ***PC;
func_5718963072:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5718963072_op0;
        break;
        case 1:
            PC = func_5718963072_op1;
        break;
        case 2:
            PC = func_5718963072_op2;
        break;
    }
    goto ***PC;
func_5718962496:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5718962496_op0;
        break;
        case 1:
            PC = func_5718962496_op1;
        break;
    }
    goto ***PC;
func_5718962768:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5718962768_op0;
        break;
        case 1:
            PC = func_5718962768_op1;
        break;
    }
    goto ***PC;
func_5718962624:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5718962624_op0;
        break;
    }
    goto ***PC;
func_5718962560:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5718962560_op0;
        break;
        case 1:
            PC = func_5718962560_op1;
        break;
        case 2:
            PC = func_5718962560_op2;
        break;
    }
    goto ***PC;
func_5718963936:
    extend(48);
    NEXT();
    goto ***PC;
func_5718963264:
    extend(49);
    NEXT();
    goto ***PC;
func_5718964128:
    extend(50);
    NEXT();
    goto ***PC;
func_5718964352:
    extend(51);
    NEXT();
    goto ***PC;
func_5718964480:
    extend(52);
    NEXT();
    goto ***PC;
func_5718964672:
    extend(53);
    NEXT();
    goto ***PC;
func_5718964800:
    extend(54);
    NEXT();
    goto ***PC;
func_5718964928:
    extend(55);
    NEXT();
    goto ***PC;
func_5718965056:
    extend(56);
    NEXT();
    goto ***PC;
func_5718964608:
    extend(57);
    NEXT();
    goto ***PC;
func_5718965456:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5718965456;
    goto ***PC;
func_5718963632:
    extend(43);
    NEXT();
    goto ***PC;
func_5718964192:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5718964192;
    goto ***PC;
func_5718965776:
    extend(45);
    NEXT();
    goto ***PC;
func_5718963328:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5718963328;
    goto ***PC;
func_5718965904:
    extend(40);
    NEXT();
    goto ***PC;
func_5718966032:
    extend(41);
    NEXT();
    goto ***PC;
func_5718966192:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5718966192;
    goto ***PC;
func_5718966480:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5718966480;
    goto ***PC;
func_5718966608:
    extend(42);
    NEXT();
    goto ***PC;
func_5718966736:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5718966736;
    goto ***PC;
func_5718966864:
    extend(47);
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
    PC = func_5718962624_op0;
    goto ***PC;
}
