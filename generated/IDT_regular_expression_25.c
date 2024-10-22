#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 25
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
        static void * cf[] = {&&func_5089817664, &&func_5089834176, &&func_5089834384, &&func_5089834592, &&func_5089834048, &&func_5089835248, &&func_5089835376, &&func_5089835152, &&func_5089834928, &&func_5089836944, &&func_5089836064, &&func_5089835504, &&func_5089835632, &&func_5089835760, &&func_5089835888, &&func_5089836192, &&func_5089834848, &&func_5089834992, &&func_5089836640, &&func_5089836768, &&func_5089837072, &&func_5089837200, &&func_5089837728, &&func_5089837408, &&func_5089837328, &&func_5089837600, &&func_5089837920, &&func_5089838048, &&func_5089838544, &&func_5089838672, &&func_5089838800, &&func_5089838960, &&func_5089839088, &&func_5089836448, &&func_5089839664, &&func_5089839792, &&func_5089839920, &&func_5089836384, &&func_5089838240, &&func_5089840240, &&func_5089840368, &&func_5089840496, &&func_5089841968, &&func_5089842096, &&func_5089842224, &&func_5089842384, &&func_5089842512, &&func_5089842704, &&func_5089842832, &&func_5089842960, &&func_5089843088, &&func_5089842640, &&func_5089843408, &&func_5089843536, &&func_5089843664, &&func_5089843792, &&func_5089843920, &&func_5089844048, &&func_5089844176, &&func_5089843216, &&func_5089844560, &&func_5089844688, &&func_5089844816, &&func_5089844944, &&func_5089845072, &&func_5089839216, &&func_5089839344, &&func_5089839472, &&func_5089839600, &&func_5089845200, &&func_5089845328, &&func_5089845456, &&func_5089845584, &&func_5089845712, &&func_5089845840, &&func_5089844304, &&func_5089844432, &&func_5089846480, &&func_5089846608, &&func_5089846736, &&func_5089846864, &&func_5089846992, &&func_5089847120, &&func_5089847248, &&func_5089847376, &&func_5089847504, &&func_5089847632, &&func_5089847760, &&func_5089847888, &&func_5089848016, &&func_5089848144, &&func_5089848272, &&func_5089848400, &&func_5089848528, &&func_5089841056, &&func_5089841216, &&func_5089841344, &&func_5089841536, &&func_5089841664, &&func_5089841472, &&func_5089848720, &&func_5089848848, &&func_5089848976, &&func_5089840624, &&func_5089840752, &&func_5089838448, &&func_5089849104, &&func_5089849232, &&func_5089849360, &&func_5089838368, &&func_5089849488, &&func_5089850144, &&func_5089850288, &&func_5089850448, &&func_5089850576, &&func_5089850768, &&func_5089850896, &&func_5089851024, &&func_5089851152, &&func_5089850704, &&func_5089851472, &&func_5089849776, &&RETURN, &&HALT};
        static void **func_5089817664_op0[2] = { cf+23, cf+122};
        static void **func_5089817664_op1[2] = { cf+19, cf+122};
        static void **func_5089834176_op0[2] = { cf+24, cf+122};
        static void **func_5089834384_op0[2] = { cf+20, cf+122};
        static void **func_5089834384_op1[2] = { cf+13, cf+122};
        static void **func_5089834384_op2[2] = { cf+6, cf+122};
        static void **func_5089834592_op0[2] = { cf+12, cf+122};
        static void **func_5089834592_op1[2] = { cf+25, cf+122};
        static void **func_5089834048_op0[2] = { cf+27, cf+122};
        static void **func_5089835248_op0[2] = { cf+28, cf+122};
        static void **func_5089835248_op1[2] = { cf+29, cf+122};
        static void **func_5089835248_op2[2] = { cf+30, cf+122};
        static void **func_5089835248_op3[2] = { cf+31, cf+122};
        static void **func_5089835248_op4[2] = { cf+32, cf+122};
        static void **func_5089835248_op5[2] = { cf+33, cf+122};
        static void **func_5089835248_op6[2] = { cf+34, cf+122};
        static void **func_5089835248_op7[2] = { cf+35, cf+122};
        static void **func_5089835248_op8[2] = { cf+36, cf+122};
        static void **func_5089835248_op9[2] = { cf+37, cf+122};
        static void **func_5089835376_op0[2] = { cf+8, cf+122};
        static void **func_5089835376_op1[2] = { cf+1, cf+122};
        static void **func_5089835376_op2[2] = { cf+7, cf+122};
        static void **func_5089835376_op3[2] = { cf+3, cf+122};
        static void **func_5089835376_op4[2] = { cf+18, cf+122};
        static void **func_5089835152_op0[2] = { cf+38, cf+122};
        static void **func_5089834928_op0[2] = { cf+39, cf+122};
        static void **func_5089836944_op0[2] = { cf+42, cf+122};
        static void **func_5089836944_op1[2] = { cf+43, cf+122};
        static void **func_5089836944_op2[2] = { cf+44, cf+122};
        static void **func_5089836944_op3[2] = { cf+45, cf+122};
        static void **func_5089836944_op4[2] = { cf+46, cf+122};
        static void **func_5089836944_op5[2] = { cf+47, cf+122};
        static void **func_5089836944_op6[2] = { cf+48, cf+122};
        static void **func_5089836944_op7[2] = { cf+49, cf+122};
        static void **func_5089836944_op8[2] = { cf+50, cf+122};
        static void **func_5089836944_op9[2] = { cf+51, cf+122};
        static void **func_5089836944_op10[2] = { cf+52, cf+122};
        static void **func_5089836944_op11[2] = { cf+53, cf+122};
        static void **func_5089836944_op12[2] = { cf+54, cf+122};
        static void **func_5089836944_op13[2] = { cf+55, cf+122};
        static void **func_5089836944_op14[2] = { cf+56, cf+122};
        static void **func_5089836944_op15[2] = { cf+57, cf+122};
        static void **func_5089836944_op16[2] = { cf+58, cf+122};
        static void **func_5089836944_op17[2] = { cf+59, cf+122};
        static void **func_5089836944_op18[2] = { cf+60, cf+122};
        static void **func_5089836944_op19[2] = { cf+61, cf+122};
        static void **func_5089836944_op20[2] = { cf+62, cf+122};
        static void **func_5089836944_op21[2] = { cf+63, cf+122};
        static void **func_5089836944_op22[2] = { cf+64, cf+122};
        static void **func_5089836944_op23[2] = { cf+65, cf+122};
        static void **func_5089836944_op24[2] = { cf+66, cf+122};
        static void **func_5089836944_op25[2] = { cf+67, cf+122};
        static void **func_5089836944_op26[2] = { cf+68, cf+122};
        static void **func_5089836944_op27[2] = { cf+69, cf+122};
        static void **func_5089836944_op28[2] = { cf+70, cf+122};
        static void **func_5089836944_op29[2] = { cf+71, cf+122};
        static void **func_5089836944_op30[2] = { cf+72, cf+122};
        static void **func_5089836944_op31[2] = { cf+73, cf+122};
        static void **func_5089836944_op32[2] = { cf+74, cf+122};
        static void **func_5089836944_op33[2] = { cf+75, cf+122};
        static void **func_5089836944_op34[2] = { cf+76, cf+122};
        static void **func_5089836944_op35[2] = { cf+77, cf+122};
        static void **func_5089836944_op36[2] = { cf+78, cf+122};
        static void **func_5089836944_op37[2] = { cf+79, cf+122};
        static void **func_5089836944_op38[2] = { cf+80, cf+122};
        static void **func_5089836944_op39[2] = { cf+81, cf+122};
        static void **func_5089836944_op40[2] = { cf+82, cf+122};
        static void **func_5089836944_op41[2] = { cf+83, cf+122};
        static void **func_5089836944_op42[2] = { cf+84, cf+122};
        static void **func_5089836944_op43[2] = { cf+85, cf+122};
        static void **func_5089836944_op44[2] = { cf+86, cf+122};
        static void **func_5089836944_op45[2] = { cf+87, cf+122};
        static void **func_5089836944_op46[2] = { cf+88, cf+122};
        static void **func_5089836944_op47[2] = { cf+89, cf+122};
        static void **func_5089836944_op48[2] = { cf+90, cf+122};
        static void **func_5089836944_op49[2] = { cf+91, cf+122};
        static void **func_5089836944_op50[2] = { cf+92, cf+122};
        static void **func_5089836944_op51[2] = { cf+93, cf+122};
        static void **func_5089836064_op0[2] = { cf+26, cf+122};
        static void **func_5089836064_op1[2] = { cf+24, cf+122};
        static void **func_5089836064_op2[2] = { cf+94, cf+122};
        static void **func_5089836064_op3[2] = { cf+95, cf+122};
        static void **func_5089836064_op4[2] = { cf+96, cf+122};
        static void **func_5089836064_op5[2] = { cf+97, cf+122};
        static void **func_5089836064_op6[2] = { cf+38, cf+122};
        static void **func_5089836064_op7[2] = { cf+98, cf+122};
        static void **func_5089836064_op8[2] = { cf+40, cf+122};
        static void **func_5089836064_op9[2] = { cf+41, cf+122};
        static void **func_5089836064_op10[2] = { cf+99, cf+122};
        static void **func_5089836064_op11[2] = { cf+100, cf+122};
        static void **func_5089836064_op12[2] = { cf+101, cf+122};
        static void **func_5089836064_op13[2] = { cf+102, cf+122};
        static void **func_5089835504_op0[2] = { cf+103, cf+122};
        static void **func_5089835632_op0[2] = { cf+9, cf+122};
        static void **func_5089835632_op1[2] = { cf+5, cf+122};
        static void **func_5089835632_op2[2] = { cf+22, cf+122};
        static void **func_5089835760_op0[2] = { cf+105, cf+122};
        static void **func_5089835888_op0[2] = { cf+106, cf+122};
        static void **func_5089836192_op0[2] = { cf+107, cf+122};
        static void **func_5089834848_op0[2] = { cf+15, cf+122};
        static void **func_5089834848_op1[2] = { cf+3, cf+122};
        static void **func_5089834992_op0[2] = { cf+16, cf+122};
        static void **func_5089834992_op1[2] = { cf+109, cf+122};
        static void **func_5089836640_op0[2] = { cf+14, cf+122};
        static void **func_5089836640_op1[2] = { cf+11, cf+122};
        static void **func_5089836768_op0[2] = { cf+4, cf+122};
        static void **func_5089836768_op1[2] = { cf+2, cf+122};
        static void **func_5089837072_op0[2] = { cf+110, cf+122};
        static void **func_5089837200_op0[2] = { cf+0, cf+123};
        static void **func_5089837728_op0[2] = { cf+111, cf+122};
        static void **func_5089837728_op1[2] = { cf+108, cf+122};
        static void **func_5089837728_op2[2] = { cf+112, cf+122};
        static void **func_5089837728_op3[2] = { cf+113, cf+122};
        static void **func_5089837728_op4[2] = { cf+114, cf+122};
        static void **func_5089837728_op5[2] = { cf+115, cf+122};
        static void **func_5089837728_op6[2] = { cf+116, cf+122};
        static void **func_5089837728_op7[2] = { cf+117, cf+122};
        static void **func_5089837728_op8[2] = { cf+118, cf+122};
        static void **func_5089837728_op9[2] = { cf+119, cf+122};
        static void **func_5089837728_op10[2] = { cf+120, cf+122};
        static void **func_5089837408_op0[2] = { cf+121, cf+122};
        static void **exp_5089837600[3] = {cf+26, cf+10, cf+122};
        static void **exp_5089838048[3] = {cf+19, cf+2, cf+122};
        static void **exp_5089840240[4] = {cf+40, cf+0, cf+41, cf+122};
        static void **exp_5089840624[4] = {cf+104, cf+17, cf+100, cf+122};
        static void **exp_5089838448[3] = {cf+6, cf+95, cf+122};
        static void **exp_5089849104[4] = {cf+99, cf+17, cf+100, cf+122};
        static void **exp_5089849232[4] = {cf+3, cf+108, cf+3, cf+122};
        static void **exp_5089838368[3] = {cf+16, cf+17, cf+122};
        static void **exp_5089849488[3] = {cf+6, cf+94, cf+122};
        static void **exp_5089849776[4] = {cf+0, cf+98, cf+19, cf+122};
goto LOOP;

func_5089817664:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5089817664_op0;
        break;
        case 1:
            PC = func_5089817664_op1;
        break;
    }
    goto ***PC;
func_5089834176:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5089834176_op0;
        break;
    }
    goto ***PC;
func_5089834384:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5089834384_op0;
        break;
        case 1:
            PC = func_5089834384_op1;
        break;
        case 2:
            PC = func_5089834384_op2;
        break;
    }
    goto ***PC;
func_5089834592:
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
            PC = func_5089834592_op0;
        break;
        case 1:
            PC = func_5089834592_op1;
        break;
    }
    goto ***PC;
func_5089834048:
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
            PC = func_5089834048_op0;
        break;
    }
    goto ***PC;
func_5089835248:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5089835248_op0;
        break;
        case 1:
            PC = func_5089835248_op1;
        break;
        case 2:
            PC = func_5089835248_op2;
        break;
        case 3:
            PC = func_5089835248_op3;
        break;
        case 4:
            PC = func_5089835248_op4;
        break;
        case 5:
            PC = func_5089835248_op5;
        break;
        case 6:
            PC = func_5089835248_op6;
        break;
        case 7:
            PC = func_5089835248_op7;
        break;
        case 8:
            PC = func_5089835248_op8;
        break;
        case 9:
            PC = func_5089835248_op9;
        break;
    }
    goto ***PC;
func_5089835376:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5089835376_op0;
        break;
        case 1:
            PC = func_5089835376_op1;
        break;
        case 2:
            PC = func_5089835376_op2;
        break;
        case 3:
            PC = func_5089835376_op3;
        break;
        case 4:
            PC = func_5089835376_op4;
        break;
    }
    goto ***PC;
func_5089835152:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5089835152_op0;
        break;
    }
    goto ***PC;
func_5089834928:
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
            PC = func_5089834928_op0;
        break;
    }
    goto ***PC;
func_5089836944:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5089836944_op0;
        break;
        case 1:
            PC = func_5089836944_op1;
        break;
        case 2:
            PC = func_5089836944_op2;
        break;
        case 3:
            PC = func_5089836944_op3;
        break;
        case 4:
            PC = func_5089836944_op4;
        break;
        case 5:
            PC = func_5089836944_op5;
        break;
        case 6:
            PC = func_5089836944_op6;
        break;
        case 7:
            PC = func_5089836944_op7;
        break;
        case 8:
            PC = func_5089836944_op8;
        break;
        case 9:
            PC = func_5089836944_op9;
        break;
        case 10:
            PC = func_5089836944_op10;
        break;
        case 11:
            PC = func_5089836944_op11;
        break;
        case 12:
            PC = func_5089836944_op12;
        break;
        case 13:
            PC = func_5089836944_op13;
        break;
        case 14:
            PC = func_5089836944_op14;
        break;
        case 15:
            PC = func_5089836944_op15;
        break;
        case 16:
            PC = func_5089836944_op16;
        break;
        case 17:
            PC = func_5089836944_op17;
        break;
        case 18:
            PC = func_5089836944_op18;
        break;
        case 19:
            PC = func_5089836944_op19;
        break;
        case 20:
            PC = func_5089836944_op20;
        break;
        case 21:
            PC = func_5089836944_op21;
        break;
        case 22:
            PC = func_5089836944_op22;
        break;
        case 23:
            PC = func_5089836944_op23;
        break;
        case 24:
            PC = func_5089836944_op24;
        break;
        case 25:
            PC = func_5089836944_op25;
        break;
        case 26:
            PC = func_5089836944_op26;
        break;
        case 27:
            PC = func_5089836944_op27;
        break;
        case 28:
            PC = func_5089836944_op28;
        break;
        case 29:
            PC = func_5089836944_op29;
        break;
        case 30:
            PC = func_5089836944_op30;
        break;
        case 31:
            PC = func_5089836944_op31;
        break;
        case 32:
            PC = func_5089836944_op32;
        break;
        case 33:
            PC = func_5089836944_op33;
        break;
        case 34:
            PC = func_5089836944_op34;
        break;
        case 35:
            PC = func_5089836944_op35;
        break;
        case 36:
            PC = func_5089836944_op36;
        break;
        case 37:
            PC = func_5089836944_op37;
        break;
        case 38:
            PC = func_5089836944_op38;
        break;
        case 39:
            PC = func_5089836944_op39;
        break;
        case 40:
            PC = func_5089836944_op40;
        break;
        case 41:
            PC = func_5089836944_op41;
        break;
        case 42:
            PC = func_5089836944_op42;
        break;
        case 43:
            PC = func_5089836944_op43;
        break;
        case 44:
            PC = func_5089836944_op44;
        break;
        case 45:
            PC = func_5089836944_op45;
        break;
        case 46:
            PC = func_5089836944_op46;
        break;
        case 47:
            PC = func_5089836944_op47;
        break;
        case 48:
            PC = func_5089836944_op48;
        break;
        case 49:
            PC = func_5089836944_op49;
        break;
        case 50:
            PC = func_5089836944_op50;
        break;
        case 51:
            PC = func_5089836944_op51;
        break;
    }
    goto ***PC;
func_5089836064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5089836064_op0;
        break;
        case 1:
            PC = func_5089836064_op1;
        break;
        case 2:
            PC = func_5089836064_op2;
        break;
        case 3:
            PC = func_5089836064_op3;
        break;
        case 4:
            PC = func_5089836064_op4;
        break;
        case 5:
            PC = func_5089836064_op5;
        break;
        case 6:
            PC = func_5089836064_op6;
        break;
        case 7:
            PC = func_5089836064_op7;
        break;
        case 8:
            PC = func_5089836064_op8;
        break;
        case 9:
            PC = func_5089836064_op9;
        break;
        case 10:
            PC = func_5089836064_op10;
        break;
        case 11:
            PC = func_5089836064_op11;
        break;
        case 12:
            PC = func_5089836064_op12;
        break;
        case 13:
            PC = func_5089836064_op13;
        break;
    }
    goto ***PC;
func_5089835504:
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
            PC = func_5089835504_op0;
        break;
    }
    goto ***PC;
func_5089835632:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5089835632_op0;
        break;
        case 1:
            PC = func_5089835632_op1;
        break;
        case 2:
            PC = func_5089835632_op2;
        break;
    }
    goto ***PC;
func_5089835760:
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
            PC = func_5089835760_op0;
        break;
    }
    goto ***PC;
func_5089835888:
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
            PC = func_5089835888_op0;
        break;
    }
    goto ***PC;
func_5089836192:
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
            PC = func_5089836192_op0;
        break;
    }
    goto ***PC;
func_5089834848:
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
            PC = func_5089834848_op0;
        break;
        case 1:
            PC = func_5089834848_op1;
        break;
    }
    goto ***PC;
func_5089834992:
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
            PC = func_5089834992_op0;
        break;
        case 1:
            PC = func_5089834992_op1;
        break;
    }
    goto ***PC;
func_5089836640:
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
            PC = func_5089836640_op0;
        break;
        case 1:
            PC = func_5089836640_op1;
        break;
    }
    goto ***PC;
func_5089836768:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5089836768_op0;
        break;
        case 1:
            PC = func_5089836768_op1;
        break;
    }
    goto ***PC;
func_5089837072:
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
            PC = func_5089837072_op0;
        break;
    }
    goto ***PC;
func_5089837200:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5089837200_op0;
        break;
    }
    goto ***PC;
func_5089837728:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto ***PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5089837728_op0;
        break;
        case 1:
            PC = func_5089837728_op1;
        break;
        case 2:
            PC = func_5089837728_op2;
        break;
        case 3:
            PC = func_5089837728_op3;
        break;
        case 4:
            PC = func_5089837728_op4;
        break;
        case 5:
            PC = func_5089837728_op5;
        break;
        case 6:
            PC = func_5089837728_op6;
        break;
        case 7:
            PC = func_5089837728_op7;
        break;
        case 8:
            PC = func_5089837728_op8;
        break;
        case 9:
            PC = func_5089837728_op9;
        break;
        case 10:
            PC = func_5089837728_op10;
        break;
    }
    goto ***PC;
func_5089837408:
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
            PC = func_5089837408_op0;
        break;
    }
    goto ***PC;
func_5089837328:
    extend(46);
    NEXT();
    goto ***PC;
func_5089837600:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5089837600;
    goto ***PC;
func_5089837920:
    extend(92);
    NEXT();
    goto ***PC;
func_5089838048:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5089838048;
    goto ***PC;
func_5089838544:
    extend(48);
    NEXT();
    goto ***PC;
func_5089838672:
    extend(49);
    NEXT();
    goto ***PC;
func_5089838800:
    extend(50);
    NEXT();
    goto ***PC;
func_5089838960:
    extend(51);
    NEXT();
    goto ***PC;
func_5089839088:
    extend(52);
    NEXT();
    goto ***PC;
func_5089836448:
    extend(53);
    NEXT();
    goto ***PC;
func_5089839664:
    extend(54);
    NEXT();
    goto ***PC;
func_5089839792:
    extend(55);
    NEXT();
    goto ***PC;
func_5089839920:
    extend(56);
    NEXT();
    goto ***PC;
func_5089836384:
    extend(57);
    NEXT();
    goto ***PC;
func_5089838240:
    extend(36);
    NEXT();
    goto ***PC;
func_5089840240:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5089840240;
    goto ***PC;
func_5089840368:
    extend(40);
    NEXT();
    goto ***PC;
func_5089840496:
    extend(41);
    NEXT();
    goto ***PC;
func_5089841968:
    extend(97);
    NEXT();
    goto ***PC;
func_5089842096:
    extend(98);
    NEXT();
    goto ***PC;
func_5089842224:
    extend(99);
    NEXT();
    goto ***PC;
func_5089842384:
    extend(100);
    NEXT();
    goto ***PC;
func_5089842512:
    extend(101);
    NEXT();
    goto ***PC;
func_5089842704:
    extend(102);
    NEXT();
    goto ***PC;
func_5089842832:
    extend(103);
    NEXT();
    goto ***PC;
func_5089842960:
    extend(104);
    NEXT();
    goto ***PC;
func_5089843088:
    extend(105);
    NEXT();
    goto ***PC;
func_5089842640:
    extend(106);
    NEXT();
    goto ***PC;
func_5089843408:
    extend(107);
    NEXT();
    goto ***PC;
func_5089843536:
    extend(108);
    NEXT();
    goto ***PC;
func_5089843664:
    extend(109);
    NEXT();
    goto ***PC;
func_5089843792:
    extend(110);
    NEXT();
    goto ***PC;
func_5089843920:
    extend(111);
    NEXT();
    goto ***PC;
func_5089844048:
    extend(112);
    NEXT();
    goto ***PC;
func_5089844176:
    extend(113);
    NEXT();
    goto ***PC;
func_5089843216:
    extend(114);
    NEXT();
    goto ***PC;
func_5089844560:
    extend(115);
    NEXT();
    goto ***PC;
func_5089844688:
    extend(116);
    NEXT();
    goto ***PC;
func_5089844816:
    extend(117);
    NEXT();
    goto ***PC;
func_5089844944:
    extend(118);
    NEXT();
    goto ***PC;
func_5089845072:
    extend(119);
    NEXT();
    goto ***PC;
func_5089839216:
    extend(120);
    NEXT();
    goto ***PC;
func_5089839344:
    extend(121);
    NEXT();
    goto ***PC;
func_5089839472:
    extend(122);
    NEXT();
    goto ***PC;
func_5089839600:
    extend(65);
    NEXT();
    goto ***PC;
func_5089845200:
    extend(66);
    NEXT();
    goto ***PC;
func_5089845328:
    extend(67);
    NEXT();
    goto ***PC;
func_5089845456:
    extend(68);
    NEXT();
    goto ***PC;
func_5089845584:
    extend(69);
    NEXT();
    goto ***PC;
func_5089845712:
    extend(70);
    NEXT();
    goto ***PC;
func_5089845840:
    extend(71);
    NEXT();
    goto ***PC;
func_5089844304:
    extend(72);
    NEXT();
    goto ***PC;
func_5089844432:
    extend(73);
    NEXT();
    goto ***PC;
func_5089846480:
    extend(74);
    NEXT();
    goto ***PC;
func_5089846608:
    extend(75);
    NEXT();
    goto ***PC;
func_5089846736:
    extend(76);
    NEXT();
    goto ***PC;
func_5089846864:
    extend(77);
    NEXT();
    goto ***PC;
func_5089846992:
    extend(78);
    NEXT();
    goto ***PC;
func_5089847120:
    extend(79);
    NEXT();
    goto ***PC;
func_5089847248:
    extend(80);
    NEXT();
    goto ***PC;
func_5089847376:
    extend(81);
    NEXT();
    goto ***PC;
func_5089847504:
    extend(82);
    NEXT();
    goto ***PC;
func_5089847632:
    extend(83);
    NEXT();
    goto ***PC;
func_5089847760:
    extend(84);
    NEXT();
    goto ***PC;
func_5089847888:
    extend(85);
    NEXT();
    goto ***PC;
func_5089848016:
    extend(86);
    NEXT();
    goto ***PC;
func_5089848144:
    extend(87);
    NEXT();
    goto ***PC;
func_5089848272:
    extend(88);
    NEXT();
    goto ***PC;
func_5089848400:
    extend(89);
    NEXT();
    goto ***PC;
func_5089848528:
    extend(90);
    NEXT();
    goto ***PC;
func_5089841056:
    extend(42);
    NEXT();
    goto ***PC;
func_5089841216:
    extend(43);
    NEXT();
    goto ***PC;
func_5089841344:
    extend(63);
    NEXT();
    goto ***PC;
func_5089841536:
    extend(94);
    NEXT();
    goto ***PC;
func_5089841664:
    extend(124);
    NEXT();
    goto ***PC;
func_5089841472:
    extend(91);
    NEXT();
    goto ***PC;
func_5089848720:
    extend(93);
    NEXT();
    goto ***PC;
func_5089848848:
    extend(123);
    NEXT();
    goto ***PC;
func_5089848976:
    extend(125);
    NEXT();
    goto ***PC;
func_5089840624:
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
    PC = exp_5089840624;
    goto ***PC;
func_5089840752:
    extend(91);
    extend(94);
    NEXT();
    goto ***PC;
func_5089838448:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5089838448;
    goto ***PC;
func_5089849104:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5089849104;
    goto ***PC;
func_5089849232:
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
    PC = exp_5089849232;
    goto ***PC;
func_5089849360:
    extend(45);
    NEXT();
    goto ***PC;
func_5089838368:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5089838368;
    goto ***PC;
func_5089849488:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5089849488;
    goto ***PC;
func_5089850144:
    extend(95);
    NEXT();
    goto ***PC;
func_5089850288:
    extend(64);
    NEXT();
    goto ***PC;
func_5089850448:
    extend(35);
    NEXT();
    goto ***PC;
func_5089850576:
    extend(37);
    NEXT();
    goto ***PC;
func_5089850768:
    extend(38);
    NEXT();
    goto ***PC;
func_5089850896:
    extend(61);
    NEXT();
    goto ***PC;
func_5089851024:
    extend(126);
    NEXT();
    goto ***PC;
func_5089851152:
    extend(96);
    NEXT();
    goto ***PC;
func_5089850704:
    extend(39);
    NEXT();
    goto ***PC;
func_5089851472:
    extend(34);
    NEXT();
    goto ***PC;
func_5089849776:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5089849776;
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
    PC = func_5089837200_op0;
    goto ***PC;
}
