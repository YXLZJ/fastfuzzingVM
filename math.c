#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 128
typedef struct {
        char data[BUFFER_SIZE];
        unsigned top;
    } Buffer;

    Buffer buffer;  // Declare a global buffer

    #define extend(c) { \
        if (buffer.top < BUFFER_SIZE) { \
            buffer.data[buffer.top++] = c; \
        } \
    }

    #define clean() { \
        buffer.top = 0; \
    }

    unsigned seed;  // Random seed
    unsigned branch;  // To hold branch value
    void **PC; // program counter (now a void pointer)

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
        initStack();
        unsigned loop_limit = -1;
        endless = true;
    goto LOOP;
        static void *func_4830812112_op0[2] = { &&func_4830813104, &&RETURN};
        static void *func_4830812112_op1[2] = { &&func_4830812432, &&RETURN};
        static void *func_4830812112_op2[2] = { &&func_4830813296, &&RETURN};
        static void *func_4830812112_op3[2] = { &&func_4830813520, &&RETURN};
        static void *func_4830812112_op4[2] = { &&func_4830813648, &&RETURN};
        static void *func_4830812112_op5[2] = { &&func_4830813840, &&RETURN};
        static void *func_4830812112_op6[2] = { &&func_4830813968, &&RETURN};
        static void *func_4830812112_op7[2] = { &&func_4830814096, &&RETURN};
        static void *func_4830812112_op8[2] = { &&func_4830814224, &&RETURN};
        static void *func_4830812112_op9[2] = { &&func_4830813776, &&RETURN};
        static void *func_4830812240_op0[2] = { &&func_4830814624, &&RETURN};
        static void *func_4830812240_op1[2] = { &&func_4830813360, &&RETURN};
        static void *func_4830812240_op2[2] = { &&func_4830811728, &&RETURN};
        static void *func_4830811664_op0[2] = { &&func_4830812496, &&RETURN};
        static void *func_4830811664_op1[2] = { &&func_4830811936, &&RETURN};
        static void *func_4830811936_op0[2] = { &&func_4830815360, &&RETURN};
        static void *func_4830811936_op1[2] = { &&func_4830812112, &&RETURN};
        static void *func_4830811792_op0[2] = { &&func_4830812240, &&HALT};
        static void *func_4830811728_op0[2] = { &&func_4830815648, &&RETURN};
        static void *func_4830811728_op1[2] = { &&func_4830815904, &&RETURN};
        static void *func_4830811728_op2[2] = { &&func_4830811664, &&RETURN};
        static void *exp_4830814624[4] = {&&func_4830811728, &&func_4830812800, &&func_4830812240, &&RETURN};
        static void *exp_4830813360[4] = {&&func_4830811728, &&func_4830814944, &&func_4830812240, &&RETURN};
        static void *exp_4830812496[4] = {&&func_4830815072, &&func_4830812240, &&func_4830815200, &&RETURN};
        static void *exp_4830815360[3] = {&&func_4830812112, &&func_4830811936, &&RETURN};
        static void *exp_4830815648[4] = {&&func_4830811664, &&func_4830815776, &&func_4830811728, &&RETURN};
        static void *exp_4830815904[4] = {&&func_4830811664, &&func_4830816032, &&func_4830811728, &&RETURN};

func_4830812112:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4830812112_op0;
        break;
        case 1:
            PC = func_4830812112_op1;
        break;
        case 2:
            PC = func_4830812112_op2;
        break;
        case 3:
            PC = func_4830812112_op3;
        break;
        case 4:
            PC = func_4830812112_op4;
        break;
        case 5:
            PC = func_4830812112_op5;
        break;
        case 6:
            PC = func_4830812112_op6;
        break;
        case 7:
            PC = func_4830812112_op7;
        break;
        case 8:
            PC = func_4830812112_op8;
        break;
        case 9:
            PC = func_4830812112_op9;
        break;
    }
    goto **PC;
func_4830812240:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4830812240_op0;
        break;
        case 1:
            PC = func_4830812240_op1;
        break;
        case 2:
            PC = func_4830812240_op2;
        break;
    }
    goto **PC;
func_4830811664:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4830811664_op0;
        break;
        case 1:
            PC = func_4830811664_op1;
        break;
    }
    goto **PC;
func_4830811936:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4830811936_op0;
        break;
        case 1:
            PC = func_4830811936_op1;
        break;
    }
    goto **PC;
func_4830811792:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4830811792_op0;
        break;
    }
    goto **PC;
func_4830811728:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4830811728_op0;
        break;
        case 1:
            PC = func_4830811728_op1;
        break;
        case 2:
            PC = func_4830811728_op2;
        break;
    }
    goto **PC;
func_4830813104:
    extend(48);
    NEXT();
    goto **PC;
func_4830812432:
    extend(49);
    NEXT();
    goto **PC;
func_4830813296:
    extend(50);
    NEXT();
    goto **PC;
func_4830813520:
    extend(51);
    NEXT();
    goto **PC;
func_4830813648:
    extend(52);
    NEXT();
    goto **PC;
func_4830813840:
    extend(53);
    NEXT();
    goto **PC;
func_4830813968:
    extend(54);
    NEXT();
    goto **PC;
func_4830814096:
    extend(55);
    NEXT();
    goto **PC;
func_4830814224:
    extend(56);
    NEXT();
    goto **PC;
func_4830813776:
    extend(57);
    NEXT();
    goto **PC;
func_4830814624:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4830814624;
    goto **PC;
func_4830812800:
    extend(43);
    NEXT();
    goto **PC;
func_4830813360:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4830813360;
    goto **PC;
func_4830814944:
    extend(45);
    NEXT();
    goto **PC;
func_4830812496:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4830812496;
    goto **PC;
func_4830815072:
    extend(40);
    NEXT();
    goto **PC;
func_4830815200:
    extend(41);
    NEXT();
    goto **PC;
func_4830815360:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4830815360;
    goto **PC;
func_4830815648:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4830815648;
    goto **PC;
func_4830815776:
    extend(42);
    NEXT();
    goto **PC;
func_4830815904:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4830815904;
    goto **PC;
func_4830816032:
    extend(47);
    NEXT();
    goto **PC;
HALT:
    printf("%.*s\n", (int)buffer.top, buffer.data);
    clean();
    goto LOOP;
RETURN:
    PC = *(--stack.top);
    PC++;
    goto **PC;
LOOP:
    if((loop_limit > 0) || (endless == true)) {
        loop_limit--;
        PC = func_4830811792_op0;
        goto **PC;
    }
    exit(0);
}
