#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 40
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
        static void * cf[] = {&&func_4880102144, &&func_4880102272, &&func_4880101696, &&func_4880101968, &&func_4880101824, &&func_4880101760, &&func_4880103136, &&func_4880102464, &&func_4880103328, &&func_4880103552, &&func_4880103680, &&func_4880103872, &&func_4880104000, &&func_4880104128, &&func_4880104256, &&func_4880103808, &&func_4880104656, &&func_4880102832, &&func_4880103392, &&func_4880104976, &&func_4880102528, &&func_4880105104, &&func_4880105232, &&func_4880105392, &&func_4880105680, &&func_4880105808, &&func_4880105936, &&func_4880106064, &&RETURN, &&HALT};
        static void **func_4880102144_op0[2] = { cf+6, cf+28};
        static void **func_4880102144_op1[2] = { cf+7, cf+28};
        static void **func_4880102144_op2[2] = { cf+8, cf+28};
        static void **func_4880102144_op3[2] = { cf+9, cf+28};
        static void **func_4880102144_op4[2] = { cf+10, cf+28};
        static void **func_4880102144_op5[2] = { cf+11, cf+28};
        static void **func_4880102144_op6[2] = { cf+12, cf+28};
        static void **func_4880102144_op7[2] = { cf+13, cf+28};
        static void **func_4880102144_op8[2] = { cf+14, cf+28};
        static void **func_4880102144_op9[2] = { cf+15, cf+28};
        static void **func_4880102272_op0[2] = { cf+16, cf+28};
        static void **func_4880102272_op1[2] = { cf+18, cf+28};
        static void **func_4880102272_op2[2] = { cf+5, cf+28};
        static void **func_4880101696_op0[2] = { cf+20, cf+28};
        static void **func_4880101696_op1[2] = { cf+3, cf+28};
        static void **func_4880101968_op0[2] = { cf+23, cf+28};
        static void **func_4880101968_op1[2] = { cf+0, cf+28};
        static void **func_4880101824_op0[2] = { cf+1, cf+29};
        static void **func_4880101760_op0[2] = { cf+24, cf+28};
        static void **func_4880101760_op1[2] = { cf+26, cf+28};
        static void **func_4880101760_op2[2] = { cf+2, cf+28};
        static void **exp_4880104656[4] = {cf+5, cf+17, cf+1, cf+28};
        static void **exp_4880103392[4] = {cf+5, cf+19, cf+1, cf+28};
        static void **exp_4880102528[4] = {cf+21, cf+1, cf+22, cf+28};
        static void **exp_4880105392[3] = {cf+0, cf+3, cf+28};
        static void **exp_4880105680[4] = {cf+2, cf+25, cf+5, cf+28};
        static void **exp_4880105936[4] = {cf+2, cf+27, cf+5, cf+28};
goto LOOP;

func_4880102144:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4880102144_op0;
        break;
        case 1:
            PC = func_4880102144_op1;
        break;
        case 2:
            PC = func_4880102144_op2;
        break;
        case 3:
            PC = func_4880102144_op3;
        break;
        case 4:
            PC = func_4880102144_op4;
        break;
        case 5:
            PC = func_4880102144_op5;
        break;
        case 6:
            PC = func_4880102144_op6;
        break;
        case 7:
            PC = func_4880102144_op7;
        break;
        case 8:
            PC = func_4880102144_op8;
        break;
        case 9:
            PC = func_4880102144_op9;
        break;
    }
    goto ***PC;
func_4880102272:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4880102272_op0;
        break;
        case 1:
            PC = func_4880102272_op1;
        break;
        case 2:
            PC = func_4880102272_op2;
        break;
    }
    goto ***PC;
func_4880101696:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4880101696_op0;
        break;
        case 1:
            PC = func_4880101696_op1;
        break;
    }
    goto ***PC;
func_4880101968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4880101968_op0;
        break;
        case 1:
            PC = func_4880101968_op1;
        break;
    }
    goto ***PC;
func_4880101824:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4880101824_op0;
        break;
    }
    goto ***PC;
func_4880101760:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4880101760_op0;
        break;
        case 1:
            PC = func_4880101760_op1;
        break;
        case 2:
            PC = func_4880101760_op2;
        break;
    }
    goto ***PC;
func_4880103136:
    extend(48);
    NEXT();
    goto ***PC;
func_4880102464:
    extend(49);
    NEXT();
    goto ***PC;
func_4880103328:
    extend(50);
    NEXT();
    goto ***PC;
func_4880103552:
    extend(51);
    NEXT();
    goto ***PC;
func_4880103680:
    extend(52);
    NEXT();
    goto ***PC;
func_4880103872:
    extend(53);
    NEXT();
    goto ***PC;
func_4880104000:
    extend(54);
    NEXT();
    goto ***PC;
func_4880104128:
    extend(55);
    NEXT();
    goto ***PC;
func_4880104256:
    extend(56);
    NEXT();
    goto ***PC;
func_4880103808:
    extend(57);
    NEXT();
    goto ***PC;
func_4880104656:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4880104656;
    goto ***PC;
func_4880102832:
    extend(43);
    NEXT();
    goto ***PC;
func_4880103392:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4880103392;
    goto ***PC;
func_4880104976:
    extend(45);
    NEXT();
    goto ***PC;
func_4880102528:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4880102528;
    goto ***PC;
func_4880105104:
    extend(40);
    NEXT();
    goto ***PC;
func_4880105232:
    extend(41);
    NEXT();
    goto ***PC;
func_4880105392:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4880105392;
    goto ***PC;
func_4880105680:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4880105680;
    goto ***PC;
func_4880105808:
    extend(42);
    NEXT();
    goto ***PC;
func_4880105936:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4880105936;
    goto ***PC;
func_4880106064:
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
    PC = func_4880101824_op0;
    goto ***PC;
}
