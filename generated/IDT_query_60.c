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
        unsigned loop_limit = 7;
        static void * cf[] = {&&func_4812986992, &&func_4812997200, &&func_4812997504, &&func_4812997856, &&func_4812997568, &&func_4812997120, &&func_4812996992, &&func_4812998320, &&func_4812997360, &&func_4812997984, &&func_4812998112, &&func_4812998240, &&func_4812998736, &&func_4812998864, &&func_4812999024, &&func_4812999232, &&func_4812999360, &&func_4812999744, &&func_4812998608, &&func_4813000096, &&func_4812997424, &&func_4813000288, &&func_4813000416, &&func_4813000544, &&func_4813001008, &&func_4812999152, &&func_4813001200, &&func_4813001360, &&func_4813001488, &&func_4813001680, &&func_4813001808, &&func_4813001936, &&func_4813002064, &&func_4813001616, &&func_4812999872, &&func_4812998496, &&func_4813002704, &&func_4813002832, &&func_4813003216, &&func_4813003344, &&func_4813003472, &&func_4813003632, &&func_4813003760, &&func_4813003952, &&func_4813004080, &&func_4813004208, &&func_4813004336, &&func_4813003888, &&func_4813003104, &&func_4813000736, &&func_4813000864, &&func_4813003024, &&func_4813004848, &&RETURN, &&HALT};
        static void **func_4812986992_op0[2] = { cf+11, cf+53};
        static void **func_4812986992_op1[2] = { cf+12, cf+53};
        static void **func_4812986992_op2[2] = { cf+13, cf+53};
        static void **func_4812986992_op3[2] = { cf+14, cf+53};
        static void **func_4812997200_op0[2] = { cf+15, cf+53};
        static void **func_4812997200_op1[2] = { cf+16, cf+53};
        static void **func_4812997504_op0[2] = { cf+18, cf+53};
        static void **func_4812997504_op1[2] = { cf+20, cf+53};
        static void **func_4812997504_op2[2] = { cf+22, cf+53};
        static void **func_4812997856_op0[2] = { cf+24, cf+53};
        static void **func_4812997856_op1[2] = { cf+25, cf+53};
        static void **func_4812997856_op2[2] = { cf+26, cf+53};
        static void **func_4812997856_op3[2] = { cf+27, cf+53};
        static void **func_4812997856_op4[2] = { cf+28, cf+53};
        static void **func_4812997856_op5[2] = { cf+29, cf+53};
        static void **func_4812997856_op6[2] = { cf+30, cf+53};
        static void **func_4812997856_op7[2] = { cf+31, cf+53};
        static void **func_4812997856_op8[2] = { cf+32, cf+53};
        static void **func_4812997856_op9[2] = { cf+33, cf+53};
        static void **func_4812997568_op0[2] = { cf+3, cf+53};
        static void **func_4812997568_op1[2] = { cf+34, cf+53};
        static void **func_4812997120_op0[2] = { cf+35, cf+53};
        static void **func_4812996992_op0[2] = { cf+5, cf+54};
        static void **func_4812998320_op0[2] = { cf+38, cf+53};
        static void **func_4812998320_op1[2] = { cf+39, cf+53};
        static void **func_4812998320_op2[2] = { cf+40, cf+53};
        static void **func_4812998320_op3[2] = { cf+41, cf+53};
        static void **func_4812998320_op4[2] = { cf+42, cf+53};
        static void **func_4812998320_op5[2] = { cf+43, cf+53};
        static void **func_4812998320_op6[2] = { cf+44, cf+53};
        static void **func_4812998320_op7[2] = { cf+45, cf+53};
        static void **func_4812998320_op8[2] = { cf+46, cf+53};
        static void **func_4812998320_op9[2] = { cf+47, cf+53};
        static void **func_4812997360_op0[2] = { cf+48, cf+53};
        static void **func_4812997360_op1[2] = { cf+49, cf+53};
        static void **func_4812997360_op2[2] = { cf+50, cf+53};
        static void **func_4812997984_op0[2] = { cf+4, cf+53};
        static void **func_4812997984_op1[2] = { cf+7, cf+53};
        static void **func_4812998112_op0[2] = { cf+51, cf+53};
        static void **exp_4812999360[4] = {cf+0, cf+17, cf+1, cf+53};
        static void **exp_4812998608[4] = {cf+0, cf+19, cf+9, cf+53};
        static void **exp_4812997424[4] = {cf+2, cf+21, cf+2, cf+53};
        static void **exp_4813000416[4] = {cf+2, cf+23, cf+2, cf+53};
        static void **exp_4812999872[3] = {cf+3, cf+4, cf+53};
        static void **exp_4812998496[6] = {cf+36, cf+1, cf+37, cf+8, cf+10, cf+53};
        static void **exp_4813003024[3] = {cf+52, cf+2, cf+53};
goto LOOP;

func_4812986992:
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
            PC = func_4812986992_op0;
        break;
        case 1:
            PC = func_4812986992_op1;
        break;
        case 2:
            PC = func_4812986992_op2;
        break;
        case 3:
            PC = func_4812986992_op3;
        break;
    }
    goto ***PC;
func_4812997200:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4812997200_op0;
        break;
        case 1:
            PC = func_4812997200_op1;
        break;
    }
    goto ***PC;
func_4812997504:
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
            PC = func_4812997504_op0;
        break;
        case 1:
            PC = func_4812997504_op1;
        break;
        case 2:
            PC = func_4812997504_op2;
        break;
    }
    goto ***PC;
func_4812997856:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4812997856_op0;
        break;
        case 1:
            PC = func_4812997856_op1;
        break;
        case 2:
            PC = func_4812997856_op2;
        break;
        case 3:
            PC = func_4812997856_op3;
        break;
        case 4:
            PC = func_4812997856_op4;
        break;
        case 5:
            PC = func_4812997856_op5;
        break;
        case 6:
            PC = func_4812997856_op6;
        break;
        case 7:
            PC = func_4812997856_op7;
        break;
        case 8:
            PC = func_4812997856_op8;
        break;
        case 9:
            PC = func_4812997856_op9;
        break;
    }
    goto ***PC;
func_4812997568:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4812997568_op0;
        break;
        case 1:
            PC = func_4812997568_op1;
        break;
    }
    goto ***PC;
func_4812997120:
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
            PC = func_4812997120_op0;
        break;
    }
    goto ***PC;
func_4812996992:
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
            PC = func_4812996992_op0;
        break;
    }
    goto ***PC;
func_4812998320:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4812998320_op0;
        break;
        case 1:
            PC = func_4812998320_op1;
        break;
        case 2:
            PC = func_4812998320_op2;
        break;
        case 3:
            PC = func_4812998320_op3;
        break;
        case 4:
            PC = func_4812998320_op4;
        break;
        case 5:
            PC = func_4812998320_op5;
        break;
        case 6:
            PC = func_4812998320_op6;
        break;
        case 7:
            PC = func_4812998320_op7;
        break;
        case 8:
            PC = func_4812998320_op8;
        break;
        case 9:
            PC = func_4812998320_op9;
        break;
    }
    goto ***PC;
func_4812997360:
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
            PC = func_4812997360_op0;
        break;
        case 1:
            PC = func_4812997360_op1;
        break;
        case 2:
            PC = func_4812997360_op2;
        break;
    }
    goto ***PC;
func_4812997984:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4812997984_op0;
        break;
        case 1:
            PC = func_4812997984_op1;
        break;
    }
    goto ***PC;
func_4812998112:
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
            PC = func_4812998112_op0;
        break;
    }
    goto ***PC;
func_4812998240:
    extend(105);
    extend(100);
    NEXT();
    goto ***PC;
func_4812998736:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto ***PC;
func_4812998864:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto ***PC;
func_4812999024:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto ***PC;
func_4812999232:
    extend(42);
    NEXT();
    goto ***PC;
func_4812999360:
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
    PC = exp_4812999360;
    goto ***PC;
func_4812999744:
    extend(44);
    NEXT();
    goto ***PC;
func_4812998608:
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
    PC = exp_4812998608;
    goto ***PC;
func_4813000096:
    extend(61);
    NEXT();
    goto ***PC;
func_4812997424:
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
    PC = exp_4812997424;
    goto ***PC;
func_4813000288:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_4813000416:
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
    PC = exp_4813000416;
    goto ***PC;
func_4813000544:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_4813001008:
    extend(48);
    NEXT();
    goto ***PC;
func_4812999152:
    extend(49);
    NEXT();
    goto ***PC;
func_4813001200:
    extend(50);
    NEXT();
    goto ***PC;
func_4813001360:
    extend(51);
    NEXT();
    goto ***PC;
func_4813001488:
    extend(52);
    NEXT();
    goto ***PC;
func_4813001680:
    extend(53);
    NEXT();
    goto ***PC;
func_4813001808:
    extend(54);
    NEXT();
    goto ***PC;
func_4813001936:
    extend(55);
    NEXT();
    goto ***PC;
func_4813002064:
    extend(56);
    NEXT();
    goto ***PC;
func_4813001616:
    extend(57);
    NEXT();
    goto ***PC;
func_4812999872:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4812999872;
    goto ***PC;
func_4812998496:
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
    PC = exp_4812998496;
    goto ***PC;
func_4813002704:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto ***PC;
func_4813002832:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto ***PC;
func_4813003216:
    extend(97);
    NEXT();
    goto ***PC;
func_4813003344:
    extend(98);
    NEXT();
    goto ***PC;
func_4813003472:
    extend(99);
    NEXT();
    goto ***PC;
func_4813003632:
    extend(100);
    NEXT();
    goto ***PC;
func_4813003760:
    extend(101);
    NEXT();
    goto ***PC;
func_4813003952:
    extend(102);
    NEXT();
    goto ***PC;
func_4813004080:
    extend(103);
    NEXT();
    goto ***PC;
func_4813004208:
    extend(104);
    NEXT();
    goto ***PC;
func_4813004336:
    extend(105);
    NEXT();
    goto ***PC;
func_4813003888:
    extend(106);
    NEXT();
    goto ***PC;
func_4813003104:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_4813000736:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_4813000864:
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
func_4813003024:
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
    PC = exp_4813003024;
    goto ***PC;
func_4813004848:
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
    PC = func_4812996992_op0;
    goto ***PC;
}
