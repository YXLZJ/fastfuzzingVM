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
        unsigned loop_limit = 10;
        static void * cf[] = {&&func_4906310496, &&func_4906326896, &&func_4906327104, &&func_4906327312, &&func_4906326768, &&func_4906327968, &&func_4906328096, &&func_4906327872, &&func_4906327648, &&func_4906329664, &&func_4924129504, &&func_4924129440, &&func_4906328304, &&func_4906328432, &&func_4906328560, &&func_4906328688, &&func_4906328224, &&func_4906327712, &&func_4906329136, &&func_4906329264, &&func_4906329392, &&func_4906329520, &&func_4906330256, &&func_4906329872, &&func_4906329792, &&func_4906330064, &&func_4906330448, &&func_4906330576, &&func_4906331072, &&func_4906331200, &&func_4906331328, &&func_4906331488, &&func_4906331616, &&func_4906328944, &&func_4906332192, &&func_4906332320, &&func_4906332448, &&func_4906328880, &&func_4906330144, &&func_4906330992, &&func_4906332832, &&func_4906332960, &&func_4906334464, &&func_4906334592, &&func_4906334720, &&func_4906334880, &&func_4906335008, &&func_4906335200, &&func_4906335328, &&func_4906335456, &&func_4906335584, &&func_4906335136, &&func_4906335904, &&func_4906336032, &&func_4906336160, &&func_4906336288, &&func_4906336416, &&func_4906336544, &&func_4906336672, &&func_4906335712, &&func_4906337056, &&func_4906337184, &&func_4906337312, &&func_4906337440, &&func_4906337568, &&func_4906331744, &&func_4906331872, &&func_4906332000, &&func_4906332128, &&func_4906337696, &&func_4906337824, &&func_4906337952, &&func_4906338080, &&func_4906338208, &&func_4906338336, &&func_4906336800, &&func_4906336928, &&func_4906338976, &&func_4906339104, &&func_4906339232, &&func_4906339360, &&func_4906339488, &&func_4906339616, &&func_4906339744, &&func_4906339872, &&func_4906340000, &&func_4906340128, &&func_4906340256, &&func_4906340384, &&func_4906340512, &&func_4906340640, &&func_4906340768, &&func_4906340896, &&func_4906341024, &&func_4906333552, &&func_4906333712, &&func_4906333840, &&func_4906334032, &&func_4906334160, &&func_4906333968, &&func_4906341216, &&func_4906341344, &&func_4906341472, &&func_4906333088, &&func_4906333216, &&func_4906330912, &&func_4906333488, &&func_4906341664, &&func_4906341792, &&func_4906341920, &&func_4906330848, &&func_4906342672, &&func_4906342816, &&func_4906342976, &&func_4906343104, &&func_4906343296, &&func_4906343424, &&func_4906343552, &&func_4906343680, &&func_4906343232, &&func_4906344000, &&func_4906342272, &&RETURN, &&HALT};
        static void **func_4906310496_op0[2] = { cf+23, cf+122};
        static void **func_4906310496_op1[2] = { cf+19, cf+122};
        static void **func_4906326896_op0[2] = { cf+24, cf+122};
        static void **func_4906327104_op0[2] = { cf+20, cf+122};
        static void **func_4906327104_op1[2] = { cf+13, cf+122};
        static void **func_4906327104_op2[2] = { cf+6, cf+122};
        static void **func_4906327312_op0[2] = { cf+12, cf+122};
        static void **func_4906327312_op1[2] = { cf+25, cf+122};
        static void **func_4906326768_op0[2] = { cf+27, cf+122};
        static void **func_4906327968_op0[2] = { cf+28, cf+122};
        static void **func_4906327968_op1[2] = { cf+29, cf+122};
        static void **func_4906327968_op2[2] = { cf+30, cf+122};
        static void **func_4906327968_op3[2] = { cf+31, cf+122};
        static void **func_4906327968_op4[2] = { cf+32, cf+122};
        static void **func_4906327968_op5[2] = { cf+33, cf+122};
        static void **func_4906327968_op6[2] = { cf+34, cf+122};
        static void **func_4906327968_op7[2] = { cf+35, cf+122};
        static void **func_4906327968_op8[2] = { cf+36, cf+122};
        static void **func_4906327968_op9[2] = { cf+37, cf+122};
        static void **func_4906328096_op0[2] = { cf+8, cf+122};
        static void **func_4906328096_op1[2] = { cf+1, cf+122};
        static void **func_4906328096_op2[2] = { cf+7, cf+122};
        static void **func_4906328096_op3[2] = { cf+3, cf+122};
        static void **func_4906328096_op4[2] = { cf+18, cf+122};
        static void **func_4906327872_op0[2] = { cf+38, cf+122};
        static void **func_4906327648_op0[2] = { cf+39, cf+122};
        static void **func_4906329664_op0[2] = { cf+42, cf+122};
        static void **func_4906329664_op1[2] = { cf+43, cf+122};
        static void **func_4906329664_op2[2] = { cf+44, cf+122};
        static void **func_4906329664_op3[2] = { cf+45, cf+122};
        static void **func_4906329664_op4[2] = { cf+46, cf+122};
        static void **func_4906329664_op5[2] = { cf+47, cf+122};
        static void **func_4906329664_op6[2] = { cf+48, cf+122};
        static void **func_4906329664_op7[2] = { cf+49, cf+122};
        static void **func_4906329664_op8[2] = { cf+50, cf+122};
        static void **func_4906329664_op9[2] = { cf+51, cf+122};
        static void **func_4906329664_op10[2] = { cf+52, cf+122};
        static void **func_4906329664_op11[2] = { cf+53, cf+122};
        static void **func_4906329664_op12[2] = { cf+54, cf+122};
        static void **func_4906329664_op13[2] = { cf+55, cf+122};
        static void **func_4906329664_op14[2] = { cf+56, cf+122};
        static void **func_4906329664_op15[2] = { cf+57, cf+122};
        static void **func_4906329664_op16[2] = { cf+58, cf+122};
        static void **func_4906329664_op17[2] = { cf+59, cf+122};
        static void **func_4906329664_op18[2] = { cf+60, cf+122};
        static void **func_4906329664_op19[2] = { cf+61, cf+122};
        static void **func_4906329664_op20[2] = { cf+62, cf+122};
        static void **func_4906329664_op21[2] = { cf+63, cf+122};
        static void **func_4906329664_op22[2] = { cf+64, cf+122};
        static void **func_4906329664_op23[2] = { cf+65, cf+122};
        static void **func_4906329664_op24[2] = { cf+66, cf+122};
        static void **func_4906329664_op25[2] = { cf+67, cf+122};
        static void **func_4906329664_op26[2] = { cf+68, cf+122};
        static void **func_4906329664_op27[2] = { cf+69, cf+122};
        static void **func_4906329664_op28[2] = { cf+70, cf+122};
        static void **func_4906329664_op29[2] = { cf+71, cf+122};
        static void **func_4906329664_op30[2] = { cf+72, cf+122};
        static void **func_4906329664_op31[2] = { cf+73, cf+122};
        static void **func_4906329664_op32[2] = { cf+74, cf+122};
        static void **func_4906329664_op33[2] = { cf+75, cf+122};
        static void **func_4906329664_op34[2] = { cf+76, cf+122};
        static void **func_4906329664_op35[2] = { cf+77, cf+122};
        static void **func_4906329664_op36[2] = { cf+78, cf+122};
        static void **func_4906329664_op37[2] = { cf+79, cf+122};
        static void **func_4906329664_op38[2] = { cf+80, cf+122};
        static void **func_4906329664_op39[2] = { cf+81, cf+122};
        static void **func_4906329664_op40[2] = { cf+82, cf+122};
        static void **func_4906329664_op41[2] = { cf+83, cf+122};
        static void **func_4906329664_op42[2] = { cf+84, cf+122};
        static void **func_4906329664_op43[2] = { cf+85, cf+122};
        static void **func_4906329664_op44[2] = { cf+86, cf+122};
        static void **func_4906329664_op45[2] = { cf+87, cf+122};
        static void **func_4906329664_op46[2] = { cf+88, cf+122};
        static void **func_4906329664_op47[2] = { cf+89, cf+122};
        static void **func_4906329664_op48[2] = { cf+90, cf+122};
        static void **func_4906329664_op49[2] = { cf+91, cf+122};
        static void **func_4906329664_op50[2] = { cf+92, cf+122};
        static void **func_4906329664_op51[2] = { cf+93, cf+122};
        static void **func_4924129504_op0[2] = { cf+26, cf+122};
        static void **func_4924129504_op1[2] = { cf+24, cf+122};
        static void **func_4924129504_op2[2] = { cf+94, cf+122};
        static void **func_4924129504_op3[2] = { cf+95, cf+122};
        static void **func_4924129504_op4[2] = { cf+96, cf+122};
        static void **func_4924129504_op5[2] = { cf+97, cf+122};
        static void **func_4924129504_op6[2] = { cf+38, cf+122};
        static void **func_4924129504_op7[2] = { cf+98, cf+122};
        static void **func_4924129504_op8[2] = { cf+40, cf+122};
        static void **func_4924129504_op9[2] = { cf+41, cf+122};
        static void **func_4924129504_op10[2] = { cf+99, cf+122};
        static void **func_4924129504_op11[2] = { cf+100, cf+122};
        static void **func_4924129504_op12[2] = { cf+101, cf+122};
        static void **func_4924129504_op13[2] = { cf+102, cf+122};
        static void **func_4924129440_op0[2] = { cf+103, cf+122};
        static void **func_4906328304_op0[2] = { cf+9, cf+122};
        static void **func_4906328304_op1[2] = { cf+5, cf+122};
        static void **func_4906328304_op2[2] = { cf+22, cf+122};
        static void **func_4906328432_op0[2] = { cf+105, cf+122};
        static void **func_4906328560_op0[2] = { cf+106, cf+122};
        static void **func_4906328688_op0[2] = { cf+107, cf+122};
        static void **func_4906328224_op0[2] = { cf+15, cf+122};
        static void **func_4906328224_op1[2] = { cf+3, cf+122};
        static void **func_4906327712_op0[2] = { cf+16, cf+122};
        static void **func_4906327712_op1[2] = { cf+109, cf+122};
        static void **func_4906329136_op0[2] = { cf+14, cf+122};
        static void **func_4906329136_op1[2] = { cf+11, cf+122};
        static void **func_4906329264_op0[2] = { cf+4, cf+122};
        static void **func_4906329264_op1[2] = { cf+2, cf+122};
        static void **func_4906329392_op0[2] = { cf+110, cf+122};
        static void **func_4906329520_op0[2] = { cf+0, cf+123};
        static void **func_4906330256_op0[2] = { cf+111, cf+122};
        static void **func_4906330256_op1[2] = { cf+108, cf+122};
        static void **func_4906330256_op2[2] = { cf+112, cf+122};
        static void **func_4906330256_op3[2] = { cf+113, cf+122};
        static void **func_4906330256_op4[2] = { cf+114, cf+122};
        static void **func_4906330256_op5[2] = { cf+115, cf+122};
        static void **func_4906330256_op6[2] = { cf+116, cf+122};
        static void **func_4906330256_op7[2] = { cf+117, cf+122};
        static void **func_4906330256_op8[2] = { cf+118, cf+122};
        static void **func_4906330256_op9[2] = { cf+119, cf+122};
        static void **func_4906330256_op10[2] = { cf+120, cf+122};
        static void **func_4906329872_op0[2] = { cf+121, cf+122};
        static void **exp_4906330064[3] = {cf+26, cf+10, cf+122};
        static void **exp_4906330576[3] = {cf+19, cf+2, cf+122};
        static void **exp_4906330992[4] = {cf+40, cf+0, cf+41, cf+122};
        static void **exp_4906333088[4] = {cf+104, cf+17, cf+100, cf+122};
        static void **exp_4906330912[3] = {cf+6, cf+95, cf+122};
        static void **exp_4906333488[4] = {cf+99, cf+17, cf+100, cf+122};
        static void **exp_4906341664[4] = {cf+3, cf+108, cf+3, cf+122};
        static void **exp_4906341920[3] = {cf+16, cf+17, cf+122};
        static void **exp_4906330848[3] = {cf+6, cf+94, cf+122};
        static void **exp_4906342272[4] = {cf+0, cf+98, cf+19, cf+122};
goto LOOP;

func_4906310496:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4906310496_op0;
        break;
        case 1:
            PC = func_4906310496_op1;
        break;
    }
    goto ***PC;
func_4906326896:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4906326896_op0;
        break;
    }
    goto ***PC;
func_4906327104:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4906327104_op0;
        break;
        case 1:
            PC = func_4906327104_op1;
        break;
        case 2:
            PC = func_4906327104_op2;
        break;
    }
    goto ***PC;
func_4906327312:
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
            PC = func_4906327312_op0;
        break;
        case 1:
            PC = func_4906327312_op1;
        break;
    }
    goto ***PC;
func_4906326768:
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
            PC = func_4906326768_op0;
        break;
    }
    goto ***PC;
func_4906327968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4906327968_op0;
        break;
        case 1:
            PC = func_4906327968_op1;
        break;
        case 2:
            PC = func_4906327968_op2;
        break;
        case 3:
            PC = func_4906327968_op3;
        break;
        case 4:
            PC = func_4906327968_op4;
        break;
        case 5:
            PC = func_4906327968_op5;
        break;
        case 6:
            PC = func_4906327968_op6;
        break;
        case 7:
            PC = func_4906327968_op7;
        break;
        case 8:
            PC = func_4906327968_op8;
        break;
        case 9:
            PC = func_4906327968_op9;
        break;
    }
    goto ***PC;
func_4906328096:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_4906328096_op0;
        break;
        case 1:
            PC = func_4906328096_op1;
        break;
        case 2:
            PC = func_4906328096_op2;
        break;
        case 3:
            PC = func_4906328096_op3;
        break;
        case 4:
            PC = func_4906328096_op4;
        break;
    }
    goto ***PC;
func_4906327872:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4906327872_op0;
        break;
    }
    goto ***PC;
func_4906327648:
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
            PC = func_4906327648_op0;
        break;
    }
    goto ***PC;
func_4906329664:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_4906329664_op0;
        break;
        case 1:
            PC = func_4906329664_op1;
        break;
        case 2:
            PC = func_4906329664_op2;
        break;
        case 3:
            PC = func_4906329664_op3;
        break;
        case 4:
            PC = func_4906329664_op4;
        break;
        case 5:
            PC = func_4906329664_op5;
        break;
        case 6:
            PC = func_4906329664_op6;
        break;
        case 7:
            PC = func_4906329664_op7;
        break;
        case 8:
            PC = func_4906329664_op8;
        break;
        case 9:
            PC = func_4906329664_op9;
        break;
        case 10:
            PC = func_4906329664_op10;
        break;
        case 11:
            PC = func_4906329664_op11;
        break;
        case 12:
            PC = func_4906329664_op12;
        break;
        case 13:
            PC = func_4906329664_op13;
        break;
        case 14:
            PC = func_4906329664_op14;
        break;
        case 15:
            PC = func_4906329664_op15;
        break;
        case 16:
            PC = func_4906329664_op16;
        break;
        case 17:
            PC = func_4906329664_op17;
        break;
        case 18:
            PC = func_4906329664_op18;
        break;
        case 19:
            PC = func_4906329664_op19;
        break;
        case 20:
            PC = func_4906329664_op20;
        break;
        case 21:
            PC = func_4906329664_op21;
        break;
        case 22:
            PC = func_4906329664_op22;
        break;
        case 23:
            PC = func_4906329664_op23;
        break;
        case 24:
            PC = func_4906329664_op24;
        break;
        case 25:
            PC = func_4906329664_op25;
        break;
        case 26:
            PC = func_4906329664_op26;
        break;
        case 27:
            PC = func_4906329664_op27;
        break;
        case 28:
            PC = func_4906329664_op28;
        break;
        case 29:
            PC = func_4906329664_op29;
        break;
        case 30:
            PC = func_4906329664_op30;
        break;
        case 31:
            PC = func_4906329664_op31;
        break;
        case 32:
            PC = func_4906329664_op32;
        break;
        case 33:
            PC = func_4906329664_op33;
        break;
        case 34:
            PC = func_4906329664_op34;
        break;
        case 35:
            PC = func_4906329664_op35;
        break;
        case 36:
            PC = func_4906329664_op36;
        break;
        case 37:
            PC = func_4906329664_op37;
        break;
        case 38:
            PC = func_4906329664_op38;
        break;
        case 39:
            PC = func_4906329664_op39;
        break;
        case 40:
            PC = func_4906329664_op40;
        break;
        case 41:
            PC = func_4906329664_op41;
        break;
        case 42:
            PC = func_4906329664_op42;
        break;
        case 43:
            PC = func_4906329664_op43;
        break;
        case 44:
            PC = func_4906329664_op44;
        break;
        case 45:
            PC = func_4906329664_op45;
        break;
        case 46:
            PC = func_4906329664_op46;
        break;
        case 47:
            PC = func_4906329664_op47;
        break;
        case 48:
            PC = func_4906329664_op48;
        break;
        case 49:
            PC = func_4906329664_op49;
        break;
        case 50:
            PC = func_4906329664_op50;
        break;
        case 51:
            PC = func_4906329664_op51;
        break;
    }
    goto ***PC;
func_4924129504:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_4924129504_op0;
        break;
        case 1:
            PC = func_4924129504_op1;
        break;
        case 2:
            PC = func_4924129504_op2;
        break;
        case 3:
            PC = func_4924129504_op3;
        break;
        case 4:
            PC = func_4924129504_op4;
        break;
        case 5:
            PC = func_4924129504_op5;
        break;
        case 6:
            PC = func_4924129504_op6;
        break;
        case 7:
            PC = func_4924129504_op7;
        break;
        case 8:
            PC = func_4924129504_op8;
        break;
        case 9:
            PC = func_4924129504_op9;
        break;
        case 10:
            PC = func_4924129504_op10;
        break;
        case 11:
            PC = func_4924129504_op11;
        break;
        case 12:
            PC = func_4924129504_op12;
        break;
        case 13:
            PC = func_4924129504_op13;
        break;
    }
    goto ***PC;
func_4924129440:
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
            PC = func_4924129440_op0;
        break;
    }
    goto ***PC;
func_4906328304:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4906328304_op0;
        break;
        case 1:
            PC = func_4906328304_op1;
        break;
        case 2:
            PC = func_4906328304_op2;
        break;
    }
    goto ***PC;
func_4906328432:
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
            PC = func_4906328432_op0;
        break;
    }
    goto ***PC;
func_4906328560:
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
            PC = func_4906328560_op0;
        break;
    }
    goto ***PC;
func_4906328688:
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
            PC = func_4906328688_op0;
        break;
    }
    goto ***PC;
func_4906328224:
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
            PC = func_4906328224_op0;
        break;
        case 1:
            PC = func_4906328224_op1;
        break;
    }
    goto ***PC;
func_4906327712:
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
            PC = func_4906327712_op0;
        break;
        case 1:
            PC = func_4906327712_op1;
        break;
    }
    goto ***PC;
func_4906329136:
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
            PC = func_4906329136_op0;
        break;
        case 1:
            PC = func_4906329136_op1;
        break;
    }
    goto ***PC;
func_4906329264:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4906329264_op0;
        break;
        case 1:
            PC = func_4906329264_op1;
        break;
    }
    goto ***PC;
func_4906329392:
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
            PC = func_4906329392_op0;
        break;
    }
    goto ***PC;
func_4906329520:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4906329520_op0;
        break;
    }
    goto ***PC;
func_4906330256:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto ***PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_4906330256_op0;
        break;
        case 1:
            PC = func_4906330256_op1;
        break;
        case 2:
            PC = func_4906330256_op2;
        break;
        case 3:
            PC = func_4906330256_op3;
        break;
        case 4:
            PC = func_4906330256_op4;
        break;
        case 5:
            PC = func_4906330256_op5;
        break;
        case 6:
            PC = func_4906330256_op6;
        break;
        case 7:
            PC = func_4906330256_op7;
        break;
        case 8:
            PC = func_4906330256_op8;
        break;
        case 9:
            PC = func_4906330256_op9;
        break;
        case 10:
            PC = func_4906330256_op10;
        break;
    }
    goto ***PC;
func_4906329872:
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
            PC = func_4906329872_op0;
        break;
    }
    goto ***PC;
func_4906329792:
    extend(46);
    NEXT();
    goto ***PC;
func_4906330064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4906330064;
    goto ***PC;
func_4906330448:
    extend(92);
    NEXT();
    goto ***PC;
func_4906330576:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4906330576;
    goto ***PC;
func_4906331072:
    extend(48);
    NEXT();
    goto ***PC;
func_4906331200:
    extend(49);
    NEXT();
    goto ***PC;
func_4906331328:
    extend(50);
    NEXT();
    goto ***PC;
func_4906331488:
    extend(51);
    NEXT();
    goto ***PC;
func_4906331616:
    extend(52);
    NEXT();
    goto ***PC;
func_4906328944:
    extend(53);
    NEXT();
    goto ***PC;
func_4906332192:
    extend(54);
    NEXT();
    goto ***PC;
func_4906332320:
    extend(55);
    NEXT();
    goto ***PC;
func_4906332448:
    extend(56);
    NEXT();
    goto ***PC;
func_4906328880:
    extend(57);
    NEXT();
    goto ***PC;
func_4906330144:
    extend(36);
    NEXT();
    goto ***PC;
func_4906330992:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4906330992;
    goto ***PC;
func_4906332832:
    extend(40);
    NEXT();
    goto ***PC;
func_4906332960:
    extend(41);
    NEXT();
    goto ***PC;
func_4906334464:
    extend(97);
    NEXT();
    goto ***PC;
func_4906334592:
    extend(98);
    NEXT();
    goto ***PC;
func_4906334720:
    extend(99);
    NEXT();
    goto ***PC;
func_4906334880:
    extend(100);
    NEXT();
    goto ***PC;
func_4906335008:
    extend(101);
    NEXT();
    goto ***PC;
func_4906335200:
    extend(102);
    NEXT();
    goto ***PC;
func_4906335328:
    extend(103);
    NEXT();
    goto ***PC;
func_4906335456:
    extend(104);
    NEXT();
    goto ***PC;
func_4906335584:
    extend(105);
    NEXT();
    goto ***PC;
func_4906335136:
    extend(106);
    NEXT();
    goto ***PC;
func_4906335904:
    extend(107);
    NEXT();
    goto ***PC;
func_4906336032:
    extend(108);
    NEXT();
    goto ***PC;
func_4906336160:
    extend(109);
    NEXT();
    goto ***PC;
func_4906336288:
    extend(110);
    NEXT();
    goto ***PC;
func_4906336416:
    extend(111);
    NEXT();
    goto ***PC;
func_4906336544:
    extend(112);
    NEXT();
    goto ***PC;
func_4906336672:
    extend(113);
    NEXT();
    goto ***PC;
func_4906335712:
    extend(114);
    NEXT();
    goto ***PC;
func_4906337056:
    extend(115);
    NEXT();
    goto ***PC;
func_4906337184:
    extend(116);
    NEXT();
    goto ***PC;
func_4906337312:
    extend(117);
    NEXT();
    goto ***PC;
func_4906337440:
    extend(118);
    NEXT();
    goto ***PC;
func_4906337568:
    extend(119);
    NEXT();
    goto ***PC;
func_4906331744:
    extend(120);
    NEXT();
    goto ***PC;
func_4906331872:
    extend(121);
    NEXT();
    goto ***PC;
func_4906332000:
    extend(122);
    NEXT();
    goto ***PC;
func_4906332128:
    extend(65);
    NEXT();
    goto ***PC;
func_4906337696:
    extend(66);
    NEXT();
    goto ***PC;
func_4906337824:
    extend(67);
    NEXT();
    goto ***PC;
func_4906337952:
    extend(68);
    NEXT();
    goto ***PC;
func_4906338080:
    extend(69);
    NEXT();
    goto ***PC;
func_4906338208:
    extend(70);
    NEXT();
    goto ***PC;
func_4906338336:
    extend(71);
    NEXT();
    goto ***PC;
func_4906336800:
    extend(72);
    NEXT();
    goto ***PC;
func_4906336928:
    extend(73);
    NEXT();
    goto ***PC;
func_4906338976:
    extend(74);
    NEXT();
    goto ***PC;
func_4906339104:
    extend(75);
    NEXT();
    goto ***PC;
func_4906339232:
    extend(76);
    NEXT();
    goto ***PC;
func_4906339360:
    extend(77);
    NEXT();
    goto ***PC;
func_4906339488:
    extend(78);
    NEXT();
    goto ***PC;
func_4906339616:
    extend(79);
    NEXT();
    goto ***PC;
func_4906339744:
    extend(80);
    NEXT();
    goto ***PC;
func_4906339872:
    extend(81);
    NEXT();
    goto ***PC;
func_4906340000:
    extend(82);
    NEXT();
    goto ***PC;
func_4906340128:
    extend(83);
    NEXT();
    goto ***PC;
func_4906340256:
    extend(84);
    NEXT();
    goto ***PC;
func_4906340384:
    extend(85);
    NEXT();
    goto ***PC;
func_4906340512:
    extend(86);
    NEXT();
    goto ***PC;
func_4906340640:
    extend(87);
    NEXT();
    goto ***PC;
func_4906340768:
    extend(88);
    NEXT();
    goto ***PC;
func_4906340896:
    extend(89);
    NEXT();
    goto ***PC;
func_4906341024:
    extend(90);
    NEXT();
    goto ***PC;
func_4906333552:
    extend(42);
    NEXT();
    goto ***PC;
func_4906333712:
    extend(43);
    NEXT();
    goto ***PC;
func_4906333840:
    extend(63);
    NEXT();
    goto ***PC;
func_4906334032:
    extend(94);
    NEXT();
    goto ***PC;
func_4906334160:
    extend(124);
    NEXT();
    goto ***PC;
func_4906333968:
    extend(91);
    NEXT();
    goto ***PC;
func_4906341216:
    extend(93);
    NEXT();
    goto ***PC;
func_4906341344:
    extend(123);
    NEXT();
    goto ***PC;
func_4906341472:
    extend(125);
    NEXT();
    goto ***PC;
func_4906333088:
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
    PC = exp_4906333088;
    goto ***PC;
func_4906333216:
    extend(91);
    extend(94);
    NEXT();
    goto ***PC;
func_4906330912:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4906330912;
    goto ***PC;
func_4906333488:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4906333488;
    goto ***PC;
func_4906341664:
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
    PC = exp_4906341664;
    goto ***PC;
func_4906341792:
    extend(45);
    NEXT();
    goto ***PC;
func_4906341920:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4906341920;
    goto ***PC;
func_4906330848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4906330848;
    goto ***PC;
func_4906342672:
    extend(95);
    NEXT();
    goto ***PC;
func_4906342816:
    extend(64);
    NEXT();
    goto ***PC;
func_4906342976:
    extend(35);
    NEXT();
    goto ***PC;
func_4906343104:
    extend(37);
    NEXT();
    goto ***PC;
func_4906343296:
    extend(38);
    NEXT();
    goto ***PC;
func_4906343424:
    extend(61);
    NEXT();
    goto ***PC;
func_4906343552:
    extend(126);
    NEXT();
    goto ***PC;
func_4906343680:
    extend(96);
    NEXT();
    goto ***PC;
func_4906343232:
    extend(39);
    NEXT();
    goto ***PC;
func_4906344000:
    extend(34);
    NEXT();
    goto ***PC;
func_4906342272:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4906342272;
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
    PC = func_4906329520_op0;
    goto ***PC;
}
