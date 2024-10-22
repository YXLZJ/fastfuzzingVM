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
        unsigned loop_limit = 23;
        static void * cf[] = {&&func_5014334864, &&func_5014335616, &&func_5014335776, &&func_5014335488, &&func_5014335136, &&func_5014334736, &&func_5014335376, &&func_5014335904, &&func_5014337536, &&func_5014335056, &&func_5014336096, &&func_5014336304, &&func_5014336224, &&func_5014336736, &&func_5014337024, &&func_5014336576, &&func_5014336496, &&func_5014336960, &&func_5014337280, &&func_5014337408, &&func_5014338560, &&func_5014338688, &&func_5014338816, &&func_5014338944, &&func_5014339072, &&func_5014339200, &&func_5014339360, &&func_5014339488, &&func_5014339648, &&func_5014339776, &&func_5014340000, &&func_5014340128, &&func_5014340304, &&func_5014337792, &&func_5014338432, &&func_5014337984, &&func_5014340880, &&func_5014341008, &&func_5014341136, &&func_5014341328, &&func_5014341456, &&func_5014341584, &&func_5014341712, &&func_5014341264, &&func_5014337920, &&func_5014342256, &&func_5014338112, &&func_5014338240, &&func_5014342112, &&func_5014342480, &&func_5014342608, &&func_5014336864, &&func_5014343216, &&func_5014337600, &&func_5014343472, &&func_5014342816, &&func_5014343776, &&func_5014343904, &&func_5014345248, &&func_5014345376, &&func_5014345504, &&func_5014345664, &&func_5014345792, &&func_5014345984, &&func_5014346112, &&func_5014340432, &&func_5014340560, &&func_5014345920, &&func_5014346176, &&func_5014346304, &&func_5014346432, &&func_5014346560, &&func_5014346688, &&func_5014346816, &&func_5014346944, &&func_5014340688, &&func_5014347328, &&func_5014347456, &&func_5014347584, &&func_5014347712, &&func_5014347840, &&func_5014347968, &&func_5014348096, &&func_5014348224, &&func_5014348352, &&func_5014348480, &&func_5014348608, &&func_5014348736, &&func_5014348864, &&func_5014348992, &&func_5014349120, &&func_5014347072, &&func_5014347200, &&func_5014349760, &&func_5014349888, &&func_5014350016, &&func_5014350144, &&func_5014350272, &&func_5014350400, &&func_5014350528, &&func_5014350656, &&func_5014350784, &&func_5014350912, &&func_5014351040, &&func_5014351168, &&func_5014351296, &&func_5014351424, &&func_5014351552, &&func_5014351680, &&func_5014351808, &&func_5014343600, &&func_5014342944, &&func_5014344176, &&func_5014344304, &&func_5014344800, &&func_5014344928, &&func_5014344432, &&func_5014345056, &&func_5014352016, &&func_5014352144, &&func_5014352272, &&func_5014352400, &&func_5014352528, &&func_5014352656, &&func_5014352784, &&func_5014351936, &&func_5014344704, &&RETURN, &&HALT};
        static void **func_5014334864_op0[2] = { cf+17, cf+127};
        static void **func_5014335616_op0[2] = { cf+20, cf+127};
        static void **func_5014335616_op1[2] = { cf+22, cf+127};
        static void **func_5014335616_op2[2] = { cf+24, cf+127};
        static void **func_5014335616_op3[2] = { cf+26, cf+127};
        static void **func_5014335616_op4[2] = { cf+28, cf+127};
        static void **func_5014335616_op5[2] = { cf+30, cf+127};
        static void **func_5014335616_op6[2] = { cf+32, cf+127};
        static void **func_5014335776_op0[2] = { cf+34, cf+127};
        static void **func_5014335776_op1[2] = { cf+35, cf+127};
        static void **func_5014335776_op2[2] = { cf+36, cf+127};
        static void **func_5014335776_op3[2] = { cf+37, cf+127};
        static void **func_5014335776_op4[2] = { cf+38, cf+127};
        static void **func_5014335776_op5[2] = { cf+39, cf+127};
        static void **func_5014335776_op6[2] = { cf+40, cf+127};
        static void **func_5014335776_op7[2] = { cf+41, cf+127};
        static void **func_5014335776_op8[2] = { cf+42, cf+127};
        static void **func_5014335776_op9[2] = { cf+43, cf+127};
        static void **func_5014335488_op0[2] = { cf+44, cf+127};
        static void **func_5014335488_op1[2] = { cf+46, cf+127};
        static void **func_5014335488_op2[2] = { cf+14, cf+127};
        static void **func_5014335136_op0[2] = { cf+48, cf+127};
        static void **func_5014335136_op1[2] = { cf+9, cf+127};
        static void **func_5014335136_op2[2] = { cf+6, cf+127};
        static void **func_5014334736_op0[2] = { cf+51, cf+127};
        static void **func_5014335376_op0[2] = { cf+55, cf+127};
        static void **func_5014335376_op1[2] = { cf+8, cf+127};
        static void **func_5014335904_op0[2] = { cf+56, cf+127};
        static void **func_5014337536_op0[2] = { cf+58, cf+127};
        static void **func_5014337536_op1[2] = { cf+59, cf+127};
        static void **func_5014337536_op2[2] = { cf+60, cf+127};
        static void **func_5014337536_op3[2] = { cf+61, cf+127};
        static void **func_5014337536_op4[2] = { cf+62, cf+127};
        static void **func_5014337536_op5[2] = { cf+63, cf+127};
        static void **func_5014337536_op6[2] = { cf+64, cf+127};
        static void **func_5014337536_op7[2] = { cf+65, cf+127};
        static void **func_5014337536_op8[2] = { cf+66, cf+127};
        static void **func_5014337536_op9[2] = { cf+67, cf+127};
        static void **func_5014337536_op10[2] = { cf+68, cf+127};
        static void **func_5014337536_op11[2] = { cf+69, cf+127};
        static void **func_5014337536_op12[2] = { cf+70, cf+127};
        static void **func_5014337536_op13[2] = { cf+71, cf+127};
        static void **func_5014337536_op14[2] = { cf+72, cf+127};
        static void **func_5014337536_op15[2] = { cf+73, cf+127};
        static void **func_5014337536_op16[2] = { cf+74, cf+127};
        static void **func_5014337536_op17[2] = { cf+75, cf+127};
        static void **func_5014337536_op18[2] = { cf+76, cf+127};
        static void **func_5014337536_op19[2] = { cf+77, cf+127};
        static void **func_5014337536_op20[2] = { cf+78, cf+127};
        static void **func_5014337536_op21[2] = { cf+79, cf+127};
        static void **func_5014337536_op22[2] = { cf+80, cf+127};
        static void **func_5014337536_op23[2] = { cf+81, cf+127};
        static void **func_5014337536_op24[2] = { cf+82, cf+127};
        static void **func_5014337536_op25[2] = { cf+83, cf+127};
        static void **func_5014337536_op26[2] = { cf+84, cf+127};
        static void **func_5014337536_op27[2] = { cf+85, cf+127};
        static void **func_5014337536_op28[2] = { cf+86, cf+127};
        static void **func_5014337536_op29[2] = { cf+87, cf+127};
        static void **func_5014337536_op30[2] = { cf+88, cf+127};
        static void **func_5014337536_op31[2] = { cf+89, cf+127};
        static void **func_5014337536_op32[2] = { cf+90, cf+127};
        static void **func_5014337536_op33[2] = { cf+91, cf+127};
        static void **func_5014337536_op34[2] = { cf+92, cf+127};
        static void **func_5014337536_op35[2] = { cf+93, cf+127};
        static void **func_5014337536_op36[2] = { cf+94, cf+127};
        static void **func_5014337536_op37[2] = { cf+95, cf+127};
        static void **func_5014337536_op38[2] = { cf+96, cf+127};
        static void **func_5014337536_op39[2] = { cf+97, cf+127};
        static void **func_5014337536_op40[2] = { cf+98, cf+127};
        static void **func_5014337536_op41[2] = { cf+99, cf+127};
        static void **func_5014337536_op42[2] = { cf+100, cf+127};
        static void **func_5014337536_op43[2] = { cf+101, cf+127};
        static void **func_5014337536_op44[2] = { cf+102, cf+127};
        static void **func_5014337536_op45[2] = { cf+103, cf+127};
        static void **func_5014337536_op46[2] = { cf+104, cf+127};
        static void **func_5014337536_op47[2] = { cf+105, cf+127};
        static void **func_5014337536_op48[2] = { cf+106, cf+127};
        static void **func_5014337536_op49[2] = { cf+107, cf+127};
        static void **func_5014337536_op50[2] = { cf+108, cf+127};
        static void **func_5014337536_op51[2] = { cf+109, cf+127};
        static void **func_5014335056_op0[2] = { cf+110, cf+127};
        static void **func_5014335056_op1[2] = { cf+2, cf+127};
        static void **func_5014336096_op0[2] = { cf+111, cf+127};
        static void **func_5014336096_op1[2] = { cf+13, cf+127};
        static void **func_5014336304_op0[2] = { cf+112, cf+127};
        static void **func_5014336224_op0[2] = { cf+10, cf+128};
        static void **func_5014336736_op0[2] = { cf+15, cf+127};
        static void **func_5014336736_op1[2] = { cf+0, cf+127};
        static void **func_5014336736_op2[2] = { cf+7, cf+127};
        static void **func_5014336736_op3[2] = { cf+16, cf+127};
        static void **func_5014336736_op4[2] = { cf+5, cf+127};
        static void **func_5014336736_op5[2] = { cf+11, cf+127};
        static void **func_5014337024_op0[2] = { cf+114, cf+127};
        static void **func_5014337024_op1[2] = { cf+116, cf+127};
        static void **func_5014337024_op2[2] = { cf+4, cf+127};
        static void **func_5014336576_op0[2] = { cf+118, cf+127};
        static void **func_5014336576_op1[2] = { cf+121, cf+127};
        static void **func_5014336576_op2[2] = { cf+123, cf+127};
        static void **func_5014336496_op0[2] = { cf+125, cf+127};
        static void **exp_5014336960[5] = {cf+6, cf+18, cf+3, cf+19, cf+127};
        static void **exp_5014338560[4] = {cf+3, cf+21, cf+3, cf+127};
        static void **exp_5014338816[4] = {cf+3, cf+23, cf+3, cf+127};
        static void **exp_5014339072[4] = {cf+3, cf+25, cf+3, cf+127};
        static void **exp_5014339360[4] = {cf+3, cf+27, cf+3, cf+127};
        static void **exp_5014339648[4] = {cf+1, cf+29, cf+1, cf+127};
        static void **exp_5014340000[4] = {cf+1, cf+31, cf+1, cf+127};
        static void **exp_5014340304[3] = {cf+33, cf+1, cf+127};
        static void **exp_5014337920[4] = {cf+3, cf+45, cf+14, cf+127};
        static void **exp_5014338112[4] = {cf+3, cf+47, cf+14, cf+127};
        static void **exp_5014342112[4] = {cf+49, cf+3, cf+50, cf+127};
        static void **exp_5014336864[8] = {cf+52, cf+6, cf+49, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_5014342816[3] = {cf+8, cf+6, cf+127};
        static void **exp_5014343776[8] = {cf+57, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_5014343600[3] = {cf+2, cf+9, cf+127};
        static void **exp_5014342944[3] = {cf+10, cf+13, cf+127};
        static void **exp_5014344176[4] = {cf+113, cf+3, cf+19, cf+127};
        static void **exp_5014344800[4] = {cf+14, cf+115, cf+4, cf+127};
        static void **exp_5014344432[4] = {cf+14, cf+117, cf+4, cf+127};
        static void **exp_5014352016[4] = {cf+119, cf+6, cf+120, cf+127};
        static void **exp_5014352400[4] = {cf+122, cf+6, cf+120, cf+127};
        static void **exp_5014352656[4] = {cf+124, cf+6, cf+120, cf+127};
        static void **exp_5014351936[8] = {cf+126, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
goto LOOP;

func_5014334864:
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
            PC = func_5014334864_op0;
        break;
    }
    goto ***PC;
func_5014335616:
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
            PC = func_5014335616_op0;
        break;
        case 1:
            PC = func_5014335616_op1;
        break;
        case 2:
            PC = func_5014335616_op2;
        break;
        case 3:
            PC = func_5014335616_op3;
        break;
        case 4:
            PC = func_5014335616_op4;
        break;
        case 5:
            PC = func_5014335616_op5;
        break;
        case 6:
            PC = func_5014335616_op6;
        break;
    }
    goto ***PC;
func_5014335776:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5014335776_op0;
        break;
        case 1:
            PC = func_5014335776_op1;
        break;
        case 2:
            PC = func_5014335776_op2;
        break;
        case 3:
            PC = func_5014335776_op3;
        break;
        case 4:
            PC = func_5014335776_op4;
        break;
        case 5:
            PC = func_5014335776_op5;
        break;
        case 6:
            PC = func_5014335776_op6;
        break;
        case 7:
            PC = func_5014335776_op7;
        break;
        case 8:
            PC = func_5014335776_op8;
        break;
        case 9:
            PC = func_5014335776_op9;
        break;
    }
    goto ***PC;
func_5014335488:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5014335488_op0;
        break;
        case 1:
            PC = func_5014335488_op1;
        break;
        case 2:
            PC = func_5014335488_op2;
        break;
    }
    goto ***PC;
func_5014335136:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5014335136_op0;
        break;
        case 1:
            PC = func_5014335136_op1;
        break;
        case 2:
            PC = func_5014335136_op2;
        break;
    }
    goto ***PC;
func_5014334736:
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
            PC = func_5014334736_op0;
        break;
    }
    goto ***PC;
func_5014335376:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5014335376_op0;
        break;
        case 1:
            PC = func_5014335376_op1;
        break;
    }
    goto ***PC;
func_5014335904:
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
            PC = func_5014335904_op0;
        break;
    }
    goto ***PC;
func_5014337536:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5014337536_op0;
        break;
        case 1:
            PC = func_5014337536_op1;
        break;
        case 2:
            PC = func_5014337536_op2;
        break;
        case 3:
            PC = func_5014337536_op3;
        break;
        case 4:
            PC = func_5014337536_op4;
        break;
        case 5:
            PC = func_5014337536_op5;
        break;
        case 6:
            PC = func_5014337536_op6;
        break;
        case 7:
            PC = func_5014337536_op7;
        break;
        case 8:
            PC = func_5014337536_op8;
        break;
        case 9:
            PC = func_5014337536_op9;
        break;
        case 10:
            PC = func_5014337536_op10;
        break;
        case 11:
            PC = func_5014337536_op11;
        break;
        case 12:
            PC = func_5014337536_op12;
        break;
        case 13:
            PC = func_5014337536_op13;
        break;
        case 14:
            PC = func_5014337536_op14;
        break;
        case 15:
            PC = func_5014337536_op15;
        break;
        case 16:
            PC = func_5014337536_op16;
        break;
        case 17:
            PC = func_5014337536_op17;
        break;
        case 18:
            PC = func_5014337536_op18;
        break;
        case 19:
            PC = func_5014337536_op19;
        break;
        case 20:
            PC = func_5014337536_op20;
        break;
        case 21:
            PC = func_5014337536_op21;
        break;
        case 22:
            PC = func_5014337536_op22;
        break;
        case 23:
            PC = func_5014337536_op23;
        break;
        case 24:
            PC = func_5014337536_op24;
        break;
        case 25:
            PC = func_5014337536_op25;
        break;
        case 26:
            PC = func_5014337536_op26;
        break;
        case 27:
            PC = func_5014337536_op27;
        break;
        case 28:
            PC = func_5014337536_op28;
        break;
        case 29:
            PC = func_5014337536_op29;
        break;
        case 30:
            PC = func_5014337536_op30;
        break;
        case 31:
            PC = func_5014337536_op31;
        break;
        case 32:
            PC = func_5014337536_op32;
        break;
        case 33:
            PC = func_5014337536_op33;
        break;
        case 34:
            PC = func_5014337536_op34;
        break;
        case 35:
            PC = func_5014337536_op35;
        break;
        case 36:
            PC = func_5014337536_op36;
        break;
        case 37:
            PC = func_5014337536_op37;
        break;
        case 38:
            PC = func_5014337536_op38;
        break;
        case 39:
            PC = func_5014337536_op39;
        break;
        case 40:
            PC = func_5014337536_op40;
        break;
        case 41:
            PC = func_5014337536_op41;
        break;
        case 42:
            PC = func_5014337536_op42;
        break;
        case 43:
            PC = func_5014337536_op43;
        break;
        case 44:
            PC = func_5014337536_op44;
        break;
        case 45:
            PC = func_5014337536_op45;
        break;
        case 46:
            PC = func_5014337536_op46;
        break;
        case 47:
            PC = func_5014337536_op47;
        break;
        case 48:
            PC = func_5014337536_op48;
        break;
        case 49:
            PC = func_5014337536_op49;
        break;
        case 50:
            PC = func_5014337536_op50;
        break;
        case 51:
            PC = func_5014337536_op51;
        break;
    }
    goto ***PC;
func_5014335056:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5014335056_op0;
        break;
        case 1:
            PC = func_5014335056_op1;
        break;
    }
    goto ***PC;
func_5014336096:
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
            PC = func_5014336096_op0;
        break;
        case 1:
            PC = func_5014336096_op1;
        break;
    }
    goto ***PC;
func_5014336304:
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
            PC = func_5014336304_op0;
        break;
    }
    goto ***PC;
func_5014336224:
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
            PC = func_5014336224_op0;
        break;
    }
    goto ***PC;
func_5014336736:
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
            PC = func_5014336736_op0;
        break;
        case 1:
            PC = func_5014336736_op1;
        break;
        case 2:
            PC = func_5014336736_op2;
        break;
        case 3:
            PC = func_5014336736_op3;
        break;
        case 4:
            PC = func_5014336736_op4;
        break;
        case 5:
            PC = func_5014336736_op5;
        break;
    }
    goto ***PC;
func_5014337024:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5014337024_op0;
        break;
        case 1:
            PC = func_5014337024_op1;
        break;
        case 2:
            PC = func_5014337024_op2;
        break;
    }
    goto ***PC;
func_5014336576:
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
            PC = func_5014336576_op0;
        break;
        case 1:
            PC = func_5014336576_op1;
        break;
        case 2:
            PC = func_5014336576_op2;
        break;
    }
    goto ***PC;
func_5014336496:
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
            PC = func_5014336496_op0;
        break;
    }
    goto ***PC;
func_5014336960:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5014336960;
    goto ***PC;
func_5014337280:
    extend(61);
    NEXT();
    goto ***PC;
func_5014337408:
    extend(59);
    NEXT();
    goto ***PC;
func_5014338560:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5014338560;
    goto ***PC;
func_5014338688:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5014338816:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5014338816;
    goto ***PC;
func_5014338944:
    extend(33);
    extend(61);
    NEXT();
    goto ***PC;
func_5014339072:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5014339072;
    goto ***PC;
func_5014339200:
    extend(62);
    NEXT();
    goto ***PC;
func_5014339360:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5014339360;
    goto ***PC;
func_5014339488:
    extend(60);
    NEXT();
    goto ***PC;
func_5014339648:
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
    PC = exp_5014339648;
    goto ***PC;
func_5014339776:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_5014340000:
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
    PC = exp_5014340000;
    goto ***PC;
func_5014340128:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_5014340304:
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
    PC = exp_5014340304;
    goto ***PC;
func_5014337792:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto ***PC;
func_5014338432:
    extend(48);
    NEXT();
    goto ***PC;
func_5014337984:
    extend(49);
    NEXT();
    goto ***PC;
func_5014340880:
    extend(50);
    NEXT();
    goto ***PC;
func_5014341008:
    extend(51);
    NEXT();
    goto ***PC;
func_5014341136:
    extend(52);
    NEXT();
    goto ***PC;
func_5014341328:
    extend(53);
    NEXT();
    goto ***PC;
func_5014341456:
    extend(54);
    NEXT();
    goto ***PC;
func_5014341584:
    extend(55);
    NEXT();
    goto ***PC;
func_5014341712:
    extend(56);
    NEXT();
    goto ***PC;
func_5014341264:
    extend(57);
    NEXT();
    goto ***PC;
func_5014337920:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5014337920;
    goto ***PC;
func_5014342256:
    extend(43);
    NEXT();
    goto ***PC;
func_5014338112:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5014338112;
    goto ***PC;
func_5014338240:
    extend(45);
    NEXT();
    goto ***PC;
func_5014342112:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5014342112;
    goto ***PC;
func_5014342480:
    extend(40);
    NEXT();
    goto ***PC;
func_5014342608:
    extend(41);
    NEXT();
    goto ***PC;
func_5014336864:
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
    PC = exp_5014336864;
    goto ***PC;
func_5014343216:
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
func_5014337600:
    extend(123);
    NEXT();
    goto ***PC;
func_5014343472:
    extend(125);
    NEXT();
    goto ***PC;
func_5014342816:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5014342816;
    goto ***PC;
func_5014343776:
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
    PC = exp_5014343776;
    goto ***PC;
func_5014343904:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5014345248:
    extend(97);
    NEXT();
    goto ***PC;
func_5014345376:
    extend(98);
    NEXT();
    goto ***PC;
func_5014345504:
    extend(99);
    NEXT();
    goto ***PC;
func_5014345664:
    extend(100);
    NEXT();
    goto ***PC;
func_5014345792:
    extend(101);
    NEXT();
    goto ***PC;
func_5014345984:
    extend(102);
    NEXT();
    goto ***PC;
func_5014346112:
    extend(103);
    NEXT();
    goto ***PC;
func_5014340432:
    extend(104);
    NEXT();
    goto ***PC;
func_5014340560:
    extend(105);
    NEXT();
    goto ***PC;
func_5014345920:
    extend(106);
    NEXT();
    goto ***PC;
func_5014346176:
    extend(107);
    NEXT();
    goto ***PC;
func_5014346304:
    extend(108);
    NEXT();
    goto ***PC;
func_5014346432:
    extend(109);
    NEXT();
    goto ***PC;
func_5014346560:
    extend(110);
    NEXT();
    goto ***PC;
func_5014346688:
    extend(111);
    NEXT();
    goto ***PC;
func_5014346816:
    extend(112);
    NEXT();
    goto ***PC;
func_5014346944:
    extend(113);
    NEXT();
    goto ***PC;
func_5014340688:
    extend(114);
    NEXT();
    goto ***PC;
func_5014347328:
    extend(115);
    NEXT();
    goto ***PC;
func_5014347456:
    extend(116);
    NEXT();
    goto ***PC;
func_5014347584:
    extend(117);
    NEXT();
    goto ***PC;
func_5014347712:
    extend(118);
    NEXT();
    goto ***PC;
func_5014347840:
    extend(119);
    NEXT();
    goto ***PC;
func_5014347968:
    extend(120);
    NEXT();
    goto ***PC;
func_5014348096:
    extend(121);
    NEXT();
    goto ***PC;
func_5014348224:
    extend(122);
    NEXT();
    goto ***PC;
func_5014348352:
    extend(65);
    NEXT();
    goto ***PC;
func_5014348480:
    extend(66);
    NEXT();
    goto ***PC;
func_5014348608:
    extend(67);
    NEXT();
    goto ***PC;
func_5014348736:
    extend(68);
    NEXT();
    goto ***PC;
func_5014348864:
    extend(69);
    NEXT();
    goto ***PC;
func_5014348992:
    extend(70);
    NEXT();
    goto ***PC;
func_5014349120:
    extend(71);
    NEXT();
    goto ***PC;
func_5014347072:
    extend(72);
    NEXT();
    goto ***PC;
func_5014347200:
    extend(73);
    NEXT();
    goto ***PC;
func_5014349760:
    extend(74);
    NEXT();
    goto ***PC;
func_5014349888:
    extend(75);
    NEXT();
    goto ***PC;
func_5014350016:
    extend(76);
    NEXT();
    goto ***PC;
func_5014350144:
    extend(77);
    NEXT();
    goto ***PC;
func_5014350272:
    extend(78);
    NEXT();
    goto ***PC;
func_5014350400:
    extend(79);
    NEXT();
    goto ***PC;
func_5014350528:
    extend(80);
    NEXT();
    goto ***PC;
func_5014350656:
    extend(81);
    NEXT();
    goto ***PC;
func_5014350784:
    extend(82);
    NEXT();
    goto ***PC;
func_5014350912:
    extend(83);
    NEXT();
    goto ***PC;
func_5014351040:
    extend(84);
    NEXT();
    goto ***PC;
func_5014351168:
    extend(85);
    NEXT();
    goto ***PC;
func_5014351296:
    extend(86);
    NEXT();
    goto ***PC;
func_5014351424:
    extend(87);
    NEXT();
    goto ***PC;
func_5014351552:
    extend(88);
    NEXT();
    goto ***PC;
func_5014351680:
    extend(89);
    NEXT();
    goto ***PC;
func_5014351808:
    extend(90);
    NEXT();
    goto ***PC;
func_5014343600:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5014343600;
    goto ***PC;
func_5014342944:
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
    PC = exp_5014342944;
    goto ***PC;
func_5014344176:
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
    PC = exp_5014344176;
    goto ***PC;
func_5014344304:
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
func_5014344800:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5014344800;
    goto ***PC;
func_5014344928:
    extend(42);
    NEXT();
    goto ***PC;
func_5014344432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5014344432;
    goto ***PC;
func_5014345056:
    extend(47);
    NEXT();
    goto ***PC;
func_5014352016:
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
    PC = exp_5014352016;
    goto ***PC;
func_5014352144:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5014352272:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto ***PC;
func_5014352400:
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
    PC = exp_5014352400;
    goto ***PC;
func_5014352528:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5014352656:
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
    PC = exp_5014352656;
    goto ***PC;
func_5014352784:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto ***PC;
func_5014351936:
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
    PC = exp_5014351936;
    goto ***PC;
func_5014344704:
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
    PC = func_5014336224_op0;
    goto ***PC;
}
