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
        unsigned loop_limit = 23;
        static void * cf[] = {&&func_5114998160, &&func_5114998912, &&func_5114999072, &&func_5114998784, &&func_5114998432, &&func_5114998032, &&func_5114998672, &&func_5114999200, &&func_5115000832, &&func_5114998352, &&func_5114999392, &&func_5114999600, &&func_5114999520, &&func_5115000032, &&func_5115000320, &&func_5114999872, &&func_5114999792, &&func_5115000256, &&func_5115000576, &&func_5115000704, &&func_5115001856, &&func_5115001984, &&func_5115002112, &&func_5115002240, &&func_5115002368, &&func_5115002496, &&func_5115002656, &&func_5115002784, &&func_5115002944, &&func_5115003072, &&func_5115003296, &&func_5115003424, &&func_5115003600, &&func_5115001088, &&func_5115001728, &&func_5115001280, &&func_5115004176, &&func_5115004304, &&func_5115004432, &&func_5115004624, &&func_5115004752, &&func_5115004880, &&func_5115005008, &&func_5115004560, &&func_5115001216, &&func_5115005552, &&func_5115001408, &&func_5115001536, &&func_5115005408, &&func_5115005776, &&func_5115005904, &&func_5115000160, &&func_5115006512, &&func_5115000896, &&func_5115006768, &&func_5115006112, &&func_5115007072, &&func_5115007200, &&func_5115008544, &&func_5115008672, &&func_5115008800, &&func_5115008960, &&func_5115009088, &&func_5115009280, &&func_5115009408, &&func_5115003728, &&func_5115003856, &&func_5115009216, &&func_5115009472, &&func_5115009600, &&func_5115009728, &&func_5115009856, &&func_5115009984, &&func_5115010112, &&func_5115010240, &&func_5115003984, &&func_5115010624, &&func_5115010752, &&func_5115010880, &&func_5115011008, &&func_5115011136, &&func_5115011264, &&func_5115011392, &&func_5115011520, &&func_5115011648, &&func_5115011776, &&func_5115011904, &&func_5115012032, &&func_5115012160, &&func_5115012288, &&func_5115012416, &&func_5115010368, &&func_5115010496, &&func_5115013056, &&func_5115013184, &&func_5115013312, &&func_5115013440, &&func_5115013568, &&func_5115013696, &&func_5115013824, &&func_5115013952, &&func_5115014080, &&func_5115014208, &&func_5115014336, &&func_5115014464, &&func_5115014592, &&func_5115014720, &&func_5115014848, &&func_5115014976, &&func_5115015104, &&func_5115006896, &&func_5115006240, &&func_5115007472, &&func_5115007600, &&func_5115008096, &&func_5115008224, &&func_5115007728, &&func_5115008352, &&func_5115015312, &&func_5115015440, &&func_5115015568, &&func_5115015696, &&func_5115015824, &&func_5115015952, &&func_5115016080, &&func_5115015232, &&func_5115008000, &&RETURN, &&HALT};
        static void **func_5114998160_op0[2] = { cf+17, cf+127};
        static void **func_5114998912_op0[2] = { cf+20, cf+127};
        static void **func_5114998912_op1[2] = { cf+22, cf+127};
        static void **func_5114998912_op2[2] = { cf+24, cf+127};
        static void **func_5114998912_op3[2] = { cf+26, cf+127};
        static void **func_5114998912_op4[2] = { cf+28, cf+127};
        static void **func_5114998912_op5[2] = { cf+30, cf+127};
        static void **func_5114998912_op6[2] = { cf+32, cf+127};
        static void **func_5114999072_op0[2] = { cf+34, cf+127};
        static void **func_5114999072_op1[2] = { cf+35, cf+127};
        static void **func_5114999072_op2[2] = { cf+36, cf+127};
        static void **func_5114999072_op3[2] = { cf+37, cf+127};
        static void **func_5114999072_op4[2] = { cf+38, cf+127};
        static void **func_5114999072_op5[2] = { cf+39, cf+127};
        static void **func_5114999072_op6[2] = { cf+40, cf+127};
        static void **func_5114999072_op7[2] = { cf+41, cf+127};
        static void **func_5114999072_op8[2] = { cf+42, cf+127};
        static void **func_5114999072_op9[2] = { cf+43, cf+127};
        static void **func_5114998784_op0[2] = { cf+44, cf+127};
        static void **func_5114998784_op1[2] = { cf+46, cf+127};
        static void **func_5114998784_op2[2] = { cf+14, cf+127};
        static void **func_5114998432_op0[2] = { cf+48, cf+127};
        static void **func_5114998432_op1[2] = { cf+9, cf+127};
        static void **func_5114998432_op2[2] = { cf+6, cf+127};
        static void **func_5114998032_op0[2] = { cf+51, cf+127};
        static void **func_5114998672_op0[2] = { cf+55, cf+127};
        static void **func_5114998672_op1[2] = { cf+8, cf+127};
        static void **func_5114999200_op0[2] = { cf+56, cf+127};
        static void **func_5115000832_op0[2] = { cf+58, cf+127};
        static void **func_5115000832_op1[2] = { cf+59, cf+127};
        static void **func_5115000832_op2[2] = { cf+60, cf+127};
        static void **func_5115000832_op3[2] = { cf+61, cf+127};
        static void **func_5115000832_op4[2] = { cf+62, cf+127};
        static void **func_5115000832_op5[2] = { cf+63, cf+127};
        static void **func_5115000832_op6[2] = { cf+64, cf+127};
        static void **func_5115000832_op7[2] = { cf+65, cf+127};
        static void **func_5115000832_op8[2] = { cf+66, cf+127};
        static void **func_5115000832_op9[2] = { cf+67, cf+127};
        static void **func_5115000832_op10[2] = { cf+68, cf+127};
        static void **func_5115000832_op11[2] = { cf+69, cf+127};
        static void **func_5115000832_op12[2] = { cf+70, cf+127};
        static void **func_5115000832_op13[2] = { cf+71, cf+127};
        static void **func_5115000832_op14[2] = { cf+72, cf+127};
        static void **func_5115000832_op15[2] = { cf+73, cf+127};
        static void **func_5115000832_op16[2] = { cf+74, cf+127};
        static void **func_5115000832_op17[2] = { cf+75, cf+127};
        static void **func_5115000832_op18[2] = { cf+76, cf+127};
        static void **func_5115000832_op19[2] = { cf+77, cf+127};
        static void **func_5115000832_op20[2] = { cf+78, cf+127};
        static void **func_5115000832_op21[2] = { cf+79, cf+127};
        static void **func_5115000832_op22[2] = { cf+80, cf+127};
        static void **func_5115000832_op23[2] = { cf+81, cf+127};
        static void **func_5115000832_op24[2] = { cf+82, cf+127};
        static void **func_5115000832_op25[2] = { cf+83, cf+127};
        static void **func_5115000832_op26[2] = { cf+84, cf+127};
        static void **func_5115000832_op27[2] = { cf+85, cf+127};
        static void **func_5115000832_op28[2] = { cf+86, cf+127};
        static void **func_5115000832_op29[2] = { cf+87, cf+127};
        static void **func_5115000832_op30[2] = { cf+88, cf+127};
        static void **func_5115000832_op31[2] = { cf+89, cf+127};
        static void **func_5115000832_op32[2] = { cf+90, cf+127};
        static void **func_5115000832_op33[2] = { cf+91, cf+127};
        static void **func_5115000832_op34[2] = { cf+92, cf+127};
        static void **func_5115000832_op35[2] = { cf+93, cf+127};
        static void **func_5115000832_op36[2] = { cf+94, cf+127};
        static void **func_5115000832_op37[2] = { cf+95, cf+127};
        static void **func_5115000832_op38[2] = { cf+96, cf+127};
        static void **func_5115000832_op39[2] = { cf+97, cf+127};
        static void **func_5115000832_op40[2] = { cf+98, cf+127};
        static void **func_5115000832_op41[2] = { cf+99, cf+127};
        static void **func_5115000832_op42[2] = { cf+100, cf+127};
        static void **func_5115000832_op43[2] = { cf+101, cf+127};
        static void **func_5115000832_op44[2] = { cf+102, cf+127};
        static void **func_5115000832_op45[2] = { cf+103, cf+127};
        static void **func_5115000832_op46[2] = { cf+104, cf+127};
        static void **func_5115000832_op47[2] = { cf+105, cf+127};
        static void **func_5115000832_op48[2] = { cf+106, cf+127};
        static void **func_5115000832_op49[2] = { cf+107, cf+127};
        static void **func_5115000832_op50[2] = { cf+108, cf+127};
        static void **func_5115000832_op51[2] = { cf+109, cf+127};
        static void **func_5114998352_op0[2] = { cf+110, cf+127};
        static void **func_5114998352_op1[2] = { cf+2, cf+127};
        static void **func_5114999392_op0[2] = { cf+111, cf+127};
        static void **func_5114999392_op1[2] = { cf+13, cf+127};
        static void **func_5114999600_op0[2] = { cf+112, cf+127};
        static void **func_5114999520_op0[2] = { cf+10, cf+128};
        static void **func_5115000032_op0[2] = { cf+15, cf+127};
        static void **func_5115000032_op1[2] = { cf+0, cf+127};
        static void **func_5115000032_op2[2] = { cf+7, cf+127};
        static void **func_5115000032_op3[2] = { cf+16, cf+127};
        static void **func_5115000032_op4[2] = { cf+5, cf+127};
        static void **func_5115000032_op5[2] = { cf+11, cf+127};
        static void **func_5115000320_op0[2] = { cf+114, cf+127};
        static void **func_5115000320_op1[2] = { cf+116, cf+127};
        static void **func_5115000320_op2[2] = { cf+4, cf+127};
        static void **func_5114999872_op0[2] = { cf+118, cf+127};
        static void **func_5114999872_op1[2] = { cf+121, cf+127};
        static void **func_5114999872_op2[2] = { cf+123, cf+127};
        static void **func_5114999792_op0[2] = { cf+125, cf+127};
        static void **exp_5115000256[5] = {cf+6, cf+18, cf+3, cf+19, cf+127};
        static void **exp_5115001856[4] = {cf+3, cf+21, cf+3, cf+127};
        static void **exp_5115002112[4] = {cf+3, cf+23, cf+3, cf+127};
        static void **exp_5115002368[4] = {cf+3, cf+25, cf+3, cf+127};
        static void **exp_5115002656[4] = {cf+3, cf+27, cf+3, cf+127};
        static void **exp_5115002944[4] = {cf+1, cf+29, cf+1, cf+127};
        static void **exp_5115003296[4] = {cf+1, cf+31, cf+1, cf+127};
        static void **exp_5115003600[3] = {cf+33, cf+1, cf+127};
        static void **exp_5115001216[4] = {cf+3, cf+45, cf+14, cf+127};
        static void **exp_5115001408[4] = {cf+3, cf+47, cf+14, cf+127};
        static void **exp_5115005408[4] = {cf+49, cf+3, cf+50, cf+127};
        static void **exp_5115000160[8] = {cf+52, cf+6, cf+49, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_5115006112[3] = {cf+8, cf+6, cf+127};
        static void **exp_5115007072[8] = {cf+57, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_5115006896[3] = {cf+2, cf+9, cf+127};
        static void **exp_5115006240[3] = {cf+10, cf+13, cf+127};
        static void **exp_5115007472[4] = {cf+113, cf+3, cf+19, cf+127};
        static void **exp_5115008096[4] = {cf+14, cf+115, cf+4, cf+127};
        static void **exp_5115007728[4] = {cf+14, cf+117, cf+4, cf+127};
        static void **exp_5115015312[4] = {cf+119, cf+6, cf+120, cf+127};
        static void **exp_5115015696[4] = {cf+122, cf+6, cf+120, cf+127};
        static void **exp_5115015952[4] = {cf+124, cf+6, cf+120, cf+127};
        static void **exp_5115015232[8] = {cf+126, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
goto LOOP;

func_5114998160:
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
            PC = func_5114998160_op0;
        break;
    }
    goto ***PC;
func_5114998912:
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
            PC = func_5114998912_op0;
        break;
        case 1:
            PC = func_5114998912_op1;
        break;
        case 2:
            PC = func_5114998912_op2;
        break;
        case 3:
            PC = func_5114998912_op3;
        break;
        case 4:
            PC = func_5114998912_op4;
        break;
        case 5:
            PC = func_5114998912_op5;
        break;
        case 6:
            PC = func_5114998912_op6;
        break;
    }
    goto ***PC;
func_5114999072:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5114999072_op0;
        break;
        case 1:
            PC = func_5114999072_op1;
        break;
        case 2:
            PC = func_5114999072_op2;
        break;
        case 3:
            PC = func_5114999072_op3;
        break;
        case 4:
            PC = func_5114999072_op4;
        break;
        case 5:
            PC = func_5114999072_op5;
        break;
        case 6:
            PC = func_5114999072_op6;
        break;
        case 7:
            PC = func_5114999072_op7;
        break;
        case 8:
            PC = func_5114999072_op8;
        break;
        case 9:
            PC = func_5114999072_op9;
        break;
    }
    goto ***PC;
func_5114998784:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5114998784_op0;
        break;
        case 1:
            PC = func_5114998784_op1;
        break;
        case 2:
            PC = func_5114998784_op2;
        break;
    }
    goto ***PC;
func_5114998432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5114998432_op0;
        break;
        case 1:
            PC = func_5114998432_op1;
        break;
        case 2:
            PC = func_5114998432_op2;
        break;
    }
    goto ***PC;
func_5114998032:
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
            PC = func_5114998032_op0;
        break;
    }
    goto ***PC;
func_5114998672:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5114998672_op0;
        break;
        case 1:
            PC = func_5114998672_op1;
        break;
    }
    goto ***PC;
func_5114999200:
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
            PC = func_5114999200_op0;
        break;
    }
    goto ***PC;
func_5115000832:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5115000832_op0;
        break;
        case 1:
            PC = func_5115000832_op1;
        break;
        case 2:
            PC = func_5115000832_op2;
        break;
        case 3:
            PC = func_5115000832_op3;
        break;
        case 4:
            PC = func_5115000832_op4;
        break;
        case 5:
            PC = func_5115000832_op5;
        break;
        case 6:
            PC = func_5115000832_op6;
        break;
        case 7:
            PC = func_5115000832_op7;
        break;
        case 8:
            PC = func_5115000832_op8;
        break;
        case 9:
            PC = func_5115000832_op9;
        break;
        case 10:
            PC = func_5115000832_op10;
        break;
        case 11:
            PC = func_5115000832_op11;
        break;
        case 12:
            PC = func_5115000832_op12;
        break;
        case 13:
            PC = func_5115000832_op13;
        break;
        case 14:
            PC = func_5115000832_op14;
        break;
        case 15:
            PC = func_5115000832_op15;
        break;
        case 16:
            PC = func_5115000832_op16;
        break;
        case 17:
            PC = func_5115000832_op17;
        break;
        case 18:
            PC = func_5115000832_op18;
        break;
        case 19:
            PC = func_5115000832_op19;
        break;
        case 20:
            PC = func_5115000832_op20;
        break;
        case 21:
            PC = func_5115000832_op21;
        break;
        case 22:
            PC = func_5115000832_op22;
        break;
        case 23:
            PC = func_5115000832_op23;
        break;
        case 24:
            PC = func_5115000832_op24;
        break;
        case 25:
            PC = func_5115000832_op25;
        break;
        case 26:
            PC = func_5115000832_op26;
        break;
        case 27:
            PC = func_5115000832_op27;
        break;
        case 28:
            PC = func_5115000832_op28;
        break;
        case 29:
            PC = func_5115000832_op29;
        break;
        case 30:
            PC = func_5115000832_op30;
        break;
        case 31:
            PC = func_5115000832_op31;
        break;
        case 32:
            PC = func_5115000832_op32;
        break;
        case 33:
            PC = func_5115000832_op33;
        break;
        case 34:
            PC = func_5115000832_op34;
        break;
        case 35:
            PC = func_5115000832_op35;
        break;
        case 36:
            PC = func_5115000832_op36;
        break;
        case 37:
            PC = func_5115000832_op37;
        break;
        case 38:
            PC = func_5115000832_op38;
        break;
        case 39:
            PC = func_5115000832_op39;
        break;
        case 40:
            PC = func_5115000832_op40;
        break;
        case 41:
            PC = func_5115000832_op41;
        break;
        case 42:
            PC = func_5115000832_op42;
        break;
        case 43:
            PC = func_5115000832_op43;
        break;
        case 44:
            PC = func_5115000832_op44;
        break;
        case 45:
            PC = func_5115000832_op45;
        break;
        case 46:
            PC = func_5115000832_op46;
        break;
        case 47:
            PC = func_5115000832_op47;
        break;
        case 48:
            PC = func_5115000832_op48;
        break;
        case 49:
            PC = func_5115000832_op49;
        break;
        case 50:
            PC = func_5115000832_op50;
        break;
        case 51:
            PC = func_5115000832_op51;
        break;
    }
    goto ***PC;
func_5114998352:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5114998352_op0;
        break;
        case 1:
            PC = func_5114998352_op1;
        break;
    }
    goto ***PC;
func_5114999392:
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
            PC = func_5114999392_op0;
        break;
        case 1:
            PC = func_5114999392_op1;
        break;
    }
    goto ***PC;
func_5114999600:
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
            PC = func_5114999600_op0;
        break;
    }
    goto ***PC;
func_5114999520:
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
            PC = func_5114999520_op0;
        break;
    }
    goto ***PC;
func_5115000032:
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
            PC = func_5115000032_op0;
        break;
        case 1:
            PC = func_5115000032_op1;
        break;
        case 2:
            PC = func_5115000032_op2;
        break;
        case 3:
            PC = func_5115000032_op3;
        break;
        case 4:
            PC = func_5115000032_op4;
        break;
        case 5:
            PC = func_5115000032_op5;
        break;
    }
    goto ***PC;
func_5115000320:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5115000320_op0;
        break;
        case 1:
            PC = func_5115000320_op1;
        break;
        case 2:
            PC = func_5115000320_op2;
        break;
    }
    goto ***PC;
func_5114999872:
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
            PC = func_5114999872_op0;
        break;
        case 1:
            PC = func_5114999872_op1;
        break;
        case 2:
            PC = func_5114999872_op2;
        break;
    }
    goto ***PC;
func_5114999792:
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
            PC = func_5114999792_op0;
        break;
    }
    goto ***PC;
func_5115000256:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5115000256;
    goto ***PC;
func_5115000576:
    extend(61);
    NEXT();
    goto ***PC;
func_5115000704:
    extend(59);
    NEXT();
    goto ***PC;
func_5115001856:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5115001856;
    goto ***PC;
func_5115001984:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5115002112:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5115002112;
    goto ***PC;
func_5115002240:
    extend(33);
    extend(61);
    NEXT();
    goto ***PC;
func_5115002368:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5115002368;
    goto ***PC;
func_5115002496:
    extend(62);
    NEXT();
    goto ***PC;
func_5115002656:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5115002656;
    goto ***PC;
func_5115002784:
    extend(60);
    NEXT();
    goto ***PC;
func_5115002944:
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
    PC = exp_5115002944;
    goto ***PC;
func_5115003072:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_5115003296:
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
    PC = exp_5115003296;
    goto ***PC;
func_5115003424:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_5115003600:
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
    PC = exp_5115003600;
    goto ***PC;
func_5115001088:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto ***PC;
func_5115001728:
    extend(48);
    NEXT();
    goto ***PC;
func_5115001280:
    extend(49);
    NEXT();
    goto ***PC;
func_5115004176:
    extend(50);
    NEXT();
    goto ***PC;
func_5115004304:
    extend(51);
    NEXT();
    goto ***PC;
func_5115004432:
    extend(52);
    NEXT();
    goto ***PC;
func_5115004624:
    extend(53);
    NEXT();
    goto ***PC;
func_5115004752:
    extend(54);
    NEXT();
    goto ***PC;
func_5115004880:
    extend(55);
    NEXT();
    goto ***PC;
func_5115005008:
    extend(56);
    NEXT();
    goto ***PC;
func_5115004560:
    extend(57);
    NEXT();
    goto ***PC;
func_5115001216:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5115001216;
    goto ***PC;
func_5115005552:
    extend(43);
    NEXT();
    goto ***PC;
func_5115001408:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5115001408;
    goto ***PC;
func_5115001536:
    extend(45);
    NEXT();
    goto ***PC;
func_5115005408:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5115005408;
    goto ***PC;
func_5115005776:
    extend(40);
    NEXT();
    goto ***PC;
func_5115005904:
    extend(41);
    NEXT();
    goto ***PC;
func_5115000160:
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
    PC = exp_5115000160;
    goto ***PC;
func_5115006512:
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
func_5115000896:
    extend(123);
    NEXT();
    goto ***PC;
func_5115006768:
    extend(125);
    NEXT();
    goto ***PC;
func_5115006112:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5115006112;
    goto ***PC;
func_5115007072:
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
    PC = exp_5115007072;
    goto ***PC;
func_5115007200:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5115008544:
    extend(97);
    NEXT();
    goto ***PC;
func_5115008672:
    extend(98);
    NEXT();
    goto ***PC;
func_5115008800:
    extend(99);
    NEXT();
    goto ***PC;
func_5115008960:
    extend(100);
    NEXT();
    goto ***PC;
func_5115009088:
    extend(101);
    NEXT();
    goto ***PC;
func_5115009280:
    extend(102);
    NEXT();
    goto ***PC;
func_5115009408:
    extend(103);
    NEXT();
    goto ***PC;
func_5115003728:
    extend(104);
    NEXT();
    goto ***PC;
func_5115003856:
    extend(105);
    NEXT();
    goto ***PC;
func_5115009216:
    extend(106);
    NEXT();
    goto ***PC;
func_5115009472:
    extend(107);
    NEXT();
    goto ***PC;
func_5115009600:
    extend(108);
    NEXT();
    goto ***PC;
func_5115009728:
    extend(109);
    NEXT();
    goto ***PC;
func_5115009856:
    extend(110);
    NEXT();
    goto ***PC;
func_5115009984:
    extend(111);
    NEXT();
    goto ***PC;
func_5115010112:
    extend(112);
    NEXT();
    goto ***PC;
func_5115010240:
    extend(113);
    NEXT();
    goto ***PC;
func_5115003984:
    extend(114);
    NEXT();
    goto ***PC;
func_5115010624:
    extend(115);
    NEXT();
    goto ***PC;
func_5115010752:
    extend(116);
    NEXT();
    goto ***PC;
func_5115010880:
    extend(117);
    NEXT();
    goto ***PC;
func_5115011008:
    extend(118);
    NEXT();
    goto ***PC;
func_5115011136:
    extend(119);
    NEXT();
    goto ***PC;
func_5115011264:
    extend(120);
    NEXT();
    goto ***PC;
func_5115011392:
    extend(121);
    NEXT();
    goto ***PC;
func_5115011520:
    extend(122);
    NEXT();
    goto ***PC;
func_5115011648:
    extend(65);
    NEXT();
    goto ***PC;
func_5115011776:
    extend(66);
    NEXT();
    goto ***PC;
func_5115011904:
    extend(67);
    NEXT();
    goto ***PC;
func_5115012032:
    extend(68);
    NEXT();
    goto ***PC;
func_5115012160:
    extend(69);
    NEXT();
    goto ***PC;
func_5115012288:
    extend(70);
    NEXT();
    goto ***PC;
func_5115012416:
    extend(71);
    NEXT();
    goto ***PC;
func_5115010368:
    extend(72);
    NEXT();
    goto ***PC;
func_5115010496:
    extend(73);
    NEXT();
    goto ***PC;
func_5115013056:
    extend(74);
    NEXT();
    goto ***PC;
func_5115013184:
    extend(75);
    NEXT();
    goto ***PC;
func_5115013312:
    extend(76);
    NEXT();
    goto ***PC;
func_5115013440:
    extend(77);
    NEXT();
    goto ***PC;
func_5115013568:
    extend(78);
    NEXT();
    goto ***PC;
func_5115013696:
    extend(79);
    NEXT();
    goto ***PC;
func_5115013824:
    extend(80);
    NEXT();
    goto ***PC;
func_5115013952:
    extend(81);
    NEXT();
    goto ***PC;
func_5115014080:
    extend(82);
    NEXT();
    goto ***PC;
func_5115014208:
    extend(83);
    NEXT();
    goto ***PC;
func_5115014336:
    extend(84);
    NEXT();
    goto ***PC;
func_5115014464:
    extend(85);
    NEXT();
    goto ***PC;
func_5115014592:
    extend(86);
    NEXT();
    goto ***PC;
func_5115014720:
    extend(87);
    NEXT();
    goto ***PC;
func_5115014848:
    extend(88);
    NEXT();
    goto ***PC;
func_5115014976:
    extend(89);
    NEXT();
    goto ***PC;
func_5115015104:
    extend(90);
    NEXT();
    goto ***PC;
func_5115006896:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5115006896;
    goto ***PC;
func_5115006240:
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
    PC = exp_5115006240;
    goto ***PC;
func_5115007472:
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
    PC = exp_5115007472;
    goto ***PC;
func_5115007600:
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
func_5115008096:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5115008096;
    goto ***PC;
func_5115008224:
    extend(42);
    NEXT();
    goto ***PC;
func_5115007728:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5115007728;
    goto ***PC;
func_5115008352:
    extend(47);
    NEXT();
    goto ***PC;
func_5115015312:
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
    PC = exp_5115015312;
    goto ***PC;
func_5115015440:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5115015568:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto ***PC;
func_5115015696:
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
    PC = exp_5115015696;
    goto ***PC;
func_5115015824:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5115015952:
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
    PC = exp_5115015952;
    goto ***PC;
func_5115016080:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto ***PC;
func_5115015232:
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
    PC = exp_5115015232;
    goto ***PC;
func_5115008000:
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
    PC = func_5114999520_op0;
    goto ***PC;
}
