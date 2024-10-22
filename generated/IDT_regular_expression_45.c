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
        unsigned loop_limit = 10;
        static void * cf[] = {&&func_5265978432, &&func_5265994944, &&func_5265995152, &&func_5265995360, &&func_5265994816, &&func_5265996016, &&func_5265996144, &&func_5265995920, &&func_5265995696, &&func_5265997712, &&func_5265996832, &&func_5265996272, &&func_5265996400, &&func_5265996528, &&func_5265996656, &&func_5265996960, &&func_5265995616, &&func_5265995760, &&func_5265997408, &&func_5265997536, &&func_5265997840, &&func_5265997968, &&func_5265998496, &&func_5265998176, &&func_5265998096, &&func_5265998368, &&func_5265998688, &&func_5265998816, &&func_5265999312, &&func_5265999440, &&func_5265999568, &&func_5265999728, &&func_5265999856, &&func_5265997216, &&func_5266000432, &&func_5266000560, &&func_5266000688, &&func_5265997152, &&func_5265999008, &&func_5266001008, &&func_5266001136, &&func_5266001264, &&func_5266002736, &&func_5266002864, &&func_5266002992, &&func_5266003152, &&func_5266003280, &&func_5266003472, &&func_5266003600, &&func_5266003728, &&func_5266003856, &&func_5266003408, &&func_5266004176, &&func_5266004304, &&func_5266004432, &&func_5266004560, &&func_5266004688, &&func_5266004816, &&func_5266004944, &&func_5266003984, &&func_5266005328, &&func_5266005456, &&func_5266005584, &&func_5266005712, &&func_5266005840, &&func_5265999984, &&func_5266000112, &&func_5266000240, &&func_5266000368, &&func_5266005968, &&func_5266006096, &&func_5266006224, &&func_5266006352, &&func_5266006480, &&func_5266006608, &&func_5266005072, &&func_5266005200, &&func_5266007248, &&func_5266007376, &&func_5266007504, &&func_5266007632, &&func_5266007760, &&func_5266007888, &&func_5266008016, &&func_5266008144, &&func_5266008272, &&func_5266008400, &&func_5266008528, &&func_5266008656, &&func_5266008784, &&func_5266008912, &&func_5266009040, &&func_5266009168, &&func_5266009296, &&func_5266001824, &&func_5266001984, &&func_5266002112, &&func_5266002304, &&func_5266002432, &&func_5266002240, &&func_5266009488, &&func_5266009616, &&func_5266009744, &&func_5266001392, &&func_5266001520, &&func_5265999216, &&func_5266009872, &&func_5266010000, &&func_5266010128, &&func_5265999136, &&func_5266010256, &&func_5266010912, &&func_5266011056, &&func_5266011216, &&func_5266011344, &&func_5266011536, &&func_5266011664, &&func_5266011792, &&func_5266011920, &&func_5266011472, &&func_5266012240, &&func_5266010544, &&RETURN, &&HALT};
        static void **func_5265978432_op0[2] = { cf+23, cf+122};
        static void **func_5265978432_op1[2] = { cf+19, cf+122};
        static void **func_5265994944_op0[2] = { cf+24, cf+122};
        static void **func_5265995152_op0[2] = { cf+20, cf+122};
        static void **func_5265995152_op1[2] = { cf+13, cf+122};
        static void **func_5265995152_op2[2] = { cf+6, cf+122};
        static void **func_5265995360_op0[2] = { cf+12, cf+122};
        static void **func_5265995360_op1[2] = { cf+25, cf+122};
        static void **func_5265994816_op0[2] = { cf+27, cf+122};
        static void **func_5265996016_op0[2] = { cf+28, cf+122};
        static void **func_5265996016_op1[2] = { cf+29, cf+122};
        static void **func_5265996016_op2[2] = { cf+30, cf+122};
        static void **func_5265996016_op3[2] = { cf+31, cf+122};
        static void **func_5265996016_op4[2] = { cf+32, cf+122};
        static void **func_5265996016_op5[2] = { cf+33, cf+122};
        static void **func_5265996016_op6[2] = { cf+34, cf+122};
        static void **func_5265996016_op7[2] = { cf+35, cf+122};
        static void **func_5265996016_op8[2] = { cf+36, cf+122};
        static void **func_5265996016_op9[2] = { cf+37, cf+122};
        static void **func_5265996144_op0[2] = { cf+8, cf+122};
        static void **func_5265996144_op1[2] = { cf+1, cf+122};
        static void **func_5265996144_op2[2] = { cf+7, cf+122};
        static void **func_5265996144_op3[2] = { cf+3, cf+122};
        static void **func_5265996144_op4[2] = { cf+18, cf+122};
        static void **func_5265995920_op0[2] = { cf+38, cf+122};
        static void **func_5265995696_op0[2] = { cf+39, cf+122};
        static void **func_5265997712_op0[2] = { cf+42, cf+122};
        static void **func_5265997712_op1[2] = { cf+43, cf+122};
        static void **func_5265997712_op2[2] = { cf+44, cf+122};
        static void **func_5265997712_op3[2] = { cf+45, cf+122};
        static void **func_5265997712_op4[2] = { cf+46, cf+122};
        static void **func_5265997712_op5[2] = { cf+47, cf+122};
        static void **func_5265997712_op6[2] = { cf+48, cf+122};
        static void **func_5265997712_op7[2] = { cf+49, cf+122};
        static void **func_5265997712_op8[2] = { cf+50, cf+122};
        static void **func_5265997712_op9[2] = { cf+51, cf+122};
        static void **func_5265997712_op10[2] = { cf+52, cf+122};
        static void **func_5265997712_op11[2] = { cf+53, cf+122};
        static void **func_5265997712_op12[2] = { cf+54, cf+122};
        static void **func_5265997712_op13[2] = { cf+55, cf+122};
        static void **func_5265997712_op14[2] = { cf+56, cf+122};
        static void **func_5265997712_op15[2] = { cf+57, cf+122};
        static void **func_5265997712_op16[2] = { cf+58, cf+122};
        static void **func_5265997712_op17[2] = { cf+59, cf+122};
        static void **func_5265997712_op18[2] = { cf+60, cf+122};
        static void **func_5265997712_op19[2] = { cf+61, cf+122};
        static void **func_5265997712_op20[2] = { cf+62, cf+122};
        static void **func_5265997712_op21[2] = { cf+63, cf+122};
        static void **func_5265997712_op22[2] = { cf+64, cf+122};
        static void **func_5265997712_op23[2] = { cf+65, cf+122};
        static void **func_5265997712_op24[2] = { cf+66, cf+122};
        static void **func_5265997712_op25[2] = { cf+67, cf+122};
        static void **func_5265997712_op26[2] = { cf+68, cf+122};
        static void **func_5265997712_op27[2] = { cf+69, cf+122};
        static void **func_5265997712_op28[2] = { cf+70, cf+122};
        static void **func_5265997712_op29[2] = { cf+71, cf+122};
        static void **func_5265997712_op30[2] = { cf+72, cf+122};
        static void **func_5265997712_op31[2] = { cf+73, cf+122};
        static void **func_5265997712_op32[2] = { cf+74, cf+122};
        static void **func_5265997712_op33[2] = { cf+75, cf+122};
        static void **func_5265997712_op34[2] = { cf+76, cf+122};
        static void **func_5265997712_op35[2] = { cf+77, cf+122};
        static void **func_5265997712_op36[2] = { cf+78, cf+122};
        static void **func_5265997712_op37[2] = { cf+79, cf+122};
        static void **func_5265997712_op38[2] = { cf+80, cf+122};
        static void **func_5265997712_op39[2] = { cf+81, cf+122};
        static void **func_5265997712_op40[2] = { cf+82, cf+122};
        static void **func_5265997712_op41[2] = { cf+83, cf+122};
        static void **func_5265997712_op42[2] = { cf+84, cf+122};
        static void **func_5265997712_op43[2] = { cf+85, cf+122};
        static void **func_5265997712_op44[2] = { cf+86, cf+122};
        static void **func_5265997712_op45[2] = { cf+87, cf+122};
        static void **func_5265997712_op46[2] = { cf+88, cf+122};
        static void **func_5265997712_op47[2] = { cf+89, cf+122};
        static void **func_5265997712_op48[2] = { cf+90, cf+122};
        static void **func_5265997712_op49[2] = { cf+91, cf+122};
        static void **func_5265997712_op50[2] = { cf+92, cf+122};
        static void **func_5265997712_op51[2] = { cf+93, cf+122};
        static void **func_5265996832_op0[2] = { cf+26, cf+122};
        static void **func_5265996832_op1[2] = { cf+24, cf+122};
        static void **func_5265996832_op2[2] = { cf+94, cf+122};
        static void **func_5265996832_op3[2] = { cf+95, cf+122};
        static void **func_5265996832_op4[2] = { cf+96, cf+122};
        static void **func_5265996832_op5[2] = { cf+97, cf+122};
        static void **func_5265996832_op6[2] = { cf+38, cf+122};
        static void **func_5265996832_op7[2] = { cf+98, cf+122};
        static void **func_5265996832_op8[2] = { cf+40, cf+122};
        static void **func_5265996832_op9[2] = { cf+41, cf+122};
        static void **func_5265996832_op10[2] = { cf+99, cf+122};
        static void **func_5265996832_op11[2] = { cf+100, cf+122};
        static void **func_5265996832_op12[2] = { cf+101, cf+122};
        static void **func_5265996832_op13[2] = { cf+102, cf+122};
        static void **func_5265996272_op0[2] = { cf+103, cf+122};
        static void **func_5265996400_op0[2] = { cf+9, cf+122};
        static void **func_5265996400_op1[2] = { cf+5, cf+122};
        static void **func_5265996400_op2[2] = { cf+22, cf+122};
        static void **func_5265996528_op0[2] = { cf+105, cf+122};
        static void **func_5265996656_op0[2] = { cf+106, cf+122};
        static void **func_5265996960_op0[2] = { cf+107, cf+122};
        static void **func_5265995616_op0[2] = { cf+15, cf+122};
        static void **func_5265995616_op1[2] = { cf+3, cf+122};
        static void **func_5265995760_op0[2] = { cf+16, cf+122};
        static void **func_5265995760_op1[2] = { cf+109, cf+122};
        static void **func_5265997408_op0[2] = { cf+14, cf+122};
        static void **func_5265997408_op1[2] = { cf+11, cf+122};
        static void **func_5265997536_op0[2] = { cf+4, cf+122};
        static void **func_5265997536_op1[2] = { cf+2, cf+122};
        static void **func_5265997840_op0[2] = { cf+110, cf+122};
        static void **func_5265997968_op0[2] = { cf+0, cf+123};
        static void **func_5265998496_op0[2] = { cf+111, cf+122};
        static void **func_5265998496_op1[2] = { cf+108, cf+122};
        static void **func_5265998496_op2[2] = { cf+112, cf+122};
        static void **func_5265998496_op3[2] = { cf+113, cf+122};
        static void **func_5265998496_op4[2] = { cf+114, cf+122};
        static void **func_5265998496_op5[2] = { cf+115, cf+122};
        static void **func_5265998496_op6[2] = { cf+116, cf+122};
        static void **func_5265998496_op7[2] = { cf+117, cf+122};
        static void **func_5265998496_op8[2] = { cf+118, cf+122};
        static void **func_5265998496_op9[2] = { cf+119, cf+122};
        static void **func_5265998496_op10[2] = { cf+120, cf+122};
        static void **func_5265998176_op0[2] = { cf+121, cf+122};
        static void **exp_5265998368[3] = {cf+26, cf+10, cf+122};
        static void **exp_5265998816[3] = {cf+19, cf+2, cf+122};
        static void **exp_5266001008[4] = {cf+40, cf+0, cf+41, cf+122};
        static void **exp_5266001392[4] = {cf+104, cf+17, cf+100, cf+122};
        static void **exp_5265999216[3] = {cf+6, cf+95, cf+122};
        static void **exp_5266009872[4] = {cf+99, cf+17, cf+100, cf+122};
        static void **exp_5266010000[4] = {cf+3, cf+108, cf+3, cf+122};
        static void **exp_5265999136[3] = {cf+16, cf+17, cf+122};
        static void **exp_5266010256[3] = {cf+6, cf+94, cf+122};
        static void **exp_5266010544[4] = {cf+0, cf+98, cf+19, cf+122};
goto LOOP;

func_5265978432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5265978432_op0;
        break;
        case 1:
            PC = func_5265978432_op1;
        break;
    }
    goto ***PC;
func_5265994944:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5265994944_op0;
        break;
    }
    goto ***PC;
func_5265995152:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5265995152_op0;
        break;
        case 1:
            PC = func_5265995152_op1;
        break;
        case 2:
            PC = func_5265995152_op2;
        break;
    }
    goto ***PC;
func_5265995360:
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
            PC = func_5265995360_op0;
        break;
        case 1:
            PC = func_5265995360_op1;
        break;
    }
    goto ***PC;
func_5265994816:
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
            PC = func_5265994816_op0;
        break;
    }
    goto ***PC;
func_5265996016:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5265996016_op0;
        break;
        case 1:
            PC = func_5265996016_op1;
        break;
        case 2:
            PC = func_5265996016_op2;
        break;
        case 3:
            PC = func_5265996016_op3;
        break;
        case 4:
            PC = func_5265996016_op4;
        break;
        case 5:
            PC = func_5265996016_op5;
        break;
        case 6:
            PC = func_5265996016_op6;
        break;
        case 7:
            PC = func_5265996016_op7;
        break;
        case 8:
            PC = func_5265996016_op8;
        break;
        case 9:
            PC = func_5265996016_op9;
        break;
    }
    goto ***PC;
func_5265996144:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5265996144_op0;
        break;
        case 1:
            PC = func_5265996144_op1;
        break;
        case 2:
            PC = func_5265996144_op2;
        break;
        case 3:
            PC = func_5265996144_op3;
        break;
        case 4:
            PC = func_5265996144_op4;
        break;
    }
    goto ***PC;
func_5265995920:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5265995920_op0;
        break;
    }
    goto ***PC;
func_5265995696:
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
            PC = func_5265995696_op0;
        break;
    }
    goto ***PC;
func_5265997712:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5265997712_op0;
        break;
        case 1:
            PC = func_5265997712_op1;
        break;
        case 2:
            PC = func_5265997712_op2;
        break;
        case 3:
            PC = func_5265997712_op3;
        break;
        case 4:
            PC = func_5265997712_op4;
        break;
        case 5:
            PC = func_5265997712_op5;
        break;
        case 6:
            PC = func_5265997712_op6;
        break;
        case 7:
            PC = func_5265997712_op7;
        break;
        case 8:
            PC = func_5265997712_op8;
        break;
        case 9:
            PC = func_5265997712_op9;
        break;
        case 10:
            PC = func_5265997712_op10;
        break;
        case 11:
            PC = func_5265997712_op11;
        break;
        case 12:
            PC = func_5265997712_op12;
        break;
        case 13:
            PC = func_5265997712_op13;
        break;
        case 14:
            PC = func_5265997712_op14;
        break;
        case 15:
            PC = func_5265997712_op15;
        break;
        case 16:
            PC = func_5265997712_op16;
        break;
        case 17:
            PC = func_5265997712_op17;
        break;
        case 18:
            PC = func_5265997712_op18;
        break;
        case 19:
            PC = func_5265997712_op19;
        break;
        case 20:
            PC = func_5265997712_op20;
        break;
        case 21:
            PC = func_5265997712_op21;
        break;
        case 22:
            PC = func_5265997712_op22;
        break;
        case 23:
            PC = func_5265997712_op23;
        break;
        case 24:
            PC = func_5265997712_op24;
        break;
        case 25:
            PC = func_5265997712_op25;
        break;
        case 26:
            PC = func_5265997712_op26;
        break;
        case 27:
            PC = func_5265997712_op27;
        break;
        case 28:
            PC = func_5265997712_op28;
        break;
        case 29:
            PC = func_5265997712_op29;
        break;
        case 30:
            PC = func_5265997712_op30;
        break;
        case 31:
            PC = func_5265997712_op31;
        break;
        case 32:
            PC = func_5265997712_op32;
        break;
        case 33:
            PC = func_5265997712_op33;
        break;
        case 34:
            PC = func_5265997712_op34;
        break;
        case 35:
            PC = func_5265997712_op35;
        break;
        case 36:
            PC = func_5265997712_op36;
        break;
        case 37:
            PC = func_5265997712_op37;
        break;
        case 38:
            PC = func_5265997712_op38;
        break;
        case 39:
            PC = func_5265997712_op39;
        break;
        case 40:
            PC = func_5265997712_op40;
        break;
        case 41:
            PC = func_5265997712_op41;
        break;
        case 42:
            PC = func_5265997712_op42;
        break;
        case 43:
            PC = func_5265997712_op43;
        break;
        case 44:
            PC = func_5265997712_op44;
        break;
        case 45:
            PC = func_5265997712_op45;
        break;
        case 46:
            PC = func_5265997712_op46;
        break;
        case 47:
            PC = func_5265997712_op47;
        break;
        case 48:
            PC = func_5265997712_op48;
        break;
        case 49:
            PC = func_5265997712_op49;
        break;
        case 50:
            PC = func_5265997712_op50;
        break;
        case 51:
            PC = func_5265997712_op51;
        break;
    }
    goto ***PC;
func_5265996832:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5265996832_op0;
        break;
        case 1:
            PC = func_5265996832_op1;
        break;
        case 2:
            PC = func_5265996832_op2;
        break;
        case 3:
            PC = func_5265996832_op3;
        break;
        case 4:
            PC = func_5265996832_op4;
        break;
        case 5:
            PC = func_5265996832_op5;
        break;
        case 6:
            PC = func_5265996832_op6;
        break;
        case 7:
            PC = func_5265996832_op7;
        break;
        case 8:
            PC = func_5265996832_op8;
        break;
        case 9:
            PC = func_5265996832_op9;
        break;
        case 10:
            PC = func_5265996832_op10;
        break;
        case 11:
            PC = func_5265996832_op11;
        break;
        case 12:
            PC = func_5265996832_op12;
        break;
        case 13:
            PC = func_5265996832_op13;
        break;
    }
    goto ***PC;
func_5265996272:
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
            PC = func_5265996272_op0;
        break;
    }
    goto ***PC;
func_5265996400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5265996400_op0;
        break;
        case 1:
            PC = func_5265996400_op1;
        break;
        case 2:
            PC = func_5265996400_op2;
        break;
    }
    goto ***PC;
func_5265996528:
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
            PC = func_5265996528_op0;
        break;
    }
    goto ***PC;
func_5265996656:
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
            PC = func_5265996656_op0;
        break;
    }
    goto ***PC;
func_5265996960:
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
            PC = func_5265996960_op0;
        break;
    }
    goto ***PC;
func_5265995616:
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
            PC = func_5265995616_op0;
        break;
        case 1:
            PC = func_5265995616_op1;
        break;
    }
    goto ***PC;
func_5265995760:
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
            PC = func_5265995760_op0;
        break;
        case 1:
            PC = func_5265995760_op1;
        break;
    }
    goto ***PC;
func_5265997408:
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
            PC = func_5265997408_op0;
        break;
        case 1:
            PC = func_5265997408_op1;
        break;
    }
    goto ***PC;
func_5265997536:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5265997536_op0;
        break;
        case 1:
            PC = func_5265997536_op1;
        break;
    }
    goto ***PC;
func_5265997840:
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
            PC = func_5265997840_op0;
        break;
    }
    goto ***PC;
func_5265997968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5265997968_op0;
        break;
    }
    goto ***PC;
func_5265998496:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto ***PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5265998496_op0;
        break;
        case 1:
            PC = func_5265998496_op1;
        break;
        case 2:
            PC = func_5265998496_op2;
        break;
        case 3:
            PC = func_5265998496_op3;
        break;
        case 4:
            PC = func_5265998496_op4;
        break;
        case 5:
            PC = func_5265998496_op5;
        break;
        case 6:
            PC = func_5265998496_op6;
        break;
        case 7:
            PC = func_5265998496_op7;
        break;
        case 8:
            PC = func_5265998496_op8;
        break;
        case 9:
            PC = func_5265998496_op9;
        break;
        case 10:
            PC = func_5265998496_op10;
        break;
    }
    goto ***PC;
func_5265998176:
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
            PC = func_5265998176_op0;
        break;
    }
    goto ***PC;
func_5265998096:
    extend(46);
    NEXT();
    goto ***PC;
func_5265998368:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5265998368;
    goto ***PC;
func_5265998688:
    extend(92);
    NEXT();
    goto ***PC;
func_5265998816:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5265998816;
    goto ***PC;
func_5265999312:
    extend(48);
    NEXT();
    goto ***PC;
func_5265999440:
    extend(49);
    NEXT();
    goto ***PC;
func_5265999568:
    extend(50);
    NEXT();
    goto ***PC;
func_5265999728:
    extend(51);
    NEXT();
    goto ***PC;
func_5265999856:
    extend(52);
    NEXT();
    goto ***PC;
func_5265997216:
    extend(53);
    NEXT();
    goto ***PC;
func_5266000432:
    extend(54);
    NEXT();
    goto ***PC;
func_5266000560:
    extend(55);
    NEXT();
    goto ***PC;
func_5266000688:
    extend(56);
    NEXT();
    goto ***PC;
func_5265997152:
    extend(57);
    NEXT();
    goto ***PC;
func_5265999008:
    extend(36);
    NEXT();
    goto ***PC;
func_5266001008:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5266001008;
    goto ***PC;
func_5266001136:
    extend(40);
    NEXT();
    goto ***PC;
func_5266001264:
    extend(41);
    NEXT();
    goto ***PC;
func_5266002736:
    extend(97);
    NEXT();
    goto ***PC;
func_5266002864:
    extend(98);
    NEXT();
    goto ***PC;
func_5266002992:
    extend(99);
    NEXT();
    goto ***PC;
func_5266003152:
    extend(100);
    NEXT();
    goto ***PC;
func_5266003280:
    extend(101);
    NEXT();
    goto ***PC;
func_5266003472:
    extend(102);
    NEXT();
    goto ***PC;
func_5266003600:
    extend(103);
    NEXT();
    goto ***PC;
func_5266003728:
    extend(104);
    NEXT();
    goto ***PC;
func_5266003856:
    extend(105);
    NEXT();
    goto ***PC;
func_5266003408:
    extend(106);
    NEXT();
    goto ***PC;
func_5266004176:
    extend(107);
    NEXT();
    goto ***PC;
func_5266004304:
    extend(108);
    NEXT();
    goto ***PC;
func_5266004432:
    extend(109);
    NEXT();
    goto ***PC;
func_5266004560:
    extend(110);
    NEXT();
    goto ***PC;
func_5266004688:
    extend(111);
    NEXT();
    goto ***PC;
func_5266004816:
    extend(112);
    NEXT();
    goto ***PC;
func_5266004944:
    extend(113);
    NEXT();
    goto ***PC;
func_5266003984:
    extend(114);
    NEXT();
    goto ***PC;
func_5266005328:
    extend(115);
    NEXT();
    goto ***PC;
func_5266005456:
    extend(116);
    NEXT();
    goto ***PC;
func_5266005584:
    extend(117);
    NEXT();
    goto ***PC;
func_5266005712:
    extend(118);
    NEXT();
    goto ***PC;
func_5266005840:
    extend(119);
    NEXT();
    goto ***PC;
func_5265999984:
    extend(120);
    NEXT();
    goto ***PC;
func_5266000112:
    extend(121);
    NEXT();
    goto ***PC;
func_5266000240:
    extend(122);
    NEXT();
    goto ***PC;
func_5266000368:
    extend(65);
    NEXT();
    goto ***PC;
func_5266005968:
    extend(66);
    NEXT();
    goto ***PC;
func_5266006096:
    extend(67);
    NEXT();
    goto ***PC;
func_5266006224:
    extend(68);
    NEXT();
    goto ***PC;
func_5266006352:
    extend(69);
    NEXT();
    goto ***PC;
func_5266006480:
    extend(70);
    NEXT();
    goto ***PC;
func_5266006608:
    extend(71);
    NEXT();
    goto ***PC;
func_5266005072:
    extend(72);
    NEXT();
    goto ***PC;
func_5266005200:
    extend(73);
    NEXT();
    goto ***PC;
func_5266007248:
    extend(74);
    NEXT();
    goto ***PC;
func_5266007376:
    extend(75);
    NEXT();
    goto ***PC;
func_5266007504:
    extend(76);
    NEXT();
    goto ***PC;
func_5266007632:
    extend(77);
    NEXT();
    goto ***PC;
func_5266007760:
    extend(78);
    NEXT();
    goto ***PC;
func_5266007888:
    extend(79);
    NEXT();
    goto ***PC;
func_5266008016:
    extend(80);
    NEXT();
    goto ***PC;
func_5266008144:
    extend(81);
    NEXT();
    goto ***PC;
func_5266008272:
    extend(82);
    NEXT();
    goto ***PC;
func_5266008400:
    extend(83);
    NEXT();
    goto ***PC;
func_5266008528:
    extend(84);
    NEXT();
    goto ***PC;
func_5266008656:
    extend(85);
    NEXT();
    goto ***PC;
func_5266008784:
    extend(86);
    NEXT();
    goto ***PC;
func_5266008912:
    extend(87);
    NEXT();
    goto ***PC;
func_5266009040:
    extend(88);
    NEXT();
    goto ***PC;
func_5266009168:
    extend(89);
    NEXT();
    goto ***PC;
func_5266009296:
    extend(90);
    NEXT();
    goto ***PC;
func_5266001824:
    extend(42);
    NEXT();
    goto ***PC;
func_5266001984:
    extend(43);
    NEXT();
    goto ***PC;
func_5266002112:
    extend(63);
    NEXT();
    goto ***PC;
func_5266002304:
    extend(94);
    NEXT();
    goto ***PC;
func_5266002432:
    extend(124);
    NEXT();
    goto ***PC;
func_5266002240:
    extend(91);
    NEXT();
    goto ***PC;
func_5266009488:
    extend(93);
    NEXT();
    goto ***PC;
func_5266009616:
    extend(123);
    NEXT();
    goto ***PC;
func_5266009744:
    extend(125);
    NEXT();
    goto ***PC;
func_5266001392:
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
    PC = exp_5266001392;
    goto ***PC;
func_5266001520:
    extend(91);
    extend(94);
    NEXT();
    goto ***PC;
func_5265999216:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5265999216;
    goto ***PC;
func_5266009872:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5266009872;
    goto ***PC;
func_5266010000:
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
    PC = exp_5266010000;
    goto ***PC;
func_5266010128:
    extend(45);
    NEXT();
    goto ***PC;
func_5265999136:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5265999136;
    goto ***PC;
func_5266010256:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5266010256;
    goto ***PC;
func_5266010912:
    extend(95);
    NEXT();
    goto ***PC;
func_5266011056:
    extend(64);
    NEXT();
    goto ***PC;
func_5266011216:
    extend(35);
    NEXT();
    goto ***PC;
func_5266011344:
    extend(37);
    NEXT();
    goto ***PC;
func_5266011536:
    extend(38);
    NEXT();
    goto ***PC;
func_5266011664:
    extend(61);
    NEXT();
    goto ***PC;
func_5266011792:
    extend(126);
    NEXT();
    goto ***PC;
func_5266011920:
    extend(96);
    NEXT();
    goto ***PC;
func_5266011472:
    extend(39);
    NEXT();
    goto ***PC;
func_5266012240:
    extend(34);
    NEXT();
    goto ***PC;
func_5266010544:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5266010544;
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
    PC = func_5265997968_op0;
    goto ***PC;
}
