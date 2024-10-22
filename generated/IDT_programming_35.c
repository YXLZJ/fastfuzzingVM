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
        unsigned loop_limit = 23;
        static void * cf[] = {&&func_5349879184, &&func_5349879936, &&func_5349880096, &&func_5349879808, &&func_5349879456, &&func_5349879056, &&func_5349879696, &&func_5349880224, &&func_5349881856, &&func_5349879376, &&func_5349880416, &&func_5349880624, &&func_5349880544, &&func_5349881056, &&func_5349881344, &&func_5349880896, &&func_5349880816, &&func_5349881280, &&func_5349881600, &&func_5349881728, &&func_5349882880, &&func_5349883008, &&func_5349883136, &&func_5349883264, &&func_5349883392, &&func_5349883520, &&func_5349883680, &&func_5349883808, &&func_5349883968, &&func_5349884096, &&func_5349884320, &&func_5349884448, &&func_5349884624, &&func_5349882112, &&func_5349882752, &&func_5349882304, &&func_5349885200, &&func_5349885328, &&func_5349885456, &&func_5349885648, &&func_5349885776, &&func_5349885904, &&func_5349886032, &&func_5349885584, &&func_5349882240, &&func_5349886576, &&func_5349882432, &&func_5349882560, &&func_5349886432, &&func_5349886800, &&func_5349886928, &&func_5349881184, &&func_5349887536, &&func_5349881920, &&func_5349887792, &&func_5349887136, &&func_5349888096, &&func_5349888224, &&func_5349889568, &&func_5349889696, &&func_5349889824, &&func_5349889984, &&func_5349890112, &&func_5349890304, &&func_5349890432, &&func_5349884752, &&func_5349884880, &&func_5349890240, &&func_5349890496, &&func_5349890624, &&func_5349890752, &&func_5349890880, &&func_5349891008, &&func_5349891136, &&func_5349891264, &&func_5349885008, &&func_5349891648, &&func_5349891776, &&func_5349891904, &&func_5349892032, &&func_5349892160, &&func_5349892288, &&func_5349892416, &&func_5349892544, &&func_5349892672, &&func_5349892800, &&func_5349892928, &&func_5349893056, &&func_5349893184, &&func_5349893312, &&func_5349893440, &&func_5349891392, &&func_5349891520, &&func_5349894080, &&func_5349894208, &&func_5349894336, &&func_5349894464, &&func_5349894592, &&func_5349894720, &&func_5349894848, &&func_5349894976, &&func_5349895104, &&func_5349895232, &&func_5349895360, &&func_5349895488, &&func_5349895616, &&func_5349895744, &&func_5349895872, &&func_5349896000, &&func_5349896128, &&func_5349887920, &&func_5349887264, &&func_5349888496, &&func_5349888624, &&func_5349889120, &&func_5349889248, &&func_5349888752, &&func_5349889376, &&func_5349896336, &&func_5349896464, &&func_5349896592, &&func_5349896720, &&func_5349896848, &&func_5349896976, &&func_5349897104, &&func_5349896256, &&func_5349889024, &&RETURN, &&HALT};
        static void **func_5349879184_op0[2] = { cf+17, cf+127};
        static void **func_5349879936_op0[2] = { cf+20, cf+127};
        static void **func_5349879936_op1[2] = { cf+22, cf+127};
        static void **func_5349879936_op2[2] = { cf+24, cf+127};
        static void **func_5349879936_op3[2] = { cf+26, cf+127};
        static void **func_5349879936_op4[2] = { cf+28, cf+127};
        static void **func_5349879936_op5[2] = { cf+30, cf+127};
        static void **func_5349879936_op6[2] = { cf+32, cf+127};
        static void **func_5349880096_op0[2] = { cf+34, cf+127};
        static void **func_5349880096_op1[2] = { cf+35, cf+127};
        static void **func_5349880096_op2[2] = { cf+36, cf+127};
        static void **func_5349880096_op3[2] = { cf+37, cf+127};
        static void **func_5349880096_op4[2] = { cf+38, cf+127};
        static void **func_5349880096_op5[2] = { cf+39, cf+127};
        static void **func_5349880096_op6[2] = { cf+40, cf+127};
        static void **func_5349880096_op7[2] = { cf+41, cf+127};
        static void **func_5349880096_op8[2] = { cf+42, cf+127};
        static void **func_5349880096_op9[2] = { cf+43, cf+127};
        static void **func_5349879808_op0[2] = { cf+44, cf+127};
        static void **func_5349879808_op1[2] = { cf+46, cf+127};
        static void **func_5349879808_op2[2] = { cf+14, cf+127};
        static void **func_5349879456_op0[2] = { cf+48, cf+127};
        static void **func_5349879456_op1[2] = { cf+9, cf+127};
        static void **func_5349879456_op2[2] = { cf+6, cf+127};
        static void **func_5349879056_op0[2] = { cf+51, cf+127};
        static void **func_5349879696_op0[2] = { cf+55, cf+127};
        static void **func_5349879696_op1[2] = { cf+8, cf+127};
        static void **func_5349880224_op0[2] = { cf+56, cf+127};
        static void **func_5349881856_op0[2] = { cf+58, cf+127};
        static void **func_5349881856_op1[2] = { cf+59, cf+127};
        static void **func_5349881856_op2[2] = { cf+60, cf+127};
        static void **func_5349881856_op3[2] = { cf+61, cf+127};
        static void **func_5349881856_op4[2] = { cf+62, cf+127};
        static void **func_5349881856_op5[2] = { cf+63, cf+127};
        static void **func_5349881856_op6[2] = { cf+64, cf+127};
        static void **func_5349881856_op7[2] = { cf+65, cf+127};
        static void **func_5349881856_op8[2] = { cf+66, cf+127};
        static void **func_5349881856_op9[2] = { cf+67, cf+127};
        static void **func_5349881856_op10[2] = { cf+68, cf+127};
        static void **func_5349881856_op11[2] = { cf+69, cf+127};
        static void **func_5349881856_op12[2] = { cf+70, cf+127};
        static void **func_5349881856_op13[2] = { cf+71, cf+127};
        static void **func_5349881856_op14[2] = { cf+72, cf+127};
        static void **func_5349881856_op15[2] = { cf+73, cf+127};
        static void **func_5349881856_op16[2] = { cf+74, cf+127};
        static void **func_5349881856_op17[2] = { cf+75, cf+127};
        static void **func_5349881856_op18[2] = { cf+76, cf+127};
        static void **func_5349881856_op19[2] = { cf+77, cf+127};
        static void **func_5349881856_op20[2] = { cf+78, cf+127};
        static void **func_5349881856_op21[2] = { cf+79, cf+127};
        static void **func_5349881856_op22[2] = { cf+80, cf+127};
        static void **func_5349881856_op23[2] = { cf+81, cf+127};
        static void **func_5349881856_op24[2] = { cf+82, cf+127};
        static void **func_5349881856_op25[2] = { cf+83, cf+127};
        static void **func_5349881856_op26[2] = { cf+84, cf+127};
        static void **func_5349881856_op27[2] = { cf+85, cf+127};
        static void **func_5349881856_op28[2] = { cf+86, cf+127};
        static void **func_5349881856_op29[2] = { cf+87, cf+127};
        static void **func_5349881856_op30[2] = { cf+88, cf+127};
        static void **func_5349881856_op31[2] = { cf+89, cf+127};
        static void **func_5349881856_op32[2] = { cf+90, cf+127};
        static void **func_5349881856_op33[2] = { cf+91, cf+127};
        static void **func_5349881856_op34[2] = { cf+92, cf+127};
        static void **func_5349881856_op35[2] = { cf+93, cf+127};
        static void **func_5349881856_op36[2] = { cf+94, cf+127};
        static void **func_5349881856_op37[2] = { cf+95, cf+127};
        static void **func_5349881856_op38[2] = { cf+96, cf+127};
        static void **func_5349881856_op39[2] = { cf+97, cf+127};
        static void **func_5349881856_op40[2] = { cf+98, cf+127};
        static void **func_5349881856_op41[2] = { cf+99, cf+127};
        static void **func_5349881856_op42[2] = { cf+100, cf+127};
        static void **func_5349881856_op43[2] = { cf+101, cf+127};
        static void **func_5349881856_op44[2] = { cf+102, cf+127};
        static void **func_5349881856_op45[2] = { cf+103, cf+127};
        static void **func_5349881856_op46[2] = { cf+104, cf+127};
        static void **func_5349881856_op47[2] = { cf+105, cf+127};
        static void **func_5349881856_op48[2] = { cf+106, cf+127};
        static void **func_5349881856_op49[2] = { cf+107, cf+127};
        static void **func_5349881856_op50[2] = { cf+108, cf+127};
        static void **func_5349881856_op51[2] = { cf+109, cf+127};
        static void **func_5349879376_op0[2] = { cf+110, cf+127};
        static void **func_5349879376_op1[2] = { cf+2, cf+127};
        static void **func_5349880416_op0[2] = { cf+111, cf+127};
        static void **func_5349880416_op1[2] = { cf+13, cf+127};
        static void **func_5349880624_op0[2] = { cf+112, cf+127};
        static void **func_5349880544_op0[2] = { cf+10, cf+128};
        static void **func_5349881056_op0[2] = { cf+15, cf+127};
        static void **func_5349881056_op1[2] = { cf+0, cf+127};
        static void **func_5349881056_op2[2] = { cf+7, cf+127};
        static void **func_5349881056_op3[2] = { cf+16, cf+127};
        static void **func_5349881056_op4[2] = { cf+5, cf+127};
        static void **func_5349881056_op5[2] = { cf+11, cf+127};
        static void **func_5349881344_op0[2] = { cf+114, cf+127};
        static void **func_5349881344_op1[2] = { cf+116, cf+127};
        static void **func_5349881344_op2[2] = { cf+4, cf+127};
        static void **func_5349880896_op0[2] = { cf+118, cf+127};
        static void **func_5349880896_op1[2] = { cf+121, cf+127};
        static void **func_5349880896_op2[2] = { cf+123, cf+127};
        static void **func_5349880816_op0[2] = { cf+125, cf+127};
        static void **exp_5349881280[5] = {cf+6, cf+18, cf+3, cf+19, cf+127};
        static void **exp_5349882880[4] = {cf+3, cf+21, cf+3, cf+127};
        static void **exp_5349883136[4] = {cf+3, cf+23, cf+3, cf+127};
        static void **exp_5349883392[4] = {cf+3, cf+25, cf+3, cf+127};
        static void **exp_5349883680[4] = {cf+3, cf+27, cf+3, cf+127};
        static void **exp_5349883968[4] = {cf+1, cf+29, cf+1, cf+127};
        static void **exp_5349884320[4] = {cf+1, cf+31, cf+1, cf+127};
        static void **exp_5349884624[3] = {cf+33, cf+1, cf+127};
        static void **exp_5349882240[4] = {cf+3, cf+45, cf+14, cf+127};
        static void **exp_5349882432[4] = {cf+3, cf+47, cf+14, cf+127};
        static void **exp_5349886432[4] = {cf+49, cf+3, cf+50, cf+127};
        static void **exp_5349881184[8] = {cf+52, cf+6, cf+49, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_5349887136[3] = {cf+8, cf+6, cf+127};
        static void **exp_5349888096[8] = {cf+57, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_5349887920[3] = {cf+2, cf+9, cf+127};
        static void **exp_5349887264[3] = {cf+10, cf+13, cf+127};
        static void **exp_5349888496[4] = {cf+113, cf+3, cf+19, cf+127};
        static void **exp_5349889120[4] = {cf+14, cf+115, cf+4, cf+127};
        static void **exp_5349888752[4] = {cf+14, cf+117, cf+4, cf+127};
        static void **exp_5349896336[4] = {cf+119, cf+6, cf+120, cf+127};
        static void **exp_5349896720[4] = {cf+122, cf+6, cf+120, cf+127};
        static void **exp_5349896976[4] = {cf+124, cf+6, cf+120, cf+127};
        static void **exp_5349896256[8] = {cf+126, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
goto LOOP;

func_5349879184:
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
            PC = func_5349879184_op0;
        break;
    }
    goto ***PC;
func_5349879936:
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
            PC = func_5349879936_op0;
        break;
        case 1:
            PC = func_5349879936_op1;
        break;
        case 2:
            PC = func_5349879936_op2;
        break;
        case 3:
            PC = func_5349879936_op3;
        break;
        case 4:
            PC = func_5349879936_op4;
        break;
        case 5:
            PC = func_5349879936_op5;
        break;
        case 6:
            PC = func_5349879936_op6;
        break;
    }
    goto ***PC;
func_5349880096:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5349880096_op0;
        break;
        case 1:
            PC = func_5349880096_op1;
        break;
        case 2:
            PC = func_5349880096_op2;
        break;
        case 3:
            PC = func_5349880096_op3;
        break;
        case 4:
            PC = func_5349880096_op4;
        break;
        case 5:
            PC = func_5349880096_op5;
        break;
        case 6:
            PC = func_5349880096_op6;
        break;
        case 7:
            PC = func_5349880096_op7;
        break;
        case 8:
            PC = func_5349880096_op8;
        break;
        case 9:
            PC = func_5349880096_op9;
        break;
    }
    goto ***PC;
func_5349879808:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5349879808_op0;
        break;
        case 1:
            PC = func_5349879808_op1;
        break;
        case 2:
            PC = func_5349879808_op2;
        break;
    }
    goto ***PC;
func_5349879456:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5349879456_op0;
        break;
        case 1:
            PC = func_5349879456_op1;
        break;
        case 2:
            PC = func_5349879456_op2;
        break;
    }
    goto ***PC;
func_5349879056:
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
            PC = func_5349879056_op0;
        break;
    }
    goto ***PC;
func_5349879696:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5349879696_op0;
        break;
        case 1:
            PC = func_5349879696_op1;
        break;
    }
    goto ***PC;
func_5349880224:
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
            PC = func_5349880224_op0;
        break;
    }
    goto ***PC;
func_5349881856:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5349881856_op0;
        break;
        case 1:
            PC = func_5349881856_op1;
        break;
        case 2:
            PC = func_5349881856_op2;
        break;
        case 3:
            PC = func_5349881856_op3;
        break;
        case 4:
            PC = func_5349881856_op4;
        break;
        case 5:
            PC = func_5349881856_op5;
        break;
        case 6:
            PC = func_5349881856_op6;
        break;
        case 7:
            PC = func_5349881856_op7;
        break;
        case 8:
            PC = func_5349881856_op8;
        break;
        case 9:
            PC = func_5349881856_op9;
        break;
        case 10:
            PC = func_5349881856_op10;
        break;
        case 11:
            PC = func_5349881856_op11;
        break;
        case 12:
            PC = func_5349881856_op12;
        break;
        case 13:
            PC = func_5349881856_op13;
        break;
        case 14:
            PC = func_5349881856_op14;
        break;
        case 15:
            PC = func_5349881856_op15;
        break;
        case 16:
            PC = func_5349881856_op16;
        break;
        case 17:
            PC = func_5349881856_op17;
        break;
        case 18:
            PC = func_5349881856_op18;
        break;
        case 19:
            PC = func_5349881856_op19;
        break;
        case 20:
            PC = func_5349881856_op20;
        break;
        case 21:
            PC = func_5349881856_op21;
        break;
        case 22:
            PC = func_5349881856_op22;
        break;
        case 23:
            PC = func_5349881856_op23;
        break;
        case 24:
            PC = func_5349881856_op24;
        break;
        case 25:
            PC = func_5349881856_op25;
        break;
        case 26:
            PC = func_5349881856_op26;
        break;
        case 27:
            PC = func_5349881856_op27;
        break;
        case 28:
            PC = func_5349881856_op28;
        break;
        case 29:
            PC = func_5349881856_op29;
        break;
        case 30:
            PC = func_5349881856_op30;
        break;
        case 31:
            PC = func_5349881856_op31;
        break;
        case 32:
            PC = func_5349881856_op32;
        break;
        case 33:
            PC = func_5349881856_op33;
        break;
        case 34:
            PC = func_5349881856_op34;
        break;
        case 35:
            PC = func_5349881856_op35;
        break;
        case 36:
            PC = func_5349881856_op36;
        break;
        case 37:
            PC = func_5349881856_op37;
        break;
        case 38:
            PC = func_5349881856_op38;
        break;
        case 39:
            PC = func_5349881856_op39;
        break;
        case 40:
            PC = func_5349881856_op40;
        break;
        case 41:
            PC = func_5349881856_op41;
        break;
        case 42:
            PC = func_5349881856_op42;
        break;
        case 43:
            PC = func_5349881856_op43;
        break;
        case 44:
            PC = func_5349881856_op44;
        break;
        case 45:
            PC = func_5349881856_op45;
        break;
        case 46:
            PC = func_5349881856_op46;
        break;
        case 47:
            PC = func_5349881856_op47;
        break;
        case 48:
            PC = func_5349881856_op48;
        break;
        case 49:
            PC = func_5349881856_op49;
        break;
        case 50:
            PC = func_5349881856_op50;
        break;
        case 51:
            PC = func_5349881856_op51;
        break;
    }
    goto ***PC;
func_5349879376:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5349879376_op0;
        break;
        case 1:
            PC = func_5349879376_op1;
        break;
    }
    goto ***PC;
func_5349880416:
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
            PC = func_5349880416_op0;
        break;
        case 1:
            PC = func_5349880416_op1;
        break;
    }
    goto ***PC;
func_5349880624:
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
            PC = func_5349880624_op0;
        break;
    }
    goto ***PC;
func_5349880544:
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
            PC = func_5349880544_op0;
        break;
    }
    goto ***PC;
func_5349881056:
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
            PC = func_5349881056_op0;
        break;
        case 1:
            PC = func_5349881056_op1;
        break;
        case 2:
            PC = func_5349881056_op2;
        break;
        case 3:
            PC = func_5349881056_op3;
        break;
        case 4:
            PC = func_5349881056_op4;
        break;
        case 5:
            PC = func_5349881056_op5;
        break;
    }
    goto ***PC;
func_5349881344:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5349881344_op0;
        break;
        case 1:
            PC = func_5349881344_op1;
        break;
        case 2:
            PC = func_5349881344_op2;
        break;
    }
    goto ***PC;
func_5349880896:
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
            PC = func_5349880896_op0;
        break;
        case 1:
            PC = func_5349880896_op1;
        break;
        case 2:
            PC = func_5349880896_op2;
        break;
    }
    goto ***PC;
func_5349880816:
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
            PC = func_5349880816_op0;
        break;
    }
    goto ***PC;
func_5349881280:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5349881280;
    goto ***PC;
func_5349881600:
    extend(61);
    NEXT();
    goto ***PC;
func_5349881728:
    extend(59);
    NEXT();
    goto ***PC;
func_5349882880:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5349882880;
    goto ***PC;
func_5349883008:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5349883136:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5349883136;
    goto ***PC;
func_5349883264:
    extend(33);
    extend(61);
    NEXT();
    goto ***PC;
func_5349883392:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5349883392;
    goto ***PC;
func_5349883520:
    extend(62);
    NEXT();
    goto ***PC;
func_5349883680:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5349883680;
    goto ***PC;
func_5349883808:
    extend(60);
    NEXT();
    goto ***PC;
func_5349883968:
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
    PC = exp_5349883968;
    goto ***PC;
func_5349884096:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_5349884320:
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
    PC = exp_5349884320;
    goto ***PC;
func_5349884448:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_5349884624:
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
    PC = exp_5349884624;
    goto ***PC;
func_5349882112:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto ***PC;
func_5349882752:
    extend(48);
    NEXT();
    goto ***PC;
func_5349882304:
    extend(49);
    NEXT();
    goto ***PC;
func_5349885200:
    extend(50);
    NEXT();
    goto ***PC;
func_5349885328:
    extend(51);
    NEXT();
    goto ***PC;
func_5349885456:
    extend(52);
    NEXT();
    goto ***PC;
func_5349885648:
    extend(53);
    NEXT();
    goto ***PC;
func_5349885776:
    extend(54);
    NEXT();
    goto ***PC;
func_5349885904:
    extend(55);
    NEXT();
    goto ***PC;
func_5349886032:
    extend(56);
    NEXT();
    goto ***PC;
func_5349885584:
    extend(57);
    NEXT();
    goto ***PC;
func_5349882240:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5349882240;
    goto ***PC;
func_5349886576:
    extend(43);
    NEXT();
    goto ***PC;
func_5349882432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5349882432;
    goto ***PC;
func_5349882560:
    extend(45);
    NEXT();
    goto ***PC;
func_5349886432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5349886432;
    goto ***PC;
func_5349886800:
    extend(40);
    NEXT();
    goto ***PC;
func_5349886928:
    extend(41);
    NEXT();
    goto ***PC;
func_5349881184:
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
    PC = exp_5349881184;
    goto ***PC;
func_5349887536:
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
func_5349881920:
    extend(123);
    NEXT();
    goto ***PC;
func_5349887792:
    extend(125);
    NEXT();
    goto ***PC;
func_5349887136:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5349887136;
    goto ***PC;
func_5349888096:
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
    PC = exp_5349888096;
    goto ***PC;
func_5349888224:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5349889568:
    extend(97);
    NEXT();
    goto ***PC;
func_5349889696:
    extend(98);
    NEXT();
    goto ***PC;
func_5349889824:
    extend(99);
    NEXT();
    goto ***PC;
func_5349889984:
    extend(100);
    NEXT();
    goto ***PC;
func_5349890112:
    extend(101);
    NEXT();
    goto ***PC;
func_5349890304:
    extend(102);
    NEXT();
    goto ***PC;
func_5349890432:
    extend(103);
    NEXT();
    goto ***PC;
func_5349884752:
    extend(104);
    NEXT();
    goto ***PC;
func_5349884880:
    extend(105);
    NEXT();
    goto ***PC;
func_5349890240:
    extend(106);
    NEXT();
    goto ***PC;
func_5349890496:
    extend(107);
    NEXT();
    goto ***PC;
func_5349890624:
    extend(108);
    NEXT();
    goto ***PC;
func_5349890752:
    extend(109);
    NEXT();
    goto ***PC;
func_5349890880:
    extend(110);
    NEXT();
    goto ***PC;
func_5349891008:
    extend(111);
    NEXT();
    goto ***PC;
func_5349891136:
    extend(112);
    NEXT();
    goto ***PC;
func_5349891264:
    extend(113);
    NEXT();
    goto ***PC;
func_5349885008:
    extend(114);
    NEXT();
    goto ***PC;
func_5349891648:
    extend(115);
    NEXT();
    goto ***PC;
func_5349891776:
    extend(116);
    NEXT();
    goto ***PC;
func_5349891904:
    extend(117);
    NEXT();
    goto ***PC;
func_5349892032:
    extend(118);
    NEXT();
    goto ***PC;
func_5349892160:
    extend(119);
    NEXT();
    goto ***PC;
func_5349892288:
    extend(120);
    NEXT();
    goto ***PC;
func_5349892416:
    extend(121);
    NEXT();
    goto ***PC;
func_5349892544:
    extend(122);
    NEXT();
    goto ***PC;
func_5349892672:
    extend(65);
    NEXT();
    goto ***PC;
func_5349892800:
    extend(66);
    NEXT();
    goto ***PC;
func_5349892928:
    extend(67);
    NEXT();
    goto ***PC;
func_5349893056:
    extend(68);
    NEXT();
    goto ***PC;
func_5349893184:
    extend(69);
    NEXT();
    goto ***PC;
func_5349893312:
    extend(70);
    NEXT();
    goto ***PC;
func_5349893440:
    extend(71);
    NEXT();
    goto ***PC;
func_5349891392:
    extend(72);
    NEXT();
    goto ***PC;
func_5349891520:
    extend(73);
    NEXT();
    goto ***PC;
func_5349894080:
    extend(74);
    NEXT();
    goto ***PC;
func_5349894208:
    extend(75);
    NEXT();
    goto ***PC;
func_5349894336:
    extend(76);
    NEXT();
    goto ***PC;
func_5349894464:
    extend(77);
    NEXT();
    goto ***PC;
func_5349894592:
    extend(78);
    NEXT();
    goto ***PC;
func_5349894720:
    extend(79);
    NEXT();
    goto ***PC;
func_5349894848:
    extend(80);
    NEXT();
    goto ***PC;
func_5349894976:
    extend(81);
    NEXT();
    goto ***PC;
func_5349895104:
    extend(82);
    NEXT();
    goto ***PC;
func_5349895232:
    extend(83);
    NEXT();
    goto ***PC;
func_5349895360:
    extend(84);
    NEXT();
    goto ***PC;
func_5349895488:
    extend(85);
    NEXT();
    goto ***PC;
func_5349895616:
    extend(86);
    NEXT();
    goto ***PC;
func_5349895744:
    extend(87);
    NEXT();
    goto ***PC;
func_5349895872:
    extend(88);
    NEXT();
    goto ***PC;
func_5349896000:
    extend(89);
    NEXT();
    goto ***PC;
func_5349896128:
    extend(90);
    NEXT();
    goto ***PC;
func_5349887920:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5349887920;
    goto ***PC;
func_5349887264:
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
    PC = exp_5349887264;
    goto ***PC;
func_5349888496:
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
    PC = exp_5349888496;
    goto ***PC;
func_5349888624:
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
func_5349889120:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5349889120;
    goto ***PC;
func_5349889248:
    extend(42);
    NEXT();
    goto ***PC;
func_5349888752:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5349888752;
    goto ***PC;
func_5349889376:
    extend(47);
    NEXT();
    goto ***PC;
func_5349896336:
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
    PC = exp_5349896336;
    goto ***PC;
func_5349896464:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5349896592:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto ***PC;
func_5349896720:
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
    PC = exp_5349896720;
    goto ***PC;
func_5349896848:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5349896976:
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
    PC = exp_5349896976;
    goto ***PC;
func_5349897104:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto ***PC;
func_5349896256:
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
    PC = exp_5349896256;
    goto ***PC;
func_5349889024:
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
    PC = func_5349880544_op0;
    goto ***PC;
}
