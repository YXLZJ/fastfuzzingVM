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
        unsigned loop_limit = 6;
        static void * cf[] = {&&func_5257589504, &&func_5257589632, &&func_5257589056, &&func_5257589328, &&func_5257589184, &&func_5257589120, &&func_5257590496, &&func_5257589824, &&func_5257590688, &&func_5257590912, &&func_5257591040, &&func_5257591232, &&func_5257591360, &&func_5257591488, &&func_5257591616, &&func_5257591168, &&func_5257592016, &&func_5257590192, &&func_5257590752, &&func_5257592336, &&func_5257589888, &&func_5257592464, &&func_5257592592, &&func_5257592752, &&func_5257593040, &&func_5257593168, &&func_5257593296, &&func_5257593424, &&RETURN, &&HALT};
        static void **func_5257589504_op0[2] = { cf+6, cf+28};
        static void **func_5257589504_op1[2] = { cf+7, cf+28};
        static void **func_5257589504_op2[2] = { cf+8, cf+28};
        static void **func_5257589504_op3[2] = { cf+9, cf+28};
        static void **func_5257589504_op4[2] = { cf+10, cf+28};
        static void **func_5257589504_op5[2] = { cf+11, cf+28};
        static void **func_5257589504_op6[2] = { cf+12, cf+28};
        static void **func_5257589504_op7[2] = { cf+13, cf+28};
        static void **func_5257589504_op8[2] = { cf+14, cf+28};
        static void **func_5257589504_op9[2] = { cf+15, cf+28};
        static void **func_5257589632_op0[2] = { cf+16, cf+28};
        static void **func_5257589632_op1[2] = { cf+18, cf+28};
        static void **func_5257589632_op2[2] = { cf+5, cf+28};
        static void **func_5257589056_op0[2] = { cf+20, cf+28};
        static void **func_5257589056_op1[2] = { cf+3, cf+28};
        static void **func_5257589328_op0[2] = { cf+23, cf+28};
        static void **func_5257589328_op1[2] = { cf+0, cf+28};
        static void **func_5257589184_op0[2] = { cf+1, cf+29};
        static void **func_5257589120_op0[2] = { cf+24, cf+28};
        static void **func_5257589120_op1[2] = { cf+26, cf+28};
        static void **func_5257589120_op2[2] = { cf+2, cf+28};
        static void **exp_5257592016[4] = {cf+5, cf+17, cf+1, cf+28};
        static void **exp_5257590752[4] = {cf+5, cf+19, cf+1, cf+28};
        static void **exp_5257589888[4] = {cf+21, cf+1, cf+22, cf+28};
        static void **exp_5257592752[3] = {cf+0, cf+3, cf+28};
        static void **exp_5257593040[4] = {cf+2, cf+25, cf+5, cf+28};
        static void **exp_5257593296[4] = {cf+2, cf+27, cf+5, cf+28};
goto LOOP;

func_5257589504:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5257589504_op0;
        break;
        case 1:
            PC = func_5257589504_op1;
        break;
        case 2:
            PC = func_5257589504_op2;
        break;
        case 3:
            PC = func_5257589504_op3;
        break;
        case 4:
            PC = func_5257589504_op4;
        break;
        case 5:
            PC = func_5257589504_op5;
        break;
        case 6:
            PC = func_5257589504_op6;
        break;
        case 7:
            PC = func_5257589504_op7;
        break;
        case 8:
            PC = func_5257589504_op8;
        break;
        case 9:
            PC = func_5257589504_op9;
        break;
    }
    goto ***PC;
func_5257589632:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5257589632_op0;
        break;
        case 1:
            PC = func_5257589632_op1;
        break;
        case 2:
            PC = func_5257589632_op2;
        break;
    }
    goto ***PC;
func_5257589056:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5257589056_op0;
        break;
        case 1:
            PC = func_5257589056_op1;
        break;
    }
    goto ***PC;
func_5257589328:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5257589328_op0;
        break;
        case 1:
            PC = func_5257589328_op1;
        break;
    }
    goto ***PC;
func_5257589184:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5257589184_op0;
        break;
    }
    goto ***PC;
func_5257589120:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5257589120_op0;
        break;
        case 1:
            PC = func_5257589120_op1;
        break;
        case 2:
            PC = func_5257589120_op2;
        break;
    }
    goto ***PC;
func_5257590496:
    extend(48);
    NEXT();
    goto ***PC;
func_5257589824:
    extend(49);
    NEXT();
    goto ***PC;
func_5257590688:
    extend(50);
    NEXT();
    goto ***PC;
func_5257590912:
    extend(51);
    NEXT();
    goto ***PC;
func_5257591040:
    extend(52);
    NEXT();
    goto ***PC;
func_5257591232:
    extend(53);
    NEXT();
    goto ***PC;
func_5257591360:
    extend(54);
    NEXT();
    goto ***PC;
func_5257591488:
    extend(55);
    NEXT();
    goto ***PC;
func_5257591616:
    extend(56);
    NEXT();
    goto ***PC;
func_5257591168:
    extend(57);
    NEXT();
    goto ***PC;
func_5257592016:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257592016;
    goto ***PC;
func_5257590192:
    extend(43);
    NEXT();
    goto ***PC;
func_5257590752:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257590752;
    goto ***PC;
func_5257592336:
    extend(45);
    NEXT();
    goto ***PC;
func_5257589888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257589888;
    goto ***PC;
func_5257592464:
    extend(40);
    NEXT();
    goto ***PC;
func_5257592592:
    extend(41);
    NEXT();
    goto ***PC;
func_5257592752:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257592752;
    goto ***PC;
func_5257593040:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257593040;
    goto ***PC;
func_5257593168:
    extend(42);
    NEXT();
    goto ***PC;
func_5257593296:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257593296;
    goto ***PC;
func_5257593424:
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
    PC = func_5257589184_op0;
    goto ***PC;
}
