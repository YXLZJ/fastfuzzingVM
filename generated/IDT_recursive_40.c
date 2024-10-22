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
        unsigned loop_limit = 3;
        static void * cf[] = {&&func_5182087392, &&func_5182088848, &&func_5182088688, &&func_5182089056, &&func_5182089184, &&func_5182089376, &&func_5182088992, &&func_5182089840, &&func_5182089968, &&func_5182090192, &&func_5182090400, &&func_5182090528, &&func_5182089680, &&func_5182090720, &&func_5182090848, &&RETURN, &&HALT};
        static void **func_5182087392_op0[2] = { cf+3, cf+15};
        static void **func_5182087392_op1[2] = { cf+4, cf+15};
        static void **func_5182087392_op2[2] = { cf+5, cf+15};
        static void **func_5182088848_op0[2] = { cf+6, cf+15};
        static void **func_5182088848_op1[2] = { cf+10, cf+15};
        static void **func_5182088848_op2[2] = { cf+13, cf+15};
        static void **func_5182088688_op0[2] = { cf+1, cf+16};
        static void **exp_5182088992[5] = {cf+0, cf+7, cf+8, cf+9, cf+15};
        static void **exp_5182090400[4] = {cf+0, cf+11, cf+12, cf+15};
        static void **exp_5182090720[4] = {cf+0, cf+14, cf+1, cf+15};
goto LOOP;

func_5182087392:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5182087392_op0;
        break;
        case 1:
            PC = func_5182087392_op1;
        break;
        case 2:
            PC = func_5182087392_op2;
        break;
    }
    goto ***PC;
func_5182088848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5182088848_op0;
        break;
        case 1:
            PC = func_5182088848_op1;
        break;
        case 2:
            PC = func_5182088848_op2;
        break;
    }
    goto ***PC;
func_5182088688:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5182088688_op0;
        break;
    }
    goto ***PC;
func_5182089056:
    extend(48);
    extend(100);
    NEXT();
    goto ***PC;
func_5182089184:
    extend(49);
    NEXT();
    goto ***PC;
func_5182089376:
    extend(50);
    NEXT();
    goto ***PC;
func_5182088992:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182088992;
    goto ***PC;
func_5182089840:
    extend(51);
    NEXT();
    goto ***PC;
func_5182089968:
    extend(52);
    NEXT();
    goto ***PC;
func_5182090192:
    extend(53);
    NEXT();
    goto ***PC;
func_5182090400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182090400;
    goto ***PC;
func_5182090528:
    extend(42);
    NEXT();
    goto ***PC;
func_5182089680:
    extend(116);
    NEXT();
    goto ***PC;
func_5182090720:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(43);
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182090720;
    goto ***PC;
func_5182090848:
    extend(43);
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
    PC = func_5182088688_op0;
    goto ***PC;
}
