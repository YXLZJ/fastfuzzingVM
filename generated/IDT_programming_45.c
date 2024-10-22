#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 45
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
        static void * cf[] = {&&func_4922060176, &&func_4922060928, &&func_4922061088, &&func_4922060800, &&func_4922060448, &&func_4922060048, &&func_4922060688, &&func_4922061216, &&func_4922062848, &&func_4922060368, &&func_4922061408, &&func_4922061616, &&func_4922061536, &&func_4922062048, &&func_4922062336, &&func_4922061888, &&func_4922061808, &&func_4922062272, &&func_4922062592, &&func_4922062720, &&func_4922063872, &&func_4922064000, &&func_4922064128, &&func_4922064256, &&func_4922064384, &&func_4922064512, &&func_4922064672, &&func_4922064800, &&func_4922064960, &&func_4922065088, &&func_4922065312, &&func_4922065440, &&func_4922065616, &&func_4922063104, &&func_4922063744, &&func_4922063296, &&func_4922066192, &&func_4922066320, &&func_4922066448, &&func_4922066640, &&func_4922066768, &&func_4922066896, &&func_4922067024, &&func_4922066576, &&func_4922063232, &&func_4922067568, &&func_4922063424, &&func_4922063552, &&func_4922067424, &&func_4922067792, &&func_4922067920, &&func_4922062176, &&func_4922068528, &&func_4922062912, &&func_4922068784, &&func_4922068128, &&func_4922069088, &&func_4922069216, &&func_4922070560, &&func_4922070688, &&func_4922070816, &&func_4922070976, &&func_4922071104, &&func_4922071296, &&func_4922071424, &&func_4922065744, &&func_4922065872, &&func_4922071232, &&func_4922071488, &&func_4922071616, &&func_4922071744, &&func_4922071872, &&func_4922072000, &&func_4922072128, &&func_4922072256, &&func_4922066000, &&func_4922072640, &&func_4922072768, &&func_4922072896, &&func_4922073024, &&func_4922073152, &&func_4922073280, &&func_4922073408, &&func_4922073536, &&func_4922073664, &&func_4922073792, &&func_4922073920, &&func_4922074048, &&func_4922074176, &&func_4922074304, &&func_4922074432, &&func_4922072384, &&func_4922072512, &&func_4922075072, &&func_4922075200, &&func_4922075328, &&func_4922075456, &&func_4922075584, &&func_4922075712, &&func_4922075840, &&func_4922075968, &&func_4922076096, &&func_4922076224, &&func_4922076352, &&func_4922076480, &&func_4922076608, &&func_4922076736, &&func_4922076864, &&func_4922076992, &&func_4922077120, &&func_4922068912, &&func_4922068256, &&func_4922069488, &&func_4922069616, &&func_4922070112, &&func_4922070240, &&func_4922069744, &&func_4922070368, &&func_4922077328, &&func_4922077456, &&func_4922077584, &&func_4922077712, &&func_4922077840, &&func_4922077968, &&func_4922078096, &&func_4922077248, &&func_4922070016, &&RETURN, &&HALT};
        static void **func_4922060176_op0[2] = { cf+17, cf+127};
        static void **func_4922060928_op0[2] = { cf+20, cf+127};
        static void **func_4922060928_op1[2] = { cf+22, cf+127};
        static void **func_4922060928_op2[2] = { cf+24, cf+127};
        static void **func_4922060928_op3[2] = { cf+26, cf+127};
        static void **func_4922060928_op4[2] = { cf+28, cf+127};
        static void **func_4922060928_op5[2] = { cf+30, cf+127};
        static void **func_4922060928_op6[2] = { cf+32, cf+127};
        static void **func_4922061088_op0[2] = { cf+34, cf+127};
        static void **func_4922061088_op1[2] = { cf+35, cf+127};
        static void **func_4922061088_op2[2] = { cf+36, cf+127};
        static void **func_4922061088_op3[2] = { cf+37, cf+127};
        static void **func_4922061088_op4[2] = { cf+38, cf+127};
        static void **func_4922061088_op5[2] = { cf+39, cf+127};
        static void **func_4922061088_op6[2] = { cf+40, cf+127};
        static void **func_4922061088_op7[2] = { cf+41, cf+127};
        static void **func_4922061088_op8[2] = { cf+42, cf+127};
        static void **func_4922061088_op9[2] = { cf+43, cf+127};
        static void **func_4922060800_op0[2] = { cf+44, cf+127};
        static void **func_4922060800_op1[2] = { cf+46, cf+127};
        static void **func_4922060800_op2[2] = { cf+14, cf+127};
        static void **func_4922060448_op0[2] = { cf+48, cf+127};
        static void **func_4922060448_op1[2] = { cf+9, cf+127};
        static void **func_4922060448_op2[2] = { cf+6, cf+127};
        static void **func_4922060048_op0[2] = { cf+51, cf+127};
        static void **func_4922060688_op0[2] = { cf+55, cf+127};
        static void **func_4922060688_op1[2] = { cf+8, cf+127};
        static void **func_4922061216_op0[2] = { cf+56, cf+127};
        static void **func_4922062848_op0[2] = { cf+58, cf+127};
        static void **func_4922062848_op1[2] = { cf+59, cf+127};
        static void **func_4922062848_op2[2] = { cf+60, cf+127};
        static void **func_4922062848_op3[2] = { cf+61, cf+127};
        static void **func_4922062848_op4[2] = { cf+62, cf+127};
        static void **func_4922062848_op5[2] = { cf+63, cf+127};
        static void **func_4922062848_op6[2] = { cf+64, cf+127};
        static void **func_4922062848_op7[2] = { cf+65, cf+127};
        static void **func_4922062848_op8[2] = { cf+66, cf+127};
        static void **func_4922062848_op9[2] = { cf+67, cf+127};
        static void **func_4922062848_op10[2] = { cf+68, cf+127};
        static void **func_4922062848_op11[2] = { cf+69, cf+127};
        static void **func_4922062848_op12[2] = { cf+70, cf+127};
        static void **func_4922062848_op13[2] = { cf+71, cf+127};
        static void **func_4922062848_op14[2] = { cf+72, cf+127};
        static void **func_4922062848_op15[2] = { cf+73, cf+127};
        static void **func_4922062848_op16[2] = { cf+74, cf+127};
        static void **func_4922062848_op17[2] = { cf+75, cf+127};
        static void **func_4922062848_op18[2] = { cf+76, cf+127};
        static void **func_4922062848_op19[2] = { cf+77, cf+127};
        static void **func_4922062848_op20[2] = { cf+78, cf+127};
        static void **func_4922062848_op21[2] = { cf+79, cf+127};
        static void **func_4922062848_op22[2] = { cf+80, cf+127};
        static void **func_4922062848_op23[2] = { cf+81, cf+127};
        static void **func_4922062848_op24[2] = { cf+82, cf+127};
        static void **func_4922062848_op25[2] = { cf+83, cf+127};
        static void **func_4922062848_op26[2] = { cf+84, cf+127};
        static void **func_4922062848_op27[2] = { cf+85, cf+127};
        static void **func_4922062848_op28[2] = { cf+86, cf+127};
        static void **func_4922062848_op29[2] = { cf+87, cf+127};
        static void **func_4922062848_op30[2] = { cf+88, cf+127};
        static void **func_4922062848_op31[2] = { cf+89, cf+127};
        static void **func_4922062848_op32[2] = { cf+90, cf+127};
        static void **func_4922062848_op33[2] = { cf+91, cf+127};
        static void **func_4922062848_op34[2] = { cf+92, cf+127};
        static void **func_4922062848_op35[2] = { cf+93, cf+127};
        static void **func_4922062848_op36[2] = { cf+94, cf+127};
        static void **func_4922062848_op37[2] = { cf+95, cf+127};
        static void **func_4922062848_op38[2] = { cf+96, cf+127};
        static void **func_4922062848_op39[2] = { cf+97, cf+127};
        static void **func_4922062848_op40[2] = { cf+98, cf+127};
        static void **func_4922062848_op41[2] = { cf+99, cf+127};
        static void **func_4922062848_op42[2] = { cf+100, cf+127};
        static void **func_4922062848_op43[2] = { cf+101, cf+127};
        static void **func_4922062848_op44[2] = { cf+102, cf+127};
        static void **func_4922062848_op45[2] = { cf+103, cf+127};
        static void **func_4922062848_op46[2] = { cf+104, cf+127};
        static void **func_4922062848_op47[2] = { cf+105, cf+127};
        static void **func_4922062848_op48[2] = { cf+106, cf+127};
        static void **func_4922062848_op49[2] = { cf+107, cf+127};
        static void **func_4922062848_op50[2] = { cf+108, cf+127};
        static void **func_4922062848_op51[2] = { cf+109, cf+127};
        static void **func_4922060368_op0[2] = { cf+110, cf+127};
        static void **func_4922060368_op1[2] = { cf+2, cf+127};
        static void **func_4922061408_op0[2] = { cf+111, cf+127};
        static void **func_4922061408_op1[2] = { cf+13, cf+127};
        static void **func_4922061616_op0[2] = { cf+112, cf+127};
        static void **func_4922061536_op0[2] = { cf+10, cf+128};
        static void **func_4922062048_op0[2] = { cf+15, cf+127};
        static void **func_4922062048_op1[2] = { cf+0, cf+127};
        static void **func_4922062048_op2[2] = { cf+7, cf+127};
        static void **func_4922062048_op3[2] = { cf+16, cf+127};
        static void **func_4922062048_op4[2] = { cf+5, cf+127};
        static void **func_4922062048_op5[2] = { cf+11, cf+127};
        static void **func_4922062336_op0[2] = { cf+114, cf+127};
        static void **func_4922062336_op1[2] = { cf+116, cf+127};
        static void **func_4922062336_op2[2] = { cf+4, cf+127};
        static void **func_4922061888_op0[2] = { cf+118, cf+127};
        static void **func_4922061888_op1[2] = { cf+121, cf+127};
        static void **func_4922061888_op2[2] = { cf+123, cf+127};
        static void **func_4922061808_op0[2] = { cf+125, cf+127};
        static void **exp_4922062272[5] = {cf+6, cf+18, cf+3, cf+19, cf+127};
        static void **exp_4922063872[4] = {cf+3, cf+21, cf+3, cf+127};
        static void **exp_4922064128[4] = {cf+3, cf+23, cf+3, cf+127};
        static void **exp_4922064384[4] = {cf+3, cf+25, cf+3, cf+127};
        static void **exp_4922064672[4] = {cf+3, cf+27, cf+3, cf+127};
        static void **exp_4922064960[4] = {cf+1, cf+29, cf+1, cf+127};
        static void **exp_4922065312[4] = {cf+1, cf+31, cf+1, cf+127};
        static void **exp_4922065616[3] = {cf+33, cf+1, cf+127};
        static void **exp_4922063232[4] = {cf+3, cf+45, cf+14, cf+127};
        static void **exp_4922063424[4] = {cf+3, cf+47, cf+14, cf+127};
        static void **exp_4922067424[4] = {cf+49, cf+3, cf+50, cf+127};
        static void **exp_4922062176[8] = {cf+52, cf+6, cf+49, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_4922068128[3] = {cf+8, cf+6, cf+127};
        static void **exp_4922069088[8] = {cf+57, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_4922068912[3] = {cf+2, cf+9, cf+127};
        static void **exp_4922068256[3] = {cf+10, cf+13, cf+127};
        static void **exp_4922069488[4] = {cf+113, cf+3, cf+19, cf+127};
        static void **exp_4922070112[4] = {cf+14, cf+115, cf+4, cf+127};
        static void **exp_4922069744[4] = {cf+14, cf+117, cf+4, cf+127};
        static void **exp_4922077328[4] = {cf+119, cf+6, cf+120, cf+127};
        static void **exp_4922077712[4] = {cf+122, cf+6, cf+120, cf+127};
        static void **exp_4922077968[4] = {cf+124, cf+6, cf+120, cf+127};
        static void **exp_4922077248[8] = {cf+126, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
goto LOOP;

func_4922060176:
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
            PC = func_4922060176_op0;
        break;
    }
    goto ***PC;
func_4922060928:
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
            PC = func_4922060928_op0;
        break;
        case 1:
            PC = func_4922060928_op1;
        break;
        case 2:
            PC = func_4922060928_op2;
        break;
        case 3:
            PC = func_4922060928_op3;
        break;
        case 4:
            PC = func_4922060928_op4;
        break;
        case 5:
            PC = func_4922060928_op5;
        break;
        case 6:
            PC = func_4922060928_op6;
        break;
    }
    goto ***PC;
func_4922061088:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4922061088_op0;
        break;
        case 1:
            PC = func_4922061088_op1;
        break;
        case 2:
            PC = func_4922061088_op2;
        break;
        case 3:
            PC = func_4922061088_op3;
        break;
        case 4:
            PC = func_4922061088_op4;
        break;
        case 5:
            PC = func_4922061088_op5;
        break;
        case 6:
            PC = func_4922061088_op6;
        break;
        case 7:
            PC = func_4922061088_op7;
        break;
        case 8:
            PC = func_4922061088_op8;
        break;
        case 9:
            PC = func_4922061088_op9;
        break;
    }
    goto ***PC;
func_4922060800:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4922060800_op0;
        break;
        case 1:
            PC = func_4922060800_op1;
        break;
        case 2:
            PC = func_4922060800_op2;
        break;
    }
    goto ***PC;
func_4922060448:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4922060448_op0;
        break;
        case 1:
            PC = func_4922060448_op1;
        break;
        case 2:
            PC = func_4922060448_op2;
        break;
    }
    goto ***PC;
func_4922060048:
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
            PC = func_4922060048_op0;
        break;
    }
    goto ***PC;
func_4922060688:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4922060688_op0;
        break;
        case 1:
            PC = func_4922060688_op1;
        break;
    }
    goto ***PC;
func_4922061216:
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
            PC = func_4922061216_op0;
        break;
    }
    goto ***PC;
func_4922062848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_4922062848_op0;
        break;
        case 1:
            PC = func_4922062848_op1;
        break;
        case 2:
            PC = func_4922062848_op2;
        break;
        case 3:
            PC = func_4922062848_op3;
        break;
        case 4:
            PC = func_4922062848_op4;
        break;
        case 5:
            PC = func_4922062848_op5;
        break;
        case 6:
            PC = func_4922062848_op6;
        break;
        case 7:
            PC = func_4922062848_op7;
        break;
        case 8:
            PC = func_4922062848_op8;
        break;
        case 9:
            PC = func_4922062848_op9;
        break;
        case 10:
            PC = func_4922062848_op10;
        break;
        case 11:
            PC = func_4922062848_op11;
        break;
        case 12:
            PC = func_4922062848_op12;
        break;
        case 13:
            PC = func_4922062848_op13;
        break;
        case 14:
            PC = func_4922062848_op14;
        break;
        case 15:
            PC = func_4922062848_op15;
        break;
        case 16:
            PC = func_4922062848_op16;
        break;
        case 17:
            PC = func_4922062848_op17;
        break;
        case 18:
            PC = func_4922062848_op18;
        break;
        case 19:
            PC = func_4922062848_op19;
        break;
        case 20:
            PC = func_4922062848_op20;
        break;
        case 21:
            PC = func_4922062848_op21;
        break;
        case 22:
            PC = func_4922062848_op22;
        break;
        case 23:
            PC = func_4922062848_op23;
        break;
        case 24:
            PC = func_4922062848_op24;
        break;
        case 25:
            PC = func_4922062848_op25;
        break;
        case 26:
            PC = func_4922062848_op26;
        break;
        case 27:
            PC = func_4922062848_op27;
        break;
        case 28:
            PC = func_4922062848_op28;
        break;
        case 29:
            PC = func_4922062848_op29;
        break;
        case 30:
            PC = func_4922062848_op30;
        break;
        case 31:
            PC = func_4922062848_op31;
        break;
        case 32:
            PC = func_4922062848_op32;
        break;
        case 33:
            PC = func_4922062848_op33;
        break;
        case 34:
            PC = func_4922062848_op34;
        break;
        case 35:
            PC = func_4922062848_op35;
        break;
        case 36:
            PC = func_4922062848_op36;
        break;
        case 37:
            PC = func_4922062848_op37;
        break;
        case 38:
            PC = func_4922062848_op38;
        break;
        case 39:
            PC = func_4922062848_op39;
        break;
        case 40:
            PC = func_4922062848_op40;
        break;
        case 41:
            PC = func_4922062848_op41;
        break;
        case 42:
            PC = func_4922062848_op42;
        break;
        case 43:
            PC = func_4922062848_op43;
        break;
        case 44:
            PC = func_4922062848_op44;
        break;
        case 45:
            PC = func_4922062848_op45;
        break;
        case 46:
            PC = func_4922062848_op46;
        break;
        case 47:
            PC = func_4922062848_op47;
        break;
        case 48:
            PC = func_4922062848_op48;
        break;
        case 49:
            PC = func_4922062848_op49;
        break;
        case 50:
            PC = func_4922062848_op50;
        break;
        case 51:
            PC = func_4922062848_op51;
        break;
    }
    goto ***PC;
func_4922060368:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4922060368_op0;
        break;
        case 1:
            PC = func_4922060368_op1;
        break;
    }
    goto ***PC;
func_4922061408:
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
            PC = func_4922061408_op0;
        break;
        case 1:
            PC = func_4922061408_op1;
        break;
    }
    goto ***PC;
func_4922061616:
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
            PC = func_4922061616_op0;
        break;
    }
    goto ***PC;
func_4922061536:
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
            PC = func_4922061536_op0;
        break;
    }
    goto ***PC;
func_4922062048:
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
            PC = func_4922062048_op0;
        break;
        case 1:
            PC = func_4922062048_op1;
        break;
        case 2:
            PC = func_4922062048_op2;
        break;
        case 3:
            PC = func_4922062048_op3;
        break;
        case 4:
            PC = func_4922062048_op4;
        break;
        case 5:
            PC = func_4922062048_op5;
        break;
    }
    goto ***PC;
func_4922062336:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4922062336_op0;
        break;
        case 1:
            PC = func_4922062336_op1;
        break;
        case 2:
            PC = func_4922062336_op2;
        break;
    }
    goto ***PC;
func_4922061888:
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
            PC = func_4922061888_op0;
        break;
        case 1:
            PC = func_4922061888_op1;
        break;
        case 2:
            PC = func_4922061888_op2;
        break;
    }
    goto ***PC;
func_4922061808:
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
            PC = func_4922061808_op0;
        break;
    }
    goto ***PC;
func_4922062272:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922062272;
    goto ***PC;
func_4922062592:
    extend(61);
    NEXT();
    goto ***PC;
func_4922062720:
    extend(59);
    NEXT();
    goto ***PC;
func_4922063872:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922063872;
    goto ***PC;
func_4922064000:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_4922064128:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922064128;
    goto ***PC;
func_4922064256:
    extend(33);
    extend(61);
    NEXT();
    goto ***PC;
func_4922064384:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922064384;
    goto ***PC;
func_4922064512:
    extend(62);
    NEXT();
    goto ***PC;
func_4922064672:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922064672;
    goto ***PC;
func_4922064800:
    extend(60);
    NEXT();
    goto ***PC;
func_4922064960:
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
    PC = exp_4922064960;
    goto ***PC;
func_4922065088:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_4922065312:
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
    PC = exp_4922065312;
    goto ***PC;
func_4922065440:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_4922065616:
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
    PC = exp_4922065616;
    goto ***PC;
func_4922063104:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto ***PC;
func_4922063744:
    extend(48);
    NEXT();
    goto ***PC;
func_4922063296:
    extend(49);
    NEXT();
    goto ***PC;
func_4922066192:
    extend(50);
    NEXT();
    goto ***PC;
func_4922066320:
    extend(51);
    NEXT();
    goto ***PC;
func_4922066448:
    extend(52);
    NEXT();
    goto ***PC;
func_4922066640:
    extend(53);
    NEXT();
    goto ***PC;
func_4922066768:
    extend(54);
    NEXT();
    goto ***PC;
func_4922066896:
    extend(55);
    NEXT();
    goto ***PC;
func_4922067024:
    extend(56);
    NEXT();
    goto ***PC;
func_4922066576:
    extend(57);
    NEXT();
    goto ***PC;
func_4922063232:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922063232;
    goto ***PC;
func_4922067568:
    extend(43);
    NEXT();
    goto ***PC;
func_4922063424:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922063424;
    goto ***PC;
func_4922063552:
    extend(45);
    NEXT();
    goto ***PC;
func_4922067424:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922067424;
    goto ***PC;
func_4922067792:
    extend(40);
    NEXT();
    goto ***PC;
func_4922067920:
    extend(41);
    NEXT();
    goto ***PC;
func_4922062176:
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
    PC = exp_4922062176;
    goto ***PC;
func_4922068528:
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
func_4922062912:
    extend(123);
    NEXT();
    goto ***PC;
func_4922068784:
    extend(125);
    NEXT();
    goto ***PC;
func_4922068128:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922068128;
    goto ***PC;
func_4922069088:
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
    PC = exp_4922069088;
    goto ***PC;
func_4922069216:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_4922070560:
    extend(97);
    NEXT();
    goto ***PC;
func_4922070688:
    extend(98);
    NEXT();
    goto ***PC;
func_4922070816:
    extend(99);
    NEXT();
    goto ***PC;
func_4922070976:
    extend(100);
    NEXT();
    goto ***PC;
func_4922071104:
    extend(101);
    NEXT();
    goto ***PC;
func_4922071296:
    extend(102);
    NEXT();
    goto ***PC;
func_4922071424:
    extend(103);
    NEXT();
    goto ***PC;
func_4922065744:
    extend(104);
    NEXT();
    goto ***PC;
func_4922065872:
    extend(105);
    NEXT();
    goto ***PC;
func_4922071232:
    extend(106);
    NEXT();
    goto ***PC;
func_4922071488:
    extend(107);
    NEXT();
    goto ***PC;
func_4922071616:
    extend(108);
    NEXT();
    goto ***PC;
func_4922071744:
    extend(109);
    NEXT();
    goto ***PC;
func_4922071872:
    extend(110);
    NEXT();
    goto ***PC;
func_4922072000:
    extend(111);
    NEXT();
    goto ***PC;
func_4922072128:
    extend(112);
    NEXT();
    goto ***PC;
func_4922072256:
    extend(113);
    NEXT();
    goto ***PC;
func_4922066000:
    extend(114);
    NEXT();
    goto ***PC;
func_4922072640:
    extend(115);
    NEXT();
    goto ***PC;
func_4922072768:
    extend(116);
    NEXT();
    goto ***PC;
func_4922072896:
    extend(117);
    NEXT();
    goto ***PC;
func_4922073024:
    extend(118);
    NEXT();
    goto ***PC;
func_4922073152:
    extend(119);
    NEXT();
    goto ***PC;
func_4922073280:
    extend(120);
    NEXT();
    goto ***PC;
func_4922073408:
    extend(121);
    NEXT();
    goto ***PC;
func_4922073536:
    extend(122);
    NEXT();
    goto ***PC;
func_4922073664:
    extend(65);
    NEXT();
    goto ***PC;
func_4922073792:
    extend(66);
    NEXT();
    goto ***PC;
func_4922073920:
    extend(67);
    NEXT();
    goto ***PC;
func_4922074048:
    extend(68);
    NEXT();
    goto ***PC;
func_4922074176:
    extend(69);
    NEXT();
    goto ***PC;
func_4922074304:
    extend(70);
    NEXT();
    goto ***PC;
func_4922074432:
    extend(71);
    NEXT();
    goto ***PC;
func_4922072384:
    extend(72);
    NEXT();
    goto ***PC;
func_4922072512:
    extend(73);
    NEXT();
    goto ***PC;
func_4922075072:
    extend(74);
    NEXT();
    goto ***PC;
func_4922075200:
    extend(75);
    NEXT();
    goto ***PC;
func_4922075328:
    extend(76);
    NEXT();
    goto ***PC;
func_4922075456:
    extend(77);
    NEXT();
    goto ***PC;
func_4922075584:
    extend(78);
    NEXT();
    goto ***PC;
func_4922075712:
    extend(79);
    NEXT();
    goto ***PC;
func_4922075840:
    extend(80);
    NEXT();
    goto ***PC;
func_4922075968:
    extend(81);
    NEXT();
    goto ***PC;
func_4922076096:
    extend(82);
    NEXT();
    goto ***PC;
func_4922076224:
    extend(83);
    NEXT();
    goto ***PC;
func_4922076352:
    extend(84);
    NEXT();
    goto ***PC;
func_4922076480:
    extend(85);
    NEXT();
    goto ***PC;
func_4922076608:
    extend(86);
    NEXT();
    goto ***PC;
func_4922076736:
    extend(87);
    NEXT();
    goto ***PC;
func_4922076864:
    extend(88);
    NEXT();
    goto ***PC;
func_4922076992:
    extend(89);
    NEXT();
    goto ***PC;
func_4922077120:
    extend(90);
    NEXT();
    goto ***PC;
func_4922068912:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922068912;
    goto ***PC;
func_4922068256:
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
    PC = exp_4922068256;
    goto ***PC;
func_4922069488:
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
    PC = exp_4922069488;
    goto ***PC;
func_4922069616:
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
func_4922070112:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922070112;
    goto ***PC;
func_4922070240:
    extend(42);
    NEXT();
    goto ***PC;
func_4922069744:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922069744;
    goto ***PC;
func_4922070368:
    extend(47);
    NEXT();
    goto ***PC;
func_4922077328:
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
    PC = exp_4922077328;
    goto ***PC;
func_4922077456:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_4922077584:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto ***PC;
func_4922077712:
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
    PC = exp_4922077712;
    goto ***PC;
func_4922077840:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_4922077968:
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
    PC = exp_4922077968;
    goto ***PC;
func_4922078096:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto ***PC;
func_4922077248:
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
    PC = exp_4922077248;
    goto ***PC;
func_4922070016:
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
    PC = func_4922061536_op0;
    goto ***PC;
}
