#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 50
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
        static void * cf[] = {&&func_5081428736, &&func_5081428864, &&func_5081428288, &&func_5081428560, &&func_5081428416, &&func_5081428352, &&func_5081429728, &&func_5081429056, &&func_5081429920, &&func_5081430144, &&func_5081430272, &&func_5081430464, &&func_5081430592, &&func_5081430720, &&func_5081430848, &&func_5081430400, &&func_5081431248, &&func_5081429424, &&func_5081429984, &&func_5081431568, &&func_5081429120, &&func_5081431696, &&func_5081431824, &&func_5081431984, &&func_5081432272, &&func_5081432400, &&func_5081432528, &&func_5081432656, &&RETURN, &&HALT};
        static void **func_5081428736_op0[2] = { cf+6, cf+28};
        static void **func_5081428736_op1[2] = { cf+7, cf+28};
        static void **func_5081428736_op2[2] = { cf+8, cf+28};
        static void **func_5081428736_op3[2] = { cf+9, cf+28};
        static void **func_5081428736_op4[2] = { cf+10, cf+28};
        static void **func_5081428736_op5[2] = { cf+11, cf+28};
        static void **func_5081428736_op6[2] = { cf+12, cf+28};
        static void **func_5081428736_op7[2] = { cf+13, cf+28};
        static void **func_5081428736_op8[2] = { cf+14, cf+28};
        static void **func_5081428736_op9[2] = { cf+15, cf+28};
        static void **func_5081428864_op0[2] = { cf+16, cf+28};
        static void **func_5081428864_op1[2] = { cf+18, cf+28};
        static void **func_5081428864_op2[2] = { cf+5, cf+28};
        static void **func_5081428288_op0[2] = { cf+20, cf+28};
        static void **func_5081428288_op1[2] = { cf+3, cf+28};
        static void **func_5081428560_op0[2] = { cf+23, cf+28};
        static void **func_5081428560_op1[2] = { cf+0, cf+28};
        static void **func_5081428416_op0[2] = { cf+1, cf+29};
        static void **func_5081428352_op0[2] = { cf+24, cf+28};
        static void **func_5081428352_op1[2] = { cf+26, cf+28};
        static void **func_5081428352_op2[2] = { cf+2, cf+28};
        static void **exp_5081431248[4] = {cf+5, cf+17, cf+1, cf+28};
        static void **exp_5081429984[4] = {cf+5, cf+19, cf+1, cf+28};
        static void **exp_5081429120[4] = {cf+21, cf+1, cf+22, cf+28};
        static void **exp_5081431984[3] = {cf+0, cf+3, cf+28};
        static void **exp_5081432272[4] = {cf+2, cf+25, cf+5, cf+28};
        static void **exp_5081432528[4] = {cf+2, cf+27, cf+5, cf+28};
goto LOOP;

func_5081428736:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5081428736_op0;
        break;
        case 1:
            PC = func_5081428736_op1;
        break;
        case 2:
            PC = func_5081428736_op2;
        break;
        case 3:
            PC = func_5081428736_op3;
        break;
        case 4:
            PC = func_5081428736_op4;
        break;
        case 5:
            PC = func_5081428736_op5;
        break;
        case 6:
            PC = func_5081428736_op6;
        break;
        case 7:
            PC = func_5081428736_op7;
        break;
        case 8:
            PC = func_5081428736_op8;
        break;
        case 9:
            PC = func_5081428736_op9;
        break;
    }
    goto ***PC;
func_5081428864:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5081428864_op0;
        break;
        case 1:
            PC = func_5081428864_op1;
        break;
        case 2:
            PC = func_5081428864_op2;
        break;
    }
    goto ***PC;
func_5081428288:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5081428288_op0;
        break;
        case 1:
            PC = func_5081428288_op1;
        break;
    }
    goto ***PC;
func_5081428560:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5081428560_op0;
        break;
        case 1:
            PC = func_5081428560_op1;
        break;
    }
    goto ***PC;
func_5081428416:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5081428416_op0;
        break;
    }
    goto ***PC;
func_5081428352:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5081428352_op0;
        break;
        case 1:
            PC = func_5081428352_op1;
        break;
        case 2:
            PC = func_5081428352_op2;
        break;
    }
    goto ***PC;
func_5081429728:
    extend(48);
    NEXT();
    goto ***PC;
func_5081429056:
    extend(49);
    NEXT();
    goto ***PC;
func_5081429920:
    extend(50);
    NEXT();
    goto ***PC;
func_5081430144:
    extend(51);
    NEXT();
    goto ***PC;
func_5081430272:
    extend(52);
    NEXT();
    goto ***PC;
func_5081430464:
    extend(53);
    NEXT();
    goto ***PC;
func_5081430592:
    extend(54);
    NEXT();
    goto ***PC;
func_5081430720:
    extend(55);
    NEXT();
    goto ***PC;
func_5081430848:
    extend(56);
    NEXT();
    goto ***PC;
func_5081430400:
    extend(57);
    NEXT();
    goto ***PC;
func_5081431248:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5081431248;
    goto ***PC;
func_5081429424:
    extend(43);
    NEXT();
    goto ***PC;
func_5081429984:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5081429984;
    goto ***PC;
func_5081431568:
    extend(45);
    NEXT();
    goto ***PC;
func_5081429120:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5081429120;
    goto ***PC;
func_5081431696:
    extend(40);
    NEXT();
    goto ***PC;
func_5081431824:
    extend(41);
    NEXT();
    goto ***PC;
func_5081431984:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5081431984;
    goto ***PC;
func_5081432272:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5081432272;
    goto ***PC;
func_5081432400:
    extend(42);
    NEXT();
    goto ***PC;
func_5081432528:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5081432528;
    goto ***PC;
func_5081432656:
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
    PC = func_5081428416_op0;
    goto ***PC;
}
