#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 20
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
        static void * cf[] = {&&func_5140149312, &&func_5140165824, &&func_5140166032, &&func_5140166240, &&func_5140165696, &&func_5140166896, &&func_5140167024, &&func_5140166800, &&func_5140166576, &&func_5140168592, &&func_5140167712, &&func_5140167152, &&func_5140167280, &&func_5140167408, &&func_5140167536, &&func_5140167840, &&func_5140166496, &&func_5140166640, &&func_5140168288, &&func_5140168416, &&func_5140168720, &&func_5140168848, &&func_5140169376, &&func_5140169056, &&func_5140168976, &&func_5140169248, &&func_5140169568, &&func_5140169696, &&func_5140170192, &&func_5140170320, &&func_5140170448, &&func_5140170608, &&func_5140170736, &&func_5140168096, &&func_5140171312, &&func_5140171440, &&func_5140171568, &&func_5140168032, &&func_5140169888, &&func_5140171888, &&func_5140172016, &&func_5140172144, &&func_5140173616, &&func_5140173744, &&func_5140173872, &&func_5140174032, &&func_5140174160, &&func_5140174352, &&func_5140174480, &&func_5140174608, &&func_5140174736, &&func_5140174288, &&func_5140175056, &&func_5140175184, &&func_5140175312, &&func_5140175440, &&func_5140175568, &&func_5140175696, &&func_5140175824, &&func_5140174864, &&func_5140176208, &&func_5140176336, &&func_5140176464, &&func_5140176592, &&func_5140176720, &&func_5140170864, &&func_5140170992, &&func_5140171120, &&func_5140171248, &&func_5140176848, &&func_5140176976, &&func_5140177104, &&func_5140177232, &&func_5140177360, &&func_5140177488, &&func_5140175952, &&func_5140176080, &&func_5140178128, &&func_5140178256, &&func_5140178384, &&func_5140178512, &&func_5140178640, &&func_5140178768, &&func_5140178896, &&func_5140179024, &&func_5140179152, &&func_5140179280, &&func_5140179408, &&func_5140179536, &&func_5140179664, &&func_5140179792, &&func_5140179920, &&func_5140180048, &&func_5140180176, &&func_5140172704, &&func_5140172864, &&func_5140172992, &&func_5140173184, &&func_5140173312, &&func_5140173120, &&func_5140180368, &&func_5140180496, &&func_5140180624, &&func_5140172272, &&func_5140172400, &&func_5140170096, &&func_5140180752, &&func_5140180880, &&func_5140181008, &&func_5140170016, &&func_5140181136, &&func_5140181792, &&func_5140181936, &&func_5140182096, &&func_5140182224, &&func_5140182416, &&func_5140182544, &&func_5140182672, &&func_5140182800, &&func_5140182352, &&func_5140183120, &&func_5140181424, &&RETURN, &&HALT};
        static void **func_5140149312_op0[2] = { cf+23, cf+122};
        static void **func_5140149312_op1[2] = { cf+19, cf+122};
        static void **func_5140165824_op0[2] = { cf+24, cf+122};
        static void **func_5140166032_op0[2] = { cf+20, cf+122};
        static void **func_5140166032_op1[2] = { cf+13, cf+122};
        static void **func_5140166032_op2[2] = { cf+6, cf+122};
        static void **func_5140166240_op0[2] = { cf+12, cf+122};
        static void **func_5140166240_op1[2] = { cf+25, cf+122};
        static void **func_5140165696_op0[2] = { cf+27, cf+122};
        static void **func_5140166896_op0[2] = { cf+28, cf+122};
        static void **func_5140166896_op1[2] = { cf+29, cf+122};
        static void **func_5140166896_op2[2] = { cf+30, cf+122};
        static void **func_5140166896_op3[2] = { cf+31, cf+122};
        static void **func_5140166896_op4[2] = { cf+32, cf+122};
        static void **func_5140166896_op5[2] = { cf+33, cf+122};
        static void **func_5140166896_op6[2] = { cf+34, cf+122};
        static void **func_5140166896_op7[2] = { cf+35, cf+122};
        static void **func_5140166896_op8[2] = { cf+36, cf+122};
        static void **func_5140166896_op9[2] = { cf+37, cf+122};
        static void **func_5140167024_op0[2] = { cf+8, cf+122};
        static void **func_5140167024_op1[2] = { cf+1, cf+122};
        static void **func_5140167024_op2[2] = { cf+7, cf+122};
        static void **func_5140167024_op3[2] = { cf+3, cf+122};
        static void **func_5140167024_op4[2] = { cf+18, cf+122};
        static void **func_5140166800_op0[2] = { cf+38, cf+122};
        static void **func_5140166576_op0[2] = { cf+39, cf+122};
        static void **func_5140168592_op0[2] = { cf+42, cf+122};
        static void **func_5140168592_op1[2] = { cf+43, cf+122};
        static void **func_5140168592_op2[2] = { cf+44, cf+122};
        static void **func_5140168592_op3[2] = { cf+45, cf+122};
        static void **func_5140168592_op4[2] = { cf+46, cf+122};
        static void **func_5140168592_op5[2] = { cf+47, cf+122};
        static void **func_5140168592_op6[2] = { cf+48, cf+122};
        static void **func_5140168592_op7[2] = { cf+49, cf+122};
        static void **func_5140168592_op8[2] = { cf+50, cf+122};
        static void **func_5140168592_op9[2] = { cf+51, cf+122};
        static void **func_5140168592_op10[2] = { cf+52, cf+122};
        static void **func_5140168592_op11[2] = { cf+53, cf+122};
        static void **func_5140168592_op12[2] = { cf+54, cf+122};
        static void **func_5140168592_op13[2] = { cf+55, cf+122};
        static void **func_5140168592_op14[2] = { cf+56, cf+122};
        static void **func_5140168592_op15[2] = { cf+57, cf+122};
        static void **func_5140168592_op16[2] = { cf+58, cf+122};
        static void **func_5140168592_op17[2] = { cf+59, cf+122};
        static void **func_5140168592_op18[2] = { cf+60, cf+122};
        static void **func_5140168592_op19[2] = { cf+61, cf+122};
        static void **func_5140168592_op20[2] = { cf+62, cf+122};
        static void **func_5140168592_op21[2] = { cf+63, cf+122};
        static void **func_5140168592_op22[2] = { cf+64, cf+122};
        static void **func_5140168592_op23[2] = { cf+65, cf+122};
        static void **func_5140168592_op24[2] = { cf+66, cf+122};
        static void **func_5140168592_op25[2] = { cf+67, cf+122};
        static void **func_5140168592_op26[2] = { cf+68, cf+122};
        static void **func_5140168592_op27[2] = { cf+69, cf+122};
        static void **func_5140168592_op28[2] = { cf+70, cf+122};
        static void **func_5140168592_op29[2] = { cf+71, cf+122};
        static void **func_5140168592_op30[2] = { cf+72, cf+122};
        static void **func_5140168592_op31[2] = { cf+73, cf+122};
        static void **func_5140168592_op32[2] = { cf+74, cf+122};
        static void **func_5140168592_op33[2] = { cf+75, cf+122};
        static void **func_5140168592_op34[2] = { cf+76, cf+122};
        static void **func_5140168592_op35[2] = { cf+77, cf+122};
        static void **func_5140168592_op36[2] = { cf+78, cf+122};
        static void **func_5140168592_op37[2] = { cf+79, cf+122};
        static void **func_5140168592_op38[2] = { cf+80, cf+122};
        static void **func_5140168592_op39[2] = { cf+81, cf+122};
        static void **func_5140168592_op40[2] = { cf+82, cf+122};
        static void **func_5140168592_op41[2] = { cf+83, cf+122};
        static void **func_5140168592_op42[2] = { cf+84, cf+122};
        static void **func_5140168592_op43[2] = { cf+85, cf+122};
        static void **func_5140168592_op44[2] = { cf+86, cf+122};
        static void **func_5140168592_op45[2] = { cf+87, cf+122};
        static void **func_5140168592_op46[2] = { cf+88, cf+122};
        static void **func_5140168592_op47[2] = { cf+89, cf+122};
        static void **func_5140168592_op48[2] = { cf+90, cf+122};
        static void **func_5140168592_op49[2] = { cf+91, cf+122};
        static void **func_5140168592_op50[2] = { cf+92, cf+122};
        static void **func_5140168592_op51[2] = { cf+93, cf+122};
        static void **func_5140167712_op0[2] = { cf+26, cf+122};
        static void **func_5140167712_op1[2] = { cf+24, cf+122};
        static void **func_5140167712_op2[2] = { cf+94, cf+122};
        static void **func_5140167712_op3[2] = { cf+95, cf+122};
        static void **func_5140167712_op4[2] = { cf+96, cf+122};
        static void **func_5140167712_op5[2] = { cf+97, cf+122};
        static void **func_5140167712_op6[2] = { cf+38, cf+122};
        static void **func_5140167712_op7[2] = { cf+98, cf+122};
        static void **func_5140167712_op8[2] = { cf+40, cf+122};
        static void **func_5140167712_op9[2] = { cf+41, cf+122};
        static void **func_5140167712_op10[2] = { cf+99, cf+122};
        static void **func_5140167712_op11[2] = { cf+100, cf+122};
        static void **func_5140167712_op12[2] = { cf+101, cf+122};
        static void **func_5140167712_op13[2] = { cf+102, cf+122};
        static void **func_5140167152_op0[2] = { cf+103, cf+122};
        static void **func_5140167280_op0[2] = { cf+9, cf+122};
        static void **func_5140167280_op1[2] = { cf+5, cf+122};
        static void **func_5140167280_op2[2] = { cf+22, cf+122};
        static void **func_5140167408_op0[2] = { cf+105, cf+122};
        static void **func_5140167536_op0[2] = { cf+106, cf+122};
        static void **func_5140167840_op0[2] = { cf+107, cf+122};
        static void **func_5140166496_op0[2] = { cf+15, cf+122};
        static void **func_5140166496_op1[2] = { cf+3, cf+122};
        static void **func_5140166640_op0[2] = { cf+16, cf+122};
        static void **func_5140166640_op1[2] = { cf+109, cf+122};
        static void **func_5140168288_op0[2] = { cf+14, cf+122};
        static void **func_5140168288_op1[2] = { cf+11, cf+122};
        static void **func_5140168416_op0[2] = { cf+4, cf+122};
        static void **func_5140168416_op1[2] = { cf+2, cf+122};
        static void **func_5140168720_op0[2] = { cf+110, cf+122};
        static void **func_5140168848_op0[2] = { cf+0, cf+123};
        static void **func_5140169376_op0[2] = { cf+111, cf+122};
        static void **func_5140169376_op1[2] = { cf+108, cf+122};
        static void **func_5140169376_op2[2] = { cf+112, cf+122};
        static void **func_5140169376_op3[2] = { cf+113, cf+122};
        static void **func_5140169376_op4[2] = { cf+114, cf+122};
        static void **func_5140169376_op5[2] = { cf+115, cf+122};
        static void **func_5140169376_op6[2] = { cf+116, cf+122};
        static void **func_5140169376_op7[2] = { cf+117, cf+122};
        static void **func_5140169376_op8[2] = { cf+118, cf+122};
        static void **func_5140169376_op9[2] = { cf+119, cf+122};
        static void **func_5140169376_op10[2] = { cf+120, cf+122};
        static void **func_5140169056_op0[2] = { cf+121, cf+122};
        static void **exp_5140169248[3] = {cf+26, cf+10, cf+122};
        static void **exp_5140169696[3] = {cf+19, cf+2, cf+122};
        static void **exp_5140171888[4] = {cf+40, cf+0, cf+41, cf+122};
        static void **exp_5140172272[4] = {cf+104, cf+17, cf+100, cf+122};
        static void **exp_5140170096[3] = {cf+6, cf+95, cf+122};
        static void **exp_5140180752[4] = {cf+99, cf+17, cf+100, cf+122};
        static void **exp_5140180880[4] = {cf+3, cf+108, cf+3, cf+122};
        static void **exp_5140170016[3] = {cf+16, cf+17, cf+122};
        static void **exp_5140181136[3] = {cf+6, cf+94, cf+122};
        static void **exp_5140181424[4] = {cf+0, cf+98, cf+19, cf+122};
goto LOOP;

func_5140149312:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5140149312_op0;
        break;
        case 1:
            PC = func_5140149312_op1;
        break;
    }
    goto ***PC;
func_5140165824:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5140165824_op0;
        break;
    }
    goto ***PC;
func_5140166032:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5140166032_op0;
        break;
        case 1:
            PC = func_5140166032_op1;
        break;
        case 2:
            PC = func_5140166032_op2;
        break;
    }
    goto ***PC;
func_5140166240:
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
            PC = func_5140166240_op0;
        break;
        case 1:
            PC = func_5140166240_op1;
        break;
    }
    goto ***PC;
func_5140165696:
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
            PC = func_5140165696_op0;
        break;
    }
    goto ***PC;
func_5140166896:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5140166896_op0;
        break;
        case 1:
            PC = func_5140166896_op1;
        break;
        case 2:
            PC = func_5140166896_op2;
        break;
        case 3:
            PC = func_5140166896_op3;
        break;
        case 4:
            PC = func_5140166896_op4;
        break;
        case 5:
            PC = func_5140166896_op5;
        break;
        case 6:
            PC = func_5140166896_op6;
        break;
        case 7:
            PC = func_5140166896_op7;
        break;
        case 8:
            PC = func_5140166896_op8;
        break;
        case 9:
            PC = func_5140166896_op9;
        break;
    }
    goto ***PC;
func_5140167024:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5140167024_op0;
        break;
        case 1:
            PC = func_5140167024_op1;
        break;
        case 2:
            PC = func_5140167024_op2;
        break;
        case 3:
            PC = func_5140167024_op3;
        break;
        case 4:
            PC = func_5140167024_op4;
        break;
    }
    goto ***PC;
func_5140166800:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5140166800_op0;
        break;
    }
    goto ***PC;
func_5140166576:
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
            PC = func_5140166576_op0;
        break;
    }
    goto ***PC;
func_5140168592:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5140168592_op0;
        break;
        case 1:
            PC = func_5140168592_op1;
        break;
        case 2:
            PC = func_5140168592_op2;
        break;
        case 3:
            PC = func_5140168592_op3;
        break;
        case 4:
            PC = func_5140168592_op4;
        break;
        case 5:
            PC = func_5140168592_op5;
        break;
        case 6:
            PC = func_5140168592_op6;
        break;
        case 7:
            PC = func_5140168592_op7;
        break;
        case 8:
            PC = func_5140168592_op8;
        break;
        case 9:
            PC = func_5140168592_op9;
        break;
        case 10:
            PC = func_5140168592_op10;
        break;
        case 11:
            PC = func_5140168592_op11;
        break;
        case 12:
            PC = func_5140168592_op12;
        break;
        case 13:
            PC = func_5140168592_op13;
        break;
        case 14:
            PC = func_5140168592_op14;
        break;
        case 15:
            PC = func_5140168592_op15;
        break;
        case 16:
            PC = func_5140168592_op16;
        break;
        case 17:
            PC = func_5140168592_op17;
        break;
        case 18:
            PC = func_5140168592_op18;
        break;
        case 19:
            PC = func_5140168592_op19;
        break;
        case 20:
            PC = func_5140168592_op20;
        break;
        case 21:
            PC = func_5140168592_op21;
        break;
        case 22:
            PC = func_5140168592_op22;
        break;
        case 23:
            PC = func_5140168592_op23;
        break;
        case 24:
            PC = func_5140168592_op24;
        break;
        case 25:
            PC = func_5140168592_op25;
        break;
        case 26:
            PC = func_5140168592_op26;
        break;
        case 27:
            PC = func_5140168592_op27;
        break;
        case 28:
            PC = func_5140168592_op28;
        break;
        case 29:
            PC = func_5140168592_op29;
        break;
        case 30:
            PC = func_5140168592_op30;
        break;
        case 31:
            PC = func_5140168592_op31;
        break;
        case 32:
            PC = func_5140168592_op32;
        break;
        case 33:
            PC = func_5140168592_op33;
        break;
        case 34:
            PC = func_5140168592_op34;
        break;
        case 35:
            PC = func_5140168592_op35;
        break;
        case 36:
            PC = func_5140168592_op36;
        break;
        case 37:
            PC = func_5140168592_op37;
        break;
        case 38:
            PC = func_5140168592_op38;
        break;
        case 39:
            PC = func_5140168592_op39;
        break;
        case 40:
            PC = func_5140168592_op40;
        break;
        case 41:
            PC = func_5140168592_op41;
        break;
        case 42:
            PC = func_5140168592_op42;
        break;
        case 43:
            PC = func_5140168592_op43;
        break;
        case 44:
            PC = func_5140168592_op44;
        break;
        case 45:
            PC = func_5140168592_op45;
        break;
        case 46:
            PC = func_5140168592_op46;
        break;
        case 47:
            PC = func_5140168592_op47;
        break;
        case 48:
            PC = func_5140168592_op48;
        break;
        case 49:
            PC = func_5140168592_op49;
        break;
        case 50:
            PC = func_5140168592_op50;
        break;
        case 51:
            PC = func_5140168592_op51;
        break;
    }
    goto ***PC;
func_5140167712:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5140167712_op0;
        break;
        case 1:
            PC = func_5140167712_op1;
        break;
        case 2:
            PC = func_5140167712_op2;
        break;
        case 3:
            PC = func_5140167712_op3;
        break;
        case 4:
            PC = func_5140167712_op4;
        break;
        case 5:
            PC = func_5140167712_op5;
        break;
        case 6:
            PC = func_5140167712_op6;
        break;
        case 7:
            PC = func_5140167712_op7;
        break;
        case 8:
            PC = func_5140167712_op8;
        break;
        case 9:
            PC = func_5140167712_op9;
        break;
        case 10:
            PC = func_5140167712_op10;
        break;
        case 11:
            PC = func_5140167712_op11;
        break;
        case 12:
            PC = func_5140167712_op12;
        break;
        case 13:
            PC = func_5140167712_op13;
        break;
    }
    goto ***PC;
func_5140167152:
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
            PC = func_5140167152_op0;
        break;
    }
    goto ***PC;
func_5140167280:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5140167280_op0;
        break;
        case 1:
            PC = func_5140167280_op1;
        break;
        case 2:
            PC = func_5140167280_op2;
        break;
    }
    goto ***PC;
func_5140167408:
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
            PC = func_5140167408_op0;
        break;
    }
    goto ***PC;
func_5140167536:
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
            PC = func_5140167536_op0;
        break;
    }
    goto ***PC;
func_5140167840:
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
            PC = func_5140167840_op0;
        break;
    }
    goto ***PC;
func_5140166496:
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
            PC = func_5140166496_op0;
        break;
        case 1:
            PC = func_5140166496_op1;
        break;
    }
    goto ***PC;
func_5140166640:
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
            PC = func_5140166640_op0;
        break;
        case 1:
            PC = func_5140166640_op1;
        break;
    }
    goto ***PC;
func_5140168288:
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
            PC = func_5140168288_op0;
        break;
        case 1:
            PC = func_5140168288_op1;
        break;
    }
    goto ***PC;
func_5140168416:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5140168416_op0;
        break;
        case 1:
            PC = func_5140168416_op1;
        break;
    }
    goto ***PC;
func_5140168720:
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
            PC = func_5140168720_op0;
        break;
    }
    goto ***PC;
func_5140168848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5140168848_op0;
        break;
    }
    goto ***PC;
func_5140169376:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto ***PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5140169376_op0;
        break;
        case 1:
            PC = func_5140169376_op1;
        break;
        case 2:
            PC = func_5140169376_op2;
        break;
        case 3:
            PC = func_5140169376_op3;
        break;
        case 4:
            PC = func_5140169376_op4;
        break;
        case 5:
            PC = func_5140169376_op5;
        break;
        case 6:
            PC = func_5140169376_op6;
        break;
        case 7:
            PC = func_5140169376_op7;
        break;
        case 8:
            PC = func_5140169376_op8;
        break;
        case 9:
            PC = func_5140169376_op9;
        break;
        case 10:
            PC = func_5140169376_op10;
        break;
    }
    goto ***PC;
func_5140169056:
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
            PC = func_5140169056_op0;
        break;
    }
    goto ***PC;
func_5140168976:
    extend(46);
    NEXT();
    goto ***PC;
func_5140169248:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5140169248;
    goto ***PC;
func_5140169568:
    extend(92);
    NEXT();
    goto ***PC;
func_5140169696:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5140169696;
    goto ***PC;
func_5140170192:
    extend(48);
    NEXT();
    goto ***PC;
func_5140170320:
    extend(49);
    NEXT();
    goto ***PC;
func_5140170448:
    extend(50);
    NEXT();
    goto ***PC;
func_5140170608:
    extend(51);
    NEXT();
    goto ***PC;
func_5140170736:
    extend(52);
    NEXT();
    goto ***PC;
func_5140168096:
    extend(53);
    NEXT();
    goto ***PC;
func_5140171312:
    extend(54);
    NEXT();
    goto ***PC;
func_5140171440:
    extend(55);
    NEXT();
    goto ***PC;
func_5140171568:
    extend(56);
    NEXT();
    goto ***PC;
func_5140168032:
    extend(57);
    NEXT();
    goto ***PC;
func_5140169888:
    extend(36);
    NEXT();
    goto ***PC;
func_5140171888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5140171888;
    goto ***PC;
func_5140172016:
    extend(40);
    NEXT();
    goto ***PC;
func_5140172144:
    extend(41);
    NEXT();
    goto ***PC;
func_5140173616:
    extend(97);
    NEXT();
    goto ***PC;
func_5140173744:
    extend(98);
    NEXT();
    goto ***PC;
func_5140173872:
    extend(99);
    NEXT();
    goto ***PC;
func_5140174032:
    extend(100);
    NEXT();
    goto ***PC;
func_5140174160:
    extend(101);
    NEXT();
    goto ***PC;
func_5140174352:
    extend(102);
    NEXT();
    goto ***PC;
func_5140174480:
    extend(103);
    NEXT();
    goto ***PC;
func_5140174608:
    extend(104);
    NEXT();
    goto ***PC;
func_5140174736:
    extend(105);
    NEXT();
    goto ***PC;
func_5140174288:
    extend(106);
    NEXT();
    goto ***PC;
func_5140175056:
    extend(107);
    NEXT();
    goto ***PC;
func_5140175184:
    extend(108);
    NEXT();
    goto ***PC;
func_5140175312:
    extend(109);
    NEXT();
    goto ***PC;
func_5140175440:
    extend(110);
    NEXT();
    goto ***PC;
func_5140175568:
    extend(111);
    NEXT();
    goto ***PC;
func_5140175696:
    extend(112);
    NEXT();
    goto ***PC;
func_5140175824:
    extend(113);
    NEXT();
    goto ***PC;
func_5140174864:
    extend(114);
    NEXT();
    goto ***PC;
func_5140176208:
    extend(115);
    NEXT();
    goto ***PC;
func_5140176336:
    extend(116);
    NEXT();
    goto ***PC;
func_5140176464:
    extend(117);
    NEXT();
    goto ***PC;
func_5140176592:
    extend(118);
    NEXT();
    goto ***PC;
func_5140176720:
    extend(119);
    NEXT();
    goto ***PC;
func_5140170864:
    extend(120);
    NEXT();
    goto ***PC;
func_5140170992:
    extend(121);
    NEXT();
    goto ***PC;
func_5140171120:
    extend(122);
    NEXT();
    goto ***PC;
func_5140171248:
    extend(65);
    NEXT();
    goto ***PC;
func_5140176848:
    extend(66);
    NEXT();
    goto ***PC;
func_5140176976:
    extend(67);
    NEXT();
    goto ***PC;
func_5140177104:
    extend(68);
    NEXT();
    goto ***PC;
func_5140177232:
    extend(69);
    NEXT();
    goto ***PC;
func_5140177360:
    extend(70);
    NEXT();
    goto ***PC;
func_5140177488:
    extend(71);
    NEXT();
    goto ***PC;
func_5140175952:
    extend(72);
    NEXT();
    goto ***PC;
func_5140176080:
    extend(73);
    NEXT();
    goto ***PC;
func_5140178128:
    extend(74);
    NEXT();
    goto ***PC;
func_5140178256:
    extend(75);
    NEXT();
    goto ***PC;
func_5140178384:
    extend(76);
    NEXT();
    goto ***PC;
func_5140178512:
    extend(77);
    NEXT();
    goto ***PC;
func_5140178640:
    extend(78);
    NEXT();
    goto ***PC;
func_5140178768:
    extend(79);
    NEXT();
    goto ***PC;
func_5140178896:
    extend(80);
    NEXT();
    goto ***PC;
func_5140179024:
    extend(81);
    NEXT();
    goto ***PC;
func_5140179152:
    extend(82);
    NEXT();
    goto ***PC;
func_5140179280:
    extend(83);
    NEXT();
    goto ***PC;
func_5140179408:
    extend(84);
    NEXT();
    goto ***PC;
func_5140179536:
    extend(85);
    NEXT();
    goto ***PC;
func_5140179664:
    extend(86);
    NEXT();
    goto ***PC;
func_5140179792:
    extend(87);
    NEXT();
    goto ***PC;
func_5140179920:
    extend(88);
    NEXT();
    goto ***PC;
func_5140180048:
    extend(89);
    NEXT();
    goto ***PC;
func_5140180176:
    extend(90);
    NEXT();
    goto ***PC;
func_5140172704:
    extend(42);
    NEXT();
    goto ***PC;
func_5140172864:
    extend(43);
    NEXT();
    goto ***PC;
func_5140172992:
    extend(63);
    NEXT();
    goto ***PC;
func_5140173184:
    extend(94);
    NEXT();
    goto ***PC;
func_5140173312:
    extend(124);
    NEXT();
    goto ***PC;
func_5140173120:
    extend(91);
    NEXT();
    goto ***PC;
func_5140180368:
    extend(93);
    NEXT();
    goto ***PC;
func_5140180496:
    extend(123);
    NEXT();
    goto ***PC;
func_5140180624:
    extend(125);
    NEXT();
    goto ***PC;
func_5140172272:
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
    PC = exp_5140172272;
    goto ***PC;
func_5140172400:
    extend(91);
    extend(94);
    NEXT();
    goto ***PC;
func_5140170096:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5140170096;
    goto ***PC;
func_5140180752:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5140180752;
    goto ***PC;
func_5140180880:
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
    PC = exp_5140180880;
    goto ***PC;
func_5140181008:
    extend(45);
    NEXT();
    goto ***PC;
func_5140170016:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5140170016;
    goto ***PC;
func_5140181136:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5140181136;
    goto ***PC;
func_5140181792:
    extend(95);
    NEXT();
    goto ***PC;
func_5140181936:
    extend(64);
    NEXT();
    goto ***PC;
func_5140182096:
    extend(35);
    NEXT();
    goto ***PC;
func_5140182224:
    extend(37);
    NEXT();
    goto ***PC;
func_5140182416:
    extend(38);
    NEXT();
    goto ***PC;
func_5140182544:
    extend(61);
    NEXT();
    goto ***PC;
func_5140182672:
    extend(126);
    NEXT();
    goto ***PC;
func_5140182800:
    extend(96);
    NEXT();
    goto ***PC;
func_5140182352:
    extend(39);
    NEXT();
    goto ***PC;
func_5140183120:
    extend(34);
    NEXT();
    goto ***PC;
func_5140181424:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5140181424;
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
    PC = func_5140168848_op0;
    goto ***PC;
}
