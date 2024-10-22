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
        unsigned loop_limit = 6;
        static void * cf[] = {&&func_4989154048, &&func_4989154176, &&func_4989153600, &&func_4989153872, &&func_4989153728, &&func_4989153664, &&func_4989155040, &&func_4989154368, &&func_4989155232, &&func_4989155456, &&func_4989155584, &&func_4989155776, &&func_4989155904, &&func_4989156032, &&func_4989156160, &&func_4989155712, &&func_4989156560, &&func_4989154736, &&func_4989155296, &&func_4989156880, &&func_4989154432, &&func_4989157008, &&func_4989157136, &&func_4989157296, &&func_4989157584, &&func_4989157712, &&func_4989157840, &&func_4989157968, &&RETURN, &&HALT};
        static void **func_4989154048_op0[2] = { cf+6, cf+28};
        static void **func_4989154048_op1[2] = { cf+7, cf+28};
        static void **func_4989154048_op2[2] = { cf+8, cf+28};
        static void **func_4989154048_op3[2] = { cf+9, cf+28};
        static void **func_4989154048_op4[2] = { cf+10, cf+28};
        static void **func_4989154048_op5[2] = { cf+11, cf+28};
        static void **func_4989154048_op6[2] = { cf+12, cf+28};
        static void **func_4989154048_op7[2] = { cf+13, cf+28};
        static void **func_4989154048_op8[2] = { cf+14, cf+28};
        static void **func_4989154048_op9[2] = { cf+15, cf+28};
        static void **func_4989154176_op0[2] = { cf+16, cf+28};
        static void **func_4989154176_op1[2] = { cf+18, cf+28};
        static void **func_4989154176_op2[2] = { cf+5, cf+28};
        static void **func_4989153600_op0[2] = { cf+20, cf+28};
        static void **func_4989153600_op1[2] = { cf+3, cf+28};
        static void **func_4989153872_op0[2] = { cf+23, cf+28};
        static void **func_4989153872_op1[2] = { cf+0, cf+28};
        static void **func_4989153728_op0[2] = { cf+1, cf+29};
        static void **func_4989153664_op0[2] = { cf+24, cf+28};
        static void **func_4989153664_op1[2] = { cf+26, cf+28};
        static void **func_4989153664_op2[2] = { cf+2, cf+28};
        static void **exp_4989156560[4] = {cf+5, cf+17, cf+1, cf+28};
        static void **exp_4989155296[4] = {cf+5, cf+19, cf+1, cf+28};
        static void **exp_4989154432[4] = {cf+21, cf+1, cf+22, cf+28};
        static void **exp_4989157296[3] = {cf+0, cf+3, cf+28};
        static void **exp_4989157584[4] = {cf+2, cf+25, cf+5, cf+28};
        static void **exp_4989157840[4] = {cf+2, cf+27, cf+5, cf+28};
goto LOOP;

func_4989154048:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4989154048_op0;
        break;
        case 1:
            PC = func_4989154048_op1;
        break;
        case 2:
            PC = func_4989154048_op2;
        break;
        case 3:
            PC = func_4989154048_op3;
        break;
        case 4:
            PC = func_4989154048_op4;
        break;
        case 5:
            PC = func_4989154048_op5;
        break;
        case 6:
            PC = func_4989154048_op6;
        break;
        case 7:
            PC = func_4989154048_op7;
        break;
        case 8:
            PC = func_4989154048_op8;
        break;
        case 9:
            PC = func_4989154048_op9;
        break;
    }
    goto ***PC;
func_4989154176:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4989154176_op0;
        break;
        case 1:
            PC = func_4989154176_op1;
        break;
        case 2:
            PC = func_4989154176_op2;
        break;
    }
    goto ***PC;
func_4989153600:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4989153600_op0;
        break;
        case 1:
            PC = func_4989153600_op1;
        break;
    }
    goto ***PC;
func_4989153872:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4989153872_op0;
        break;
        case 1:
            PC = func_4989153872_op1;
        break;
    }
    goto ***PC;
func_4989153728:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4989153728_op0;
        break;
    }
    goto ***PC;
func_4989153664:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4989153664_op0;
        break;
        case 1:
            PC = func_4989153664_op1;
        break;
        case 2:
            PC = func_4989153664_op2;
        break;
    }
    goto ***PC;
func_4989155040:
    extend(48);
    NEXT();
    goto ***PC;
func_4989154368:
    extend(49);
    NEXT();
    goto ***PC;
func_4989155232:
    extend(50);
    NEXT();
    goto ***PC;
func_4989155456:
    extend(51);
    NEXT();
    goto ***PC;
func_4989155584:
    extend(52);
    NEXT();
    goto ***PC;
func_4989155776:
    extend(53);
    NEXT();
    goto ***PC;
func_4989155904:
    extend(54);
    NEXT();
    goto ***PC;
func_4989156032:
    extend(55);
    NEXT();
    goto ***PC;
func_4989156160:
    extend(56);
    NEXT();
    goto ***PC;
func_4989155712:
    extend(57);
    NEXT();
    goto ***PC;
func_4989156560:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4989156560;
    goto ***PC;
func_4989154736:
    extend(43);
    NEXT();
    goto ***PC;
func_4989155296:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4989155296;
    goto ***PC;
func_4989156880:
    extend(45);
    NEXT();
    goto ***PC;
func_4989154432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4989154432;
    goto ***PC;
func_4989157008:
    extend(40);
    NEXT();
    goto ***PC;
func_4989157136:
    extend(41);
    NEXT();
    goto ***PC;
func_4989157296:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4989157296;
    goto ***PC;
func_4989157584:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4989157584;
    goto ***PC;
func_4989157712:
    extend(42);
    NEXT();
    goto ***PC;
func_4989157840:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4989157840;
    goto ***PC;
func_4989157968:
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
    PC = func_4989153728_op0;
    goto ***PC;
}
