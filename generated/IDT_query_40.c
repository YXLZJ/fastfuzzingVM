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
        unsigned loop_limit = 7;
        static void * cf[] = {&&func_5106588272, &&func_5106598480, &&func_5106598784, &&func_5106599136, &&func_5106598848, &&func_5106598400, &&func_5106598272, &&func_5106599600, &&func_5106598640, &&func_5106599264, &&func_5106599392, &&func_5106599520, &&func_5106600016, &&func_5106600144, &&func_5106600304, &&func_5106600512, &&func_5106600640, &&func_5106601024, &&func_5106599888, &&func_5106601376, &&func_5106598704, &&func_5106601568, &&func_5106601696, &&func_5106601824, &&func_5106602288, &&func_5106600432, &&func_5106602480, &&func_5106602640, &&func_5106602768, &&func_5106602960, &&func_5106603088, &&func_5106603216, &&func_5106603344, &&func_5106602896, &&func_5106601152, &&func_5106599776, &&func_5106603984, &&func_5106604112, &&func_5106604496, &&func_5106604624, &&func_5106604752, &&func_5106604912, &&func_5106605040, &&func_5106605232, &&func_5106605360, &&func_5106605488, &&func_5106605616, &&func_5106605168, &&func_5106604384, &&func_5106602016, &&func_5106602144, &&func_5106604304, &&func_5106606128, &&RETURN, &&HALT};
        static void **func_5106588272_op0[2] = { cf+11, cf+53};
        static void **func_5106588272_op1[2] = { cf+12, cf+53};
        static void **func_5106588272_op2[2] = { cf+13, cf+53};
        static void **func_5106588272_op3[2] = { cf+14, cf+53};
        static void **func_5106598480_op0[2] = { cf+15, cf+53};
        static void **func_5106598480_op1[2] = { cf+16, cf+53};
        static void **func_5106598784_op0[2] = { cf+18, cf+53};
        static void **func_5106598784_op1[2] = { cf+20, cf+53};
        static void **func_5106598784_op2[2] = { cf+22, cf+53};
        static void **func_5106599136_op0[2] = { cf+24, cf+53};
        static void **func_5106599136_op1[2] = { cf+25, cf+53};
        static void **func_5106599136_op2[2] = { cf+26, cf+53};
        static void **func_5106599136_op3[2] = { cf+27, cf+53};
        static void **func_5106599136_op4[2] = { cf+28, cf+53};
        static void **func_5106599136_op5[2] = { cf+29, cf+53};
        static void **func_5106599136_op6[2] = { cf+30, cf+53};
        static void **func_5106599136_op7[2] = { cf+31, cf+53};
        static void **func_5106599136_op8[2] = { cf+32, cf+53};
        static void **func_5106599136_op9[2] = { cf+33, cf+53};
        static void **func_5106598848_op0[2] = { cf+3, cf+53};
        static void **func_5106598848_op1[2] = { cf+34, cf+53};
        static void **func_5106598400_op0[2] = { cf+35, cf+53};
        static void **func_5106598272_op0[2] = { cf+5, cf+54};
        static void **func_5106599600_op0[2] = { cf+38, cf+53};
        static void **func_5106599600_op1[2] = { cf+39, cf+53};
        static void **func_5106599600_op2[2] = { cf+40, cf+53};
        static void **func_5106599600_op3[2] = { cf+41, cf+53};
        static void **func_5106599600_op4[2] = { cf+42, cf+53};
        static void **func_5106599600_op5[2] = { cf+43, cf+53};
        static void **func_5106599600_op6[2] = { cf+44, cf+53};
        static void **func_5106599600_op7[2] = { cf+45, cf+53};
        static void **func_5106599600_op8[2] = { cf+46, cf+53};
        static void **func_5106599600_op9[2] = { cf+47, cf+53};
        static void **func_5106598640_op0[2] = { cf+48, cf+53};
        static void **func_5106598640_op1[2] = { cf+49, cf+53};
        static void **func_5106598640_op2[2] = { cf+50, cf+53};
        static void **func_5106599264_op0[2] = { cf+4, cf+53};
        static void **func_5106599264_op1[2] = { cf+7, cf+53};
        static void **func_5106599392_op0[2] = { cf+51, cf+53};
        static void **exp_5106600640[4] = {cf+0, cf+17, cf+1, cf+53};
        static void **exp_5106599888[4] = {cf+0, cf+19, cf+9, cf+53};
        static void **exp_5106598704[4] = {cf+2, cf+21, cf+2, cf+53};
        static void **exp_5106601696[4] = {cf+2, cf+23, cf+2, cf+53};
        static void **exp_5106601152[3] = {cf+3, cf+4, cf+53};
        static void **exp_5106599776[6] = {cf+36, cf+1, cf+37, cf+8, cf+10, cf+53};
        static void **exp_5106604304[3] = {cf+52, cf+2, cf+53};
goto LOOP;

func_5106588272:
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
            PC = func_5106588272_op0;
        break;
        case 1:
            PC = func_5106588272_op1;
        break;
        case 2:
            PC = func_5106588272_op2;
        break;
        case 3:
            PC = func_5106588272_op3;
        break;
    }
    goto ***PC;
func_5106598480:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5106598480_op0;
        break;
        case 1:
            PC = func_5106598480_op1;
        break;
    }
    goto ***PC;
func_5106598784:
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
            PC = func_5106598784_op0;
        break;
        case 1:
            PC = func_5106598784_op1;
        break;
        case 2:
            PC = func_5106598784_op2;
        break;
    }
    goto ***PC;
func_5106599136:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5106599136_op0;
        break;
        case 1:
            PC = func_5106599136_op1;
        break;
        case 2:
            PC = func_5106599136_op2;
        break;
        case 3:
            PC = func_5106599136_op3;
        break;
        case 4:
            PC = func_5106599136_op4;
        break;
        case 5:
            PC = func_5106599136_op5;
        break;
        case 6:
            PC = func_5106599136_op6;
        break;
        case 7:
            PC = func_5106599136_op7;
        break;
        case 8:
            PC = func_5106599136_op8;
        break;
        case 9:
            PC = func_5106599136_op9;
        break;
    }
    goto ***PC;
func_5106598848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5106598848_op0;
        break;
        case 1:
            PC = func_5106598848_op1;
        break;
    }
    goto ***PC;
func_5106598400:
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
            PC = func_5106598400_op0;
        break;
    }
    goto ***PC;
func_5106598272:
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
            PC = func_5106598272_op0;
        break;
    }
    goto ***PC;
func_5106599600:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5106599600_op0;
        break;
        case 1:
            PC = func_5106599600_op1;
        break;
        case 2:
            PC = func_5106599600_op2;
        break;
        case 3:
            PC = func_5106599600_op3;
        break;
        case 4:
            PC = func_5106599600_op4;
        break;
        case 5:
            PC = func_5106599600_op5;
        break;
        case 6:
            PC = func_5106599600_op6;
        break;
        case 7:
            PC = func_5106599600_op7;
        break;
        case 8:
            PC = func_5106599600_op8;
        break;
        case 9:
            PC = func_5106599600_op9;
        break;
    }
    goto ***PC;
func_5106598640:
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
            PC = func_5106598640_op0;
        break;
        case 1:
            PC = func_5106598640_op1;
        break;
        case 2:
            PC = func_5106598640_op2;
        break;
    }
    goto ***PC;
func_5106599264:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5106599264_op0;
        break;
        case 1:
            PC = func_5106599264_op1;
        break;
    }
    goto ***PC;
func_5106599392:
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
            PC = func_5106599392_op0;
        break;
    }
    goto ***PC;
func_5106599520:
    extend(105);
    extend(100);
    NEXT();
    goto ***PC;
func_5106600016:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto ***PC;
func_5106600144:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto ***PC;
func_5106600304:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto ***PC;
func_5106600512:
    extend(42);
    NEXT();
    goto ***PC;
func_5106600640:
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
    PC = exp_5106600640;
    goto ***PC;
func_5106601024:
    extend(44);
    NEXT();
    goto ***PC;
func_5106599888:
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
    PC = exp_5106599888;
    goto ***PC;
func_5106601376:
    extend(61);
    NEXT();
    goto ***PC;
func_5106598704:
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
    PC = exp_5106598704;
    goto ***PC;
func_5106601568:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_5106601696:
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
    PC = exp_5106601696;
    goto ***PC;
func_5106601824:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_5106602288:
    extend(48);
    NEXT();
    goto ***PC;
func_5106600432:
    extend(49);
    NEXT();
    goto ***PC;
func_5106602480:
    extend(50);
    NEXT();
    goto ***PC;
func_5106602640:
    extend(51);
    NEXT();
    goto ***PC;
func_5106602768:
    extend(52);
    NEXT();
    goto ***PC;
func_5106602960:
    extend(53);
    NEXT();
    goto ***PC;
func_5106603088:
    extend(54);
    NEXT();
    goto ***PC;
func_5106603216:
    extend(55);
    NEXT();
    goto ***PC;
func_5106603344:
    extend(56);
    NEXT();
    goto ***PC;
func_5106602896:
    extend(57);
    NEXT();
    goto ***PC;
func_5106601152:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5106601152;
    goto ***PC;
func_5106599776:
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
    PC = exp_5106599776;
    goto ***PC;
func_5106603984:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto ***PC;
func_5106604112:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto ***PC;
func_5106604496:
    extend(97);
    NEXT();
    goto ***PC;
func_5106604624:
    extend(98);
    NEXT();
    goto ***PC;
func_5106604752:
    extend(99);
    NEXT();
    goto ***PC;
func_5106604912:
    extend(100);
    NEXT();
    goto ***PC;
func_5106605040:
    extend(101);
    NEXT();
    goto ***PC;
func_5106605232:
    extend(102);
    NEXT();
    goto ***PC;
func_5106605360:
    extend(103);
    NEXT();
    goto ***PC;
func_5106605488:
    extend(104);
    NEXT();
    goto ***PC;
func_5106605616:
    extend(105);
    NEXT();
    goto ***PC;
func_5106605168:
    extend(106);
    NEXT();
    goto ***PC;
func_5106604384:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_5106602016:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_5106602144:
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
func_5106604304:
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
    PC = exp_5106604304;
    goto ***PC;
func_5106606128:
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
    PC = func_5106598272_op0;
    goto ***PC;
}
