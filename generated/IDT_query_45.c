#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 45
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
        static void * cf[] = {&&func_4896873072, &&func_4896883280, &&func_4896883584, &&func_4896883936, &&func_4896883648, &&func_4896883200, &&func_4896883072, &&func_4896884400, &&func_4896883440, &&func_4896884064, &&func_4896884192, &&func_4896884320, &&func_4896884816, &&func_4896884944, &&func_4896885104, &&func_4896885312, &&func_4896885440, &&func_4896885824, &&func_4896884688, &&func_4896886176, &&func_4896883504, &&func_4896886368, &&func_4896886496, &&func_4896886624, &&func_4896887088, &&func_4896885232, &&func_4896887280, &&func_4896887440, &&func_4896887568, &&func_4896887760, &&func_4896887888, &&func_4896888016, &&func_4896888144, &&func_4896887696, &&func_4896885952, &&func_4896884576, &&func_4896888784, &&func_4896888912, &&func_4896889296, &&func_4896889424, &&func_4896889552, &&func_4896889712, &&func_4896889840, &&func_4896890032, &&func_4896890160, &&func_4896890288, &&func_4896890416, &&func_4896889968, &&func_4896889184, &&func_4896886816, &&func_4896886944, &&func_4896889104, &&func_4896890928, &&RETURN, &&HALT};
        static void **func_4896873072_op0[2] = { cf+11, cf+53};
        static void **func_4896873072_op1[2] = { cf+12, cf+53};
        static void **func_4896873072_op2[2] = { cf+13, cf+53};
        static void **func_4896873072_op3[2] = { cf+14, cf+53};
        static void **func_4896883280_op0[2] = { cf+15, cf+53};
        static void **func_4896883280_op1[2] = { cf+16, cf+53};
        static void **func_4896883584_op0[2] = { cf+18, cf+53};
        static void **func_4896883584_op1[2] = { cf+20, cf+53};
        static void **func_4896883584_op2[2] = { cf+22, cf+53};
        static void **func_4896883936_op0[2] = { cf+24, cf+53};
        static void **func_4896883936_op1[2] = { cf+25, cf+53};
        static void **func_4896883936_op2[2] = { cf+26, cf+53};
        static void **func_4896883936_op3[2] = { cf+27, cf+53};
        static void **func_4896883936_op4[2] = { cf+28, cf+53};
        static void **func_4896883936_op5[2] = { cf+29, cf+53};
        static void **func_4896883936_op6[2] = { cf+30, cf+53};
        static void **func_4896883936_op7[2] = { cf+31, cf+53};
        static void **func_4896883936_op8[2] = { cf+32, cf+53};
        static void **func_4896883936_op9[2] = { cf+33, cf+53};
        static void **func_4896883648_op0[2] = { cf+3, cf+53};
        static void **func_4896883648_op1[2] = { cf+34, cf+53};
        static void **func_4896883200_op0[2] = { cf+35, cf+53};
        static void **func_4896883072_op0[2] = { cf+5, cf+54};
        static void **func_4896884400_op0[2] = { cf+38, cf+53};
        static void **func_4896884400_op1[2] = { cf+39, cf+53};
        static void **func_4896884400_op2[2] = { cf+40, cf+53};
        static void **func_4896884400_op3[2] = { cf+41, cf+53};
        static void **func_4896884400_op4[2] = { cf+42, cf+53};
        static void **func_4896884400_op5[2] = { cf+43, cf+53};
        static void **func_4896884400_op6[2] = { cf+44, cf+53};
        static void **func_4896884400_op7[2] = { cf+45, cf+53};
        static void **func_4896884400_op8[2] = { cf+46, cf+53};
        static void **func_4896884400_op9[2] = { cf+47, cf+53};
        static void **func_4896883440_op0[2] = { cf+48, cf+53};
        static void **func_4896883440_op1[2] = { cf+49, cf+53};
        static void **func_4896883440_op2[2] = { cf+50, cf+53};
        static void **func_4896884064_op0[2] = { cf+4, cf+53};
        static void **func_4896884064_op1[2] = { cf+7, cf+53};
        static void **func_4896884192_op0[2] = { cf+51, cf+53};
        static void **exp_4896885440[4] = {cf+0, cf+17, cf+1, cf+53};
        static void **exp_4896884688[4] = {cf+0, cf+19, cf+9, cf+53};
        static void **exp_4896883504[4] = {cf+2, cf+21, cf+2, cf+53};
        static void **exp_4896886496[4] = {cf+2, cf+23, cf+2, cf+53};
        static void **exp_4896885952[3] = {cf+3, cf+4, cf+53};
        static void **exp_4896884576[6] = {cf+36, cf+1, cf+37, cf+8, cf+10, cf+53};
        static void **exp_4896889104[3] = {cf+52, cf+2, cf+53};
goto LOOP;

func_4896873072:
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
            PC = func_4896873072_op0;
        break;
        case 1:
            PC = func_4896873072_op1;
        break;
        case 2:
            PC = func_4896873072_op2;
        break;
        case 3:
            PC = func_4896873072_op3;
        break;
    }
    goto ***PC;
func_4896883280:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4896883280_op0;
        break;
        case 1:
            PC = func_4896883280_op1;
        break;
    }
    goto ***PC;
func_4896883584:
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
            PC = func_4896883584_op0;
        break;
        case 1:
            PC = func_4896883584_op1;
        break;
        case 2:
            PC = func_4896883584_op2;
        break;
    }
    goto ***PC;
func_4896883936:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4896883936_op0;
        break;
        case 1:
            PC = func_4896883936_op1;
        break;
        case 2:
            PC = func_4896883936_op2;
        break;
        case 3:
            PC = func_4896883936_op3;
        break;
        case 4:
            PC = func_4896883936_op4;
        break;
        case 5:
            PC = func_4896883936_op5;
        break;
        case 6:
            PC = func_4896883936_op6;
        break;
        case 7:
            PC = func_4896883936_op7;
        break;
        case 8:
            PC = func_4896883936_op8;
        break;
        case 9:
            PC = func_4896883936_op9;
        break;
    }
    goto ***PC;
func_4896883648:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4896883648_op0;
        break;
        case 1:
            PC = func_4896883648_op1;
        break;
    }
    goto ***PC;
func_4896883200:
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
            PC = func_4896883200_op0;
        break;
    }
    goto ***PC;
func_4896883072:
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
            PC = func_4896883072_op0;
        break;
    }
    goto ***PC;
func_4896884400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4896884400_op0;
        break;
        case 1:
            PC = func_4896884400_op1;
        break;
        case 2:
            PC = func_4896884400_op2;
        break;
        case 3:
            PC = func_4896884400_op3;
        break;
        case 4:
            PC = func_4896884400_op4;
        break;
        case 5:
            PC = func_4896884400_op5;
        break;
        case 6:
            PC = func_4896884400_op6;
        break;
        case 7:
            PC = func_4896884400_op7;
        break;
        case 8:
            PC = func_4896884400_op8;
        break;
        case 9:
            PC = func_4896884400_op9;
        break;
    }
    goto ***PC;
func_4896883440:
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
            PC = func_4896883440_op0;
        break;
        case 1:
            PC = func_4896883440_op1;
        break;
        case 2:
            PC = func_4896883440_op2;
        break;
    }
    goto ***PC;
func_4896884064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4896884064_op0;
        break;
        case 1:
            PC = func_4896884064_op1;
        break;
    }
    goto ***PC;
func_4896884192:
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
            PC = func_4896884192_op0;
        break;
    }
    goto ***PC;
func_4896884320:
    extend(105);
    extend(100);
    NEXT();
    goto ***PC;
func_4896884816:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto ***PC;
func_4896884944:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto ***PC;
func_4896885104:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto ***PC;
func_4896885312:
    extend(42);
    NEXT();
    goto ***PC;
func_4896885440:
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
    PC = exp_4896885440;
    goto ***PC;
func_4896885824:
    extend(44);
    NEXT();
    goto ***PC;
func_4896884688:
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
    PC = exp_4896884688;
    goto ***PC;
func_4896886176:
    extend(61);
    NEXT();
    goto ***PC;
func_4896883504:
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
    PC = exp_4896883504;
    goto ***PC;
func_4896886368:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_4896886496:
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
    PC = exp_4896886496;
    goto ***PC;
func_4896886624:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_4896887088:
    extend(48);
    NEXT();
    goto ***PC;
func_4896885232:
    extend(49);
    NEXT();
    goto ***PC;
func_4896887280:
    extend(50);
    NEXT();
    goto ***PC;
func_4896887440:
    extend(51);
    NEXT();
    goto ***PC;
func_4896887568:
    extend(52);
    NEXT();
    goto ***PC;
func_4896887760:
    extend(53);
    NEXT();
    goto ***PC;
func_4896887888:
    extend(54);
    NEXT();
    goto ***PC;
func_4896888016:
    extend(55);
    NEXT();
    goto ***PC;
func_4896888144:
    extend(56);
    NEXT();
    goto ***PC;
func_4896887696:
    extend(57);
    NEXT();
    goto ***PC;
func_4896885952:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4896885952;
    goto ***PC;
func_4896884576:
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
    PC = exp_4896884576;
    goto ***PC;
func_4896888784:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto ***PC;
func_4896888912:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto ***PC;
func_4896889296:
    extend(97);
    NEXT();
    goto ***PC;
func_4896889424:
    extend(98);
    NEXT();
    goto ***PC;
func_4896889552:
    extend(99);
    NEXT();
    goto ***PC;
func_4896889712:
    extend(100);
    NEXT();
    goto ***PC;
func_4896889840:
    extend(101);
    NEXT();
    goto ***PC;
func_4896890032:
    extend(102);
    NEXT();
    goto ***PC;
func_4896890160:
    extend(103);
    NEXT();
    goto ***PC;
func_4896890288:
    extend(104);
    NEXT();
    goto ***PC;
func_4896890416:
    extend(105);
    NEXT();
    goto ***PC;
func_4896889968:
    extend(106);
    NEXT();
    goto ***PC;
func_4896889184:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_4896886816:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_4896886944:
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
func_4896889104:
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
    PC = exp_4896889104;
    goto ***PC;
func_4896890928:
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
    PC = func_4896883072_op0;
    goto ***PC;
}
