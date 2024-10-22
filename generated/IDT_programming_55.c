#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 55
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
        unsigned loop_limit = 23;
        static void * cf[] = {&&func_5316324752, &&func_5316325504, &&func_5316325664, &&func_5316325376, &&func_5316325024, &&func_5316324624, &&func_5316325264, &&func_5316325792, &&func_5316327424, &&func_5316324944, &&func_5316325984, &&func_5316326192, &&func_5316326112, &&func_5316326624, &&func_5316326912, &&func_5316326464, &&func_5316326384, &&func_5316326848, &&func_5316327168, &&func_5316327296, &&func_5316328448, &&func_5316328576, &&func_5316328704, &&func_5316328832, &&func_5316328960, &&func_5316329088, &&func_5316329248, &&func_5316329376, &&func_5316329536, &&func_5316329664, &&func_5316329888, &&func_5316330016, &&func_5316330192, &&func_5316327680, &&func_5316328320, &&func_5316327872, &&func_5316330768, &&func_5316330896, &&func_5316331024, &&func_5316331216, &&func_5316331344, &&func_5316331472, &&func_5316331600, &&func_5316331152, &&func_5316327808, &&func_5316332144, &&func_5316328000, &&func_5316328128, &&func_5316332000, &&func_5316332368, &&func_5316332496, &&func_5316326752, &&func_5316333104, &&func_5316327488, &&func_5316333360, &&func_5316332704, &&func_5316333664, &&func_5316333792, &&func_5316335136, &&func_5316335264, &&func_5316335392, &&func_5316335552, &&func_5316335680, &&func_5316335872, &&func_5316336000, &&func_5316330320, &&func_5316330448, &&func_5316335808, &&func_5316336064, &&func_5316336192, &&func_5316336320, &&func_5316336448, &&func_5316336576, &&func_5316336704, &&func_5316336832, &&func_5316330576, &&func_5316337216, &&func_5316337344, &&func_5316337472, &&func_5316337600, &&func_5316337728, &&func_5316337856, &&func_5316337984, &&func_5316338112, &&func_5316338240, &&func_5316338368, &&func_5316338496, &&func_5316338624, &&func_5316338752, &&func_5316338880, &&func_5316339008, &&func_5316336960, &&func_5316337088, &&func_5316339648, &&func_5316339776, &&func_5316339904, &&func_5316340032, &&func_5316340160, &&func_5316340288, &&func_5316340416, &&func_5316340544, &&func_5316340672, &&func_5316340800, &&func_5316340928, &&func_5316341056, &&func_5316341184, &&func_5316341312, &&func_5316341440, &&func_5316341568, &&func_5316341696, &&func_5316333488, &&func_5316332832, &&func_5316334064, &&func_5316334192, &&func_5316334688, &&func_5316334816, &&func_5316334320, &&func_5316334944, &&func_5316341904, &&func_5316342032, &&func_5316342160, &&func_5316342288, &&func_5316342416, &&func_5316342544, &&func_5316342672, &&func_5316341824, &&func_5316334592, &&RETURN, &&HALT};
        static void **func_5316324752_op0[2] = { cf+17, cf+127};
        static void **func_5316325504_op0[2] = { cf+20, cf+127};
        static void **func_5316325504_op1[2] = { cf+22, cf+127};
        static void **func_5316325504_op2[2] = { cf+24, cf+127};
        static void **func_5316325504_op3[2] = { cf+26, cf+127};
        static void **func_5316325504_op4[2] = { cf+28, cf+127};
        static void **func_5316325504_op5[2] = { cf+30, cf+127};
        static void **func_5316325504_op6[2] = { cf+32, cf+127};
        static void **func_5316325664_op0[2] = { cf+34, cf+127};
        static void **func_5316325664_op1[2] = { cf+35, cf+127};
        static void **func_5316325664_op2[2] = { cf+36, cf+127};
        static void **func_5316325664_op3[2] = { cf+37, cf+127};
        static void **func_5316325664_op4[2] = { cf+38, cf+127};
        static void **func_5316325664_op5[2] = { cf+39, cf+127};
        static void **func_5316325664_op6[2] = { cf+40, cf+127};
        static void **func_5316325664_op7[2] = { cf+41, cf+127};
        static void **func_5316325664_op8[2] = { cf+42, cf+127};
        static void **func_5316325664_op9[2] = { cf+43, cf+127};
        static void **func_5316325376_op0[2] = { cf+44, cf+127};
        static void **func_5316325376_op1[2] = { cf+46, cf+127};
        static void **func_5316325376_op2[2] = { cf+14, cf+127};
        static void **func_5316325024_op0[2] = { cf+48, cf+127};
        static void **func_5316325024_op1[2] = { cf+9, cf+127};
        static void **func_5316325024_op2[2] = { cf+6, cf+127};
        static void **func_5316324624_op0[2] = { cf+51, cf+127};
        static void **func_5316325264_op0[2] = { cf+55, cf+127};
        static void **func_5316325264_op1[2] = { cf+8, cf+127};
        static void **func_5316325792_op0[2] = { cf+56, cf+127};
        static void **func_5316327424_op0[2] = { cf+58, cf+127};
        static void **func_5316327424_op1[2] = { cf+59, cf+127};
        static void **func_5316327424_op2[2] = { cf+60, cf+127};
        static void **func_5316327424_op3[2] = { cf+61, cf+127};
        static void **func_5316327424_op4[2] = { cf+62, cf+127};
        static void **func_5316327424_op5[2] = { cf+63, cf+127};
        static void **func_5316327424_op6[2] = { cf+64, cf+127};
        static void **func_5316327424_op7[2] = { cf+65, cf+127};
        static void **func_5316327424_op8[2] = { cf+66, cf+127};
        static void **func_5316327424_op9[2] = { cf+67, cf+127};
        static void **func_5316327424_op10[2] = { cf+68, cf+127};
        static void **func_5316327424_op11[2] = { cf+69, cf+127};
        static void **func_5316327424_op12[2] = { cf+70, cf+127};
        static void **func_5316327424_op13[2] = { cf+71, cf+127};
        static void **func_5316327424_op14[2] = { cf+72, cf+127};
        static void **func_5316327424_op15[2] = { cf+73, cf+127};
        static void **func_5316327424_op16[2] = { cf+74, cf+127};
        static void **func_5316327424_op17[2] = { cf+75, cf+127};
        static void **func_5316327424_op18[2] = { cf+76, cf+127};
        static void **func_5316327424_op19[2] = { cf+77, cf+127};
        static void **func_5316327424_op20[2] = { cf+78, cf+127};
        static void **func_5316327424_op21[2] = { cf+79, cf+127};
        static void **func_5316327424_op22[2] = { cf+80, cf+127};
        static void **func_5316327424_op23[2] = { cf+81, cf+127};
        static void **func_5316327424_op24[2] = { cf+82, cf+127};
        static void **func_5316327424_op25[2] = { cf+83, cf+127};
        static void **func_5316327424_op26[2] = { cf+84, cf+127};
        static void **func_5316327424_op27[2] = { cf+85, cf+127};
        static void **func_5316327424_op28[2] = { cf+86, cf+127};
        static void **func_5316327424_op29[2] = { cf+87, cf+127};
        static void **func_5316327424_op30[2] = { cf+88, cf+127};
        static void **func_5316327424_op31[2] = { cf+89, cf+127};
        static void **func_5316327424_op32[2] = { cf+90, cf+127};
        static void **func_5316327424_op33[2] = { cf+91, cf+127};
        static void **func_5316327424_op34[2] = { cf+92, cf+127};
        static void **func_5316327424_op35[2] = { cf+93, cf+127};
        static void **func_5316327424_op36[2] = { cf+94, cf+127};
        static void **func_5316327424_op37[2] = { cf+95, cf+127};
        static void **func_5316327424_op38[2] = { cf+96, cf+127};
        static void **func_5316327424_op39[2] = { cf+97, cf+127};
        static void **func_5316327424_op40[2] = { cf+98, cf+127};
        static void **func_5316327424_op41[2] = { cf+99, cf+127};
        static void **func_5316327424_op42[2] = { cf+100, cf+127};
        static void **func_5316327424_op43[2] = { cf+101, cf+127};
        static void **func_5316327424_op44[2] = { cf+102, cf+127};
        static void **func_5316327424_op45[2] = { cf+103, cf+127};
        static void **func_5316327424_op46[2] = { cf+104, cf+127};
        static void **func_5316327424_op47[2] = { cf+105, cf+127};
        static void **func_5316327424_op48[2] = { cf+106, cf+127};
        static void **func_5316327424_op49[2] = { cf+107, cf+127};
        static void **func_5316327424_op50[2] = { cf+108, cf+127};
        static void **func_5316327424_op51[2] = { cf+109, cf+127};
        static void **func_5316324944_op0[2] = { cf+110, cf+127};
        static void **func_5316324944_op1[2] = { cf+2, cf+127};
        static void **func_5316325984_op0[2] = { cf+111, cf+127};
        static void **func_5316325984_op1[2] = { cf+13, cf+127};
        static void **func_5316326192_op0[2] = { cf+112, cf+127};
        static void **func_5316326112_op0[2] = { cf+10, cf+128};
        static void **func_5316326624_op0[2] = { cf+15, cf+127};
        static void **func_5316326624_op1[2] = { cf+0, cf+127};
        static void **func_5316326624_op2[2] = { cf+7, cf+127};
        static void **func_5316326624_op3[2] = { cf+16, cf+127};
        static void **func_5316326624_op4[2] = { cf+5, cf+127};
        static void **func_5316326624_op5[2] = { cf+11, cf+127};
        static void **func_5316326912_op0[2] = { cf+114, cf+127};
        static void **func_5316326912_op1[2] = { cf+116, cf+127};
        static void **func_5316326912_op2[2] = { cf+4, cf+127};
        static void **func_5316326464_op0[2] = { cf+118, cf+127};
        static void **func_5316326464_op1[2] = { cf+121, cf+127};
        static void **func_5316326464_op2[2] = { cf+123, cf+127};
        static void **func_5316326384_op0[2] = { cf+125, cf+127};
        static void **exp_5316326848[5] = {cf+6, cf+18, cf+3, cf+19, cf+127};
        static void **exp_5316328448[4] = {cf+3, cf+21, cf+3, cf+127};
        static void **exp_5316328704[4] = {cf+3, cf+23, cf+3, cf+127};
        static void **exp_5316328960[4] = {cf+3, cf+25, cf+3, cf+127};
        static void **exp_5316329248[4] = {cf+3, cf+27, cf+3, cf+127};
        static void **exp_5316329536[4] = {cf+1, cf+29, cf+1, cf+127};
        static void **exp_5316329888[4] = {cf+1, cf+31, cf+1, cf+127};
        static void **exp_5316330192[3] = {cf+33, cf+1, cf+127};
        static void **exp_5316327808[4] = {cf+3, cf+45, cf+14, cf+127};
        static void **exp_5316328000[4] = {cf+3, cf+47, cf+14, cf+127};
        static void **exp_5316332000[4] = {cf+49, cf+3, cf+50, cf+127};
        static void **exp_5316326752[8] = {cf+52, cf+6, cf+49, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_5316332704[3] = {cf+8, cf+6, cf+127};
        static void **exp_5316333664[8] = {cf+57, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_5316333488[3] = {cf+2, cf+9, cf+127};
        static void **exp_5316332832[3] = {cf+10, cf+13, cf+127};
        static void **exp_5316334064[4] = {cf+113, cf+3, cf+19, cf+127};
        static void **exp_5316334688[4] = {cf+14, cf+115, cf+4, cf+127};
        static void **exp_5316334320[4] = {cf+14, cf+117, cf+4, cf+127};
        static void **exp_5316341904[4] = {cf+119, cf+6, cf+120, cf+127};
        static void **exp_5316342288[4] = {cf+122, cf+6, cf+120, cf+127};
        static void **exp_5316342544[4] = {cf+124, cf+6, cf+120, cf+127};
        static void **exp_5316341824[8] = {cf+126, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
goto LOOP;

func_5316324752:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5316324752_op0;
        break;
    }
    goto ***PC;
func_5316325504:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(7);
    store();
    switch (branch) {
        case 0:
            PC = func_5316325504_op0;
        break;
        case 1:
            PC = func_5316325504_op1;
        break;
        case 2:
            PC = func_5316325504_op2;
        break;
        case 3:
            PC = func_5316325504_op3;
        break;
        case 4:
            PC = func_5316325504_op4;
        break;
        case 5:
            PC = func_5316325504_op5;
        break;
        case 6:
            PC = func_5316325504_op6;
        break;
    }
    goto ***PC;
func_5316325664:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5316325664_op0;
        break;
        case 1:
            PC = func_5316325664_op1;
        break;
        case 2:
            PC = func_5316325664_op2;
        break;
        case 3:
            PC = func_5316325664_op3;
        break;
        case 4:
            PC = func_5316325664_op4;
        break;
        case 5:
            PC = func_5316325664_op5;
        break;
        case 6:
            PC = func_5316325664_op6;
        break;
        case 7:
            PC = func_5316325664_op7;
        break;
        case 8:
            PC = func_5316325664_op8;
        break;
        case 9:
            PC = func_5316325664_op9;
        break;
    }
    goto ***PC;
func_5316325376:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5316325376_op0;
        break;
        case 1:
            PC = func_5316325376_op1;
        break;
        case 2:
            PC = func_5316325376_op2;
        break;
    }
    goto ***PC;
func_5316325024:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5316325024_op0;
        break;
        case 1:
            PC = func_5316325024_op1;
        break;
        case 2:
            PC = func_5316325024_op2;
        break;
    }
    goto ***PC;
func_5316324624:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(102);
        extend(117);
        extend(110);
        extend(99);
        extend(116);
        extend(105);
        extend(111);
        extend(110);
        extend(90);
        extend(40);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5316324624_op0;
        break;
    }
    goto ***PC;
func_5316325264:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5316325264_op0;
        break;
        case 1:
            PC = func_5316325264_op1;
        break;
    }
    goto ***PC;
func_5316325792:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(105);
        extend(102);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5316325792_op0;
        break;
    }
    goto ***PC;
func_5316327424:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5316327424_op0;
        break;
        case 1:
            PC = func_5316327424_op1;
        break;
        case 2:
            PC = func_5316327424_op2;
        break;
        case 3:
            PC = func_5316327424_op3;
        break;
        case 4:
            PC = func_5316327424_op4;
        break;
        case 5:
            PC = func_5316327424_op5;
        break;
        case 6:
            PC = func_5316327424_op6;
        break;
        case 7:
            PC = func_5316327424_op7;
        break;
        case 8:
            PC = func_5316327424_op8;
        break;
        case 9:
            PC = func_5316327424_op9;
        break;
        case 10:
            PC = func_5316327424_op10;
        break;
        case 11:
            PC = func_5316327424_op11;
        break;
        case 12:
            PC = func_5316327424_op12;
        break;
        case 13:
            PC = func_5316327424_op13;
        break;
        case 14:
            PC = func_5316327424_op14;
        break;
        case 15:
            PC = func_5316327424_op15;
        break;
        case 16:
            PC = func_5316327424_op16;
        break;
        case 17:
            PC = func_5316327424_op17;
        break;
        case 18:
            PC = func_5316327424_op18;
        break;
        case 19:
            PC = func_5316327424_op19;
        break;
        case 20:
            PC = func_5316327424_op20;
        break;
        case 21:
            PC = func_5316327424_op21;
        break;
        case 22:
            PC = func_5316327424_op22;
        break;
        case 23:
            PC = func_5316327424_op23;
        break;
        case 24:
            PC = func_5316327424_op24;
        break;
        case 25:
            PC = func_5316327424_op25;
        break;
        case 26:
            PC = func_5316327424_op26;
        break;
        case 27:
            PC = func_5316327424_op27;
        break;
        case 28:
            PC = func_5316327424_op28;
        break;
        case 29:
            PC = func_5316327424_op29;
        break;
        case 30:
            PC = func_5316327424_op30;
        break;
        case 31:
            PC = func_5316327424_op31;
        break;
        case 32:
            PC = func_5316327424_op32;
        break;
        case 33:
            PC = func_5316327424_op33;
        break;
        case 34:
            PC = func_5316327424_op34;
        break;
        case 35:
            PC = func_5316327424_op35;
        break;
        case 36:
            PC = func_5316327424_op36;
        break;
        case 37:
            PC = func_5316327424_op37;
        break;
        case 38:
            PC = func_5316327424_op38;
        break;
        case 39:
            PC = func_5316327424_op39;
        break;
        case 40:
            PC = func_5316327424_op40;
        break;
        case 41:
            PC = func_5316327424_op41;
        break;
        case 42:
            PC = func_5316327424_op42;
        break;
        case 43:
            PC = func_5316327424_op43;
        break;
        case 44:
            PC = func_5316327424_op44;
        break;
        case 45:
            PC = func_5316327424_op45;
        break;
        case 46:
            PC = func_5316327424_op46;
        break;
        case 47:
            PC = func_5316327424_op47;
        break;
        case 48:
            PC = func_5316327424_op48;
        break;
        case 49:
            PC = func_5316327424_op49;
        break;
        case 50:
            PC = func_5316327424_op50;
        break;
        case 51:
            PC = func_5316327424_op51;
        break;
    }
    goto ***PC;
func_5316324944:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5316324944_op0;
        break;
        case 1:
            PC = func_5316324944_op1;
        break;
    }
    goto ***PC;
func_5316325984:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5316325984_op0;
        break;
        case 1:
            PC = func_5316325984_op1;
        break;
    }
    goto ***PC;
func_5316326192:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5316326192_op0;
        break;
    }
    goto ***PC;
func_5316326112:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5316326112_op0;
        break;
    }
    goto ***PC;
func_5316326624:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5316326624_op0;
        break;
        case 1:
            PC = func_5316326624_op1;
        break;
        case 2:
            PC = func_5316326624_op2;
        break;
        case 3:
            PC = func_5316326624_op3;
        break;
        case 4:
            PC = func_5316326624_op4;
        break;
        case 5:
            PC = func_5316326624_op5;
        break;
    }
    goto ***PC;
func_5316326912:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5316326912_op0;
        break;
        case 1:
            PC = func_5316326912_op1;
        break;
        case 2:
            PC = func_5316326912_op2;
        break;
    }
    goto ***PC;
func_5316326464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(115);
        extend(116);
        extend(114);
        extend(105);
        extend(110);
        extend(103);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5316326464_op0;
        break;
        case 1:
            PC = func_5316326464_op1;
        break;
        case 2:
            PC = func_5316326464_op2;
        break;
    }
    goto ***PC;
func_5316326384:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(119);
        extend(104);
        extend(105);
        extend(108);
        extend(101);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5316326384_op0;
        break;
    }
    goto ***PC;
func_5316326848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316326848;
    goto ***PC;
func_5316327168:
    extend(61);
    NEXT();
    goto ***PC;
func_5316327296:
    extend(59);
    NEXT();
    goto ***PC;
func_5316328448:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316328448;
    goto ***PC;
func_5316328576:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5316328704:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316328704;
    goto ***PC;
func_5316328832:
    extend(33);
    extend(61);
    NEXT();
    goto ***PC;
func_5316328960:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316328960;
    goto ***PC;
func_5316329088:
    extend(62);
    NEXT();
    goto ***PC;
func_5316329248:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316329248;
    goto ***PC;
func_5316329376:
    extend(60);
    NEXT();
    goto ***PC;
func_5316329536:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(65);
        extend(78);
        extend(68);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316329536;
    goto ***PC;
func_5316329664:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_5316329888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(79);
        extend(82);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316329888;
    goto ***PC;
func_5316330016:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_5316330192:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(78);
        extend(79);
        extend(84);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316330192;
    goto ***PC;
func_5316327680:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto ***PC;
func_5316328320:
    extend(48);
    NEXT();
    goto ***PC;
func_5316327872:
    extend(49);
    NEXT();
    goto ***PC;
func_5316330768:
    extend(50);
    NEXT();
    goto ***PC;
func_5316330896:
    extend(51);
    NEXT();
    goto ***PC;
func_5316331024:
    extend(52);
    NEXT();
    goto ***PC;
func_5316331216:
    extend(53);
    NEXT();
    goto ***PC;
func_5316331344:
    extend(54);
    NEXT();
    goto ***PC;
func_5316331472:
    extend(55);
    NEXT();
    goto ***PC;
func_5316331600:
    extend(56);
    NEXT();
    goto ***PC;
func_5316331152:
    extend(57);
    NEXT();
    goto ***PC;
func_5316327808:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316327808;
    goto ***PC;
func_5316332144:
    extend(43);
    NEXT();
    goto ***PC;
func_5316328000:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316328000;
    goto ***PC;
func_5316328128:
    extend(45);
    NEXT();
    goto ***PC;
func_5316332000:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316332000;
    goto ***PC;
func_5316332368:
    extend(40);
    NEXT();
    goto ***PC;
func_5316332496:
    extend(41);
    NEXT();
    goto ***PC;
func_5316326752:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(102);
        extend(117);
        extend(110);
        extend(99);
        extend(116);
        extend(105);
        extend(111);
        extend(110);
        extend(90);
        extend(40);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316326752;
    goto ***PC;
func_5316333104:
    extend(102);
    extend(117);
    extend(110);
    extend(99);
    extend(116);
    extend(105);
    extend(111);
    extend(110);
    NEXT();
    goto ***PC;
func_5316327488:
    extend(123);
    NEXT();
    goto ***PC;
func_5316333360:
    extend(125);
    NEXT();
    goto ***PC;
func_5316332704:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316332704;
    goto ***PC;
func_5316333664:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(105);
        extend(102);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316333664;
    goto ***PC;
func_5316333792:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5316335136:
    extend(97);
    NEXT();
    goto ***PC;
func_5316335264:
    extend(98);
    NEXT();
    goto ***PC;
func_5316335392:
    extend(99);
    NEXT();
    goto ***PC;
func_5316335552:
    extend(100);
    NEXT();
    goto ***PC;
func_5316335680:
    extend(101);
    NEXT();
    goto ***PC;
func_5316335872:
    extend(102);
    NEXT();
    goto ***PC;
func_5316336000:
    extend(103);
    NEXT();
    goto ***PC;
func_5316330320:
    extend(104);
    NEXT();
    goto ***PC;
func_5316330448:
    extend(105);
    NEXT();
    goto ***PC;
func_5316335808:
    extend(106);
    NEXT();
    goto ***PC;
func_5316336064:
    extend(107);
    NEXT();
    goto ***PC;
func_5316336192:
    extend(108);
    NEXT();
    goto ***PC;
func_5316336320:
    extend(109);
    NEXT();
    goto ***PC;
func_5316336448:
    extend(110);
    NEXT();
    goto ***PC;
func_5316336576:
    extend(111);
    NEXT();
    goto ***PC;
func_5316336704:
    extend(112);
    NEXT();
    goto ***PC;
func_5316336832:
    extend(113);
    NEXT();
    goto ***PC;
func_5316330576:
    extend(114);
    NEXT();
    goto ***PC;
func_5316337216:
    extend(115);
    NEXT();
    goto ***PC;
func_5316337344:
    extend(116);
    NEXT();
    goto ***PC;
func_5316337472:
    extend(117);
    NEXT();
    goto ***PC;
func_5316337600:
    extend(118);
    NEXT();
    goto ***PC;
func_5316337728:
    extend(119);
    NEXT();
    goto ***PC;
func_5316337856:
    extend(120);
    NEXT();
    goto ***PC;
func_5316337984:
    extend(121);
    NEXT();
    goto ***PC;
func_5316338112:
    extend(122);
    NEXT();
    goto ***PC;
func_5316338240:
    extend(65);
    NEXT();
    goto ***PC;
func_5316338368:
    extend(66);
    NEXT();
    goto ***PC;
func_5316338496:
    extend(67);
    NEXT();
    goto ***PC;
func_5316338624:
    extend(68);
    NEXT();
    goto ***PC;
func_5316338752:
    extend(69);
    NEXT();
    goto ***PC;
func_5316338880:
    extend(70);
    NEXT();
    goto ***PC;
func_5316339008:
    extend(71);
    NEXT();
    goto ***PC;
func_5316336960:
    extend(72);
    NEXT();
    goto ***PC;
func_5316337088:
    extend(73);
    NEXT();
    goto ***PC;
func_5316339648:
    extend(74);
    NEXT();
    goto ***PC;
func_5316339776:
    extend(75);
    NEXT();
    goto ***PC;
func_5316339904:
    extend(76);
    NEXT();
    goto ***PC;
func_5316340032:
    extend(77);
    NEXT();
    goto ***PC;
func_5316340160:
    extend(78);
    NEXT();
    goto ***PC;
func_5316340288:
    extend(79);
    NEXT();
    goto ***PC;
func_5316340416:
    extend(80);
    NEXT();
    goto ***PC;
func_5316340544:
    extend(81);
    NEXT();
    goto ***PC;
func_5316340672:
    extend(82);
    NEXT();
    goto ***PC;
func_5316340800:
    extend(83);
    NEXT();
    goto ***PC;
func_5316340928:
    extend(84);
    NEXT();
    goto ***PC;
func_5316341056:
    extend(85);
    NEXT();
    goto ***PC;
func_5316341184:
    extend(86);
    NEXT();
    goto ***PC;
func_5316341312:
    extend(87);
    NEXT();
    goto ***PC;
func_5316341440:
    extend(88);
    NEXT();
    goto ***PC;
func_5316341568:
    extend(89);
    NEXT();
    goto ***PC;
func_5316341696:
    extend(90);
    NEXT();
    goto ***PC;
func_5316333488:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316333488;
    goto ***PC;
func_5316332832:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316332832;
    goto ***PC;
func_5316334064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316334064;
    goto ***PC;
func_5316334192:
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    NEXT();
    goto ***PC;
func_5316334688:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316334688;
    goto ***PC;
func_5316334816:
    extend(42);
    NEXT();
    goto ***PC;
func_5316334320:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316334320;
    goto ***PC;
func_5316334944:
    extend(47);
    NEXT();
    goto ***PC;
func_5316341904:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316341904;
    goto ***PC;
func_5316342032:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5316342160:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto ***PC;
func_5316342288:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(102);
        extend(108);
        extend(111);
        extend(97);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316342288;
    goto ***PC;
func_5316342416:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5316342544:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(115);
        extend(116);
        extend(114);
        extend(105);
        extend(110);
        extend(103);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316342544;
    goto ***PC;
func_5316342672:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto ***PC;
func_5316341824:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(119);
        extend(104);
        extend(105);
        extend(108);
        extend(101);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5316341824;
    goto ***PC;
func_5316334592:
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
    PC = func_5316326112_op0;
    goto ***PC;
}
