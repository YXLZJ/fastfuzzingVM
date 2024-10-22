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
        unsigned loop_limit = 7;
        static void * cf[] = {&&func_5173697136, &&func_5173707344, &&func_5173707648, &&func_5173708000, &&func_5173707712, &&func_5173707264, &&func_5173707136, &&func_5173708464, &&func_5173707504, &&func_5173708128, &&func_5173708256, &&func_5173708384, &&func_5173708880, &&func_5173709008, &&func_5173709168, &&func_5173709376, &&func_5173709504, &&func_5173709888, &&func_5173708752, &&func_5173710240, &&func_5173707568, &&func_5173710432, &&func_5173710560, &&func_5173710688, &&func_5173711152, &&func_5173709296, &&func_5173711344, &&func_5173711504, &&func_5173711632, &&func_5173711824, &&func_5173711952, &&func_5173712080, &&func_5173712208, &&func_5173711760, &&func_5173710016, &&func_5173708640, &&func_5173712848, &&func_5173712976, &&func_5173713360, &&func_5173713488, &&func_5173713616, &&func_5173713776, &&func_5173713904, &&func_5173714096, &&func_5173714224, &&func_5173714352, &&func_5173714480, &&func_5173714032, &&func_5173713248, &&func_5173710880, &&func_5173711008, &&func_5173713168, &&func_5173714992, &&RETURN, &&HALT};
        static void **func_5173697136_op0[2] = { cf+11, cf+53};
        static void **func_5173697136_op1[2] = { cf+12, cf+53};
        static void **func_5173697136_op2[2] = { cf+13, cf+53};
        static void **func_5173697136_op3[2] = { cf+14, cf+53};
        static void **func_5173707344_op0[2] = { cf+15, cf+53};
        static void **func_5173707344_op1[2] = { cf+16, cf+53};
        static void **func_5173707648_op0[2] = { cf+18, cf+53};
        static void **func_5173707648_op1[2] = { cf+20, cf+53};
        static void **func_5173707648_op2[2] = { cf+22, cf+53};
        static void **func_5173708000_op0[2] = { cf+24, cf+53};
        static void **func_5173708000_op1[2] = { cf+25, cf+53};
        static void **func_5173708000_op2[2] = { cf+26, cf+53};
        static void **func_5173708000_op3[2] = { cf+27, cf+53};
        static void **func_5173708000_op4[2] = { cf+28, cf+53};
        static void **func_5173708000_op5[2] = { cf+29, cf+53};
        static void **func_5173708000_op6[2] = { cf+30, cf+53};
        static void **func_5173708000_op7[2] = { cf+31, cf+53};
        static void **func_5173708000_op8[2] = { cf+32, cf+53};
        static void **func_5173708000_op9[2] = { cf+33, cf+53};
        static void **func_5173707712_op0[2] = { cf+3, cf+53};
        static void **func_5173707712_op1[2] = { cf+34, cf+53};
        static void **func_5173707264_op0[2] = { cf+35, cf+53};
        static void **func_5173707136_op0[2] = { cf+5, cf+54};
        static void **func_5173708464_op0[2] = { cf+38, cf+53};
        static void **func_5173708464_op1[2] = { cf+39, cf+53};
        static void **func_5173708464_op2[2] = { cf+40, cf+53};
        static void **func_5173708464_op3[2] = { cf+41, cf+53};
        static void **func_5173708464_op4[2] = { cf+42, cf+53};
        static void **func_5173708464_op5[2] = { cf+43, cf+53};
        static void **func_5173708464_op6[2] = { cf+44, cf+53};
        static void **func_5173708464_op7[2] = { cf+45, cf+53};
        static void **func_5173708464_op8[2] = { cf+46, cf+53};
        static void **func_5173708464_op9[2] = { cf+47, cf+53};
        static void **func_5173707504_op0[2] = { cf+48, cf+53};
        static void **func_5173707504_op1[2] = { cf+49, cf+53};
        static void **func_5173707504_op2[2] = { cf+50, cf+53};
        static void **func_5173708128_op0[2] = { cf+4, cf+53};
        static void **func_5173708128_op1[2] = { cf+7, cf+53};
        static void **func_5173708256_op0[2] = { cf+51, cf+53};
        static void **exp_5173709504[4] = {cf+0, cf+17, cf+1, cf+53};
        static void **exp_5173708752[4] = {cf+0, cf+19, cf+9, cf+53};
        static void **exp_5173707568[4] = {cf+2, cf+21, cf+2, cf+53};
        static void **exp_5173710560[4] = {cf+2, cf+23, cf+2, cf+53};
        static void **exp_5173710016[3] = {cf+3, cf+4, cf+53};
        static void **exp_5173708640[6] = {cf+36, cf+1, cf+37, cf+8, cf+10, cf+53};
        static void **exp_5173713168[3] = {cf+52, cf+2, cf+53};
goto LOOP;

func_5173697136:
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
            PC = func_5173697136_op0;
        break;
        case 1:
            PC = func_5173697136_op1;
        break;
        case 2:
            PC = func_5173697136_op2;
        break;
        case 3:
            PC = func_5173697136_op3;
        break;
    }
    goto ***PC;
func_5173707344:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5173707344_op0;
        break;
        case 1:
            PC = func_5173707344_op1;
        break;
    }
    goto ***PC;
func_5173707648:
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
            PC = func_5173707648_op0;
        break;
        case 1:
            PC = func_5173707648_op1;
        break;
        case 2:
            PC = func_5173707648_op2;
        break;
    }
    goto ***PC;
func_5173708000:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5173708000_op0;
        break;
        case 1:
            PC = func_5173708000_op1;
        break;
        case 2:
            PC = func_5173708000_op2;
        break;
        case 3:
            PC = func_5173708000_op3;
        break;
        case 4:
            PC = func_5173708000_op4;
        break;
        case 5:
            PC = func_5173708000_op5;
        break;
        case 6:
            PC = func_5173708000_op6;
        break;
        case 7:
            PC = func_5173708000_op7;
        break;
        case 8:
            PC = func_5173708000_op8;
        break;
        case 9:
            PC = func_5173708000_op9;
        break;
    }
    goto ***PC;
func_5173707712:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5173707712_op0;
        break;
        case 1:
            PC = func_5173707712_op1;
        break;
    }
    goto ***PC;
func_5173707264:
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
            PC = func_5173707264_op0;
        break;
    }
    goto ***PC;
func_5173707136:
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
            PC = func_5173707136_op0;
        break;
    }
    goto ***PC;
func_5173708464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5173708464_op0;
        break;
        case 1:
            PC = func_5173708464_op1;
        break;
        case 2:
            PC = func_5173708464_op2;
        break;
        case 3:
            PC = func_5173708464_op3;
        break;
        case 4:
            PC = func_5173708464_op4;
        break;
        case 5:
            PC = func_5173708464_op5;
        break;
        case 6:
            PC = func_5173708464_op6;
        break;
        case 7:
            PC = func_5173708464_op7;
        break;
        case 8:
            PC = func_5173708464_op8;
        break;
        case 9:
            PC = func_5173708464_op9;
        break;
    }
    goto ***PC;
func_5173707504:
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
            PC = func_5173707504_op0;
        break;
        case 1:
            PC = func_5173707504_op1;
        break;
        case 2:
            PC = func_5173707504_op2;
        break;
    }
    goto ***PC;
func_5173708128:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5173708128_op0;
        break;
        case 1:
            PC = func_5173708128_op1;
        break;
    }
    goto ***PC;
func_5173708256:
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
            PC = func_5173708256_op0;
        break;
    }
    goto ***PC;
func_5173708384:
    extend(105);
    extend(100);
    NEXT();
    goto ***PC;
func_5173708880:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto ***PC;
func_5173709008:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto ***PC;
func_5173709168:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto ***PC;
func_5173709376:
    extend(42);
    NEXT();
    goto ***PC;
func_5173709504:
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
    PC = exp_5173709504;
    goto ***PC;
func_5173709888:
    extend(44);
    NEXT();
    goto ***PC;
func_5173708752:
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
    PC = exp_5173708752;
    goto ***PC;
func_5173710240:
    extend(61);
    NEXT();
    goto ***PC;
func_5173707568:
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
    PC = exp_5173707568;
    goto ***PC;
func_5173710432:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_5173710560:
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
    PC = exp_5173710560;
    goto ***PC;
func_5173710688:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_5173711152:
    extend(48);
    NEXT();
    goto ***PC;
func_5173709296:
    extend(49);
    NEXT();
    goto ***PC;
func_5173711344:
    extend(50);
    NEXT();
    goto ***PC;
func_5173711504:
    extend(51);
    NEXT();
    goto ***PC;
func_5173711632:
    extend(52);
    NEXT();
    goto ***PC;
func_5173711824:
    extend(53);
    NEXT();
    goto ***PC;
func_5173711952:
    extend(54);
    NEXT();
    goto ***PC;
func_5173712080:
    extend(55);
    NEXT();
    goto ***PC;
func_5173712208:
    extend(56);
    NEXT();
    goto ***PC;
func_5173711760:
    extend(57);
    NEXT();
    goto ***PC;
func_5173710016:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5173710016;
    goto ***PC;
func_5173708640:
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
    PC = exp_5173708640;
    goto ***PC;
func_5173712848:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto ***PC;
func_5173712976:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto ***PC;
func_5173713360:
    extend(97);
    NEXT();
    goto ***PC;
func_5173713488:
    extend(98);
    NEXT();
    goto ***PC;
func_5173713616:
    extend(99);
    NEXT();
    goto ***PC;
func_5173713776:
    extend(100);
    NEXT();
    goto ***PC;
func_5173713904:
    extend(101);
    NEXT();
    goto ***PC;
func_5173714096:
    extend(102);
    NEXT();
    goto ***PC;
func_5173714224:
    extend(103);
    NEXT();
    goto ***PC;
func_5173714352:
    extend(104);
    NEXT();
    goto ***PC;
func_5173714480:
    extend(105);
    NEXT();
    goto ***PC;
func_5173714032:
    extend(106);
    NEXT();
    goto ***PC;
func_5173713248:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_5173710880:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_5173711008:
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
func_5173713168:
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
    PC = exp_5173713168;
    goto ***PC;
func_5173714992:
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
    PC = func_5173707136_op0;
    goto ***PC;
}
