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
        unsigned loop_limit = 6;
        static void * cf[] = {&&func_5232423680, &&func_5232423808, &&func_5232423232, &&func_5232423504, &&func_5232423360, &&func_5232423296, &&func_5232424672, &&func_5232424000, &&func_5232424864, &&func_5232425088, &&func_5232425216, &&func_5232425408, &&func_5232425536, &&func_5232425664, &&func_5232425792, &&func_5232425344, &&func_5232426192, &&func_5232424368, &&func_5232424928, &&func_5232426512, &&func_5232424064, &&func_5232426640, &&func_5232426768, &&func_5232426928, &&func_5232427216, &&func_5232427344, &&func_5232427472, &&func_5232427600, &&RETURN, &&HALT};
        static void **func_5232423680_op0[2] = { cf+6, cf+28};
        static void **func_5232423680_op1[2] = { cf+7, cf+28};
        static void **func_5232423680_op2[2] = { cf+8, cf+28};
        static void **func_5232423680_op3[2] = { cf+9, cf+28};
        static void **func_5232423680_op4[2] = { cf+10, cf+28};
        static void **func_5232423680_op5[2] = { cf+11, cf+28};
        static void **func_5232423680_op6[2] = { cf+12, cf+28};
        static void **func_5232423680_op7[2] = { cf+13, cf+28};
        static void **func_5232423680_op8[2] = { cf+14, cf+28};
        static void **func_5232423680_op9[2] = { cf+15, cf+28};
        static void **func_5232423808_op0[2] = { cf+16, cf+28};
        static void **func_5232423808_op1[2] = { cf+18, cf+28};
        static void **func_5232423808_op2[2] = { cf+5, cf+28};
        static void **func_5232423232_op0[2] = { cf+20, cf+28};
        static void **func_5232423232_op1[2] = { cf+3, cf+28};
        static void **func_5232423504_op0[2] = { cf+23, cf+28};
        static void **func_5232423504_op1[2] = { cf+0, cf+28};
        static void **func_5232423360_op0[2] = { cf+1, cf+29};
        static void **func_5232423296_op0[2] = { cf+24, cf+28};
        static void **func_5232423296_op1[2] = { cf+26, cf+28};
        static void **func_5232423296_op2[2] = { cf+2, cf+28};
        static void **exp_5232426192[4] = {cf+5, cf+17, cf+1, cf+28};
        static void **exp_5232424928[4] = {cf+5, cf+19, cf+1, cf+28};
        static void **exp_5232424064[4] = {cf+21, cf+1, cf+22, cf+28};
        static void **exp_5232426928[3] = {cf+0, cf+3, cf+28};
        static void **exp_5232427216[4] = {cf+2, cf+25, cf+5, cf+28};
        static void **exp_5232427472[4] = {cf+2, cf+27, cf+5, cf+28};
goto LOOP;

func_5232423680:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5232423680_op0;
        break;
        case 1:
            PC = func_5232423680_op1;
        break;
        case 2:
            PC = func_5232423680_op2;
        break;
        case 3:
            PC = func_5232423680_op3;
        break;
        case 4:
            PC = func_5232423680_op4;
        break;
        case 5:
            PC = func_5232423680_op5;
        break;
        case 6:
            PC = func_5232423680_op6;
        break;
        case 7:
            PC = func_5232423680_op7;
        break;
        case 8:
            PC = func_5232423680_op8;
        break;
        case 9:
            PC = func_5232423680_op9;
        break;
    }
    goto ***PC;
func_5232423808:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5232423808_op0;
        break;
        case 1:
            PC = func_5232423808_op1;
        break;
        case 2:
            PC = func_5232423808_op2;
        break;
    }
    goto ***PC;
func_5232423232:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5232423232_op0;
        break;
        case 1:
            PC = func_5232423232_op1;
        break;
    }
    goto ***PC;
func_5232423504:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5232423504_op0;
        break;
        case 1:
            PC = func_5232423504_op1;
        break;
    }
    goto ***PC;
func_5232423360:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5232423360_op0;
        break;
    }
    goto ***PC;
func_5232423296:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5232423296_op0;
        break;
        case 1:
            PC = func_5232423296_op1;
        break;
        case 2:
            PC = func_5232423296_op2;
        break;
    }
    goto ***PC;
func_5232424672:
    extend(48);
    NEXT();
    goto ***PC;
func_5232424000:
    extend(49);
    NEXT();
    goto ***PC;
func_5232424864:
    extend(50);
    NEXT();
    goto ***PC;
func_5232425088:
    extend(51);
    NEXT();
    goto ***PC;
func_5232425216:
    extend(52);
    NEXT();
    goto ***PC;
func_5232425408:
    extend(53);
    NEXT();
    goto ***PC;
func_5232425536:
    extend(54);
    NEXT();
    goto ***PC;
func_5232425664:
    extend(55);
    NEXT();
    goto ***PC;
func_5232425792:
    extend(56);
    NEXT();
    goto ***PC;
func_5232425344:
    extend(57);
    NEXT();
    goto ***PC;
func_5232426192:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5232426192;
    goto ***PC;
func_5232424368:
    extend(43);
    NEXT();
    goto ***PC;
func_5232424928:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5232424928;
    goto ***PC;
func_5232426512:
    extend(45);
    NEXT();
    goto ***PC;
func_5232424064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5232424064;
    goto ***PC;
func_5232426640:
    extend(40);
    NEXT();
    goto ***PC;
func_5232426768:
    extend(41);
    NEXT();
    goto ***PC;
func_5232426928:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5232426928;
    goto ***PC;
func_5232427216:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5232427216;
    goto ***PC;
func_5232427344:
    extend(42);
    NEXT();
    goto ***PC;
func_5232427472:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5232427472;
    goto ***PC;
func_5232427600:
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
    PC = func_5232423360_op0;
    goto ***PC;
}
