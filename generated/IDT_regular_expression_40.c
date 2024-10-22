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
        unsigned loop_limit = 10;
        static void * cf[] = {&&func_5257589824, &&func_5257606336, &&func_5257606544, &&func_5257606752, &&func_5257606208, &&func_5257607408, &&func_5257607536, &&func_5257607312, &&func_5257607088, &&func_5257609104, &&func_5257608224, &&func_5257607664, &&func_5257607792, &&func_5257607920, &&func_5257608048, &&func_5257608352, &&func_5257607008, &&func_5257607152, &&func_5257608800, &&func_5257608928, &&func_5257609232, &&func_5257609360, &&func_5257609888, &&func_5257609568, &&func_5257609488, &&func_5257609760, &&func_5257610080, &&func_5257610208, &&func_5257610704, &&func_5257610832, &&func_5257610960, &&func_5257611120, &&func_5257611248, &&func_5257608608, &&func_5257611824, &&func_5257611952, &&func_5257612080, &&func_5257608544, &&func_5257610400, &&func_5257612400, &&func_5257612528, &&func_5257612656, &&func_5257614128, &&func_5257614256, &&func_5257614384, &&func_5257614544, &&func_5257614672, &&func_5257614864, &&func_5257614992, &&func_5257615120, &&func_5257615248, &&func_5257614800, &&func_5257615568, &&func_5257615696, &&func_5257615824, &&func_5257615952, &&func_5257616080, &&func_5257616208, &&func_5257616336, &&func_5257615376, &&func_5257616720, &&func_5257616848, &&func_5257616976, &&func_5257617104, &&func_5257617232, &&func_5257611376, &&func_5257611504, &&func_5257611632, &&func_5257611760, &&func_5257617360, &&func_5257617488, &&func_5257617616, &&func_5257617744, &&func_5257617872, &&func_5257618000, &&func_5257616464, &&func_5257616592, &&func_5257618640, &&func_5257618768, &&func_5257618896, &&func_5257619024, &&func_5257619152, &&func_5257619280, &&func_5257619408, &&func_5257619536, &&func_5257619664, &&func_5257619792, &&func_5257619920, &&func_5257620048, &&func_5257620176, &&func_5257620304, &&func_5257620432, &&func_5257620560, &&func_5257620688, &&func_5257613216, &&func_5257613376, &&func_5257613504, &&func_5257613696, &&func_5257613824, &&func_5257613632, &&func_5257620880, &&func_5257621008, &&func_5257621136, &&func_5257612784, &&func_5257612912, &&func_5257610608, &&func_5257621264, &&func_5257621392, &&func_5257621520, &&func_5257610528, &&func_5257621648, &&func_5257622304, &&func_5257622448, &&func_5257622608, &&func_5257622736, &&func_5257622928, &&func_5257623056, &&func_5257623184, &&func_5257623312, &&func_5257622864, &&func_5257623632, &&func_5257621936, &&RETURN, &&HALT};
        static void **func_5257589824_op0[2] = { cf+23, cf+122};
        static void **func_5257589824_op1[2] = { cf+19, cf+122};
        static void **func_5257606336_op0[2] = { cf+24, cf+122};
        static void **func_5257606544_op0[2] = { cf+20, cf+122};
        static void **func_5257606544_op1[2] = { cf+13, cf+122};
        static void **func_5257606544_op2[2] = { cf+6, cf+122};
        static void **func_5257606752_op0[2] = { cf+12, cf+122};
        static void **func_5257606752_op1[2] = { cf+25, cf+122};
        static void **func_5257606208_op0[2] = { cf+27, cf+122};
        static void **func_5257607408_op0[2] = { cf+28, cf+122};
        static void **func_5257607408_op1[2] = { cf+29, cf+122};
        static void **func_5257607408_op2[2] = { cf+30, cf+122};
        static void **func_5257607408_op3[2] = { cf+31, cf+122};
        static void **func_5257607408_op4[2] = { cf+32, cf+122};
        static void **func_5257607408_op5[2] = { cf+33, cf+122};
        static void **func_5257607408_op6[2] = { cf+34, cf+122};
        static void **func_5257607408_op7[2] = { cf+35, cf+122};
        static void **func_5257607408_op8[2] = { cf+36, cf+122};
        static void **func_5257607408_op9[2] = { cf+37, cf+122};
        static void **func_5257607536_op0[2] = { cf+8, cf+122};
        static void **func_5257607536_op1[2] = { cf+1, cf+122};
        static void **func_5257607536_op2[2] = { cf+7, cf+122};
        static void **func_5257607536_op3[2] = { cf+3, cf+122};
        static void **func_5257607536_op4[2] = { cf+18, cf+122};
        static void **func_5257607312_op0[2] = { cf+38, cf+122};
        static void **func_5257607088_op0[2] = { cf+39, cf+122};
        static void **func_5257609104_op0[2] = { cf+42, cf+122};
        static void **func_5257609104_op1[2] = { cf+43, cf+122};
        static void **func_5257609104_op2[2] = { cf+44, cf+122};
        static void **func_5257609104_op3[2] = { cf+45, cf+122};
        static void **func_5257609104_op4[2] = { cf+46, cf+122};
        static void **func_5257609104_op5[2] = { cf+47, cf+122};
        static void **func_5257609104_op6[2] = { cf+48, cf+122};
        static void **func_5257609104_op7[2] = { cf+49, cf+122};
        static void **func_5257609104_op8[2] = { cf+50, cf+122};
        static void **func_5257609104_op9[2] = { cf+51, cf+122};
        static void **func_5257609104_op10[2] = { cf+52, cf+122};
        static void **func_5257609104_op11[2] = { cf+53, cf+122};
        static void **func_5257609104_op12[2] = { cf+54, cf+122};
        static void **func_5257609104_op13[2] = { cf+55, cf+122};
        static void **func_5257609104_op14[2] = { cf+56, cf+122};
        static void **func_5257609104_op15[2] = { cf+57, cf+122};
        static void **func_5257609104_op16[2] = { cf+58, cf+122};
        static void **func_5257609104_op17[2] = { cf+59, cf+122};
        static void **func_5257609104_op18[2] = { cf+60, cf+122};
        static void **func_5257609104_op19[2] = { cf+61, cf+122};
        static void **func_5257609104_op20[2] = { cf+62, cf+122};
        static void **func_5257609104_op21[2] = { cf+63, cf+122};
        static void **func_5257609104_op22[2] = { cf+64, cf+122};
        static void **func_5257609104_op23[2] = { cf+65, cf+122};
        static void **func_5257609104_op24[2] = { cf+66, cf+122};
        static void **func_5257609104_op25[2] = { cf+67, cf+122};
        static void **func_5257609104_op26[2] = { cf+68, cf+122};
        static void **func_5257609104_op27[2] = { cf+69, cf+122};
        static void **func_5257609104_op28[2] = { cf+70, cf+122};
        static void **func_5257609104_op29[2] = { cf+71, cf+122};
        static void **func_5257609104_op30[2] = { cf+72, cf+122};
        static void **func_5257609104_op31[2] = { cf+73, cf+122};
        static void **func_5257609104_op32[2] = { cf+74, cf+122};
        static void **func_5257609104_op33[2] = { cf+75, cf+122};
        static void **func_5257609104_op34[2] = { cf+76, cf+122};
        static void **func_5257609104_op35[2] = { cf+77, cf+122};
        static void **func_5257609104_op36[2] = { cf+78, cf+122};
        static void **func_5257609104_op37[2] = { cf+79, cf+122};
        static void **func_5257609104_op38[2] = { cf+80, cf+122};
        static void **func_5257609104_op39[2] = { cf+81, cf+122};
        static void **func_5257609104_op40[2] = { cf+82, cf+122};
        static void **func_5257609104_op41[2] = { cf+83, cf+122};
        static void **func_5257609104_op42[2] = { cf+84, cf+122};
        static void **func_5257609104_op43[2] = { cf+85, cf+122};
        static void **func_5257609104_op44[2] = { cf+86, cf+122};
        static void **func_5257609104_op45[2] = { cf+87, cf+122};
        static void **func_5257609104_op46[2] = { cf+88, cf+122};
        static void **func_5257609104_op47[2] = { cf+89, cf+122};
        static void **func_5257609104_op48[2] = { cf+90, cf+122};
        static void **func_5257609104_op49[2] = { cf+91, cf+122};
        static void **func_5257609104_op50[2] = { cf+92, cf+122};
        static void **func_5257609104_op51[2] = { cf+93, cf+122};
        static void **func_5257608224_op0[2] = { cf+26, cf+122};
        static void **func_5257608224_op1[2] = { cf+24, cf+122};
        static void **func_5257608224_op2[2] = { cf+94, cf+122};
        static void **func_5257608224_op3[2] = { cf+95, cf+122};
        static void **func_5257608224_op4[2] = { cf+96, cf+122};
        static void **func_5257608224_op5[2] = { cf+97, cf+122};
        static void **func_5257608224_op6[2] = { cf+38, cf+122};
        static void **func_5257608224_op7[2] = { cf+98, cf+122};
        static void **func_5257608224_op8[2] = { cf+40, cf+122};
        static void **func_5257608224_op9[2] = { cf+41, cf+122};
        static void **func_5257608224_op10[2] = { cf+99, cf+122};
        static void **func_5257608224_op11[2] = { cf+100, cf+122};
        static void **func_5257608224_op12[2] = { cf+101, cf+122};
        static void **func_5257608224_op13[2] = { cf+102, cf+122};
        static void **func_5257607664_op0[2] = { cf+103, cf+122};
        static void **func_5257607792_op0[2] = { cf+9, cf+122};
        static void **func_5257607792_op1[2] = { cf+5, cf+122};
        static void **func_5257607792_op2[2] = { cf+22, cf+122};
        static void **func_5257607920_op0[2] = { cf+105, cf+122};
        static void **func_5257608048_op0[2] = { cf+106, cf+122};
        static void **func_5257608352_op0[2] = { cf+107, cf+122};
        static void **func_5257607008_op0[2] = { cf+15, cf+122};
        static void **func_5257607008_op1[2] = { cf+3, cf+122};
        static void **func_5257607152_op0[2] = { cf+16, cf+122};
        static void **func_5257607152_op1[2] = { cf+109, cf+122};
        static void **func_5257608800_op0[2] = { cf+14, cf+122};
        static void **func_5257608800_op1[2] = { cf+11, cf+122};
        static void **func_5257608928_op0[2] = { cf+4, cf+122};
        static void **func_5257608928_op1[2] = { cf+2, cf+122};
        static void **func_5257609232_op0[2] = { cf+110, cf+122};
        static void **func_5257609360_op0[2] = { cf+0, cf+123};
        static void **func_5257609888_op0[2] = { cf+111, cf+122};
        static void **func_5257609888_op1[2] = { cf+108, cf+122};
        static void **func_5257609888_op2[2] = { cf+112, cf+122};
        static void **func_5257609888_op3[2] = { cf+113, cf+122};
        static void **func_5257609888_op4[2] = { cf+114, cf+122};
        static void **func_5257609888_op5[2] = { cf+115, cf+122};
        static void **func_5257609888_op6[2] = { cf+116, cf+122};
        static void **func_5257609888_op7[2] = { cf+117, cf+122};
        static void **func_5257609888_op8[2] = { cf+118, cf+122};
        static void **func_5257609888_op9[2] = { cf+119, cf+122};
        static void **func_5257609888_op10[2] = { cf+120, cf+122};
        static void **func_5257609568_op0[2] = { cf+121, cf+122};
        static void **exp_5257609760[3] = {cf+26, cf+10, cf+122};
        static void **exp_5257610208[3] = {cf+19, cf+2, cf+122};
        static void **exp_5257612400[4] = {cf+40, cf+0, cf+41, cf+122};
        static void **exp_5257612784[4] = {cf+104, cf+17, cf+100, cf+122};
        static void **exp_5257610608[3] = {cf+6, cf+95, cf+122};
        static void **exp_5257621264[4] = {cf+99, cf+17, cf+100, cf+122};
        static void **exp_5257621392[4] = {cf+3, cf+108, cf+3, cf+122};
        static void **exp_5257610528[3] = {cf+16, cf+17, cf+122};
        static void **exp_5257621648[3] = {cf+6, cf+94, cf+122};
        static void **exp_5257621936[4] = {cf+0, cf+98, cf+19, cf+122};
goto LOOP;

func_5257589824:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5257589824_op0;
        break;
        case 1:
            PC = func_5257589824_op1;
        break;
    }
    goto ***PC;
func_5257606336:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5257606336_op0;
        break;
    }
    goto ***PC;
func_5257606544:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5257606544_op0;
        break;
        case 1:
            PC = func_5257606544_op1;
        break;
        case 2:
            PC = func_5257606544_op2;
        break;
    }
    goto ***PC;
func_5257606752:
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
            PC = func_5257606752_op0;
        break;
        case 1:
            PC = func_5257606752_op1;
        break;
    }
    goto ***PC;
func_5257606208:
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
            PC = func_5257606208_op0;
        break;
    }
    goto ***PC;
func_5257607408:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5257607408_op0;
        break;
        case 1:
            PC = func_5257607408_op1;
        break;
        case 2:
            PC = func_5257607408_op2;
        break;
        case 3:
            PC = func_5257607408_op3;
        break;
        case 4:
            PC = func_5257607408_op4;
        break;
        case 5:
            PC = func_5257607408_op5;
        break;
        case 6:
            PC = func_5257607408_op6;
        break;
        case 7:
            PC = func_5257607408_op7;
        break;
        case 8:
            PC = func_5257607408_op8;
        break;
        case 9:
            PC = func_5257607408_op9;
        break;
    }
    goto ***PC;
func_5257607536:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5257607536_op0;
        break;
        case 1:
            PC = func_5257607536_op1;
        break;
        case 2:
            PC = func_5257607536_op2;
        break;
        case 3:
            PC = func_5257607536_op3;
        break;
        case 4:
            PC = func_5257607536_op4;
        break;
    }
    goto ***PC;
func_5257607312:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5257607312_op0;
        break;
    }
    goto ***PC;
func_5257607088:
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
            PC = func_5257607088_op0;
        break;
    }
    goto ***PC;
func_5257609104:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5257609104_op0;
        break;
        case 1:
            PC = func_5257609104_op1;
        break;
        case 2:
            PC = func_5257609104_op2;
        break;
        case 3:
            PC = func_5257609104_op3;
        break;
        case 4:
            PC = func_5257609104_op4;
        break;
        case 5:
            PC = func_5257609104_op5;
        break;
        case 6:
            PC = func_5257609104_op6;
        break;
        case 7:
            PC = func_5257609104_op7;
        break;
        case 8:
            PC = func_5257609104_op8;
        break;
        case 9:
            PC = func_5257609104_op9;
        break;
        case 10:
            PC = func_5257609104_op10;
        break;
        case 11:
            PC = func_5257609104_op11;
        break;
        case 12:
            PC = func_5257609104_op12;
        break;
        case 13:
            PC = func_5257609104_op13;
        break;
        case 14:
            PC = func_5257609104_op14;
        break;
        case 15:
            PC = func_5257609104_op15;
        break;
        case 16:
            PC = func_5257609104_op16;
        break;
        case 17:
            PC = func_5257609104_op17;
        break;
        case 18:
            PC = func_5257609104_op18;
        break;
        case 19:
            PC = func_5257609104_op19;
        break;
        case 20:
            PC = func_5257609104_op20;
        break;
        case 21:
            PC = func_5257609104_op21;
        break;
        case 22:
            PC = func_5257609104_op22;
        break;
        case 23:
            PC = func_5257609104_op23;
        break;
        case 24:
            PC = func_5257609104_op24;
        break;
        case 25:
            PC = func_5257609104_op25;
        break;
        case 26:
            PC = func_5257609104_op26;
        break;
        case 27:
            PC = func_5257609104_op27;
        break;
        case 28:
            PC = func_5257609104_op28;
        break;
        case 29:
            PC = func_5257609104_op29;
        break;
        case 30:
            PC = func_5257609104_op30;
        break;
        case 31:
            PC = func_5257609104_op31;
        break;
        case 32:
            PC = func_5257609104_op32;
        break;
        case 33:
            PC = func_5257609104_op33;
        break;
        case 34:
            PC = func_5257609104_op34;
        break;
        case 35:
            PC = func_5257609104_op35;
        break;
        case 36:
            PC = func_5257609104_op36;
        break;
        case 37:
            PC = func_5257609104_op37;
        break;
        case 38:
            PC = func_5257609104_op38;
        break;
        case 39:
            PC = func_5257609104_op39;
        break;
        case 40:
            PC = func_5257609104_op40;
        break;
        case 41:
            PC = func_5257609104_op41;
        break;
        case 42:
            PC = func_5257609104_op42;
        break;
        case 43:
            PC = func_5257609104_op43;
        break;
        case 44:
            PC = func_5257609104_op44;
        break;
        case 45:
            PC = func_5257609104_op45;
        break;
        case 46:
            PC = func_5257609104_op46;
        break;
        case 47:
            PC = func_5257609104_op47;
        break;
        case 48:
            PC = func_5257609104_op48;
        break;
        case 49:
            PC = func_5257609104_op49;
        break;
        case 50:
            PC = func_5257609104_op50;
        break;
        case 51:
            PC = func_5257609104_op51;
        break;
    }
    goto ***PC;
func_5257608224:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5257608224_op0;
        break;
        case 1:
            PC = func_5257608224_op1;
        break;
        case 2:
            PC = func_5257608224_op2;
        break;
        case 3:
            PC = func_5257608224_op3;
        break;
        case 4:
            PC = func_5257608224_op4;
        break;
        case 5:
            PC = func_5257608224_op5;
        break;
        case 6:
            PC = func_5257608224_op6;
        break;
        case 7:
            PC = func_5257608224_op7;
        break;
        case 8:
            PC = func_5257608224_op8;
        break;
        case 9:
            PC = func_5257608224_op9;
        break;
        case 10:
            PC = func_5257608224_op10;
        break;
        case 11:
            PC = func_5257608224_op11;
        break;
        case 12:
            PC = func_5257608224_op12;
        break;
        case 13:
            PC = func_5257608224_op13;
        break;
    }
    goto ***PC;
func_5257607664:
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
            PC = func_5257607664_op0;
        break;
    }
    goto ***PC;
func_5257607792:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5257607792_op0;
        break;
        case 1:
            PC = func_5257607792_op1;
        break;
        case 2:
            PC = func_5257607792_op2;
        break;
    }
    goto ***PC;
func_5257607920:
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
            PC = func_5257607920_op0;
        break;
    }
    goto ***PC;
func_5257608048:
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
            PC = func_5257608048_op0;
        break;
    }
    goto ***PC;
func_5257608352:
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
            PC = func_5257608352_op0;
        break;
    }
    goto ***PC;
func_5257607008:
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
            PC = func_5257607008_op0;
        break;
        case 1:
            PC = func_5257607008_op1;
        break;
    }
    goto ***PC;
func_5257607152:
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
            PC = func_5257607152_op0;
        break;
        case 1:
            PC = func_5257607152_op1;
        break;
    }
    goto ***PC;
func_5257608800:
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
            PC = func_5257608800_op0;
        break;
        case 1:
            PC = func_5257608800_op1;
        break;
    }
    goto ***PC;
func_5257608928:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5257608928_op0;
        break;
        case 1:
            PC = func_5257608928_op1;
        break;
    }
    goto ***PC;
func_5257609232:
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
            PC = func_5257609232_op0;
        break;
    }
    goto ***PC;
func_5257609360:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5257609360_op0;
        break;
    }
    goto ***PC;
func_5257609888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto ***PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5257609888_op0;
        break;
        case 1:
            PC = func_5257609888_op1;
        break;
        case 2:
            PC = func_5257609888_op2;
        break;
        case 3:
            PC = func_5257609888_op3;
        break;
        case 4:
            PC = func_5257609888_op4;
        break;
        case 5:
            PC = func_5257609888_op5;
        break;
        case 6:
            PC = func_5257609888_op6;
        break;
        case 7:
            PC = func_5257609888_op7;
        break;
        case 8:
            PC = func_5257609888_op8;
        break;
        case 9:
            PC = func_5257609888_op9;
        break;
        case 10:
            PC = func_5257609888_op10;
        break;
    }
    goto ***PC;
func_5257609568:
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
            PC = func_5257609568_op0;
        break;
    }
    goto ***PC;
func_5257609488:
    extend(46);
    NEXT();
    goto ***PC;
func_5257609760:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257609760;
    goto ***PC;
func_5257610080:
    extend(92);
    NEXT();
    goto ***PC;
func_5257610208:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257610208;
    goto ***PC;
func_5257610704:
    extend(48);
    NEXT();
    goto ***PC;
func_5257610832:
    extend(49);
    NEXT();
    goto ***PC;
func_5257610960:
    extend(50);
    NEXT();
    goto ***PC;
func_5257611120:
    extend(51);
    NEXT();
    goto ***PC;
func_5257611248:
    extend(52);
    NEXT();
    goto ***PC;
func_5257608608:
    extend(53);
    NEXT();
    goto ***PC;
func_5257611824:
    extend(54);
    NEXT();
    goto ***PC;
func_5257611952:
    extend(55);
    NEXT();
    goto ***PC;
func_5257612080:
    extend(56);
    NEXT();
    goto ***PC;
func_5257608544:
    extend(57);
    NEXT();
    goto ***PC;
func_5257610400:
    extend(36);
    NEXT();
    goto ***PC;
func_5257612400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257612400;
    goto ***PC;
func_5257612528:
    extend(40);
    NEXT();
    goto ***PC;
func_5257612656:
    extend(41);
    NEXT();
    goto ***PC;
func_5257614128:
    extend(97);
    NEXT();
    goto ***PC;
func_5257614256:
    extend(98);
    NEXT();
    goto ***PC;
func_5257614384:
    extend(99);
    NEXT();
    goto ***PC;
func_5257614544:
    extend(100);
    NEXT();
    goto ***PC;
func_5257614672:
    extend(101);
    NEXT();
    goto ***PC;
func_5257614864:
    extend(102);
    NEXT();
    goto ***PC;
func_5257614992:
    extend(103);
    NEXT();
    goto ***PC;
func_5257615120:
    extend(104);
    NEXT();
    goto ***PC;
func_5257615248:
    extend(105);
    NEXT();
    goto ***PC;
func_5257614800:
    extend(106);
    NEXT();
    goto ***PC;
func_5257615568:
    extend(107);
    NEXT();
    goto ***PC;
func_5257615696:
    extend(108);
    NEXT();
    goto ***PC;
func_5257615824:
    extend(109);
    NEXT();
    goto ***PC;
func_5257615952:
    extend(110);
    NEXT();
    goto ***PC;
func_5257616080:
    extend(111);
    NEXT();
    goto ***PC;
func_5257616208:
    extend(112);
    NEXT();
    goto ***PC;
func_5257616336:
    extend(113);
    NEXT();
    goto ***PC;
func_5257615376:
    extend(114);
    NEXT();
    goto ***PC;
func_5257616720:
    extend(115);
    NEXT();
    goto ***PC;
func_5257616848:
    extend(116);
    NEXT();
    goto ***PC;
func_5257616976:
    extend(117);
    NEXT();
    goto ***PC;
func_5257617104:
    extend(118);
    NEXT();
    goto ***PC;
func_5257617232:
    extend(119);
    NEXT();
    goto ***PC;
func_5257611376:
    extend(120);
    NEXT();
    goto ***PC;
func_5257611504:
    extend(121);
    NEXT();
    goto ***PC;
func_5257611632:
    extend(122);
    NEXT();
    goto ***PC;
func_5257611760:
    extend(65);
    NEXT();
    goto ***PC;
func_5257617360:
    extend(66);
    NEXT();
    goto ***PC;
func_5257617488:
    extend(67);
    NEXT();
    goto ***PC;
func_5257617616:
    extend(68);
    NEXT();
    goto ***PC;
func_5257617744:
    extend(69);
    NEXT();
    goto ***PC;
func_5257617872:
    extend(70);
    NEXT();
    goto ***PC;
func_5257618000:
    extend(71);
    NEXT();
    goto ***PC;
func_5257616464:
    extend(72);
    NEXT();
    goto ***PC;
func_5257616592:
    extend(73);
    NEXT();
    goto ***PC;
func_5257618640:
    extend(74);
    NEXT();
    goto ***PC;
func_5257618768:
    extend(75);
    NEXT();
    goto ***PC;
func_5257618896:
    extend(76);
    NEXT();
    goto ***PC;
func_5257619024:
    extend(77);
    NEXT();
    goto ***PC;
func_5257619152:
    extend(78);
    NEXT();
    goto ***PC;
func_5257619280:
    extend(79);
    NEXT();
    goto ***PC;
func_5257619408:
    extend(80);
    NEXT();
    goto ***PC;
func_5257619536:
    extend(81);
    NEXT();
    goto ***PC;
func_5257619664:
    extend(82);
    NEXT();
    goto ***PC;
func_5257619792:
    extend(83);
    NEXT();
    goto ***PC;
func_5257619920:
    extend(84);
    NEXT();
    goto ***PC;
func_5257620048:
    extend(85);
    NEXT();
    goto ***PC;
func_5257620176:
    extend(86);
    NEXT();
    goto ***PC;
func_5257620304:
    extend(87);
    NEXT();
    goto ***PC;
func_5257620432:
    extend(88);
    NEXT();
    goto ***PC;
func_5257620560:
    extend(89);
    NEXT();
    goto ***PC;
func_5257620688:
    extend(90);
    NEXT();
    goto ***PC;
func_5257613216:
    extend(42);
    NEXT();
    goto ***PC;
func_5257613376:
    extend(43);
    NEXT();
    goto ***PC;
func_5257613504:
    extend(63);
    NEXT();
    goto ***PC;
func_5257613696:
    extend(94);
    NEXT();
    goto ***PC;
func_5257613824:
    extend(124);
    NEXT();
    goto ***PC;
func_5257613632:
    extend(91);
    NEXT();
    goto ***PC;
func_5257620880:
    extend(93);
    NEXT();
    goto ***PC;
func_5257621008:
    extend(123);
    NEXT();
    goto ***PC;
func_5257621136:
    extend(125);
    NEXT();
    goto ***PC;
func_5257612784:
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
    PC = exp_5257612784;
    goto ***PC;
func_5257612912:
    extend(91);
    extend(94);
    NEXT();
    goto ***PC;
func_5257610608:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257610608;
    goto ***PC;
func_5257621264:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257621264;
    goto ***PC;
func_5257621392:
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
    PC = exp_5257621392;
    goto ***PC;
func_5257621520:
    extend(45);
    NEXT();
    goto ***PC;
func_5257610528:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257610528;
    goto ***PC;
func_5257621648:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257621648;
    goto ***PC;
func_5257622304:
    extend(95);
    NEXT();
    goto ***PC;
func_5257622448:
    extend(64);
    NEXT();
    goto ***PC;
func_5257622608:
    extend(35);
    NEXT();
    goto ***PC;
func_5257622736:
    extend(37);
    NEXT();
    goto ***PC;
func_5257622928:
    extend(38);
    NEXT();
    goto ***PC;
func_5257623056:
    extend(61);
    NEXT();
    goto ***PC;
func_5257623184:
    extend(126);
    NEXT();
    goto ***PC;
func_5257623312:
    extend(96);
    NEXT();
    goto ***PC;
func_5257622864:
    extend(39);
    NEXT();
    goto ***PC;
func_5257623632:
    extend(34);
    NEXT();
    goto ***PC;
func_5257621936:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257621936;
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
    PC = func_5257609360_op0;
    goto ***PC;
}
