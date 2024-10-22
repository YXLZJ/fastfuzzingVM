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
        unsigned loop_limit = 6;
        static void * cf[] = {&&func_5584745216, &&func_5584745344, &&func_5584744768, &&func_5584745040, &&func_5584744896, &&func_5584744832, &&func_5584746208, &&func_5584745536, &&func_5584746400, &&func_5584746624, &&func_5584746752, &&func_5584746944, &&func_5584747072, &&func_5584747200, &&func_5584747328, &&func_5584746880, &&func_5584747728, &&func_5584745904, &&func_5584746464, &&func_5584748048, &&func_5584745600, &&func_5584748176, &&func_5584748304, &&func_5584748464, &&func_5584748752, &&func_5584748880, &&func_5584749008, &&func_5584749136, &&RETURN, &&HALT};
        static void **func_5584745216_op0[2] = { cf+6, cf+28};
        static void **func_5584745216_op1[2] = { cf+7, cf+28};
        static void **func_5584745216_op2[2] = { cf+8, cf+28};
        static void **func_5584745216_op3[2] = { cf+9, cf+28};
        static void **func_5584745216_op4[2] = { cf+10, cf+28};
        static void **func_5584745216_op5[2] = { cf+11, cf+28};
        static void **func_5584745216_op6[2] = { cf+12, cf+28};
        static void **func_5584745216_op7[2] = { cf+13, cf+28};
        static void **func_5584745216_op8[2] = { cf+14, cf+28};
        static void **func_5584745216_op9[2] = { cf+15, cf+28};
        static void **func_5584745344_op0[2] = { cf+16, cf+28};
        static void **func_5584745344_op1[2] = { cf+18, cf+28};
        static void **func_5584745344_op2[2] = { cf+5, cf+28};
        static void **func_5584744768_op0[2] = { cf+20, cf+28};
        static void **func_5584744768_op1[2] = { cf+3, cf+28};
        static void **func_5584745040_op0[2] = { cf+23, cf+28};
        static void **func_5584745040_op1[2] = { cf+0, cf+28};
        static void **func_5584744896_op0[2] = { cf+1, cf+29};
        static void **func_5584744832_op0[2] = { cf+24, cf+28};
        static void **func_5584744832_op1[2] = { cf+26, cf+28};
        static void **func_5584744832_op2[2] = { cf+2, cf+28};
        static void **exp_5584747728[4] = {cf+5, cf+17, cf+1, cf+28};
        static void **exp_5584746464[4] = {cf+5, cf+19, cf+1, cf+28};
        static void **exp_5584745600[4] = {cf+21, cf+1, cf+22, cf+28};
        static void **exp_5584748464[3] = {cf+0, cf+3, cf+28};
        static void **exp_5584748752[4] = {cf+2, cf+25, cf+5, cf+28};
        static void **exp_5584749008[4] = {cf+2, cf+27, cf+5, cf+28};
goto LOOP;

func_5584745216:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5584745216_op0;
        break;
        case 1:
            PC = func_5584745216_op1;
        break;
        case 2:
            PC = func_5584745216_op2;
        break;
        case 3:
            PC = func_5584745216_op3;
        break;
        case 4:
            PC = func_5584745216_op4;
        break;
        case 5:
            PC = func_5584745216_op5;
        break;
        case 6:
            PC = func_5584745216_op6;
        break;
        case 7:
            PC = func_5584745216_op7;
        break;
        case 8:
            PC = func_5584745216_op8;
        break;
        case 9:
            PC = func_5584745216_op9;
        break;
    }
    goto ***PC;
func_5584745344:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5584745344_op0;
        break;
        case 1:
            PC = func_5584745344_op1;
        break;
        case 2:
            PC = func_5584745344_op2;
        break;
    }
    goto ***PC;
func_5584744768:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5584744768_op0;
        break;
        case 1:
            PC = func_5584744768_op1;
        break;
    }
    goto ***PC;
func_5584745040:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5584745040_op0;
        break;
        case 1:
            PC = func_5584745040_op1;
        break;
    }
    goto ***PC;
func_5584744896:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5584744896_op0;
        break;
    }
    goto ***PC;
func_5584744832:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5584744832_op0;
        break;
        case 1:
            PC = func_5584744832_op1;
        break;
        case 2:
            PC = func_5584744832_op2;
        break;
    }
    goto ***PC;
func_5584746208:
    extend(48);
    NEXT();
    goto ***PC;
func_5584745536:
    extend(49);
    NEXT();
    goto ***PC;
func_5584746400:
    extend(50);
    NEXT();
    goto ***PC;
func_5584746624:
    extend(51);
    NEXT();
    goto ***PC;
func_5584746752:
    extend(52);
    NEXT();
    goto ***PC;
func_5584746944:
    extend(53);
    NEXT();
    goto ***PC;
func_5584747072:
    extend(54);
    NEXT();
    goto ***PC;
func_5584747200:
    extend(55);
    NEXT();
    goto ***PC;
func_5584747328:
    extend(56);
    NEXT();
    goto ***PC;
func_5584746880:
    extend(57);
    NEXT();
    goto ***PC;
func_5584747728:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584747728;
    goto ***PC;
func_5584745904:
    extend(43);
    NEXT();
    goto ***PC;
func_5584746464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584746464;
    goto ***PC;
func_5584748048:
    extend(45);
    NEXT();
    goto ***PC;
func_5584745600:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584745600;
    goto ***PC;
func_5584748176:
    extend(40);
    NEXT();
    goto ***PC;
func_5584748304:
    extend(41);
    NEXT();
    goto ***PC;
func_5584748464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584748464;
    goto ***PC;
func_5584748752:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584748752;
    goto ***PC;
func_5584748880:
    extend(42);
    NEXT();
    goto ***PC;
func_5584749008:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584749008;
    goto ***PC;
func_5584749136:
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
    PC = func_5584744896_op0;
    goto ***PC;
}
