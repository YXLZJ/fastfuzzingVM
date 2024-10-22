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
        unsigned loop_limit = 16;
        static void * cf[] = {&&func_4796225056, &&func_4796225424, &&func_4796225840, &&func_4796225936, &&func_4796225712, &&func_4796225632, &&func_4796226336, &&func_4796225552, &&func_4796226064, &&func_4796226592, &&func_4796226256, &&func_4796226528, &&func_4796226944, &&func_4796227312, &&func_4796227152, &&func_4796226880, &&func_4796227072, &&func_4796226128, &&func_4796228176, &&func_4796228304, &&func_4796228432, &&func_4796228560, &&func_4796228688, &&func_4796228816, &&func_4796229200, &&func_4796226784, &&func_4796229392, &&func_4796229520, &&func_4796229648, &&func_4796229840, &&func_4796229968, &&func_4796230096, &&func_4796230224, &&func_4796229776, &&func_4796230800, &&func_4796230928, &&func_4796227968, &&func_4796228096, &&func_4796229104, &&func_4796231280, &&func_4796231408, &&func_4796228944, &&func_4796232176, &&func_4796232304, &&func_4796227440, &&func_4796231952, &&func_4796232624, &&func_4796232752, &&func_4796232880, &&func_4796233008, &&func_4796233200, &&func_4796233328, &&func_4796233456, &&func_4796233584, &&func_4796233136, &&func_4796234352, &&func_4796231600, &&func_4796234176, &&func_4796231776, &&func_4796233840, &&func_4796233968, &&func_4796234480, &&func_4796235328, &&func_4796235456, &&func_4796234608, &&func_4796230288, &&func_4796235264, &&func_4796230656, &&RETURN, &&HALT};
        static void **func_4796225056_op0[2] = { cf+15, cf+68};
        static void **func_4796225424_op0[2] = { cf+18, cf+68};
        static void **func_4796225424_op1[2] = { cf+20, cf+68};
        static void **func_4796225424_op2[2] = { cf+22, cf+68};
        static void **func_4796225840_op0[2] = { cf+24, cf+68};
        static void **func_4796225840_op1[2] = { cf+25, cf+68};
        static void **func_4796225840_op2[2] = { cf+26, cf+68};
        static void **func_4796225840_op3[2] = { cf+27, cf+68};
        static void **func_4796225840_op4[2] = { cf+28, cf+68};
        static void **func_4796225840_op5[2] = { cf+29, cf+68};
        static void **func_4796225840_op6[2] = { cf+30, cf+68};
        static void **func_4796225840_op7[2] = { cf+31, cf+68};
        static void **func_4796225840_op8[2] = { cf+32, cf+68};
        static void **func_4796225840_op9[2] = { cf+33, cf+68};
        static void **func_4796225936_op0[2] = { cf+34, cf+68};
        static void **func_4796225936_op1[2] = { cf+36, cf+68};
        static void **func_4796225936_op2[2] = { cf+13, cf+68};
        static void **func_4796225712_op0[2] = { cf+38, cf+68};
        static void **func_4796225712_op1[2] = { cf+8, cf+68};
        static void **func_4796225712_op2[2] = { cf+6, cf+68};
        static void **func_4796225632_op0[2] = { cf+41, cf+68};
        static void **func_4796226336_op0[2] = { cf+45, cf+68};
        static void **func_4796226336_op1[2] = { cf+46, cf+68};
        static void **func_4796226336_op2[2] = { cf+47, cf+68};
        static void **func_4796226336_op3[2] = { cf+48, cf+68};
        static void **func_4796226336_op4[2] = { cf+49, cf+68};
        static void **func_4796226336_op5[2] = { cf+50, cf+68};
        static void **func_4796226336_op6[2] = { cf+51, cf+68};
        static void **func_4796226336_op7[2] = { cf+52, cf+68};
        static void **func_4796226336_op8[2] = { cf+53, cf+68};
        static void **func_4796225552_op0[2] = { cf+54, cf+68};
        static void **func_4796225552_op1[2] = { cf+56, cf+68};
        static void **func_4796226064_op0[2] = { cf+2, cf+68};
        static void **func_4796226064_op1[2] = { cf+58, cf+68};
        static void **func_4796226592_op0[2] = { cf+59, cf+68};
        static void **func_4796226256_op0[2] = { cf+61, cf+68};
        static void **func_4796226528_op0[2] = { cf+10, cf+69};
        static void **func_4796226944_op0[2] = { cf+7, cf+68};
        static void **func_4796226944_op1[2] = { cf+14, cf+68};
        static void **func_4796226944_op2[2] = { cf+5, cf+68};
        static void **func_4796226944_op3[2] = { cf+0, cf+68};
        static void **func_4796226944_op4[2] = { cf+9, cf+68};
        static void **func_4796227312_op0[2] = { cf+62, cf+68};
        static void **func_4796227312_op1[2] = { cf+64, cf+68};
        static void **func_4796227312_op2[2] = { cf+4, cf+68};
        static void **func_4796227152_op0[2] = { cf+66, cf+68};
        static void **exp_4796226880[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_4796228176[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_4796228432[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_4796228688[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_4796230800[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_4796227968[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_4796229104[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_4796228944[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4796233136[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4796231600[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4796231776[3] = {cf+2, cf+8, cf+68};
        static void **exp_4796233840[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_4796234480[3] = {cf+12, cf+10, cf+68};
        static void **exp_4796235328[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_4796234608[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_4796235264[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_4796225056:
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
            PC = func_4796225056_op0;
        break;
    }
    goto ***PC;
func_4796225424:
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
            PC = func_4796225424_op0;
        break;
        case 1:
            PC = func_4796225424_op1;
        break;
        case 2:
            PC = func_4796225424_op2;
        break;
    }
    goto ***PC;
func_4796225840:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4796225840_op0;
        break;
        case 1:
            PC = func_4796225840_op1;
        break;
        case 2:
            PC = func_4796225840_op2;
        break;
        case 3:
            PC = func_4796225840_op3;
        break;
        case 4:
            PC = func_4796225840_op4;
        break;
        case 5:
            PC = func_4796225840_op5;
        break;
        case 6:
            PC = func_4796225840_op6;
        break;
        case 7:
            PC = func_4796225840_op7;
        break;
        case 8:
            PC = func_4796225840_op8;
        break;
        case 9:
            PC = func_4796225840_op9;
        break;
    }
    goto ***PC;
func_4796225936:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4796225936_op0;
        break;
        case 1:
            PC = func_4796225936_op1;
        break;
        case 2:
            PC = func_4796225936_op2;
        break;
    }
    goto ***PC;
func_4796225712:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4796225712_op0;
        break;
        case 1:
            PC = func_4796225712_op1;
        break;
        case 2:
            PC = func_4796225712_op2;
        break;
    }
    goto ***PC;
func_4796225632:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4796225632_op0;
        break;
    }
    goto ***PC;
func_4796226336:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_4796226336_op0;
        break;
        case 1:
            PC = func_4796226336_op1;
        break;
        case 2:
            PC = func_4796226336_op2;
        break;
        case 3:
            PC = func_4796226336_op3;
        break;
        case 4:
            PC = func_4796226336_op4;
        break;
        case 5:
            PC = func_4796226336_op5;
        break;
        case 6:
            PC = func_4796226336_op6;
        break;
        case 7:
            PC = func_4796226336_op7;
        break;
        case 8:
            PC = func_4796226336_op8;
        break;
    }
    goto ***PC;
func_4796225552:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4796225552_op0;
        break;
        case 1:
            PC = func_4796225552_op1;
        break;
    }
    goto ***PC;
func_4796226064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4796226064_op0;
        break;
        case 1:
            PC = func_4796226064_op1;
        break;
    }
    goto ***PC;
func_4796226592:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
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
            PC = func_4796226592_op0;
        break;
    }
    goto ***PC;
func_4796226256:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4796226256_op0;
        break;
    }
    goto ***PC;
func_4796226528:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4796226528_op0;
        break;
    }
    goto ***PC;
func_4796226944:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_4796226944_op0;
        break;
        case 1:
            PC = func_4796226944_op1;
        break;
        case 2:
            PC = func_4796226944_op2;
        break;
        case 3:
            PC = func_4796226944_op3;
        break;
        case 4:
            PC = func_4796226944_op4;
        break;
    }
    goto ***PC;
func_4796227312:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4796227312_op0;
        break;
        case 1:
            PC = func_4796227312_op1;
        break;
        case 2:
            PC = func_4796227312_op2;
        break;
    }
    goto ***PC;
func_4796227152:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4796227152_op0;
        break;
    }
    goto ***PC;
func_4796226880:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796226880;
    goto ***PC;
func_4796227072:
    extend(61);
    NEXT();
    goto ***PC;
func_4796226128:
    extend(59);
    NEXT();
    goto ***PC;
func_4796228176:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796228176;
    goto ***PC;
func_4796228304:
    extend(62);
    NEXT();
    goto ***PC;
func_4796228432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796228432;
    goto ***PC;
func_4796228560:
    extend(60);
    NEXT();
    goto ***PC;
func_4796228688:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796228688;
    goto ***PC;
func_4796228816:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_4796229200:
    extend(48);
    NEXT();
    goto ***PC;
func_4796226784:
    extend(49);
    NEXT();
    goto ***PC;
func_4796229392:
    extend(50);
    NEXT();
    goto ***PC;
func_4796229520:
    extend(51);
    NEXT();
    goto ***PC;
func_4796229648:
    extend(52);
    NEXT();
    goto ***PC;
func_4796229840:
    extend(53);
    NEXT();
    goto ***PC;
func_4796229968:
    extend(54);
    NEXT();
    goto ***PC;
func_4796230096:
    extend(55);
    NEXT();
    goto ***PC;
func_4796230224:
    extend(56);
    NEXT();
    goto ***PC;
func_4796229776:
    extend(57);
    NEXT();
    goto ***PC;
func_4796230800:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796230800;
    goto ***PC;
func_4796230928:
    extend(43);
    NEXT();
    goto ***PC;
func_4796227968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796227968;
    goto ***PC;
func_4796228096:
    extend(45);
    NEXT();
    goto ***PC;
func_4796229104:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796229104;
    goto ***PC;
func_4796231280:
    extend(40);
    NEXT();
    goto ***PC;
func_4796231408:
    extend(41);
    NEXT();
    goto ***PC;
func_4796228944:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796228944;
    goto ***PC;
func_4796232176:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_4796232304:
    extend(123);
    NEXT();
    goto ***PC;
func_4796227440:
    extend(125);
    NEXT();
    goto ***PC;
func_4796231952:
    extend(105);
    NEXT();
    goto ***PC;
func_4796232624:
    extend(106);
    NEXT();
    goto ***PC;
func_4796232752:
    extend(107);
    NEXT();
    goto ***PC;
func_4796232880:
    extend(120);
    NEXT();
    goto ***PC;
func_4796233008:
    extend(121);
    NEXT();
    goto ***PC;
func_4796233200:
    extend(122);
    NEXT();
    goto ***PC;
func_4796233328:
    extend(97);
    NEXT();
    goto ***PC;
func_4796233456:
    extend(98);
    NEXT();
    goto ***PC;
func_4796233584:
    extend(99);
    NEXT();
    goto ***PC;
func_4796233136:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796233136;
    goto ***PC;
func_4796234352:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_4796231600:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796231600;
    goto ***PC;
func_4796234176:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_4796231776:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796231776;
    goto ***PC;
func_4796233840:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796233840;
    goto ***PC;
func_4796233968:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_4796234480:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796234480;
    goto ***PC;
func_4796235328:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796235328;
    goto ***PC;
func_4796235456:
    extend(42);
    NEXT();
    goto ***PC;
func_4796234608:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796234608;
    goto ***PC;
func_4796230288:
    extend(47);
    NEXT();
    goto ***PC;
func_4796235264:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4796235264;
    goto ***PC;
func_4796230656:
    extend(32);
    extend(119);
    extend(104);
    extend(105);
    extend(108);
    extend(101);
    extend(32);
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
    PC = func_4796226528_op0;
    goto ***PC;
}
