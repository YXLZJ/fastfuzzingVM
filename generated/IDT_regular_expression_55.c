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
        unsigned loop_limit = 10;
        static void * cf[] = {&&func_5106594880, &&func_5106611392, &&func_5106611600, &&func_5106611808, &&func_5106611264, &&func_5106612464, &&func_5106612592, &&func_5106612368, &&func_5106612144, &&func_5106614160, &&func_5106613280, &&func_5106612720, &&func_5106612848, &&func_5106612976, &&func_5106613104, &&func_5106613408, &&func_5106612064, &&func_5106612208, &&func_5106613856, &&func_5106613984, &&func_5106614288, &&func_5106614416, &&func_5106614944, &&func_5106614624, &&func_5106614544, &&func_5106614816, &&func_5106615136, &&func_5106615264, &&func_5106615760, &&func_5106615888, &&func_5106616016, &&func_5106616176, &&func_5106616304, &&func_5106613664, &&func_5106616880, &&func_5106617008, &&func_5106617136, &&func_5106613600, &&func_5106615456, &&func_5106617456, &&func_5106617584, &&func_5106617712, &&func_5106619184, &&func_5106619312, &&func_5106619440, &&func_5106619600, &&func_5106619728, &&func_5106619920, &&func_5106620048, &&func_5106620176, &&func_5106620304, &&func_5106619856, &&func_5106620624, &&func_5106620752, &&func_5106620880, &&func_5106621008, &&func_5106621136, &&func_5106621264, &&func_5106621392, &&func_5106620432, &&func_5106621776, &&func_5106621904, &&func_5106622032, &&func_5106622160, &&func_5106622288, &&func_5106616432, &&func_5106616560, &&func_5106616688, &&func_5106616816, &&func_5106622416, &&func_5106622544, &&func_5106622672, &&func_5106622800, &&func_5106622928, &&func_5106623056, &&func_5106621520, &&func_5106621648, &&func_5106623696, &&func_5106623824, &&func_5106623952, &&func_5106624080, &&func_5106624208, &&func_5106624336, &&func_5106624464, &&func_5106624592, &&func_5106624720, &&func_5106624848, &&func_5106624976, &&func_5106625104, &&func_5106625232, &&func_5106625360, &&func_5106625488, &&func_5106625616, &&func_5106625744, &&func_5106618272, &&func_5106618432, &&func_5106618560, &&func_5106618752, &&func_5106618880, &&func_5106618688, &&func_5106625936, &&func_5106626064, &&func_5106626192, &&func_5106617840, &&func_5106617968, &&func_5106615664, &&func_5106626320, &&func_5106626448, &&func_5106626576, &&func_5106615584, &&func_5106626704, &&func_5106627360, &&func_5106627504, &&func_5106627664, &&func_5106627792, &&func_5106627984, &&func_5106628112, &&func_5106628240, &&func_5106628368, &&func_5106627920, &&func_5106628688, &&func_5106626992, &&RETURN, &&HALT};
        static void **func_5106594880_op0[2] = { cf+23, cf+122};
        static void **func_5106594880_op1[2] = { cf+19, cf+122};
        static void **func_5106611392_op0[2] = { cf+24, cf+122};
        static void **func_5106611600_op0[2] = { cf+20, cf+122};
        static void **func_5106611600_op1[2] = { cf+13, cf+122};
        static void **func_5106611600_op2[2] = { cf+6, cf+122};
        static void **func_5106611808_op0[2] = { cf+12, cf+122};
        static void **func_5106611808_op1[2] = { cf+25, cf+122};
        static void **func_5106611264_op0[2] = { cf+27, cf+122};
        static void **func_5106612464_op0[2] = { cf+28, cf+122};
        static void **func_5106612464_op1[2] = { cf+29, cf+122};
        static void **func_5106612464_op2[2] = { cf+30, cf+122};
        static void **func_5106612464_op3[2] = { cf+31, cf+122};
        static void **func_5106612464_op4[2] = { cf+32, cf+122};
        static void **func_5106612464_op5[2] = { cf+33, cf+122};
        static void **func_5106612464_op6[2] = { cf+34, cf+122};
        static void **func_5106612464_op7[2] = { cf+35, cf+122};
        static void **func_5106612464_op8[2] = { cf+36, cf+122};
        static void **func_5106612464_op9[2] = { cf+37, cf+122};
        static void **func_5106612592_op0[2] = { cf+8, cf+122};
        static void **func_5106612592_op1[2] = { cf+1, cf+122};
        static void **func_5106612592_op2[2] = { cf+7, cf+122};
        static void **func_5106612592_op3[2] = { cf+3, cf+122};
        static void **func_5106612592_op4[2] = { cf+18, cf+122};
        static void **func_5106612368_op0[2] = { cf+38, cf+122};
        static void **func_5106612144_op0[2] = { cf+39, cf+122};
        static void **func_5106614160_op0[2] = { cf+42, cf+122};
        static void **func_5106614160_op1[2] = { cf+43, cf+122};
        static void **func_5106614160_op2[2] = { cf+44, cf+122};
        static void **func_5106614160_op3[2] = { cf+45, cf+122};
        static void **func_5106614160_op4[2] = { cf+46, cf+122};
        static void **func_5106614160_op5[2] = { cf+47, cf+122};
        static void **func_5106614160_op6[2] = { cf+48, cf+122};
        static void **func_5106614160_op7[2] = { cf+49, cf+122};
        static void **func_5106614160_op8[2] = { cf+50, cf+122};
        static void **func_5106614160_op9[2] = { cf+51, cf+122};
        static void **func_5106614160_op10[2] = { cf+52, cf+122};
        static void **func_5106614160_op11[2] = { cf+53, cf+122};
        static void **func_5106614160_op12[2] = { cf+54, cf+122};
        static void **func_5106614160_op13[2] = { cf+55, cf+122};
        static void **func_5106614160_op14[2] = { cf+56, cf+122};
        static void **func_5106614160_op15[2] = { cf+57, cf+122};
        static void **func_5106614160_op16[2] = { cf+58, cf+122};
        static void **func_5106614160_op17[2] = { cf+59, cf+122};
        static void **func_5106614160_op18[2] = { cf+60, cf+122};
        static void **func_5106614160_op19[2] = { cf+61, cf+122};
        static void **func_5106614160_op20[2] = { cf+62, cf+122};
        static void **func_5106614160_op21[2] = { cf+63, cf+122};
        static void **func_5106614160_op22[2] = { cf+64, cf+122};
        static void **func_5106614160_op23[2] = { cf+65, cf+122};
        static void **func_5106614160_op24[2] = { cf+66, cf+122};
        static void **func_5106614160_op25[2] = { cf+67, cf+122};
        static void **func_5106614160_op26[2] = { cf+68, cf+122};
        static void **func_5106614160_op27[2] = { cf+69, cf+122};
        static void **func_5106614160_op28[2] = { cf+70, cf+122};
        static void **func_5106614160_op29[2] = { cf+71, cf+122};
        static void **func_5106614160_op30[2] = { cf+72, cf+122};
        static void **func_5106614160_op31[2] = { cf+73, cf+122};
        static void **func_5106614160_op32[2] = { cf+74, cf+122};
        static void **func_5106614160_op33[2] = { cf+75, cf+122};
        static void **func_5106614160_op34[2] = { cf+76, cf+122};
        static void **func_5106614160_op35[2] = { cf+77, cf+122};
        static void **func_5106614160_op36[2] = { cf+78, cf+122};
        static void **func_5106614160_op37[2] = { cf+79, cf+122};
        static void **func_5106614160_op38[2] = { cf+80, cf+122};
        static void **func_5106614160_op39[2] = { cf+81, cf+122};
        static void **func_5106614160_op40[2] = { cf+82, cf+122};
        static void **func_5106614160_op41[2] = { cf+83, cf+122};
        static void **func_5106614160_op42[2] = { cf+84, cf+122};
        static void **func_5106614160_op43[2] = { cf+85, cf+122};
        static void **func_5106614160_op44[2] = { cf+86, cf+122};
        static void **func_5106614160_op45[2] = { cf+87, cf+122};
        static void **func_5106614160_op46[2] = { cf+88, cf+122};
        static void **func_5106614160_op47[2] = { cf+89, cf+122};
        static void **func_5106614160_op48[2] = { cf+90, cf+122};
        static void **func_5106614160_op49[2] = { cf+91, cf+122};
        static void **func_5106614160_op50[2] = { cf+92, cf+122};
        static void **func_5106614160_op51[2] = { cf+93, cf+122};
        static void **func_5106613280_op0[2] = { cf+26, cf+122};
        static void **func_5106613280_op1[2] = { cf+24, cf+122};
        static void **func_5106613280_op2[2] = { cf+94, cf+122};
        static void **func_5106613280_op3[2] = { cf+95, cf+122};
        static void **func_5106613280_op4[2] = { cf+96, cf+122};
        static void **func_5106613280_op5[2] = { cf+97, cf+122};
        static void **func_5106613280_op6[2] = { cf+38, cf+122};
        static void **func_5106613280_op7[2] = { cf+98, cf+122};
        static void **func_5106613280_op8[2] = { cf+40, cf+122};
        static void **func_5106613280_op9[2] = { cf+41, cf+122};
        static void **func_5106613280_op10[2] = { cf+99, cf+122};
        static void **func_5106613280_op11[2] = { cf+100, cf+122};
        static void **func_5106613280_op12[2] = { cf+101, cf+122};
        static void **func_5106613280_op13[2] = { cf+102, cf+122};
        static void **func_5106612720_op0[2] = { cf+103, cf+122};
        static void **func_5106612848_op0[2] = { cf+9, cf+122};
        static void **func_5106612848_op1[2] = { cf+5, cf+122};
        static void **func_5106612848_op2[2] = { cf+22, cf+122};
        static void **func_5106612976_op0[2] = { cf+105, cf+122};
        static void **func_5106613104_op0[2] = { cf+106, cf+122};
        static void **func_5106613408_op0[2] = { cf+107, cf+122};
        static void **func_5106612064_op0[2] = { cf+15, cf+122};
        static void **func_5106612064_op1[2] = { cf+3, cf+122};
        static void **func_5106612208_op0[2] = { cf+16, cf+122};
        static void **func_5106612208_op1[2] = { cf+109, cf+122};
        static void **func_5106613856_op0[2] = { cf+14, cf+122};
        static void **func_5106613856_op1[2] = { cf+11, cf+122};
        static void **func_5106613984_op0[2] = { cf+4, cf+122};
        static void **func_5106613984_op1[2] = { cf+2, cf+122};
        static void **func_5106614288_op0[2] = { cf+110, cf+122};
        static void **func_5106614416_op0[2] = { cf+0, cf+123};
        static void **func_5106614944_op0[2] = { cf+111, cf+122};
        static void **func_5106614944_op1[2] = { cf+108, cf+122};
        static void **func_5106614944_op2[2] = { cf+112, cf+122};
        static void **func_5106614944_op3[2] = { cf+113, cf+122};
        static void **func_5106614944_op4[2] = { cf+114, cf+122};
        static void **func_5106614944_op5[2] = { cf+115, cf+122};
        static void **func_5106614944_op6[2] = { cf+116, cf+122};
        static void **func_5106614944_op7[2] = { cf+117, cf+122};
        static void **func_5106614944_op8[2] = { cf+118, cf+122};
        static void **func_5106614944_op9[2] = { cf+119, cf+122};
        static void **func_5106614944_op10[2] = { cf+120, cf+122};
        static void **func_5106614624_op0[2] = { cf+121, cf+122};
        static void **exp_5106614816[3] = {cf+26, cf+10, cf+122};
        static void **exp_5106615264[3] = {cf+19, cf+2, cf+122};
        static void **exp_5106617456[4] = {cf+40, cf+0, cf+41, cf+122};
        static void **exp_5106617840[4] = {cf+104, cf+17, cf+100, cf+122};
        static void **exp_5106615664[3] = {cf+6, cf+95, cf+122};
        static void **exp_5106626320[4] = {cf+99, cf+17, cf+100, cf+122};
        static void **exp_5106626448[4] = {cf+3, cf+108, cf+3, cf+122};
        static void **exp_5106615584[3] = {cf+16, cf+17, cf+122};
        static void **exp_5106626704[3] = {cf+6, cf+94, cf+122};
        static void **exp_5106626992[4] = {cf+0, cf+98, cf+19, cf+122};
goto LOOP;

func_5106594880:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5106594880_op0;
        break;
        case 1:
            PC = func_5106594880_op1;
        break;
    }
    goto ***PC;
func_5106611392:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5106611392_op0;
        break;
    }
    goto ***PC;
func_5106611600:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5106611600_op0;
        break;
        case 1:
            PC = func_5106611600_op1;
        break;
        case 2:
            PC = func_5106611600_op2;
        break;
    }
    goto ***PC;
func_5106611808:
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
            PC = func_5106611808_op0;
        break;
        case 1:
            PC = func_5106611808_op1;
        break;
    }
    goto ***PC;
func_5106611264:
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
            PC = func_5106611264_op0;
        break;
    }
    goto ***PC;
func_5106612464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5106612464_op0;
        break;
        case 1:
            PC = func_5106612464_op1;
        break;
        case 2:
            PC = func_5106612464_op2;
        break;
        case 3:
            PC = func_5106612464_op3;
        break;
        case 4:
            PC = func_5106612464_op4;
        break;
        case 5:
            PC = func_5106612464_op5;
        break;
        case 6:
            PC = func_5106612464_op6;
        break;
        case 7:
            PC = func_5106612464_op7;
        break;
        case 8:
            PC = func_5106612464_op8;
        break;
        case 9:
            PC = func_5106612464_op9;
        break;
    }
    goto ***PC;
func_5106612592:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5106612592_op0;
        break;
        case 1:
            PC = func_5106612592_op1;
        break;
        case 2:
            PC = func_5106612592_op2;
        break;
        case 3:
            PC = func_5106612592_op3;
        break;
        case 4:
            PC = func_5106612592_op4;
        break;
    }
    goto ***PC;
func_5106612368:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5106612368_op0;
        break;
    }
    goto ***PC;
func_5106612144:
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
            PC = func_5106612144_op0;
        break;
    }
    goto ***PC;
func_5106614160:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5106614160_op0;
        break;
        case 1:
            PC = func_5106614160_op1;
        break;
        case 2:
            PC = func_5106614160_op2;
        break;
        case 3:
            PC = func_5106614160_op3;
        break;
        case 4:
            PC = func_5106614160_op4;
        break;
        case 5:
            PC = func_5106614160_op5;
        break;
        case 6:
            PC = func_5106614160_op6;
        break;
        case 7:
            PC = func_5106614160_op7;
        break;
        case 8:
            PC = func_5106614160_op8;
        break;
        case 9:
            PC = func_5106614160_op9;
        break;
        case 10:
            PC = func_5106614160_op10;
        break;
        case 11:
            PC = func_5106614160_op11;
        break;
        case 12:
            PC = func_5106614160_op12;
        break;
        case 13:
            PC = func_5106614160_op13;
        break;
        case 14:
            PC = func_5106614160_op14;
        break;
        case 15:
            PC = func_5106614160_op15;
        break;
        case 16:
            PC = func_5106614160_op16;
        break;
        case 17:
            PC = func_5106614160_op17;
        break;
        case 18:
            PC = func_5106614160_op18;
        break;
        case 19:
            PC = func_5106614160_op19;
        break;
        case 20:
            PC = func_5106614160_op20;
        break;
        case 21:
            PC = func_5106614160_op21;
        break;
        case 22:
            PC = func_5106614160_op22;
        break;
        case 23:
            PC = func_5106614160_op23;
        break;
        case 24:
            PC = func_5106614160_op24;
        break;
        case 25:
            PC = func_5106614160_op25;
        break;
        case 26:
            PC = func_5106614160_op26;
        break;
        case 27:
            PC = func_5106614160_op27;
        break;
        case 28:
            PC = func_5106614160_op28;
        break;
        case 29:
            PC = func_5106614160_op29;
        break;
        case 30:
            PC = func_5106614160_op30;
        break;
        case 31:
            PC = func_5106614160_op31;
        break;
        case 32:
            PC = func_5106614160_op32;
        break;
        case 33:
            PC = func_5106614160_op33;
        break;
        case 34:
            PC = func_5106614160_op34;
        break;
        case 35:
            PC = func_5106614160_op35;
        break;
        case 36:
            PC = func_5106614160_op36;
        break;
        case 37:
            PC = func_5106614160_op37;
        break;
        case 38:
            PC = func_5106614160_op38;
        break;
        case 39:
            PC = func_5106614160_op39;
        break;
        case 40:
            PC = func_5106614160_op40;
        break;
        case 41:
            PC = func_5106614160_op41;
        break;
        case 42:
            PC = func_5106614160_op42;
        break;
        case 43:
            PC = func_5106614160_op43;
        break;
        case 44:
            PC = func_5106614160_op44;
        break;
        case 45:
            PC = func_5106614160_op45;
        break;
        case 46:
            PC = func_5106614160_op46;
        break;
        case 47:
            PC = func_5106614160_op47;
        break;
        case 48:
            PC = func_5106614160_op48;
        break;
        case 49:
            PC = func_5106614160_op49;
        break;
        case 50:
            PC = func_5106614160_op50;
        break;
        case 51:
            PC = func_5106614160_op51;
        break;
    }
    goto ***PC;
func_5106613280:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5106613280_op0;
        break;
        case 1:
            PC = func_5106613280_op1;
        break;
        case 2:
            PC = func_5106613280_op2;
        break;
        case 3:
            PC = func_5106613280_op3;
        break;
        case 4:
            PC = func_5106613280_op4;
        break;
        case 5:
            PC = func_5106613280_op5;
        break;
        case 6:
            PC = func_5106613280_op6;
        break;
        case 7:
            PC = func_5106613280_op7;
        break;
        case 8:
            PC = func_5106613280_op8;
        break;
        case 9:
            PC = func_5106613280_op9;
        break;
        case 10:
            PC = func_5106613280_op10;
        break;
        case 11:
            PC = func_5106613280_op11;
        break;
        case 12:
            PC = func_5106613280_op12;
        break;
        case 13:
            PC = func_5106613280_op13;
        break;
    }
    goto ***PC;
func_5106612720:
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
            PC = func_5106612720_op0;
        break;
    }
    goto ***PC;
func_5106612848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5106612848_op0;
        break;
        case 1:
            PC = func_5106612848_op1;
        break;
        case 2:
            PC = func_5106612848_op2;
        break;
    }
    goto ***PC;
func_5106612976:
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
            PC = func_5106612976_op0;
        break;
    }
    goto ***PC;
func_5106613104:
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
            PC = func_5106613104_op0;
        break;
    }
    goto ***PC;
func_5106613408:
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
            PC = func_5106613408_op0;
        break;
    }
    goto ***PC;
func_5106612064:
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
            PC = func_5106612064_op0;
        break;
        case 1:
            PC = func_5106612064_op1;
        break;
    }
    goto ***PC;
func_5106612208:
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
            PC = func_5106612208_op0;
        break;
        case 1:
            PC = func_5106612208_op1;
        break;
    }
    goto ***PC;
func_5106613856:
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
            PC = func_5106613856_op0;
        break;
        case 1:
            PC = func_5106613856_op1;
        break;
    }
    goto ***PC;
func_5106613984:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5106613984_op0;
        break;
        case 1:
            PC = func_5106613984_op1;
        break;
    }
    goto ***PC;
func_5106614288:
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
            PC = func_5106614288_op0;
        break;
    }
    goto ***PC;
func_5106614416:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5106614416_op0;
        break;
    }
    goto ***PC;
func_5106614944:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto ***PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5106614944_op0;
        break;
        case 1:
            PC = func_5106614944_op1;
        break;
        case 2:
            PC = func_5106614944_op2;
        break;
        case 3:
            PC = func_5106614944_op3;
        break;
        case 4:
            PC = func_5106614944_op4;
        break;
        case 5:
            PC = func_5106614944_op5;
        break;
        case 6:
            PC = func_5106614944_op6;
        break;
        case 7:
            PC = func_5106614944_op7;
        break;
        case 8:
            PC = func_5106614944_op8;
        break;
        case 9:
            PC = func_5106614944_op9;
        break;
        case 10:
            PC = func_5106614944_op10;
        break;
    }
    goto ***PC;
func_5106614624:
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
            PC = func_5106614624_op0;
        break;
    }
    goto ***PC;
func_5106614544:
    extend(46);
    NEXT();
    goto ***PC;
func_5106614816:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5106614816;
    goto ***PC;
func_5106615136:
    extend(92);
    NEXT();
    goto ***PC;
func_5106615264:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5106615264;
    goto ***PC;
func_5106615760:
    extend(48);
    NEXT();
    goto ***PC;
func_5106615888:
    extend(49);
    NEXT();
    goto ***PC;
func_5106616016:
    extend(50);
    NEXT();
    goto ***PC;
func_5106616176:
    extend(51);
    NEXT();
    goto ***PC;
func_5106616304:
    extend(52);
    NEXT();
    goto ***PC;
func_5106613664:
    extend(53);
    NEXT();
    goto ***PC;
func_5106616880:
    extend(54);
    NEXT();
    goto ***PC;
func_5106617008:
    extend(55);
    NEXT();
    goto ***PC;
func_5106617136:
    extend(56);
    NEXT();
    goto ***PC;
func_5106613600:
    extend(57);
    NEXT();
    goto ***PC;
func_5106615456:
    extend(36);
    NEXT();
    goto ***PC;
func_5106617456:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5106617456;
    goto ***PC;
func_5106617584:
    extend(40);
    NEXT();
    goto ***PC;
func_5106617712:
    extend(41);
    NEXT();
    goto ***PC;
func_5106619184:
    extend(97);
    NEXT();
    goto ***PC;
func_5106619312:
    extend(98);
    NEXT();
    goto ***PC;
func_5106619440:
    extend(99);
    NEXT();
    goto ***PC;
func_5106619600:
    extend(100);
    NEXT();
    goto ***PC;
func_5106619728:
    extend(101);
    NEXT();
    goto ***PC;
func_5106619920:
    extend(102);
    NEXT();
    goto ***PC;
func_5106620048:
    extend(103);
    NEXT();
    goto ***PC;
func_5106620176:
    extend(104);
    NEXT();
    goto ***PC;
func_5106620304:
    extend(105);
    NEXT();
    goto ***PC;
func_5106619856:
    extend(106);
    NEXT();
    goto ***PC;
func_5106620624:
    extend(107);
    NEXT();
    goto ***PC;
func_5106620752:
    extend(108);
    NEXT();
    goto ***PC;
func_5106620880:
    extend(109);
    NEXT();
    goto ***PC;
func_5106621008:
    extend(110);
    NEXT();
    goto ***PC;
func_5106621136:
    extend(111);
    NEXT();
    goto ***PC;
func_5106621264:
    extend(112);
    NEXT();
    goto ***PC;
func_5106621392:
    extend(113);
    NEXT();
    goto ***PC;
func_5106620432:
    extend(114);
    NEXT();
    goto ***PC;
func_5106621776:
    extend(115);
    NEXT();
    goto ***PC;
func_5106621904:
    extend(116);
    NEXT();
    goto ***PC;
func_5106622032:
    extend(117);
    NEXT();
    goto ***PC;
func_5106622160:
    extend(118);
    NEXT();
    goto ***PC;
func_5106622288:
    extend(119);
    NEXT();
    goto ***PC;
func_5106616432:
    extend(120);
    NEXT();
    goto ***PC;
func_5106616560:
    extend(121);
    NEXT();
    goto ***PC;
func_5106616688:
    extend(122);
    NEXT();
    goto ***PC;
func_5106616816:
    extend(65);
    NEXT();
    goto ***PC;
func_5106622416:
    extend(66);
    NEXT();
    goto ***PC;
func_5106622544:
    extend(67);
    NEXT();
    goto ***PC;
func_5106622672:
    extend(68);
    NEXT();
    goto ***PC;
func_5106622800:
    extend(69);
    NEXT();
    goto ***PC;
func_5106622928:
    extend(70);
    NEXT();
    goto ***PC;
func_5106623056:
    extend(71);
    NEXT();
    goto ***PC;
func_5106621520:
    extend(72);
    NEXT();
    goto ***PC;
func_5106621648:
    extend(73);
    NEXT();
    goto ***PC;
func_5106623696:
    extend(74);
    NEXT();
    goto ***PC;
func_5106623824:
    extend(75);
    NEXT();
    goto ***PC;
func_5106623952:
    extend(76);
    NEXT();
    goto ***PC;
func_5106624080:
    extend(77);
    NEXT();
    goto ***PC;
func_5106624208:
    extend(78);
    NEXT();
    goto ***PC;
func_5106624336:
    extend(79);
    NEXT();
    goto ***PC;
func_5106624464:
    extend(80);
    NEXT();
    goto ***PC;
func_5106624592:
    extend(81);
    NEXT();
    goto ***PC;
func_5106624720:
    extend(82);
    NEXT();
    goto ***PC;
func_5106624848:
    extend(83);
    NEXT();
    goto ***PC;
func_5106624976:
    extend(84);
    NEXT();
    goto ***PC;
func_5106625104:
    extend(85);
    NEXT();
    goto ***PC;
func_5106625232:
    extend(86);
    NEXT();
    goto ***PC;
func_5106625360:
    extend(87);
    NEXT();
    goto ***PC;
func_5106625488:
    extend(88);
    NEXT();
    goto ***PC;
func_5106625616:
    extend(89);
    NEXT();
    goto ***PC;
func_5106625744:
    extend(90);
    NEXT();
    goto ***PC;
func_5106618272:
    extend(42);
    NEXT();
    goto ***PC;
func_5106618432:
    extend(43);
    NEXT();
    goto ***PC;
func_5106618560:
    extend(63);
    NEXT();
    goto ***PC;
func_5106618752:
    extend(94);
    NEXT();
    goto ***PC;
func_5106618880:
    extend(124);
    NEXT();
    goto ***PC;
func_5106618688:
    extend(91);
    NEXT();
    goto ***PC;
func_5106625936:
    extend(93);
    NEXT();
    goto ***PC;
func_5106626064:
    extend(123);
    NEXT();
    goto ***PC;
func_5106626192:
    extend(125);
    NEXT();
    goto ***PC;
func_5106617840:
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
    PC = exp_5106617840;
    goto ***PC;
func_5106617968:
    extend(91);
    extend(94);
    NEXT();
    goto ***PC;
func_5106615664:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5106615664;
    goto ***PC;
func_5106626320:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5106626320;
    goto ***PC;
func_5106626448:
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
    PC = exp_5106626448;
    goto ***PC;
func_5106626576:
    extend(45);
    NEXT();
    goto ***PC;
func_5106615584:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5106615584;
    goto ***PC;
func_5106626704:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5106626704;
    goto ***PC;
func_5106627360:
    extend(95);
    NEXT();
    goto ***PC;
func_5106627504:
    extend(64);
    NEXT();
    goto ***PC;
func_5106627664:
    extend(35);
    NEXT();
    goto ***PC;
func_5106627792:
    extend(37);
    NEXT();
    goto ***PC;
func_5106627984:
    extend(38);
    NEXT();
    goto ***PC;
func_5106628112:
    extend(61);
    NEXT();
    goto ***PC;
func_5106628240:
    extend(126);
    NEXT();
    goto ***PC;
func_5106628368:
    extend(96);
    NEXT();
    goto ***PC;
func_5106627920:
    extend(39);
    NEXT();
    goto ***PC;
func_5106628688:
    extend(34);
    NEXT();
    goto ***PC;
func_5106626992:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5106626992;
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
    PC = func_5106614416_op0;
    goto ***PC;
}
