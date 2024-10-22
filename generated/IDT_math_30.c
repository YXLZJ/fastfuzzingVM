#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 30
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
        static void * cf[] = {&&func_5710574336, &&func_5710574464, &&func_5710573888, &&func_5710574160, &&func_5710574016, &&func_5710573952, &&func_5710575328, &&func_5710574656, &&func_5710575520, &&func_5710575744, &&func_5710575872, &&func_5710576064, &&func_5710576192, &&func_5710576320, &&func_5710576448, &&func_5710576000, &&func_5710576848, &&func_5710575024, &&func_5710575584, &&func_5710577168, &&func_5710574720, &&func_5710577296, &&func_5710577424, &&func_5710577584, &&func_5710577872, &&func_5710578000, &&func_5710578128, &&func_5710578256, &&RETURN, &&HALT};
        static void **func_5710574336_op0[2] = { cf+6, cf+28};
        static void **func_5710574336_op1[2] = { cf+7, cf+28};
        static void **func_5710574336_op2[2] = { cf+8, cf+28};
        static void **func_5710574336_op3[2] = { cf+9, cf+28};
        static void **func_5710574336_op4[2] = { cf+10, cf+28};
        static void **func_5710574336_op5[2] = { cf+11, cf+28};
        static void **func_5710574336_op6[2] = { cf+12, cf+28};
        static void **func_5710574336_op7[2] = { cf+13, cf+28};
        static void **func_5710574336_op8[2] = { cf+14, cf+28};
        static void **func_5710574336_op9[2] = { cf+15, cf+28};
        static void **func_5710574464_op0[2] = { cf+16, cf+28};
        static void **func_5710574464_op1[2] = { cf+18, cf+28};
        static void **func_5710574464_op2[2] = { cf+5, cf+28};
        static void **func_5710573888_op0[2] = { cf+20, cf+28};
        static void **func_5710573888_op1[2] = { cf+3, cf+28};
        static void **func_5710574160_op0[2] = { cf+23, cf+28};
        static void **func_5710574160_op1[2] = { cf+0, cf+28};
        static void **func_5710574016_op0[2] = { cf+1, cf+29};
        static void **func_5710573952_op0[2] = { cf+24, cf+28};
        static void **func_5710573952_op1[2] = { cf+26, cf+28};
        static void **func_5710573952_op2[2] = { cf+2, cf+28};
        static void **exp_5710576848[4] = {cf+5, cf+17, cf+1, cf+28};
        static void **exp_5710575584[4] = {cf+5, cf+19, cf+1, cf+28};
        static void **exp_5710574720[4] = {cf+21, cf+1, cf+22, cf+28};
        static void **exp_5710577584[3] = {cf+0, cf+3, cf+28};
        static void **exp_5710577872[4] = {cf+2, cf+25, cf+5, cf+28};
        static void **exp_5710578128[4] = {cf+2, cf+27, cf+5, cf+28};
goto LOOP;

func_5710574336:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5710574336_op0;
        break;
        case 1:
            PC = func_5710574336_op1;
        break;
        case 2:
            PC = func_5710574336_op2;
        break;
        case 3:
            PC = func_5710574336_op3;
        break;
        case 4:
            PC = func_5710574336_op4;
        break;
        case 5:
            PC = func_5710574336_op5;
        break;
        case 6:
            PC = func_5710574336_op6;
        break;
        case 7:
            PC = func_5710574336_op7;
        break;
        case 8:
            PC = func_5710574336_op8;
        break;
        case 9:
            PC = func_5710574336_op9;
        break;
    }
    goto ***PC;
func_5710574464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5710574464_op0;
        break;
        case 1:
            PC = func_5710574464_op1;
        break;
        case 2:
            PC = func_5710574464_op2;
        break;
    }
    goto ***PC;
func_5710573888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5710573888_op0;
        break;
        case 1:
            PC = func_5710573888_op1;
        break;
    }
    goto ***PC;
func_5710574160:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5710574160_op0;
        break;
        case 1:
            PC = func_5710574160_op1;
        break;
    }
    goto ***PC;
func_5710574016:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5710574016_op0;
        break;
    }
    goto ***PC;
func_5710573952:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5710573952_op0;
        break;
        case 1:
            PC = func_5710573952_op1;
        break;
        case 2:
            PC = func_5710573952_op2;
        break;
    }
    goto ***PC;
func_5710575328:
    extend(48);
    NEXT();
    goto ***PC;
func_5710574656:
    extend(49);
    NEXT();
    goto ***PC;
func_5710575520:
    extend(50);
    NEXT();
    goto ***PC;
func_5710575744:
    extend(51);
    NEXT();
    goto ***PC;
func_5710575872:
    extend(52);
    NEXT();
    goto ***PC;
func_5710576064:
    extend(53);
    NEXT();
    goto ***PC;
func_5710576192:
    extend(54);
    NEXT();
    goto ***PC;
func_5710576320:
    extend(55);
    NEXT();
    goto ***PC;
func_5710576448:
    extend(56);
    NEXT();
    goto ***PC;
func_5710576000:
    extend(57);
    NEXT();
    goto ***PC;
func_5710576848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5710576848;
    goto ***PC;
func_5710575024:
    extend(43);
    NEXT();
    goto ***PC;
func_5710575584:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5710575584;
    goto ***PC;
func_5710577168:
    extend(45);
    NEXT();
    goto ***PC;
func_5710574720:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5710574720;
    goto ***PC;
func_5710577296:
    extend(40);
    NEXT();
    goto ***PC;
func_5710577424:
    extend(41);
    NEXT();
    goto ***PC;
func_5710577584:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5710577584;
    goto ***PC;
func_5710577872:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5710577872;
    goto ***PC;
func_5710578000:
    extend(42);
    NEXT();
    goto ***PC;
func_5710578128:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5710578128;
    goto ***PC;
func_5710578256:
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
    PC = func_5710574016_op0;
    goto ***PC;
}
