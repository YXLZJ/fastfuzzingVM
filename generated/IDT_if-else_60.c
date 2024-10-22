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
        unsigned loop_limit = 12;
        static void * cf[] = {&&func_4922041056, &&func_4922050496, &&func_4922050416, &&func_4922050336, &&func_4922050960, &&func_4922050064, &&func_4922051488, &&func_4922050256, &&func_4922050784, &&func_4922050848, &&func_4922051728, &&func_4922051856, &&func_4922052080, &&func_4922052208, &&func_4922052336, &&func_4922052704, &&func_4922052832, &&func_4922051152, &&func_4922053216, &&func_4922053344, &&func_4922053472, &&func_4922053600, &&func_4922053728, &&func_4922053888, &&func_4922054016, &&func_4922054240, &&func_4922054368, &&func_4922054496, &&func_4922054624, &&func_4922054752, &&func_4922054944, &&func_4922054176, &&func_4922051984, &&func_4922052960, &&func_4922053088, &&func_4922052528, &&func_4922056432, &&func_4922056560, &&func_4922056368, &&func_4922055600, &&func_4922052592, &&func_4922057008, &&func_4922057136, &&func_4922057264, &&func_4922057456, &&func_4922057584, &&func_4922057712, &&func_4922057840, &&func_4922057392, &&func_4922058160, &&func_4922058288, &&func_4922055424, &&func_4922055136, &&func_4922058560, &&func_4922058688, &&RETURN, &&HALT};
        static void **func_4922041056_op0[2] = { cf+12, cf+55};
        static void **func_4922050496_op0[2] = { cf+15, cf+55};
        static void **func_4922050496_op1[2] = { cf+17, cf+55};
        static void **func_4922050496_op2[2] = { cf+19, cf+55};
        static void **func_4922050416_op0[2] = { cf+21, cf+55};
        static void **func_4922050416_op1[2] = { cf+11, cf+55};
        static void **func_4922050416_op2[2] = { cf+23, cf+55};
        static void **func_4922050336_op0[2] = { cf+6, cf+55};
        static void **func_4922050336_op1[2] = { cf+4, cf+55};
        static void **func_4922050960_op0[2] = { cf+25, cf+55};
        static void **func_4922050960_op1[2] = { cf+26, cf+55};
        static void **func_4922050960_op2[2] = { cf+27, cf+55};
        static void **func_4922050960_op3[2] = { cf+28, cf+55};
        static void **func_4922050960_op4[2] = { cf+29, cf+55};
        static void **func_4922050960_op5[2] = { cf+30, cf+55};
        static void **func_4922050064_op0[2] = { cf+31, cf+55};
        static void **func_4922050064_op1[2] = { cf+38, cf+55};
        static void **func_4922051488_op0[2] = { cf+39, cf+55};
        static void **func_4922051488_op1[2] = { cf+40, cf+55};
        static void **func_4922051488_op2[2] = { cf+41, cf+55};
        static void **func_4922051488_op3[2] = { cf+42, cf+55};
        static void **func_4922051488_op4[2] = { cf+43, cf+55};
        static void **func_4922051488_op5[2] = { cf+44, cf+55};
        static void **func_4922051488_op6[2] = { cf+45, cf+55};
        static void **func_4922051488_op7[2] = { cf+46, cf+55};
        static void **func_4922051488_op8[2] = { cf+47, cf+55};
        static void **func_4922051488_op9[2] = { cf+48, cf+55};
        static void **func_4922050256_op0[2] = { cf+49, cf+55};
        static void **func_4922050784_op0[2] = { cf+5, cf+56};
        static void **func_4922050848_op0[2] = { cf+5, cf+55};
        static void **func_4922050848_op1[2] = { cf+0, cf+55};
        static void **func_4922050848_op2[2] = { cf+7, cf+55};
        static void **func_4922051728_op0[2] = { cf+51, cf+55};
        static void **func_4922051728_op1[2] = { cf+52, cf+55};
        static void **func_4922051856_op0[2] = { cf+3, cf+55};
        static void **func_4922051856_op1[2] = { cf+53, cf+55};
        static void **exp_4922052080[5] = {cf+4, cf+13, cf+2, cf+14, cf+55};
        static void **exp_4922052704[4] = {cf+2, cf+16, cf+2, cf+55};
        static void **exp_4922051152[4] = {cf+2, cf+18, cf+2, cf+55};
        static void **exp_4922053344[4] = {cf+2, cf+20, cf+2, cf+55};
        static void **exp_4922053600[4] = {cf+11, cf+22, cf+2, cf+55};
        static void **exp_4922053888[4] = {cf+11, cf+24, cf+2, cf+55};
        static void **exp_4922054176[12] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+37, cf+35, cf+10, cf+36, cf+55};
        static void **exp_4922056368[8] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+55};
        static void **exp_4922058160[6] = {cf+50, cf+33, cf+2, cf+34, cf+14, cf+55};
        static void **exp_4922055424[3] = {cf+9, cf+10, cf+55};
        static void **exp_4922055136[1] = {cf+55};
        static void **exp_4922058560[4] = {cf+3, cf+54, cf+11, cf+55};
goto LOOP;

func_4922041056:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4922041056_op0;
        break;
    }
    goto ***PC;
func_4922050496:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4922050496_op0;
        break;
        case 1:
            PC = func_4922050496_op1;
        break;
        case 2:
            PC = func_4922050496_op2;
        break;
    }
    goto ***PC;
func_4922050416:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4922050416_op0;
        break;
        case 1:
            PC = func_4922050416_op1;
        break;
        case 2:
            PC = func_4922050416_op2;
        break;
    }
    goto ***PC;
func_4922050336:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4922050336_op0;
        break;
        case 1:
            PC = func_4922050336_op1;
        break;
    }
    goto ***PC;
func_4922050960:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_4922050960_op0;
        break;
        case 1:
            PC = func_4922050960_op1;
        break;
        case 2:
            PC = func_4922050960_op2;
        break;
        case 3:
            PC = func_4922050960_op3;
        break;
        case 4:
            PC = func_4922050960_op4;
        break;
        case 5:
            PC = func_4922050960_op5;
        break;
    }
    goto ***PC;
func_4922050064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4922050064_op0;
        break;
        case 1:
            PC = func_4922050064_op1;
        break;
    }
    goto ***PC;
func_4922051488:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4922051488_op0;
        break;
        case 1:
            PC = func_4922051488_op1;
        break;
        case 2:
            PC = func_4922051488_op2;
        break;
        case 3:
            PC = func_4922051488_op3;
        break;
        case 4:
            PC = func_4922051488_op4;
        break;
        case 5:
            PC = func_4922051488_op5;
        break;
        case 6:
            PC = func_4922051488_op6;
        break;
        case 7:
            PC = func_4922051488_op7;
        break;
        case 8:
            PC = func_4922051488_op8;
        break;
        case 9:
            PC = func_4922051488_op9;
        break;
    }
    goto ***PC;
func_4922050256:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4922050256_op0;
        break;
    }
    goto ***PC;
func_4922050784:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4922050784_op0;
        break;
    }
    goto ***PC;
func_4922050848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4922050848_op0;
        break;
        case 1:
            PC = func_4922050848_op1;
        break;
        case 2:
            PC = func_4922050848_op2;
        break;
    }
    goto ***PC;
func_4922051728:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4922051728_op0;
        break;
        case 1:
            PC = func_4922051728_op1;
        break;
    }
    goto ***PC;
func_4922051856:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4922051856_op0;
        break;
        case 1:
            PC = func_4922051856_op1;
        break;
    }
    goto ***PC;
func_4922052080:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922052080;
    goto ***PC;
func_4922052208:
    extend(61);
    NEXT();
    goto ***PC;
func_4922052336:
    extend(59);
    NEXT();
    goto ***PC;
func_4922052704:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922052704;
    goto ***PC;
func_4922052832:
    extend(62);
    NEXT();
    goto ***PC;
func_4922051152:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922051152;
    goto ***PC;
func_4922053216:
    extend(60);
    NEXT();
    goto ***PC;
func_4922053344:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922053344;
    goto ***PC;
func_4922053472:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_4922053600:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922053600;
    goto ***PC;
func_4922053728:
    extend(43);
    NEXT();
    goto ***PC;
func_4922053888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922053888;
    goto ***PC;
func_4922054016:
    extend(45);
    NEXT();
    goto ***PC;
func_4922054240:
    extend(120);
    NEXT();
    goto ***PC;
func_4922054368:
    extend(121);
    NEXT();
    goto ***PC;
func_4922054496:
    extend(122);
    NEXT();
    goto ***PC;
func_4922054624:
    extend(97);
    NEXT();
    goto ***PC;
func_4922054752:
    extend(98);
    NEXT();
    goto ***PC;
func_4922054944:
    extend(99);
    NEXT();
    goto ***PC;
func_4922054176:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        extend(101);
        extend(108);
        extend(115);
        extend(101);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922054176;
    goto ***PC;
func_4922051984:
    extend(105);
    extend(102);
    NEXT();
    goto ***PC;
func_4922052960:
    extend(40);
    NEXT();
    goto ***PC;
func_4922053088:
    extend(41);
    NEXT();
    goto ***PC;
func_4922052528:
    extend(123);
    NEXT();
    goto ***PC;
func_4922056432:
    extend(125);
    NEXT();
    goto ***PC;
func_4922056560:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_4922056368:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922056368;
    goto ***PC;
func_4922055600:
    extend(48);
    NEXT();
    goto ***PC;
func_4922052592:
    extend(49);
    NEXT();
    goto ***PC;
func_4922057008:
    extend(50);
    NEXT();
    goto ***PC;
func_4922057136:
    extend(51);
    NEXT();
    goto ***PC;
func_4922057264:
    extend(52);
    NEXT();
    goto ***PC;
func_4922057456:
    extend(53);
    NEXT();
    goto ***PC;
func_4922057584:
    extend(54);
    NEXT();
    goto ***PC;
func_4922057712:
    extend(55);
    NEXT();
    goto ***PC;
func_4922057840:
    extend(56);
    NEXT();
    goto ***PC;
func_4922057392:
    extend(57);
    NEXT();
    goto ***PC;
func_4922058160:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922058160;
    goto ***PC;
func_4922058288:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto ***PC;
func_4922055424:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922055424;
    goto ***PC;
func_4922055136:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922055136;
    goto ***PC;
func_4922058560:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922058560;
    goto ***PC;
func_4922058688:
    extend(42);
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
    PC = func_4922050784_op0;
    goto ***PC;
}
