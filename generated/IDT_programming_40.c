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
        unsigned loop_limit = 23;
        static void * cf[] = {&&func_5693812112, &&func_5693812864, &&func_5693813024, &&func_5693812736, &&func_5693812384, &&func_5693811984, &&func_5693812624, &&func_5693813152, &&func_5693814784, &&func_5693812304, &&func_5693813344, &&func_5693813552, &&func_5693813472, &&func_5693813984, &&func_5693814272, &&func_5693813824, &&func_5693813744, &&func_5693814208, &&func_5693814528, &&func_5693814656, &&func_5693815808, &&func_5693815936, &&func_5693816064, &&func_5693816192, &&func_5693816320, &&func_5693816448, &&func_5693816608, &&func_5693816736, &&func_5693816896, &&func_5693817024, &&func_5693817248, &&func_5693817376, &&func_5693817552, &&func_5693815040, &&func_5693815680, &&func_5693815232, &&func_5693818128, &&func_5693818256, &&func_5693818384, &&func_5693818576, &&func_5693818704, &&func_5693818832, &&func_5693818960, &&func_5693818512, &&func_5693815168, &&func_5693819504, &&func_5693815360, &&func_5693815488, &&func_5693819360, &&func_5693819728, &&func_5693819856, &&func_5693814112, &&func_5693820464, &&func_5693814848, &&func_5693820720, &&func_5693820064, &&func_5693821024, &&func_5693821152, &&func_5693822496, &&func_5693822624, &&func_5693822752, &&func_5693822912, &&func_5693823040, &&func_5693823232, &&func_5693823360, &&func_5693817680, &&func_5693817808, &&func_5693823168, &&func_5693823424, &&func_5693823552, &&func_5693823680, &&func_5693823808, &&func_5693823936, &&func_5693824064, &&func_5693824192, &&func_5693817936, &&func_5693824576, &&func_5693824704, &&func_5693824832, &&func_5693824960, &&func_5693825088, &&func_5693825216, &&func_5693825344, &&func_5693825472, &&func_5693825600, &&func_5693825728, &&func_5693825856, &&func_5693825984, &&func_5693826112, &&func_5693826240, &&func_5693826368, &&func_5693824320, &&func_5693824448, &&func_5693827008, &&func_5693827136, &&func_5693827264, &&func_5693827392, &&func_5693827520, &&func_5693827648, &&func_5693827776, &&func_5693827904, &&func_5693828032, &&func_5693828160, &&func_5693828288, &&func_5693828416, &&func_5693828544, &&func_5693828672, &&func_5693828800, &&func_5693828928, &&func_5693829056, &&func_5693820848, &&func_5693820192, &&func_5693821424, &&func_5693821552, &&func_5693822048, &&func_5693822176, &&func_5693821680, &&func_5693822304, &&func_5693829264, &&func_5693829392, &&func_5693829520, &&func_5693829648, &&func_5693829776, &&func_5693829904, &&func_5693830032, &&func_5693829184, &&func_5693821952, &&RETURN, &&HALT};
        static void **func_5693812112_op0[2] = { cf+17, cf+127};
        static void **func_5693812864_op0[2] = { cf+20, cf+127};
        static void **func_5693812864_op1[2] = { cf+22, cf+127};
        static void **func_5693812864_op2[2] = { cf+24, cf+127};
        static void **func_5693812864_op3[2] = { cf+26, cf+127};
        static void **func_5693812864_op4[2] = { cf+28, cf+127};
        static void **func_5693812864_op5[2] = { cf+30, cf+127};
        static void **func_5693812864_op6[2] = { cf+32, cf+127};
        static void **func_5693813024_op0[2] = { cf+34, cf+127};
        static void **func_5693813024_op1[2] = { cf+35, cf+127};
        static void **func_5693813024_op2[2] = { cf+36, cf+127};
        static void **func_5693813024_op3[2] = { cf+37, cf+127};
        static void **func_5693813024_op4[2] = { cf+38, cf+127};
        static void **func_5693813024_op5[2] = { cf+39, cf+127};
        static void **func_5693813024_op6[2] = { cf+40, cf+127};
        static void **func_5693813024_op7[2] = { cf+41, cf+127};
        static void **func_5693813024_op8[2] = { cf+42, cf+127};
        static void **func_5693813024_op9[2] = { cf+43, cf+127};
        static void **func_5693812736_op0[2] = { cf+44, cf+127};
        static void **func_5693812736_op1[2] = { cf+46, cf+127};
        static void **func_5693812736_op2[2] = { cf+14, cf+127};
        static void **func_5693812384_op0[2] = { cf+48, cf+127};
        static void **func_5693812384_op1[2] = { cf+9, cf+127};
        static void **func_5693812384_op2[2] = { cf+6, cf+127};
        static void **func_5693811984_op0[2] = { cf+51, cf+127};
        static void **func_5693812624_op0[2] = { cf+55, cf+127};
        static void **func_5693812624_op1[2] = { cf+8, cf+127};
        static void **func_5693813152_op0[2] = { cf+56, cf+127};
        static void **func_5693814784_op0[2] = { cf+58, cf+127};
        static void **func_5693814784_op1[2] = { cf+59, cf+127};
        static void **func_5693814784_op2[2] = { cf+60, cf+127};
        static void **func_5693814784_op3[2] = { cf+61, cf+127};
        static void **func_5693814784_op4[2] = { cf+62, cf+127};
        static void **func_5693814784_op5[2] = { cf+63, cf+127};
        static void **func_5693814784_op6[2] = { cf+64, cf+127};
        static void **func_5693814784_op7[2] = { cf+65, cf+127};
        static void **func_5693814784_op8[2] = { cf+66, cf+127};
        static void **func_5693814784_op9[2] = { cf+67, cf+127};
        static void **func_5693814784_op10[2] = { cf+68, cf+127};
        static void **func_5693814784_op11[2] = { cf+69, cf+127};
        static void **func_5693814784_op12[2] = { cf+70, cf+127};
        static void **func_5693814784_op13[2] = { cf+71, cf+127};
        static void **func_5693814784_op14[2] = { cf+72, cf+127};
        static void **func_5693814784_op15[2] = { cf+73, cf+127};
        static void **func_5693814784_op16[2] = { cf+74, cf+127};
        static void **func_5693814784_op17[2] = { cf+75, cf+127};
        static void **func_5693814784_op18[2] = { cf+76, cf+127};
        static void **func_5693814784_op19[2] = { cf+77, cf+127};
        static void **func_5693814784_op20[2] = { cf+78, cf+127};
        static void **func_5693814784_op21[2] = { cf+79, cf+127};
        static void **func_5693814784_op22[2] = { cf+80, cf+127};
        static void **func_5693814784_op23[2] = { cf+81, cf+127};
        static void **func_5693814784_op24[2] = { cf+82, cf+127};
        static void **func_5693814784_op25[2] = { cf+83, cf+127};
        static void **func_5693814784_op26[2] = { cf+84, cf+127};
        static void **func_5693814784_op27[2] = { cf+85, cf+127};
        static void **func_5693814784_op28[2] = { cf+86, cf+127};
        static void **func_5693814784_op29[2] = { cf+87, cf+127};
        static void **func_5693814784_op30[2] = { cf+88, cf+127};
        static void **func_5693814784_op31[2] = { cf+89, cf+127};
        static void **func_5693814784_op32[2] = { cf+90, cf+127};
        static void **func_5693814784_op33[2] = { cf+91, cf+127};
        static void **func_5693814784_op34[2] = { cf+92, cf+127};
        static void **func_5693814784_op35[2] = { cf+93, cf+127};
        static void **func_5693814784_op36[2] = { cf+94, cf+127};
        static void **func_5693814784_op37[2] = { cf+95, cf+127};
        static void **func_5693814784_op38[2] = { cf+96, cf+127};
        static void **func_5693814784_op39[2] = { cf+97, cf+127};
        static void **func_5693814784_op40[2] = { cf+98, cf+127};
        static void **func_5693814784_op41[2] = { cf+99, cf+127};
        static void **func_5693814784_op42[2] = { cf+100, cf+127};
        static void **func_5693814784_op43[2] = { cf+101, cf+127};
        static void **func_5693814784_op44[2] = { cf+102, cf+127};
        static void **func_5693814784_op45[2] = { cf+103, cf+127};
        static void **func_5693814784_op46[2] = { cf+104, cf+127};
        static void **func_5693814784_op47[2] = { cf+105, cf+127};
        static void **func_5693814784_op48[2] = { cf+106, cf+127};
        static void **func_5693814784_op49[2] = { cf+107, cf+127};
        static void **func_5693814784_op50[2] = { cf+108, cf+127};
        static void **func_5693814784_op51[2] = { cf+109, cf+127};
        static void **func_5693812304_op0[2] = { cf+110, cf+127};
        static void **func_5693812304_op1[2] = { cf+2, cf+127};
        static void **func_5693813344_op0[2] = { cf+111, cf+127};
        static void **func_5693813344_op1[2] = { cf+13, cf+127};
        static void **func_5693813552_op0[2] = { cf+112, cf+127};
        static void **func_5693813472_op0[2] = { cf+10, cf+128};
        static void **func_5693813984_op0[2] = { cf+15, cf+127};
        static void **func_5693813984_op1[2] = { cf+0, cf+127};
        static void **func_5693813984_op2[2] = { cf+7, cf+127};
        static void **func_5693813984_op3[2] = { cf+16, cf+127};
        static void **func_5693813984_op4[2] = { cf+5, cf+127};
        static void **func_5693813984_op5[2] = { cf+11, cf+127};
        static void **func_5693814272_op0[2] = { cf+114, cf+127};
        static void **func_5693814272_op1[2] = { cf+116, cf+127};
        static void **func_5693814272_op2[2] = { cf+4, cf+127};
        static void **func_5693813824_op0[2] = { cf+118, cf+127};
        static void **func_5693813824_op1[2] = { cf+121, cf+127};
        static void **func_5693813824_op2[2] = { cf+123, cf+127};
        static void **func_5693813744_op0[2] = { cf+125, cf+127};
        static void **exp_5693814208[5] = {cf+6, cf+18, cf+3, cf+19, cf+127};
        static void **exp_5693815808[4] = {cf+3, cf+21, cf+3, cf+127};
        static void **exp_5693816064[4] = {cf+3, cf+23, cf+3, cf+127};
        static void **exp_5693816320[4] = {cf+3, cf+25, cf+3, cf+127};
        static void **exp_5693816608[4] = {cf+3, cf+27, cf+3, cf+127};
        static void **exp_5693816896[4] = {cf+1, cf+29, cf+1, cf+127};
        static void **exp_5693817248[4] = {cf+1, cf+31, cf+1, cf+127};
        static void **exp_5693817552[3] = {cf+33, cf+1, cf+127};
        static void **exp_5693815168[4] = {cf+3, cf+45, cf+14, cf+127};
        static void **exp_5693815360[4] = {cf+3, cf+47, cf+14, cf+127};
        static void **exp_5693819360[4] = {cf+49, cf+3, cf+50, cf+127};
        static void **exp_5693814112[8] = {cf+52, cf+6, cf+49, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_5693820064[3] = {cf+8, cf+6, cf+127};
        static void **exp_5693821024[8] = {cf+57, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_5693820848[3] = {cf+2, cf+9, cf+127};
        static void **exp_5693820192[3] = {cf+10, cf+13, cf+127};
        static void **exp_5693821424[4] = {cf+113, cf+3, cf+19, cf+127};
        static void **exp_5693822048[4] = {cf+14, cf+115, cf+4, cf+127};
        static void **exp_5693821680[4] = {cf+14, cf+117, cf+4, cf+127};
        static void **exp_5693829264[4] = {cf+119, cf+6, cf+120, cf+127};
        static void **exp_5693829648[4] = {cf+122, cf+6, cf+120, cf+127};
        static void **exp_5693829904[4] = {cf+124, cf+6, cf+120, cf+127};
        static void **exp_5693829184[8] = {cf+126, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
goto LOOP;

func_5693812112:
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
            PC = func_5693812112_op0;
        break;
    }
    goto ***PC;
func_5693812864:
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
            PC = func_5693812864_op0;
        break;
        case 1:
            PC = func_5693812864_op1;
        break;
        case 2:
            PC = func_5693812864_op2;
        break;
        case 3:
            PC = func_5693812864_op3;
        break;
        case 4:
            PC = func_5693812864_op4;
        break;
        case 5:
            PC = func_5693812864_op5;
        break;
        case 6:
            PC = func_5693812864_op6;
        break;
    }
    goto ***PC;
func_5693813024:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5693813024_op0;
        break;
        case 1:
            PC = func_5693813024_op1;
        break;
        case 2:
            PC = func_5693813024_op2;
        break;
        case 3:
            PC = func_5693813024_op3;
        break;
        case 4:
            PC = func_5693813024_op4;
        break;
        case 5:
            PC = func_5693813024_op5;
        break;
        case 6:
            PC = func_5693813024_op6;
        break;
        case 7:
            PC = func_5693813024_op7;
        break;
        case 8:
            PC = func_5693813024_op8;
        break;
        case 9:
            PC = func_5693813024_op9;
        break;
    }
    goto ***PC;
func_5693812736:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5693812736_op0;
        break;
        case 1:
            PC = func_5693812736_op1;
        break;
        case 2:
            PC = func_5693812736_op2;
        break;
    }
    goto ***PC;
func_5693812384:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5693812384_op0;
        break;
        case 1:
            PC = func_5693812384_op1;
        break;
        case 2:
            PC = func_5693812384_op2;
        break;
    }
    goto ***PC;
func_5693811984:
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
            PC = func_5693811984_op0;
        break;
    }
    goto ***PC;
func_5693812624:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5693812624_op0;
        break;
        case 1:
            PC = func_5693812624_op1;
        break;
    }
    goto ***PC;
func_5693813152:
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
            PC = func_5693813152_op0;
        break;
    }
    goto ***PC;
func_5693814784:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5693814784_op0;
        break;
        case 1:
            PC = func_5693814784_op1;
        break;
        case 2:
            PC = func_5693814784_op2;
        break;
        case 3:
            PC = func_5693814784_op3;
        break;
        case 4:
            PC = func_5693814784_op4;
        break;
        case 5:
            PC = func_5693814784_op5;
        break;
        case 6:
            PC = func_5693814784_op6;
        break;
        case 7:
            PC = func_5693814784_op7;
        break;
        case 8:
            PC = func_5693814784_op8;
        break;
        case 9:
            PC = func_5693814784_op9;
        break;
        case 10:
            PC = func_5693814784_op10;
        break;
        case 11:
            PC = func_5693814784_op11;
        break;
        case 12:
            PC = func_5693814784_op12;
        break;
        case 13:
            PC = func_5693814784_op13;
        break;
        case 14:
            PC = func_5693814784_op14;
        break;
        case 15:
            PC = func_5693814784_op15;
        break;
        case 16:
            PC = func_5693814784_op16;
        break;
        case 17:
            PC = func_5693814784_op17;
        break;
        case 18:
            PC = func_5693814784_op18;
        break;
        case 19:
            PC = func_5693814784_op19;
        break;
        case 20:
            PC = func_5693814784_op20;
        break;
        case 21:
            PC = func_5693814784_op21;
        break;
        case 22:
            PC = func_5693814784_op22;
        break;
        case 23:
            PC = func_5693814784_op23;
        break;
        case 24:
            PC = func_5693814784_op24;
        break;
        case 25:
            PC = func_5693814784_op25;
        break;
        case 26:
            PC = func_5693814784_op26;
        break;
        case 27:
            PC = func_5693814784_op27;
        break;
        case 28:
            PC = func_5693814784_op28;
        break;
        case 29:
            PC = func_5693814784_op29;
        break;
        case 30:
            PC = func_5693814784_op30;
        break;
        case 31:
            PC = func_5693814784_op31;
        break;
        case 32:
            PC = func_5693814784_op32;
        break;
        case 33:
            PC = func_5693814784_op33;
        break;
        case 34:
            PC = func_5693814784_op34;
        break;
        case 35:
            PC = func_5693814784_op35;
        break;
        case 36:
            PC = func_5693814784_op36;
        break;
        case 37:
            PC = func_5693814784_op37;
        break;
        case 38:
            PC = func_5693814784_op38;
        break;
        case 39:
            PC = func_5693814784_op39;
        break;
        case 40:
            PC = func_5693814784_op40;
        break;
        case 41:
            PC = func_5693814784_op41;
        break;
        case 42:
            PC = func_5693814784_op42;
        break;
        case 43:
            PC = func_5693814784_op43;
        break;
        case 44:
            PC = func_5693814784_op44;
        break;
        case 45:
            PC = func_5693814784_op45;
        break;
        case 46:
            PC = func_5693814784_op46;
        break;
        case 47:
            PC = func_5693814784_op47;
        break;
        case 48:
            PC = func_5693814784_op48;
        break;
        case 49:
            PC = func_5693814784_op49;
        break;
        case 50:
            PC = func_5693814784_op50;
        break;
        case 51:
            PC = func_5693814784_op51;
        break;
    }
    goto ***PC;
func_5693812304:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5693812304_op0;
        break;
        case 1:
            PC = func_5693812304_op1;
        break;
    }
    goto ***PC;
func_5693813344:
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
            PC = func_5693813344_op0;
        break;
        case 1:
            PC = func_5693813344_op1;
        break;
    }
    goto ***PC;
func_5693813552:
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
            PC = func_5693813552_op0;
        break;
    }
    goto ***PC;
func_5693813472:
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
            PC = func_5693813472_op0;
        break;
    }
    goto ***PC;
func_5693813984:
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
            PC = func_5693813984_op0;
        break;
        case 1:
            PC = func_5693813984_op1;
        break;
        case 2:
            PC = func_5693813984_op2;
        break;
        case 3:
            PC = func_5693813984_op3;
        break;
        case 4:
            PC = func_5693813984_op4;
        break;
        case 5:
            PC = func_5693813984_op5;
        break;
    }
    goto ***PC;
func_5693814272:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5693814272_op0;
        break;
        case 1:
            PC = func_5693814272_op1;
        break;
        case 2:
            PC = func_5693814272_op2;
        break;
    }
    goto ***PC;
func_5693813824:
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
            PC = func_5693813824_op0;
        break;
        case 1:
            PC = func_5693813824_op1;
        break;
        case 2:
            PC = func_5693813824_op2;
        break;
    }
    goto ***PC;
func_5693813744:
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
            PC = func_5693813744_op0;
        break;
    }
    goto ***PC;
func_5693814208:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5693814208;
    goto ***PC;
func_5693814528:
    extend(61);
    NEXT();
    goto ***PC;
func_5693814656:
    extend(59);
    NEXT();
    goto ***PC;
func_5693815808:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5693815808;
    goto ***PC;
func_5693815936:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5693816064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5693816064;
    goto ***PC;
func_5693816192:
    extend(33);
    extend(61);
    NEXT();
    goto ***PC;
func_5693816320:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5693816320;
    goto ***PC;
func_5693816448:
    extend(62);
    NEXT();
    goto ***PC;
func_5693816608:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5693816608;
    goto ***PC;
func_5693816736:
    extend(60);
    NEXT();
    goto ***PC;
func_5693816896:
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
    PC = exp_5693816896;
    goto ***PC;
func_5693817024:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_5693817248:
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
    PC = exp_5693817248;
    goto ***PC;
func_5693817376:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_5693817552:
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
    PC = exp_5693817552;
    goto ***PC;
func_5693815040:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto ***PC;
func_5693815680:
    extend(48);
    NEXT();
    goto ***PC;
func_5693815232:
    extend(49);
    NEXT();
    goto ***PC;
func_5693818128:
    extend(50);
    NEXT();
    goto ***PC;
func_5693818256:
    extend(51);
    NEXT();
    goto ***PC;
func_5693818384:
    extend(52);
    NEXT();
    goto ***PC;
func_5693818576:
    extend(53);
    NEXT();
    goto ***PC;
func_5693818704:
    extend(54);
    NEXT();
    goto ***PC;
func_5693818832:
    extend(55);
    NEXT();
    goto ***PC;
func_5693818960:
    extend(56);
    NEXT();
    goto ***PC;
func_5693818512:
    extend(57);
    NEXT();
    goto ***PC;
func_5693815168:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5693815168;
    goto ***PC;
func_5693819504:
    extend(43);
    NEXT();
    goto ***PC;
func_5693815360:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5693815360;
    goto ***PC;
func_5693815488:
    extend(45);
    NEXT();
    goto ***PC;
func_5693819360:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5693819360;
    goto ***PC;
func_5693819728:
    extend(40);
    NEXT();
    goto ***PC;
func_5693819856:
    extend(41);
    NEXT();
    goto ***PC;
func_5693814112:
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
    PC = exp_5693814112;
    goto ***PC;
func_5693820464:
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
func_5693814848:
    extend(123);
    NEXT();
    goto ***PC;
func_5693820720:
    extend(125);
    NEXT();
    goto ***PC;
func_5693820064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5693820064;
    goto ***PC;
func_5693821024:
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
    PC = exp_5693821024;
    goto ***PC;
func_5693821152:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5693822496:
    extend(97);
    NEXT();
    goto ***PC;
func_5693822624:
    extend(98);
    NEXT();
    goto ***PC;
func_5693822752:
    extend(99);
    NEXT();
    goto ***PC;
func_5693822912:
    extend(100);
    NEXT();
    goto ***PC;
func_5693823040:
    extend(101);
    NEXT();
    goto ***PC;
func_5693823232:
    extend(102);
    NEXT();
    goto ***PC;
func_5693823360:
    extend(103);
    NEXT();
    goto ***PC;
func_5693817680:
    extend(104);
    NEXT();
    goto ***PC;
func_5693817808:
    extend(105);
    NEXT();
    goto ***PC;
func_5693823168:
    extend(106);
    NEXT();
    goto ***PC;
func_5693823424:
    extend(107);
    NEXT();
    goto ***PC;
func_5693823552:
    extend(108);
    NEXT();
    goto ***PC;
func_5693823680:
    extend(109);
    NEXT();
    goto ***PC;
func_5693823808:
    extend(110);
    NEXT();
    goto ***PC;
func_5693823936:
    extend(111);
    NEXT();
    goto ***PC;
func_5693824064:
    extend(112);
    NEXT();
    goto ***PC;
func_5693824192:
    extend(113);
    NEXT();
    goto ***PC;
func_5693817936:
    extend(114);
    NEXT();
    goto ***PC;
func_5693824576:
    extend(115);
    NEXT();
    goto ***PC;
func_5693824704:
    extend(116);
    NEXT();
    goto ***PC;
func_5693824832:
    extend(117);
    NEXT();
    goto ***PC;
func_5693824960:
    extend(118);
    NEXT();
    goto ***PC;
func_5693825088:
    extend(119);
    NEXT();
    goto ***PC;
func_5693825216:
    extend(120);
    NEXT();
    goto ***PC;
func_5693825344:
    extend(121);
    NEXT();
    goto ***PC;
func_5693825472:
    extend(122);
    NEXT();
    goto ***PC;
func_5693825600:
    extend(65);
    NEXT();
    goto ***PC;
func_5693825728:
    extend(66);
    NEXT();
    goto ***PC;
func_5693825856:
    extend(67);
    NEXT();
    goto ***PC;
func_5693825984:
    extend(68);
    NEXT();
    goto ***PC;
func_5693826112:
    extend(69);
    NEXT();
    goto ***PC;
func_5693826240:
    extend(70);
    NEXT();
    goto ***PC;
func_5693826368:
    extend(71);
    NEXT();
    goto ***PC;
func_5693824320:
    extend(72);
    NEXT();
    goto ***PC;
func_5693824448:
    extend(73);
    NEXT();
    goto ***PC;
func_5693827008:
    extend(74);
    NEXT();
    goto ***PC;
func_5693827136:
    extend(75);
    NEXT();
    goto ***PC;
func_5693827264:
    extend(76);
    NEXT();
    goto ***PC;
func_5693827392:
    extend(77);
    NEXT();
    goto ***PC;
func_5693827520:
    extend(78);
    NEXT();
    goto ***PC;
func_5693827648:
    extend(79);
    NEXT();
    goto ***PC;
func_5693827776:
    extend(80);
    NEXT();
    goto ***PC;
func_5693827904:
    extend(81);
    NEXT();
    goto ***PC;
func_5693828032:
    extend(82);
    NEXT();
    goto ***PC;
func_5693828160:
    extend(83);
    NEXT();
    goto ***PC;
func_5693828288:
    extend(84);
    NEXT();
    goto ***PC;
func_5693828416:
    extend(85);
    NEXT();
    goto ***PC;
func_5693828544:
    extend(86);
    NEXT();
    goto ***PC;
func_5693828672:
    extend(87);
    NEXT();
    goto ***PC;
func_5693828800:
    extend(88);
    NEXT();
    goto ***PC;
func_5693828928:
    extend(89);
    NEXT();
    goto ***PC;
func_5693829056:
    extend(90);
    NEXT();
    goto ***PC;
func_5693820848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5693820848;
    goto ***PC;
func_5693820192:
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
    PC = exp_5693820192;
    goto ***PC;
func_5693821424:
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
    PC = exp_5693821424;
    goto ***PC;
func_5693821552:
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
func_5693822048:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5693822048;
    goto ***PC;
func_5693822176:
    extend(42);
    NEXT();
    goto ***PC;
func_5693821680:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5693821680;
    goto ***PC;
func_5693822304:
    extend(47);
    NEXT();
    goto ***PC;
func_5693829264:
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
    PC = exp_5693829264;
    goto ***PC;
func_5693829392:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5693829520:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto ***PC;
func_5693829648:
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
    PC = exp_5693829648;
    goto ***PC;
func_5693829776:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5693829904:
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
    PC = exp_5693829904;
    goto ***PC;
func_5693830032:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto ***PC;
func_5693829184:
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
    PC = exp_5693829184;
    goto ***PC;
func_5693821952:
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
    PC = func_5693813472_op0;
    goto ***PC;
}
