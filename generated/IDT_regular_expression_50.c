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
        unsigned loop_limit = 10;
        static void * cf[] = {&&func_5022708800, &&func_5022725312, &&func_5022725520, &&func_5022725728, &&func_5022725184, &&func_5022726384, &&func_5022726512, &&func_5022726288, &&func_5022726064, &&func_5022728080, &&func_5022727200, &&func_5022726640, &&func_5022726768, &&func_5022726896, &&func_5022727024, &&func_5022727328, &&func_5022725984, &&func_5022726128, &&func_5022727776, &&func_5022727904, &&func_5022728208, &&func_5022728336, &&func_5022728864, &&func_5022728544, &&func_5022728464, &&func_5022728736, &&func_5022729056, &&func_5022729184, &&func_5022729680, &&func_5022729808, &&func_5022729936, &&func_5022730096, &&func_5022730224, &&func_5022727584, &&func_5022730800, &&func_5022730928, &&func_5022731056, &&func_5022727520, &&func_5022729376, &&func_5022731376, &&func_5022731504, &&func_5022731632, &&func_5022733104, &&func_5022733232, &&func_5022733360, &&func_5022733520, &&func_5022733648, &&func_5022733840, &&func_5022733968, &&func_5022734096, &&func_5022734224, &&func_5022733776, &&func_5022734544, &&func_5022734672, &&func_5022734800, &&func_5022734928, &&func_5022735056, &&func_5022735184, &&func_5022735312, &&func_5022734352, &&func_5022735696, &&func_5022735824, &&func_5022735952, &&func_5022736080, &&func_5022736208, &&func_5022730352, &&func_5022730480, &&func_5022730608, &&func_5022730736, &&func_5022736336, &&func_5022736464, &&func_5022736592, &&func_5022736720, &&func_5022736848, &&func_5022736976, &&func_5022735440, &&func_5022735568, &&func_5022737616, &&func_5022737744, &&func_5022737872, &&func_5022738000, &&func_5022738128, &&func_5022738256, &&func_5022738384, &&func_5022738512, &&func_5022738640, &&func_5022738768, &&func_5022738896, &&func_5022739024, &&func_5022739152, &&func_5022739280, &&func_5022739408, &&func_5022739536, &&func_5022739664, &&func_5022732192, &&func_5022732352, &&func_5022732480, &&func_5022732672, &&func_5022732800, &&func_5022732608, &&func_5022739856, &&func_5022739984, &&func_5022740112, &&func_5022731760, &&func_5022731888, &&func_5022729584, &&func_5022740240, &&func_5022740368, &&func_5022740496, &&func_5022729504, &&func_5022740624, &&func_5022741280, &&func_5022741424, &&func_5022741584, &&func_5022741712, &&func_5022741904, &&func_5022742032, &&func_5022742160, &&func_5022742288, &&func_5022741840, &&func_5022742608, &&func_5022740912, &&RETURN, &&HALT};
        static void **func_5022708800_op0[2] = { cf+23, cf+122};
        static void **func_5022708800_op1[2] = { cf+19, cf+122};
        static void **func_5022725312_op0[2] = { cf+24, cf+122};
        static void **func_5022725520_op0[2] = { cf+20, cf+122};
        static void **func_5022725520_op1[2] = { cf+13, cf+122};
        static void **func_5022725520_op2[2] = { cf+6, cf+122};
        static void **func_5022725728_op0[2] = { cf+12, cf+122};
        static void **func_5022725728_op1[2] = { cf+25, cf+122};
        static void **func_5022725184_op0[2] = { cf+27, cf+122};
        static void **func_5022726384_op0[2] = { cf+28, cf+122};
        static void **func_5022726384_op1[2] = { cf+29, cf+122};
        static void **func_5022726384_op2[2] = { cf+30, cf+122};
        static void **func_5022726384_op3[2] = { cf+31, cf+122};
        static void **func_5022726384_op4[2] = { cf+32, cf+122};
        static void **func_5022726384_op5[2] = { cf+33, cf+122};
        static void **func_5022726384_op6[2] = { cf+34, cf+122};
        static void **func_5022726384_op7[2] = { cf+35, cf+122};
        static void **func_5022726384_op8[2] = { cf+36, cf+122};
        static void **func_5022726384_op9[2] = { cf+37, cf+122};
        static void **func_5022726512_op0[2] = { cf+8, cf+122};
        static void **func_5022726512_op1[2] = { cf+1, cf+122};
        static void **func_5022726512_op2[2] = { cf+7, cf+122};
        static void **func_5022726512_op3[2] = { cf+3, cf+122};
        static void **func_5022726512_op4[2] = { cf+18, cf+122};
        static void **func_5022726288_op0[2] = { cf+38, cf+122};
        static void **func_5022726064_op0[2] = { cf+39, cf+122};
        static void **func_5022728080_op0[2] = { cf+42, cf+122};
        static void **func_5022728080_op1[2] = { cf+43, cf+122};
        static void **func_5022728080_op2[2] = { cf+44, cf+122};
        static void **func_5022728080_op3[2] = { cf+45, cf+122};
        static void **func_5022728080_op4[2] = { cf+46, cf+122};
        static void **func_5022728080_op5[2] = { cf+47, cf+122};
        static void **func_5022728080_op6[2] = { cf+48, cf+122};
        static void **func_5022728080_op7[2] = { cf+49, cf+122};
        static void **func_5022728080_op8[2] = { cf+50, cf+122};
        static void **func_5022728080_op9[2] = { cf+51, cf+122};
        static void **func_5022728080_op10[2] = { cf+52, cf+122};
        static void **func_5022728080_op11[2] = { cf+53, cf+122};
        static void **func_5022728080_op12[2] = { cf+54, cf+122};
        static void **func_5022728080_op13[2] = { cf+55, cf+122};
        static void **func_5022728080_op14[2] = { cf+56, cf+122};
        static void **func_5022728080_op15[2] = { cf+57, cf+122};
        static void **func_5022728080_op16[2] = { cf+58, cf+122};
        static void **func_5022728080_op17[2] = { cf+59, cf+122};
        static void **func_5022728080_op18[2] = { cf+60, cf+122};
        static void **func_5022728080_op19[2] = { cf+61, cf+122};
        static void **func_5022728080_op20[2] = { cf+62, cf+122};
        static void **func_5022728080_op21[2] = { cf+63, cf+122};
        static void **func_5022728080_op22[2] = { cf+64, cf+122};
        static void **func_5022728080_op23[2] = { cf+65, cf+122};
        static void **func_5022728080_op24[2] = { cf+66, cf+122};
        static void **func_5022728080_op25[2] = { cf+67, cf+122};
        static void **func_5022728080_op26[2] = { cf+68, cf+122};
        static void **func_5022728080_op27[2] = { cf+69, cf+122};
        static void **func_5022728080_op28[2] = { cf+70, cf+122};
        static void **func_5022728080_op29[2] = { cf+71, cf+122};
        static void **func_5022728080_op30[2] = { cf+72, cf+122};
        static void **func_5022728080_op31[2] = { cf+73, cf+122};
        static void **func_5022728080_op32[2] = { cf+74, cf+122};
        static void **func_5022728080_op33[2] = { cf+75, cf+122};
        static void **func_5022728080_op34[2] = { cf+76, cf+122};
        static void **func_5022728080_op35[2] = { cf+77, cf+122};
        static void **func_5022728080_op36[2] = { cf+78, cf+122};
        static void **func_5022728080_op37[2] = { cf+79, cf+122};
        static void **func_5022728080_op38[2] = { cf+80, cf+122};
        static void **func_5022728080_op39[2] = { cf+81, cf+122};
        static void **func_5022728080_op40[2] = { cf+82, cf+122};
        static void **func_5022728080_op41[2] = { cf+83, cf+122};
        static void **func_5022728080_op42[2] = { cf+84, cf+122};
        static void **func_5022728080_op43[2] = { cf+85, cf+122};
        static void **func_5022728080_op44[2] = { cf+86, cf+122};
        static void **func_5022728080_op45[2] = { cf+87, cf+122};
        static void **func_5022728080_op46[2] = { cf+88, cf+122};
        static void **func_5022728080_op47[2] = { cf+89, cf+122};
        static void **func_5022728080_op48[2] = { cf+90, cf+122};
        static void **func_5022728080_op49[2] = { cf+91, cf+122};
        static void **func_5022728080_op50[2] = { cf+92, cf+122};
        static void **func_5022728080_op51[2] = { cf+93, cf+122};
        static void **func_5022727200_op0[2] = { cf+26, cf+122};
        static void **func_5022727200_op1[2] = { cf+24, cf+122};
        static void **func_5022727200_op2[2] = { cf+94, cf+122};
        static void **func_5022727200_op3[2] = { cf+95, cf+122};
        static void **func_5022727200_op4[2] = { cf+96, cf+122};
        static void **func_5022727200_op5[2] = { cf+97, cf+122};
        static void **func_5022727200_op6[2] = { cf+38, cf+122};
        static void **func_5022727200_op7[2] = { cf+98, cf+122};
        static void **func_5022727200_op8[2] = { cf+40, cf+122};
        static void **func_5022727200_op9[2] = { cf+41, cf+122};
        static void **func_5022727200_op10[2] = { cf+99, cf+122};
        static void **func_5022727200_op11[2] = { cf+100, cf+122};
        static void **func_5022727200_op12[2] = { cf+101, cf+122};
        static void **func_5022727200_op13[2] = { cf+102, cf+122};
        static void **func_5022726640_op0[2] = { cf+103, cf+122};
        static void **func_5022726768_op0[2] = { cf+9, cf+122};
        static void **func_5022726768_op1[2] = { cf+5, cf+122};
        static void **func_5022726768_op2[2] = { cf+22, cf+122};
        static void **func_5022726896_op0[2] = { cf+105, cf+122};
        static void **func_5022727024_op0[2] = { cf+106, cf+122};
        static void **func_5022727328_op0[2] = { cf+107, cf+122};
        static void **func_5022725984_op0[2] = { cf+15, cf+122};
        static void **func_5022725984_op1[2] = { cf+3, cf+122};
        static void **func_5022726128_op0[2] = { cf+16, cf+122};
        static void **func_5022726128_op1[2] = { cf+109, cf+122};
        static void **func_5022727776_op0[2] = { cf+14, cf+122};
        static void **func_5022727776_op1[2] = { cf+11, cf+122};
        static void **func_5022727904_op0[2] = { cf+4, cf+122};
        static void **func_5022727904_op1[2] = { cf+2, cf+122};
        static void **func_5022728208_op0[2] = { cf+110, cf+122};
        static void **func_5022728336_op0[2] = { cf+0, cf+123};
        static void **func_5022728864_op0[2] = { cf+111, cf+122};
        static void **func_5022728864_op1[2] = { cf+108, cf+122};
        static void **func_5022728864_op2[2] = { cf+112, cf+122};
        static void **func_5022728864_op3[2] = { cf+113, cf+122};
        static void **func_5022728864_op4[2] = { cf+114, cf+122};
        static void **func_5022728864_op5[2] = { cf+115, cf+122};
        static void **func_5022728864_op6[2] = { cf+116, cf+122};
        static void **func_5022728864_op7[2] = { cf+117, cf+122};
        static void **func_5022728864_op8[2] = { cf+118, cf+122};
        static void **func_5022728864_op9[2] = { cf+119, cf+122};
        static void **func_5022728864_op10[2] = { cf+120, cf+122};
        static void **func_5022728544_op0[2] = { cf+121, cf+122};
        static void **exp_5022728736[3] = {cf+26, cf+10, cf+122};
        static void **exp_5022729184[3] = {cf+19, cf+2, cf+122};
        static void **exp_5022731376[4] = {cf+40, cf+0, cf+41, cf+122};
        static void **exp_5022731760[4] = {cf+104, cf+17, cf+100, cf+122};
        static void **exp_5022729584[3] = {cf+6, cf+95, cf+122};
        static void **exp_5022740240[4] = {cf+99, cf+17, cf+100, cf+122};
        static void **exp_5022740368[4] = {cf+3, cf+108, cf+3, cf+122};
        static void **exp_5022729504[3] = {cf+16, cf+17, cf+122};
        static void **exp_5022740624[3] = {cf+6, cf+94, cf+122};
        static void **exp_5022740912[4] = {cf+0, cf+98, cf+19, cf+122};
goto LOOP;

func_5022708800:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5022708800_op0;
        break;
        case 1:
            PC = func_5022708800_op1;
        break;
    }
    goto ***PC;
func_5022725312:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022725312_op0;
        break;
    }
    goto ***PC;
func_5022725520:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5022725520_op0;
        break;
        case 1:
            PC = func_5022725520_op1;
        break;
        case 2:
            PC = func_5022725520_op2;
        break;
    }
    goto ***PC;
func_5022725728:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5022725728_op0;
        break;
        case 1:
            PC = func_5022725728_op1;
        break;
    }
    goto ***PC;
func_5022725184:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022725184_op0;
        break;
    }
    goto ***PC;
func_5022726384:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5022726384_op0;
        break;
        case 1:
            PC = func_5022726384_op1;
        break;
        case 2:
            PC = func_5022726384_op2;
        break;
        case 3:
            PC = func_5022726384_op3;
        break;
        case 4:
            PC = func_5022726384_op4;
        break;
        case 5:
            PC = func_5022726384_op5;
        break;
        case 6:
            PC = func_5022726384_op6;
        break;
        case 7:
            PC = func_5022726384_op7;
        break;
        case 8:
            PC = func_5022726384_op8;
        break;
        case 9:
            PC = func_5022726384_op9;
        break;
    }
    goto ***PC;
func_5022726512:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5022726512_op0;
        break;
        case 1:
            PC = func_5022726512_op1;
        break;
        case 2:
            PC = func_5022726512_op2;
        break;
        case 3:
            PC = func_5022726512_op3;
        break;
        case 4:
            PC = func_5022726512_op4;
        break;
    }
    goto ***PC;
func_5022726288:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022726288_op0;
        break;
    }
    goto ***PC;
func_5022726064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022726064_op0;
        break;
    }
    goto ***PC;
func_5022728080:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5022728080_op0;
        break;
        case 1:
            PC = func_5022728080_op1;
        break;
        case 2:
            PC = func_5022728080_op2;
        break;
        case 3:
            PC = func_5022728080_op3;
        break;
        case 4:
            PC = func_5022728080_op4;
        break;
        case 5:
            PC = func_5022728080_op5;
        break;
        case 6:
            PC = func_5022728080_op6;
        break;
        case 7:
            PC = func_5022728080_op7;
        break;
        case 8:
            PC = func_5022728080_op8;
        break;
        case 9:
            PC = func_5022728080_op9;
        break;
        case 10:
            PC = func_5022728080_op10;
        break;
        case 11:
            PC = func_5022728080_op11;
        break;
        case 12:
            PC = func_5022728080_op12;
        break;
        case 13:
            PC = func_5022728080_op13;
        break;
        case 14:
            PC = func_5022728080_op14;
        break;
        case 15:
            PC = func_5022728080_op15;
        break;
        case 16:
            PC = func_5022728080_op16;
        break;
        case 17:
            PC = func_5022728080_op17;
        break;
        case 18:
            PC = func_5022728080_op18;
        break;
        case 19:
            PC = func_5022728080_op19;
        break;
        case 20:
            PC = func_5022728080_op20;
        break;
        case 21:
            PC = func_5022728080_op21;
        break;
        case 22:
            PC = func_5022728080_op22;
        break;
        case 23:
            PC = func_5022728080_op23;
        break;
        case 24:
            PC = func_5022728080_op24;
        break;
        case 25:
            PC = func_5022728080_op25;
        break;
        case 26:
            PC = func_5022728080_op26;
        break;
        case 27:
            PC = func_5022728080_op27;
        break;
        case 28:
            PC = func_5022728080_op28;
        break;
        case 29:
            PC = func_5022728080_op29;
        break;
        case 30:
            PC = func_5022728080_op30;
        break;
        case 31:
            PC = func_5022728080_op31;
        break;
        case 32:
            PC = func_5022728080_op32;
        break;
        case 33:
            PC = func_5022728080_op33;
        break;
        case 34:
            PC = func_5022728080_op34;
        break;
        case 35:
            PC = func_5022728080_op35;
        break;
        case 36:
            PC = func_5022728080_op36;
        break;
        case 37:
            PC = func_5022728080_op37;
        break;
        case 38:
            PC = func_5022728080_op38;
        break;
        case 39:
            PC = func_5022728080_op39;
        break;
        case 40:
            PC = func_5022728080_op40;
        break;
        case 41:
            PC = func_5022728080_op41;
        break;
        case 42:
            PC = func_5022728080_op42;
        break;
        case 43:
            PC = func_5022728080_op43;
        break;
        case 44:
            PC = func_5022728080_op44;
        break;
        case 45:
            PC = func_5022728080_op45;
        break;
        case 46:
            PC = func_5022728080_op46;
        break;
        case 47:
            PC = func_5022728080_op47;
        break;
        case 48:
            PC = func_5022728080_op48;
        break;
        case 49:
            PC = func_5022728080_op49;
        break;
        case 50:
            PC = func_5022728080_op50;
        break;
        case 51:
            PC = func_5022728080_op51;
        break;
    }
    goto ***PC;
func_5022727200:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5022727200_op0;
        break;
        case 1:
            PC = func_5022727200_op1;
        break;
        case 2:
            PC = func_5022727200_op2;
        break;
        case 3:
            PC = func_5022727200_op3;
        break;
        case 4:
            PC = func_5022727200_op4;
        break;
        case 5:
            PC = func_5022727200_op5;
        break;
        case 6:
            PC = func_5022727200_op6;
        break;
        case 7:
            PC = func_5022727200_op7;
        break;
        case 8:
            PC = func_5022727200_op8;
        break;
        case 9:
            PC = func_5022727200_op9;
        break;
        case 10:
            PC = func_5022727200_op10;
        break;
        case 11:
            PC = func_5022727200_op11;
        break;
        case 12:
            PC = func_5022727200_op12;
        break;
        case 13:
            PC = func_5022727200_op13;
        break;
    }
    goto ***PC;
func_5022726640:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022726640_op0;
        break;
    }
    goto ***PC;
func_5022726768:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5022726768_op0;
        break;
        case 1:
            PC = func_5022726768_op1;
        break;
        case 2:
            PC = func_5022726768_op2;
        break;
    }
    goto ***PC;
func_5022726896:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022726896_op0;
        break;
    }
    goto ***PC;
func_5022727024:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022727024_op0;
        break;
    }
    goto ***PC;
func_5022727328:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022727328_op0;
        break;
    }
    goto ***PC;
func_5022725984:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5022725984_op0;
        break;
        case 1:
            PC = func_5022725984_op1;
        break;
    }
    goto ***PC;
func_5022726128:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5022726128_op0;
        break;
        case 1:
            PC = func_5022726128_op1;
        break;
    }
    goto ***PC;
func_5022727776:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5022727776_op0;
        break;
        case 1:
            PC = func_5022727776_op1;
        break;
    }
    goto ***PC;
func_5022727904:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5022727904_op0;
        break;
        case 1:
            PC = func_5022727904_op1;
        break;
    }
    goto ***PC;
func_5022728208:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022728208_op0;
        break;
    }
    goto ***PC;
func_5022728336:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022728336_op0;
        break;
    }
    goto ***PC;
func_5022728864:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto ***PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5022728864_op0;
        break;
        case 1:
            PC = func_5022728864_op1;
        break;
        case 2:
            PC = func_5022728864_op2;
        break;
        case 3:
            PC = func_5022728864_op3;
        break;
        case 4:
            PC = func_5022728864_op4;
        break;
        case 5:
            PC = func_5022728864_op5;
        break;
        case 6:
            PC = func_5022728864_op6;
        break;
        case 7:
            PC = func_5022728864_op7;
        break;
        case 8:
            PC = func_5022728864_op8;
        break;
        case 9:
            PC = func_5022728864_op9;
        break;
        case 10:
            PC = func_5022728864_op10;
        break;
    }
    goto ***PC;
func_5022728544:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022728544_op0;
        break;
    }
    goto ***PC;
func_5022728464:
    extend(46);
    NEXT();
    goto ***PC;
func_5022728736:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5022728736;
    goto ***PC;
func_5022729056:
    extend(92);
    NEXT();
    goto ***PC;
func_5022729184:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5022729184;
    goto ***PC;
func_5022729680:
    extend(48);
    NEXT();
    goto ***PC;
func_5022729808:
    extend(49);
    NEXT();
    goto ***PC;
func_5022729936:
    extend(50);
    NEXT();
    goto ***PC;
func_5022730096:
    extend(51);
    NEXT();
    goto ***PC;
func_5022730224:
    extend(52);
    NEXT();
    goto ***PC;
func_5022727584:
    extend(53);
    NEXT();
    goto ***PC;
func_5022730800:
    extend(54);
    NEXT();
    goto ***PC;
func_5022730928:
    extend(55);
    NEXT();
    goto ***PC;
func_5022731056:
    extend(56);
    NEXT();
    goto ***PC;
func_5022727520:
    extend(57);
    NEXT();
    goto ***PC;
func_5022729376:
    extend(36);
    NEXT();
    goto ***PC;
func_5022731376:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5022731376;
    goto ***PC;
func_5022731504:
    extend(40);
    NEXT();
    goto ***PC;
func_5022731632:
    extend(41);
    NEXT();
    goto ***PC;
func_5022733104:
    extend(97);
    NEXT();
    goto ***PC;
func_5022733232:
    extend(98);
    NEXT();
    goto ***PC;
func_5022733360:
    extend(99);
    NEXT();
    goto ***PC;
func_5022733520:
    extend(100);
    NEXT();
    goto ***PC;
func_5022733648:
    extend(101);
    NEXT();
    goto ***PC;
func_5022733840:
    extend(102);
    NEXT();
    goto ***PC;
func_5022733968:
    extend(103);
    NEXT();
    goto ***PC;
func_5022734096:
    extend(104);
    NEXT();
    goto ***PC;
func_5022734224:
    extend(105);
    NEXT();
    goto ***PC;
func_5022733776:
    extend(106);
    NEXT();
    goto ***PC;
func_5022734544:
    extend(107);
    NEXT();
    goto ***PC;
func_5022734672:
    extend(108);
    NEXT();
    goto ***PC;
func_5022734800:
    extend(109);
    NEXT();
    goto ***PC;
func_5022734928:
    extend(110);
    NEXT();
    goto ***PC;
func_5022735056:
    extend(111);
    NEXT();
    goto ***PC;
func_5022735184:
    extend(112);
    NEXT();
    goto ***PC;
func_5022735312:
    extend(113);
    NEXT();
    goto ***PC;
func_5022734352:
    extend(114);
    NEXT();
    goto ***PC;
func_5022735696:
    extend(115);
    NEXT();
    goto ***PC;
func_5022735824:
    extend(116);
    NEXT();
    goto ***PC;
func_5022735952:
    extend(117);
    NEXT();
    goto ***PC;
func_5022736080:
    extend(118);
    NEXT();
    goto ***PC;
func_5022736208:
    extend(119);
    NEXT();
    goto ***PC;
func_5022730352:
    extend(120);
    NEXT();
    goto ***PC;
func_5022730480:
    extend(121);
    NEXT();
    goto ***PC;
func_5022730608:
    extend(122);
    NEXT();
    goto ***PC;
func_5022730736:
    extend(65);
    NEXT();
    goto ***PC;
func_5022736336:
    extend(66);
    NEXT();
    goto ***PC;
func_5022736464:
    extend(67);
    NEXT();
    goto ***PC;
func_5022736592:
    extend(68);
    NEXT();
    goto ***PC;
func_5022736720:
    extend(69);
    NEXT();
    goto ***PC;
func_5022736848:
    extend(70);
    NEXT();
    goto ***PC;
func_5022736976:
    extend(71);
    NEXT();
    goto ***PC;
func_5022735440:
    extend(72);
    NEXT();
    goto ***PC;
func_5022735568:
    extend(73);
    NEXT();
    goto ***PC;
func_5022737616:
    extend(74);
    NEXT();
    goto ***PC;
func_5022737744:
    extend(75);
    NEXT();
    goto ***PC;
func_5022737872:
    extend(76);
    NEXT();
    goto ***PC;
func_5022738000:
    extend(77);
    NEXT();
    goto ***PC;
func_5022738128:
    extend(78);
    NEXT();
    goto ***PC;
func_5022738256:
    extend(79);
    NEXT();
    goto ***PC;
func_5022738384:
    extend(80);
    NEXT();
    goto ***PC;
func_5022738512:
    extend(81);
    NEXT();
    goto ***PC;
func_5022738640:
    extend(82);
    NEXT();
    goto ***PC;
func_5022738768:
    extend(83);
    NEXT();
    goto ***PC;
func_5022738896:
    extend(84);
    NEXT();
    goto ***PC;
func_5022739024:
    extend(85);
    NEXT();
    goto ***PC;
func_5022739152:
    extend(86);
    NEXT();
    goto ***PC;
func_5022739280:
    extend(87);
    NEXT();
    goto ***PC;
func_5022739408:
    extend(88);
    NEXT();
    goto ***PC;
func_5022739536:
    extend(89);
    NEXT();
    goto ***PC;
func_5022739664:
    extend(90);
    NEXT();
    goto ***PC;
func_5022732192:
    extend(42);
    NEXT();
    goto ***PC;
func_5022732352:
    extend(43);
    NEXT();
    goto ***PC;
func_5022732480:
    extend(63);
    NEXT();
    goto ***PC;
func_5022732672:
    extend(94);
    NEXT();
    goto ***PC;
func_5022732800:
    extend(124);
    NEXT();
    goto ***PC;
func_5022732608:
    extend(91);
    NEXT();
    goto ***PC;
func_5022739856:
    extend(93);
    NEXT();
    goto ***PC;
func_5022739984:
    extend(123);
    NEXT();
    goto ***PC;
func_5022740112:
    extend(125);
    NEXT();
    goto ***PC;
func_5022731760:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5022731760;
    goto ***PC;
func_5022731888:
    extend(91);
    extend(94);
    NEXT();
    goto ***PC;
func_5022729584:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5022729584;
    goto ***PC;
func_5022740240:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5022740240;
    goto ***PC;
func_5022740368:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5022740368;
    goto ***PC;
func_5022740496:
    extend(45);
    NEXT();
    goto ***PC;
func_5022729504:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5022729504;
    goto ***PC;
func_5022740624:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5022740624;
    goto ***PC;
func_5022741280:
    extend(95);
    NEXT();
    goto ***PC;
func_5022741424:
    extend(64);
    NEXT();
    goto ***PC;
func_5022741584:
    extend(35);
    NEXT();
    goto ***PC;
func_5022741712:
    extend(37);
    NEXT();
    goto ***PC;
func_5022741904:
    extend(38);
    NEXT();
    goto ***PC;
func_5022742032:
    extend(61);
    NEXT();
    goto ***PC;
func_5022742160:
    extend(126);
    NEXT();
    goto ***PC;
func_5022742288:
    extend(96);
    NEXT();
    goto ***PC;
func_5022741840:
    extend(39);
    NEXT();
    goto ***PC;
func_5022742608:
    extend(34);
    NEXT();
    goto ***PC;
func_5022740912:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5022740912;
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
    PC = func_5022728336_op0;
    goto ***PC;
}
