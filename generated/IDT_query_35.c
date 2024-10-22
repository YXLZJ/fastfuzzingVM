#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 35
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
        unsigned loop_limit = 7;
        static void * cf[] = {&&func_5760899696, &&func_5760909904, &&func_5760910208, &&func_5760910560, &&func_5760910272, &&func_5760909824, &&func_5760909696, &&func_5760911024, &&func_5760910064, &&func_5760910688, &&func_5760910816, &&func_5760910944, &&func_5760911440, &&func_5760911568, &&func_5760911728, &&func_5760911936, &&func_5760912064, &&func_5760912448, &&func_5760911312, &&func_5760912800, &&func_5760910128, &&func_5760912992, &&func_5760913120, &&func_5760913248, &&func_5760913712, &&func_5760911856, &&func_5760913904, &&func_5760914064, &&func_5760914192, &&func_5760914384, &&func_5760914512, &&func_5760914640, &&func_5760914768, &&func_5760914320, &&func_5760912576, &&func_5760911200, &&func_5760915408, &&func_5760915536, &&func_5760915920, &&func_5760916048, &&func_5760916176, &&func_5760916336, &&func_5760916464, &&func_5760916656, &&func_5760916784, &&func_5760916912, &&func_5760917040, &&func_5760916592, &&func_5760915808, &&func_5760913440, &&func_5760913568, &&func_5760915728, &&func_5760917552, &&RETURN, &&HALT};
        static void **func_5760899696_op0[2] = { cf+11, cf+53};
        static void **func_5760899696_op1[2] = { cf+12, cf+53};
        static void **func_5760899696_op2[2] = { cf+13, cf+53};
        static void **func_5760899696_op3[2] = { cf+14, cf+53};
        static void **func_5760909904_op0[2] = { cf+15, cf+53};
        static void **func_5760909904_op1[2] = { cf+16, cf+53};
        static void **func_5760910208_op0[2] = { cf+18, cf+53};
        static void **func_5760910208_op1[2] = { cf+20, cf+53};
        static void **func_5760910208_op2[2] = { cf+22, cf+53};
        static void **func_5760910560_op0[2] = { cf+24, cf+53};
        static void **func_5760910560_op1[2] = { cf+25, cf+53};
        static void **func_5760910560_op2[2] = { cf+26, cf+53};
        static void **func_5760910560_op3[2] = { cf+27, cf+53};
        static void **func_5760910560_op4[2] = { cf+28, cf+53};
        static void **func_5760910560_op5[2] = { cf+29, cf+53};
        static void **func_5760910560_op6[2] = { cf+30, cf+53};
        static void **func_5760910560_op7[2] = { cf+31, cf+53};
        static void **func_5760910560_op8[2] = { cf+32, cf+53};
        static void **func_5760910560_op9[2] = { cf+33, cf+53};
        static void **func_5760910272_op0[2] = { cf+3, cf+53};
        static void **func_5760910272_op1[2] = { cf+34, cf+53};
        static void **func_5760909824_op0[2] = { cf+35, cf+53};
        static void **func_5760909696_op0[2] = { cf+5, cf+54};
        static void **func_5760911024_op0[2] = { cf+38, cf+53};
        static void **func_5760911024_op1[2] = { cf+39, cf+53};
        static void **func_5760911024_op2[2] = { cf+40, cf+53};
        static void **func_5760911024_op3[2] = { cf+41, cf+53};
        static void **func_5760911024_op4[2] = { cf+42, cf+53};
        static void **func_5760911024_op5[2] = { cf+43, cf+53};
        static void **func_5760911024_op6[2] = { cf+44, cf+53};
        static void **func_5760911024_op7[2] = { cf+45, cf+53};
        static void **func_5760911024_op8[2] = { cf+46, cf+53};
        static void **func_5760911024_op9[2] = { cf+47, cf+53};
        static void **func_5760910064_op0[2] = { cf+48, cf+53};
        static void **func_5760910064_op1[2] = { cf+49, cf+53};
        static void **func_5760910064_op2[2] = { cf+50, cf+53};
        static void **func_5760910688_op0[2] = { cf+4, cf+53};
        static void **func_5760910688_op1[2] = { cf+7, cf+53};
        static void **func_5760910816_op0[2] = { cf+51, cf+53};
        static void **exp_5760912064[4] = {cf+0, cf+17, cf+1, cf+53};
        static void **exp_5760911312[4] = {cf+0, cf+19, cf+9, cf+53};
        static void **exp_5760910128[4] = {cf+2, cf+21, cf+2, cf+53};
        static void **exp_5760913120[4] = {cf+2, cf+23, cf+2, cf+53};
        static void **exp_5760912576[3] = {cf+3, cf+4, cf+53};
        static void **exp_5760911200[6] = {cf+36, cf+1, cf+37, cf+8, cf+10, cf+53};
        static void **exp_5760915728[3] = {cf+52, cf+2, cf+53};
goto LOOP;

func_5760899696:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        NEXT();
        goto ***PC;
    }
    xor(4);
    store();
    switch (branch) {
        case 0:
            PC = func_5760899696_op0;
        break;
        case 1:
            PC = func_5760899696_op1;
        break;
        case 2:
            PC = func_5760899696_op2;
        break;
        case 3:
            PC = func_5760899696_op3;
        break;
    }
    goto ***PC;
func_5760909904:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5760909904_op0;
        break;
        case 1:
            PC = func_5760909904_op1;
        break;
    }
    goto ***PC;
func_5760910208:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5760910208_op0;
        break;
        case 1:
            PC = func_5760910208_op1;
        break;
        case 2:
            PC = func_5760910208_op2;
        break;
    }
    goto ***PC;
func_5760910560:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5760910560_op0;
        break;
        case 1:
            PC = func_5760910560_op1;
        break;
        case 2:
            PC = func_5760910560_op2;
        break;
        case 3:
            PC = func_5760910560_op3;
        break;
        case 4:
            PC = func_5760910560_op4;
        break;
        case 5:
            PC = func_5760910560_op5;
        break;
        case 6:
            PC = func_5760910560_op6;
        break;
        case 7:
            PC = func_5760910560_op7;
        break;
        case 8:
            PC = func_5760910560_op8;
        break;
        case 9:
            PC = func_5760910560_op9;
        break;
    }
    goto ***PC;
func_5760910272:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5760910272_op0;
        break;
        case 1:
            PC = func_5760910272_op1;
        break;
    }
    goto ***PC;
func_5760909824:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5760909824_op0;
        break;
    }
    goto ***PC;
func_5760909696:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5760909696_op0;
        break;
    }
    goto ***PC;
func_5760911024:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5760911024_op0;
        break;
        case 1:
            PC = func_5760911024_op1;
        break;
        case 2:
            PC = func_5760911024_op2;
        break;
        case 3:
            PC = func_5760911024_op3;
        break;
        case 4:
            PC = func_5760911024_op4;
        break;
        case 5:
            PC = func_5760911024_op5;
        break;
        case 6:
            PC = func_5760911024_op6;
        break;
        case 7:
            PC = func_5760911024_op7;
        break;
        case 8:
            PC = func_5760911024_op8;
        break;
        case 9:
            PC = func_5760911024_op9;
        break;
    }
    goto ***PC;
func_5760910064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5760910064_op0;
        break;
        case 1:
            PC = func_5760910064_op1;
        break;
        case 2:
            PC = func_5760910064_op2;
        break;
    }
    goto ***PC;
func_5760910688:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5760910688_op0;
        break;
        case 1:
            PC = func_5760910688_op1;
        break;
    }
    goto ***PC;
func_5760910816:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5760910816_op0;
        break;
    }
    goto ***PC;
func_5760910944:
    extend(105);
    extend(100);
    NEXT();
    goto ***PC;
func_5760911440:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto ***PC;
func_5760911568:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto ***PC;
func_5760911728:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto ***PC;
func_5760911936:
    extend(42);
    NEXT();
    goto ***PC;
func_5760912064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(44);
        extend(42);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760912064;
    goto ***PC;
func_5760912448:
    extend(44);
    NEXT();
    goto ***PC;
func_5760911312:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760911312;
    goto ***PC;
func_5760912800:
    extend(61);
    NEXT();
    goto ***PC;
func_5760910128:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(65);
        extend(78);
        extend(68);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760910128;
    goto ***PC;
func_5760912992:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_5760913120:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(79);
        extend(82);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760913120;
    goto ***PC;
func_5760913248:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_5760913712:
    extend(48);
    NEXT();
    goto ***PC;
func_5760911856:
    extend(49);
    NEXT();
    goto ***PC;
func_5760913904:
    extend(50);
    NEXT();
    goto ***PC;
func_5760914064:
    extend(51);
    NEXT();
    goto ***PC;
func_5760914192:
    extend(52);
    NEXT();
    goto ***PC;
func_5760914384:
    extend(53);
    NEXT();
    goto ***PC;
func_5760914512:
    extend(54);
    NEXT();
    goto ***PC;
func_5760914640:
    extend(55);
    NEXT();
    goto ***PC;
func_5760914768:
    extend(56);
    NEXT();
    goto ***PC;
func_5760914320:
    extend(57);
    NEXT();
    goto ***PC;
func_5760912576:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760912576;
    goto ***PC;
func_5760911200:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760911200;
    goto ***PC;
func_5760915408:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto ***PC;
func_5760915536:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto ***PC;
func_5760915920:
    extend(97);
    NEXT();
    goto ***PC;
func_5760916048:
    extend(98);
    NEXT();
    goto ***PC;
func_5760916176:
    extend(99);
    NEXT();
    goto ***PC;
func_5760916336:
    extend(100);
    NEXT();
    goto ***PC;
func_5760916464:
    extend(101);
    NEXT();
    goto ***PC;
func_5760916656:
    extend(102);
    NEXT();
    goto ***PC;
func_5760916784:
    extend(103);
    NEXT();
    goto ***PC;
func_5760916912:
    extend(104);
    NEXT();
    goto ***PC;
func_5760917040:
    extend(105);
    NEXT();
    goto ***PC;
func_5760916592:
    extend(106);
    NEXT();
    goto ***PC;
func_5760915808:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_5760913440:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_5760913568:
    extend(112);
    extend(114);
    extend(111);
    extend(100);
    extend(117);
    extend(99);
    extend(116);
    extend(115);
    NEXT();
    goto ***PC;
func_5760915728:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760915728;
    goto ***PC;
func_5760917552:
    extend(87);
    extend(72);
    extend(69);
    extend(82);
    extend(69);
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
    PC = func_5760909696_op0;
    goto ***PC;
}
