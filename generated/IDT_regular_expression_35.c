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
        unsigned loop_limit = 10;
        static void * cf[] = {&&func_5299532864, &&func_5299549376, &&func_5299549584, &&func_5299549792, &&func_5299549248, &&func_5299550448, &&func_5299550576, &&func_5299550352, &&func_5299550128, &&func_5299552144, &&func_5299551264, &&func_5299550704, &&func_5299550832, &&func_5299550960, &&func_5299551088, &&func_5299551392, &&func_5299550048, &&func_5299550192, &&func_5299551840, &&func_5299551968, &&func_5299552272, &&func_5299552400, &&func_5299552928, &&func_5299552608, &&func_5299552528, &&func_5299552800, &&func_5299553120, &&func_5299553248, &&func_5299553744, &&func_5299553872, &&func_5299554000, &&func_5299554160, &&func_5299554288, &&func_5299551648, &&func_5299554864, &&func_5299554992, &&func_5299555120, &&func_5299551584, &&func_5299553440, &&func_5299555440, &&func_5299555568, &&func_5299555696, &&func_5299557168, &&func_5299557296, &&func_5299557424, &&func_5299557584, &&func_5299557712, &&func_5299557904, &&func_5299558032, &&func_5299558160, &&func_5299558288, &&func_5299557840, &&func_5299558608, &&func_5299558736, &&func_5299558864, &&func_5299558992, &&func_5299559120, &&func_5299559248, &&func_5299559376, &&func_5299558416, &&func_5299559760, &&func_5299559888, &&func_5299560016, &&func_5299560144, &&func_5299560272, &&func_5299554416, &&func_5299554544, &&func_5299554672, &&func_5299554800, &&func_5299560400, &&func_5299560528, &&func_5299560656, &&func_5299560784, &&func_5299560912, &&func_5299561040, &&func_5299559504, &&func_5299559632, &&func_5299561680, &&func_5299561808, &&func_5299561936, &&func_5299562064, &&func_5299562192, &&func_5299562320, &&func_5299562448, &&func_5299562576, &&func_5299562704, &&func_5299562832, &&func_5299562960, &&func_5299563088, &&func_5299563216, &&func_5299563344, &&func_5299563472, &&func_5299563600, &&func_5299563728, &&func_5299556256, &&func_5299556416, &&func_5299556544, &&func_5299556736, &&func_5299556864, &&func_5299556672, &&func_5299563920, &&func_5299564048, &&func_5299564176, &&func_5299555824, &&func_5299555952, &&func_5299553648, &&func_5299564304, &&func_5299564432, &&func_5299564560, &&func_5299553568, &&func_5299564688, &&func_5299565344, &&func_5299565488, &&func_5299565648, &&func_5299565776, &&func_5299565968, &&func_5299566096, &&func_5299566224, &&func_5299566352, &&func_5299565904, &&func_5299566672, &&func_5299564976, &&RETURN, &&HALT};
        static void **func_5299532864_op0[2] = { cf+23, cf+122};
        static void **func_5299532864_op1[2] = { cf+19, cf+122};
        static void **func_5299549376_op0[2] = { cf+24, cf+122};
        static void **func_5299549584_op0[2] = { cf+20, cf+122};
        static void **func_5299549584_op1[2] = { cf+13, cf+122};
        static void **func_5299549584_op2[2] = { cf+6, cf+122};
        static void **func_5299549792_op0[2] = { cf+12, cf+122};
        static void **func_5299549792_op1[2] = { cf+25, cf+122};
        static void **func_5299549248_op0[2] = { cf+27, cf+122};
        static void **func_5299550448_op0[2] = { cf+28, cf+122};
        static void **func_5299550448_op1[2] = { cf+29, cf+122};
        static void **func_5299550448_op2[2] = { cf+30, cf+122};
        static void **func_5299550448_op3[2] = { cf+31, cf+122};
        static void **func_5299550448_op4[2] = { cf+32, cf+122};
        static void **func_5299550448_op5[2] = { cf+33, cf+122};
        static void **func_5299550448_op6[2] = { cf+34, cf+122};
        static void **func_5299550448_op7[2] = { cf+35, cf+122};
        static void **func_5299550448_op8[2] = { cf+36, cf+122};
        static void **func_5299550448_op9[2] = { cf+37, cf+122};
        static void **func_5299550576_op0[2] = { cf+8, cf+122};
        static void **func_5299550576_op1[2] = { cf+1, cf+122};
        static void **func_5299550576_op2[2] = { cf+7, cf+122};
        static void **func_5299550576_op3[2] = { cf+3, cf+122};
        static void **func_5299550576_op4[2] = { cf+18, cf+122};
        static void **func_5299550352_op0[2] = { cf+38, cf+122};
        static void **func_5299550128_op0[2] = { cf+39, cf+122};
        static void **func_5299552144_op0[2] = { cf+42, cf+122};
        static void **func_5299552144_op1[2] = { cf+43, cf+122};
        static void **func_5299552144_op2[2] = { cf+44, cf+122};
        static void **func_5299552144_op3[2] = { cf+45, cf+122};
        static void **func_5299552144_op4[2] = { cf+46, cf+122};
        static void **func_5299552144_op5[2] = { cf+47, cf+122};
        static void **func_5299552144_op6[2] = { cf+48, cf+122};
        static void **func_5299552144_op7[2] = { cf+49, cf+122};
        static void **func_5299552144_op8[2] = { cf+50, cf+122};
        static void **func_5299552144_op9[2] = { cf+51, cf+122};
        static void **func_5299552144_op10[2] = { cf+52, cf+122};
        static void **func_5299552144_op11[2] = { cf+53, cf+122};
        static void **func_5299552144_op12[2] = { cf+54, cf+122};
        static void **func_5299552144_op13[2] = { cf+55, cf+122};
        static void **func_5299552144_op14[2] = { cf+56, cf+122};
        static void **func_5299552144_op15[2] = { cf+57, cf+122};
        static void **func_5299552144_op16[2] = { cf+58, cf+122};
        static void **func_5299552144_op17[2] = { cf+59, cf+122};
        static void **func_5299552144_op18[2] = { cf+60, cf+122};
        static void **func_5299552144_op19[2] = { cf+61, cf+122};
        static void **func_5299552144_op20[2] = { cf+62, cf+122};
        static void **func_5299552144_op21[2] = { cf+63, cf+122};
        static void **func_5299552144_op22[2] = { cf+64, cf+122};
        static void **func_5299552144_op23[2] = { cf+65, cf+122};
        static void **func_5299552144_op24[2] = { cf+66, cf+122};
        static void **func_5299552144_op25[2] = { cf+67, cf+122};
        static void **func_5299552144_op26[2] = { cf+68, cf+122};
        static void **func_5299552144_op27[2] = { cf+69, cf+122};
        static void **func_5299552144_op28[2] = { cf+70, cf+122};
        static void **func_5299552144_op29[2] = { cf+71, cf+122};
        static void **func_5299552144_op30[2] = { cf+72, cf+122};
        static void **func_5299552144_op31[2] = { cf+73, cf+122};
        static void **func_5299552144_op32[2] = { cf+74, cf+122};
        static void **func_5299552144_op33[2] = { cf+75, cf+122};
        static void **func_5299552144_op34[2] = { cf+76, cf+122};
        static void **func_5299552144_op35[2] = { cf+77, cf+122};
        static void **func_5299552144_op36[2] = { cf+78, cf+122};
        static void **func_5299552144_op37[2] = { cf+79, cf+122};
        static void **func_5299552144_op38[2] = { cf+80, cf+122};
        static void **func_5299552144_op39[2] = { cf+81, cf+122};
        static void **func_5299552144_op40[2] = { cf+82, cf+122};
        static void **func_5299552144_op41[2] = { cf+83, cf+122};
        static void **func_5299552144_op42[2] = { cf+84, cf+122};
        static void **func_5299552144_op43[2] = { cf+85, cf+122};
        static void **func_5299552144_op44[2] = { cf+86, cf+122};
        static void **func_5299552144_op45[2] = { cf+87, cf+122};
        static void **func_5299552144_op46[2] = { cf+88, cf+122};
        static void **func_5299552144_op47[2] = { cf+89, cf+122};
        static void **func_5299552144_op48[2] = { cf+90, cf+122};
        static void **func_5299552144_op49[2] = { cf+91, cf+122};
        static void **func_5299552144_op50[2] = { cf+92, cf+122};
        static void **func_5299552144_op51[2] = { cf+93, cf+122};
        static void **func_5299551264_op0[2] = { cf+26, cf+122};
        static void **func_5299551264_op1[2] = { cf+24, cf+122};
        static void **func_5299551264_op2[2] = { cf+94, cf+122};
        static void **func_5299551264_op3[2] = { cf+95, cf+122};
        static void **func_5299551264_op4[2] = { cf+96, cf+122};
        static void **func_5299551264_op5[2] = { cf+97, cf+122};
        static void **func_5299551264_op6[2] = { cf+38, cf+122};
        static void **func_5299551264_op7[2] = { cf+98, cf+122};
        static void **func_5299551264_op8[2] = { cf+40, cf+122};
        static void **func_5299551264_op9[2] = { cf+41, cf+122};
        static void **func_5299551264_op10[2] = { cf+99, cf+122};
        static void **func_5299551264_op11[2] = { cf+100, cf+122};
        static void **func_5299551264_op12[2] = { cf+101, cf+122};
        static void **func_5299551264_op13[2] = { cf+102, cf+122};
        static void **func_5299550704_op0[2] = { cf+103, cf+122};
        static void **func_5299550832_op0[2] = { cf+9, cf+122};
        static void **func_5299550832_op1[2] = { cf+5, cf+122};
        static void **func_5299550832_op2[2] = { cf+22, cf+122};
        static void **func_5299550960_op0[2] = { cf+105, cf+122};
        static void **func_5299551088_op0[2] = { cf+106, cf+122};
        static void **func_5299551392_op0[2] = { cf+107, cf+122};
        static void **func_5299550048_op0[2] = { cf+15, cf+122};
        static void **func_5299550048_op1[2] = { cf+3, cf+122};
        static void **func_5299550192_op0[2] = { cf+16, cf+122};
        static void **func_5299550192_op1[2] = { cf+109, cf+122};
        static void **func_5299551840_op0[2] = { cf+14, cf+122};
        static void **func_5299551840_op1[2] = { cf+11, cf+122};
        static void **func_5299551968_op0[2] = { cf+4, cf+122};
        static void **func_5299551968_op1[2] = { cf+2, cf+122};
        static void **func_5299552272_op0[2] = { cf+110, cf+122};
        static void **func_5299552400_op0[2] = { cf+0, cf+123};
        static void **func_5299552928_op0[2] = { cf+111, cf+122};
        static void **func_5299552928_op1[2] = { cf+108, cf+122};
        static void **func_5299552928_op2[2] = { cf+112, cf+122};
        static void **func_5299552928_op3[2] = { cf+113, cf+122};
        static void **func_5299552928_op4[2] = { cf+114, cf+122};
        static void **func_5299552928_op5[2] = { cf+115, cf+122};
        static void **func_5299552928_op6[2] = { cf+116, cf+122};
        static void **func_5299552928_op7[2] = { cf+117, cf+122};
        static void **func_5299552928_op8[2] = { cf+118, cf+122};
        static void **func_5299552928_op9[2] = { cf+119, cf+122};
        static void **func_5299552928_op10[2] = { cf+120, cf+122};
        static void **func_5299552608_op0[2] = { cf+121, cf+122};
        static void **exp_5299552800[3] = {cf+26, cf+10, cf+122};
        static void **exp_5299553248[3] = {cf+19, cf+2, cf+122};
        static void **exp_5299555440[4] = {cf+40, cf+0, cf+41, cf+122};
        static void **exp_5299555824[4] = {cf+104, cf+17, cf+100, cf+122};
        static void **exp_5299553648[3] = {cf+6, cf+95, cf+122};
        static void **exp_5299564304[4] = {cf+99, cf+17, cf+100, cf+122};
        static void **exp_5299564432[4] = {cf+3, cf+108, cf+3, cf+122};
        static void **exp_5299553568[3] = {cf+16, cf+17, cf+122};
        static void **exp_5299564688[3] = {cf+6, cf+94, cf+122};
        static void **exp_5299564976[4] = {cf+0, cf+98, cf+19, cf+122};
goto LOOP;

func_5299532864:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5299532864_op0;
        break;
        case 1:
            PC = func_5299532864_op1;
        break;
    }
    goto ***PC;
func_5299549376:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5299549376_op0;
        break;
    }
    goto ***PC;
func_5299549584:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5299549584_op0;
        break;
        case 1:
            PC = func_5299549584_op1;
        break;
        case 2:
            PC = func_5299549584_op2;
        break;
    }
    goto ***PC;
func_5299549792:
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
            PC = func_5299549792_op0;
        break;
        case 1:
            PC = func_5299549792_op1;
        break;
    }
    goto ***PC;
func_5299549248:
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
            PC = func_5299549248_op0;
        break;
    }
    goto ***PC;
func_5299550448:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5299550448_op0;
        break;
        case 1:
            PC = func_5299550448_op1;
        break;
        case 2:
            PC = func_5299550448_op2;
        break;
        case 3:
            PC = func_5299550448_op3;
        break;
        case 4:
            PC = func_5299550448_op4;
        break;
        case 5:
            PC = func_5299550448_op5;
        break;
        case 6:
            PC = func_5299550448_op6;
        break;
        case 7:
            PC = func_5299550448_op7;
        break;
        case 8:
            PC = func_5299550448_op8;
        break;
        case 9:
            PC = func_5299550448_op9;
        break;
    }
    goto ***PC;
func_5299550576:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5299550576_op0;
        break;
        case 1:
            PC = func_5299550576_op1;
        break;
        case 2:
            PC = func_5299550576_op2;
        break;
        case 3:
            PC = func_5299550576_op3;
        break;
        case 4:
            PC = func_5299550576_op4;
        break;
    }
    goto ***PC;
func_5299550352:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5299550352_op0;
        break;
    }
    goto ***PC;
func_5299550128:
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
            PC = func_5299550128_op0;
        break;
    }
    goto ***PC;
func_5299552144:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5299552144_op0;
        break;
        case 1:
            PC = func_5299552144_op1;
        break;
        case 2:
            PC = func_5299552144_op2;
        break;
        case 3:
            PC = func_5299552144_op3;
        break;
        case 4:
            PC = func_5299552144_op4;
        break;
        case 5:
            PC = func_5299552144_op5;
        break;
        case 6:
            PC = func_5299552144_op6;
        break;
        case 7:
            PC = func_5299552144_op7;
        break;
        case 8:
            PC = func_5299552144_op8;
        break;
        case 9:
            PC = func_5299552144_op9;
        break;
        case 10:
            PC = func_5299552144_op10;
        break;
        case 11:
            PC = func_5299552144_op11;
        break;
        case 12:
            PC = func_5299552144_op12;
        break;
        case 13:
            PC = func_5299552144_op13;
        break;
        case 14:
            PC = func_5299552144_op14;
        break;
        case 15:
            PC = func_5299552144_op15;
        break;
        case 16:
            PC = func_5299552144_op16;
        break;
        case 17:
            PC = func_5299552144_op17;
        break;
        case 18:
            PC = func_5299552144_op18;
        break;
        case 19:
            PC = func_5299552144_op19;
        break;
        case 20:
            PC = func_5299552144_op20;
        break;
        case 21:
            PC = func_5299552144_op21;
        break;
        case 22:
            PC = func_5299552144_op22;
        break;
        case 23:
            PC = func_5299552144_op23;
        break;
        case 24:
            PC = func_5299552144_op24;
        break;
        case 25:
            PC = func_5299552144_op25;
        break;
        case 26:
            PC = func_5299552144_op26;
        break;
        case 27:
            PC = func_5299552144_op27;
        break;
        case 28:
            PC = func_5299552144_op28;
        break;
        case 29:
            PC = func_5299552144_op29;
        break;
        case 30:
            PC = func_5299552144_op30;
        break;
        case 31:
            PC = func_5299552144_op31;
        break;
        case 32:
            PC = func_5299552144_op32;
        break;
        case 33:
            PC = func_5299552144_op33;
        break;
        case 34:
            PC = func_5299552144_op34;
        break;
        case 35:
            PC = func_5299552144_op35;
        break;
        case 36:
            PC = func_5299552144_op36;
        break;
        case 37:
            PC = func_5299552144_op37;
        break;
        case 38:
            PC = func_5299552144_op38;
        break;
        case 39:
            PC = func_5299552144_op39;
        break;
        case 40:
            PC = func_5299552144_op40;
        break;
        case 41:
            PC = func_5299552144_op41;
        break;
        case 42:
            PC = func_5299552144_op42;
        break;
        case 43:
            PC = func_5299552144_op43;
        break;
        case 44:
            PC = func_5299552144_op44;
        break;
        case 45:
            PC = func_5299552144_op45;
        break;
        case 46:
            PC = func_5299552144_op46;
        break;
        case 47:
            PC = func_5299552144_op47;
        break;
        case 48:
            PC = func_5299552144_op48;
        break;
        case 49:
            PC = func_5299552144_op49;
        break;
        case 50:
            PC = func_5299552144_op50;
        break;
        case 51:
            PC = func_5299552144_op51;
        break;
    }
    goto ***PC;
func_5299551264:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5299551264_op0;
        break;
        case 1:
            PC = func_5299551264_op1;
        break;
        case 2:
            PC = func_5299551264_op2;
        break;
        case 3:
            PC = func_5299551264_op3;
        break;
        case 4:
            PC = func_5299551264_op4;
        break;
        case 5:
            PC = func_5299551264_op5;
        break;
        case 6:
            PC = func_5299551264_op6;
        break;
        case 7:
            PC = func_5299551264_op7;
        break;
        case 8:
            PC = func_5299551264_op8;
        break;
        case 9:
            PC = func_5299551264_op9;
        break;
        case 10:
            PC = func_5299551264_op10;
        break;
        case 11:
            PC = func_5299551264_op11;
        break;
        case 12:
            PC = func_5299551264_op12;
        break;
        case 13:
            PC = func_5299551264_op13;
        break;
    }
    goto ***PC;
func_5299550704:
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
            PC = func_5299550704_op0;
        break;
    }
    goto ***PC;
func_5299550832:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5299550832_op0;
        break;
        case 1:
            PC = func_5299550832_op1;
        break;
        case 2:
            PC = func_5299550832_op2;
        break;
    }
    goto ***PC;
func_5299550960:
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
            PC = func_5299550960_op0;
        break;
    }
    goto ***PC;
func_5299551088:
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
            PC = func_5299551088_op0;
        break;
    }
    goto ***PC;
func_5299551392:
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
            PC = func_5299551392_op0;
        break;
    }
    goto ***PC;
func_5299550048:
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
            PC = func_5299550048_op0;
        break;
        case 1:
            PC = func_5299550048_op1;
        break;
    }
    goto ***PC;
func_5299550192:
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
            PC = func_5299550192_op0;
        break;
        case 1:
            PC = func_5299550192_op1;
        break;
    }
    goto ***PC;
func_5299551840:
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
            PC = func_5299551840_op0;
        break;
        case 1:
            PC = func_5299551840_op1;
        break;
    }
    goto ***PC;
func_5299551968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5299551968_op0;
        break;
        case 1:
            PC = func_5299551968_op1;
        break;
    }
    goto ***PC;
func_5299552272:
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
            PC = func_5299552272_op0;
        break;
    }
    goto ***PC;
func_5299552400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5299552400_op0;
        break;
    }
    goto ***PC;
func_5299552928:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto ***PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5299552928_op0;
        break;
        case 1:
            PC = func_5299552928_op1;
        break;
        case 2:
            PC = func_5299552928_op2;
        break;
        case 3:
            PC = func_5299552928_op3;
        break;
        case 4:
            PC = func_5299552928_op4;
        break;
        case 5:
            PC = func_5299552928_op5;
        break;
        case 6:
            PC = func_5299552928_op6;
        break;
        case 7:
            PC = func_5299552928_op7;
        break;
        case 8:
            PC = func_5299552928_op8;
        break;
        case 9:
            PC = func_5299552928_op9;
        break;
        case 10:
            PC = func_5299552928_op10;
        break;
    }
    goto ***PC;
func_5299552608:
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
            PC = func_5299552608_op0;
        break;
    }
    goto ***PC;
func_5299552528:
    extend(46);
    NEXT();
    goto ***PC;
func_5299552800:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299552800;
    goto ***PC;
func_5299553120:
    extend(92);
    NEXT();
    goto ***PC;
func_5299553248:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299553248;
    goto ***PC;
func_5299553744:
    extend(48);
    NEXT();
    goto ***PC;
func_5299553872:
    extend(49);
    NEXT();
    goto ***PC;
func_5299554000:
    extend(50);
    NEXT();
    goto ***PC;
func_5299554160:
    extend(51);
    NEXT();
    goto ***PC;
func_5299554288:
    extend(52);
    NEXT();
    goto ***PC;
func_5299551648:
    extend(53);
    NEXT();
    goto ***PC;
func_5299554864:
    extend(54);
    NEXT();
    goto ***PC;
func_5299554992:
    extend(55);
    NEXT();
    goto ***PC;
func_5299555120:
    extend(56);
    NEXT();
    goto ***PC;
func_5299551584:
    extend(57);
    NEXT();
    goto ***PC;
func_5299553440:
    extend(36);
    NEXT();
    goto ***PC;
func_5299555440:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299555440;
    goto ***PC;
func_5299555568:
    extend(40);
    NEXT();
    goto ***PC;
func_5299555696:
    extend(41);
    NEXT();
    goto ***PC;
func_5299557168:
    extend(97);
    NEXT();
    goto ***PC;
func_5299557296:
    extend(98);
    NEXT();
    goto ***PC;
func_5299557424:
    extend(99);
    NEXT();
    goto ***PC;
func_5299557584:
    extend(100);
    NEXT();
    goto ***PC;
func_5299557712:
    extend(101);
    NEXT();
    goto ***PC;
func_5299557904:
    extend(102);
    NEXT();
    goto ***PC;
func_5299558032:
    extend(103);
    NEXT();
    goto ***PC;
func_5299558160:
    extend(104);
    NEXT();
    goto ***PC;
func_5299558288:
    extend(105);
    NEXT();
    goto ***PC;
func_5299557840:
    extend(106);
    NEXT();
    goto ***PC;
func_5299558608:
    extend(107);
    NEXT();
    goto ***PC;
func_5299558736:
    extend(108);
    NEXT();
    goto ***PC;
func_5299558864:
    extend(109);
    NEXT();
    goto ***PC;
func_5299558992:
    extend(110);
    NEXT();
    goto ***PC;
func_5299559120:
    extend(111);
    NEXT();
    goto ***PC;
func_5299559248:
    extend(112);
    NEXT();
    goto ***PC;
func_5299559376:
    extend(113);
    NEXT();
    goto ***PC;
func_5299558416:
    extend(114);
    NEXT();
    goto ***PC;
func_5299559760:
    extend(115);
    NEXT();
    goto ***PC;
func_5299559888:
    extend(116);
    NEXT();
    goto ***PC;
func_5299560016:
    extend(117);
    NEXT();
    goto ***PC;
func_5299560144:
    extend(118);
    NEXT();
    goto ***PC;
func_5299560272:
    extend(119);
    NEXT();
    goto ***PC;
func_5299554416:
    extend(120);
    NEXT();
    goto ***PC;
func_5299554544:
    extend(121);
    NEXT();
    goto ***PC;
func_5299554672:
    extend(122);
    NEXT();
    goto ***PC;
func_5299554800:
    extend(65);
    NEXT();
    goto ***PC;
func_5299560400:
    extend(66);
    NEXT();
    goto ***PC;
func_5299560528:
    extend(67);
    NEXT();
    goto ***PC;
func_5299560656:
    extend(68);
    NEXT();
    goto ***PC;
func_5299560784:
    extend(69);
    NEXT();
    goto ***PC;
func_5299560912:
    extend(70);
    NEXT();
    goto ***PC;
func_5299561040:
    extend(71);
    NEXT();
    goto ***PC;
func_5299559504:
    extend(72);
    NEXT();
    goto ***PC;
func_5299559632:
    extend(73);
    NEXT();
    goto ***PC;
func_5299561680:
    extend(74);
    NEXT();
    goto ***PC;
func_5299561808:
    extend(75);
    NEXT();
    goto ***PC;
func_5299561936:
    extend(76);
    NEXT();
    goto ***PC;
func_5299562064:
    extend(77);
    NEXT();
    goto ***PC;
func_5299562192:
    extend(78);
    NEXT();
    goto ***PC;
func_5299562320:
    extend(79);
    NEXT();
    goto ***PC;
func_5299562448:
    extend(80);
    NEXT();
    goto ***PC;
func_5299562576:
    extend(81);
    NEXT();
    goto ***PC;
func_5299562704:
    extend(82);
    NEXT();
    goto ***PC;
func_5299562832:
    extend(83);
    NEXT();
    goto ***PC;
func_5299562960:
    extend(84);
    NEXT();
    goto ***PC;
func_5299563088:
    extend(85);
    NEXT();
    goto ***PC;
func_5299563216:
    extend(86);
    NEXT();
    goto ***PC;
func_5299563344:
    extend(87);
    NEXT();
    goto ***PC;
func_5299563472:
    extend(88);
    NEXT();
    goto ***PC;
func_5299563600:
    extend(89);
    NEXT();
    goto ***PC;
func_5299563728:
    extend(90);
    NEXT();
    goto ***PC;
func_5299556256:
    extend(42);
    NEXT();
    goto ***PC;
func_5299556416:
    extend(43);
    NEXT();
    goto ***PC;
func_5299556544:
    extend(63);
    NEXT();
    goto ***PC;
func_5299556736:
    extend(94);
    NEXT();
    goto ***PC;
func_5299556864:
    extend(124);
    NEXT();
    goto ***PC;
func_5299556672:
    extend(91);
    NEXT();
    goto ***PC;
func_5299563920:
    extend(93);
    NEXT();
    goto ***PC;
func_5299564048:
    extend(123);
    NEXT();
    goto ***PC;
func_5299564176:
    extend(125);
    NEXT();
    goto ***PC;
func_5299555824:
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
    PC = exp_5299555824;
    goto ***PC;
func_5299555952:
    extend(91);
    extend(94);
    NEXT();
    goto ***PC;
func_5299553648:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299553648;
    goto ***PC;
func_5299564304:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299564304;
    goto ***PC;
func_5299564432:
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
    PC = exp_5299564432;
    goto ***PC;
func_5299564560:
    extend(45);
    NEXT();
    goto ***PC;
func_5299553568:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299553568;
    goto ***PC;
func_5299564688:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299564688;
    goto ***PC;
func_5299565344:
    extend(95);
    NEXT();
    goto ***PC;
func_5299565488:
    extend(64);
    NEXT();
    goto ***PC;
func_5299565648:
    extend(35);
    NEXT();
    goto ***PC;
func_5299565776:
    extend(37);
    NEXT();
    goto ***PC;
func_5299565968:
    extend(38);
    NEXT();
    goto ***PC;
func_5299566096:
    extend(61);
    NEXT();
    goto ***PC;
func_5299566224:
    extend(126);
    NEXT();
    goto ***PC;
func_5299566352:
    extend(96);
    NEXT();
    goto ***PC;
func_5299565904:
    extend(39);
    NEXT();
    goto ***PC;
func_5299566672:
    extend(34);
    NEXT();
    goto ***PC;
func_5299564976:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299564976;
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
    PC = func_5299552400_op0;
    goto ***PC;
}
