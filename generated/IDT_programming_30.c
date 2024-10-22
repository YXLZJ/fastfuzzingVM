#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 30
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
        static void * cf[] = {&&func_4863339920, &&func_4863340672, &&func_4863340832, &&func_4863340544, &&func_4863340192, &&func_4863339792, &&func_4863340432, &&func_4863340960, &&func_4863342592, &&func_4863340112, &&func_4863341152, &&func_4863341360, &&func_4863341280, &&func_4863341792, &&func_4863342080, &&func_4863341632, &&func_4863341552, &&func_4863342016, &&func_4863342336, &&func_4863342464, &&func_4863343616, &&func_4863343744, &&func_4863343872, &&func_4863344000, &&func_4863344128, &&func_4863344256, &&func_4863344416, &&func_4863344544, &&func_4863344704, &&func_4863344832, &&func_4863345056, &&func_4863345184, &&func_4863345360, &&func_4863342848, &&func_4863343488, &&func_4863343040, &&func_4863345936, &&func_4863346064, &&func_4863346192, &&func_4863346384, &&func_4863346512, &&func_4863346640, &&func_4863346768, &&func_4863346320, &&func_4863342976, &&func_4863347312, &&func_4863343168, &&func_4863343296, &&func_4863347168, &&func_4863347536, &&func_4863347664, &&func_4863341920, &&func_4863348272, &&func_4863342656, &&func_4863348528, &&func_4863347872, &&func_4863348832, &&func_4863348960, &&func_4863350304, &&func_4863350432, &&func_4863350560, &&func_4863350720, &&func_4863350848, &&func_4863351040, &&func_4863351168, &&func_4863345488, &&func_4863345616, &&func_4863350976, &&func_4863351232, &&func_4863351360, &&func_4863351488, &&func_4863351616, &&func_4863351744, &&func_4863351872, &&func_4863352000, &&func_4863345744, &&func_4863352384, &&func_4863352512, &&func_4863352640, &&func_4863352768, &&func_4863352896, &&func_4863353024, &&func_4863353152, &&func_4863353280, &&func_4863353408, &&func_4863353536, &&func_4863353664, &&func_4863353792, &&func_4863353920, &&func_4863354048, &&func_4863354176, &&func_4863352128, &&func_4863352256, &&func_4863354816, &&func_4863354944, &&func_4863355072, &&func_4863355200, &&func_4863355328, &&func_4863355456, &&func_4863355584, &&func_4863355712, &&func_4863355840, &&func_4863355968, &&func_4863356096, &&func_4863356224, &&func_4863356352, &&func_4863356480, &&func_4863356608, &&func_4863356736, &&func_4863356864, &&func_4863348656, &&func_4863348000, &&func_4863349232, &&func_4863349360, &&func_4863349856, &&func_4863349984, &&func_4863349488, &&func_4863350112, &&func_4863357072, &&func_4863357200, &&func_4863357328, &&func_4863357456, &&func_4863357584, &&func_4863357712, &&func_4863357840, &&func_4863356992, &&func_4863349760, &&RETURN, &&HALT};
        static void **func_4863339920_op0[2] = { cf+17, cf+127};
        static void **func_4863340672_op0[2] = { cf+20, cf+127};
        static void **func_4863340672_op1[2] = { cf+22, cf+127};
        static void **func_4863340672_op2[2] = { cf+24, cf+127};
        static void **func_4863340672_op3[2] = { cf+26, cf+127};
        static void **func_4863340672_op4[2] = { cf+28, cf+127};
        static void **func_4863340672_op5[2] = { cf+30, cf+127};
        static void **func_4863340672_op6[2] = { cf+32, cf+127};
        static void **func_4863340832_op0[2] = { cf+34, cf+127};
        static void **func_4863340832_op1[2] = { cf+35, cf+127};
        static void **func_4863340832_op2[2] = { cf+36, cf+127};
        static void **func_4863340832_op3[2] = { cf+37, cf+127};
        static void **func_4863340832_op4[2] = { cf+38, cf+127};
        static void **func_4863340832_op5[2] = { cf+39, cf+127};
        static void **func_4863340832_op6[2] = { cf+40, cf+127};
        static void **func_4863340832_op7[2] = { cf+41, cf+127};
        static void **func_4863340832_op8[2] = { cf+42, cf+127};
        static void **func_4863340832_op9[2] = { cf+43, cf+127};
        static void **func_4863340544_op0[2] = { cf+44, cf+127};
        static void **func_4863340544_op1[2] = { cf+46, cf+127};
        static void **func_4863340544_op2[2] = { cf+14, cf+127};
        static void **func_4863340192_op0[2] = { cf+48, cf+127};
        static void **func_4863340192_op1[2] = { cf+9, cf+127};
        static void **func_4863340192_op2[2] = { cf+6, cf+127};
        static void **func_4863339792_op0[2] = { cf+51, cf+127};
        static void **func_4863340432_op0[2] = { cf+55, cf+127};
        static void **func_4863340432_op1[2] = { cf+8, cf+127};
        static void **func_4863340960_op0[2] = { cf+56, cf+127};
        static void **func_4863342592_op0[2] = { cf+58, cf+127};
        static void **func_4863342592_op1[2] = { cf+59, cf+127};
        static void **func_4863342592_op2[2] = { cf+60, cf+127};
        static void **func_4863342592_op3[2] = { cf+61, cf+127};
        static void **func_4863342592_op4[2] = { cf+62, cf+127};
        static void **func_4863342592_op5[2] = { cf+63, cf+127};
        static void **func_4863342592_op6[2] = { cf+64, cf+127};
        static void **func_4863342592_op7[2] = { cf+65, cf+127};
        static void **func_4863342592_op8[2] = { cf+66, cf+127};
        static void **func_4863342592_op9[2] = { cf+67, cf+127};
        static void **func_4863342592_op10[2] = { cf+68, cf+127};
        static void **func_4863342592_op11[2] = { cf+69, cf+127};
        static void **func_4863342592_op12[2] = { cf+70, cf+127};
        static void **func_4863342592_op13[2] = { cf+71, cf+127};
        static void **func_4863342592_op14[2] = { cf+72, cf+127};
        static void **func_4863342592_op15[2] = { cf+73, cf+127};
        static void **func_4863342592_op16[2] = { cf+74, cf+127};
        static void **func_4863342592_op17[2] = { cf+75, cf+127};
        static void **func_4863342592_op18[2] = { cf+76, cf+127};
        static void **func_4863342592_op19[2] = { cf+77, cf+127};
        static void **func_4863342592_op20[2] = { cf+78, cf+127};
        static void **func_4863342592_op21[2] = { cf+79, cf+127};
        static void **func_4863342592_op22[2] = { cf+80, cf+127};
        static void **func_4863342592_op23[2] = { cf+81, cf+127};
        static void **func_4863342592_op24[2] = { cf+82, cf+127};
        static void **func_4863342592_op25[2] = { cf+83, cf+127};
        static void **func_4863342592_op26[2] = { cf+84, cf+127};
        static void **func_4863342592_op27[2] = { cf+85, cf+127};
        static void **func_4863342592_op28[2] = { cf+86, cf+127};
        static void **func_4863342592_op29[2] = { cf+87, cf+127};
        static void **func_4863342592_op30[2] = { cf+88, cf+127};
        static void **func_4863342592_op31[2] = { cf+89, cf+127};
        static void **func_4863342592_op32[2] = { cf+90, cf+127};
        static void **func_4863342592_op33[2] = { cf+91, cf+127};
        static void **func_4863342592_op34[2] = { cf+92, cf+127};
        static void **func_4863342592_op35[2] = { cf+93, cf+127};
        static void **func_4863342592_op36[2] = { cf+94, cf+127};
        static void **func_4863342592_op37[2] = { cf+95, cf+127};
        static void **func_4863342592_op38[2] = { cf+96, cf+127};
        static void **func_4863342592_op39[2] = { cf+97, cf+127};
        static void **func_4863342592_op40[2] = { cf+98, cf+127};
        static void **func_4863342592_op41[2] = { cf+99, cf+127};
        static void **func_4863342592_op42[2] = { cf+100, cf+127};
        static void **func_4863342592_op43[2] = { cf+101, cf+127};
        static void **func_4863342592_op44[2] = { cf+102, cf+127};
        static void **func_4863342592_op45[2] = { cf+103, cf+127};
        static void **func_4863342592_op46[2] = { cf+104, cf+127};
        static void **func_4863342592_op47[2] = { cf+105, cf+127};
        static void **func_4863342592_op48[2] = { cf+106, cf+127};
        static void **func_4863342592_op49[2] = { cf+107, cf+127};
        static void **func_4863342592_op50[2] = { cf+108, cf+127};
        static void **func_4863342592_op51[2] = { cf+109, cf+127};
        static void **func_4863340112_op0[2] = { cf+110, cf+127};
        static void **func_4863340112_op1[2] = { cf+2, cf+127};
        static void **func_4863341152_op0[2] = { cf+111, cf+127};
        static void **func_4863341152_op1[2] = { cf+13, cf+127};
        static void **func_4863341360_op0[2] = { cf+112, cf+127};
        static void **func_4863341280_op0[2] = { cf+10, cf+128};
        static void **func_4863341792_op0[2] = { cf+15, cf+127};
        static void **func_4863341792_op1[2] = { cf+0, cf+127};
        static void **func_4863341792_op2[2] = { cf+7, cf+127};
        static void **func_4863341792_op3[2] = { cf+16, cf+127};
        static void **func_4863341792_op4[2] = { cf+5, cf+127};
        static void **func_4863341792_op5[2] = { cf+11, cf+127};
        static void **func_4863342080_op0[2] = { cf+114, cf+127};
        static void **func_4863342080_op1[2] = { cf+116, cf+127};
        static void **func_4863342080_op2[2] = { cf+4, cf+127};
        static void **func_4863341632_op0[2] = { cf+118, cf+127};
        static void **func_4863341632_op1[2] = { cf+121, cf+127};
        static void **func_4863341632_op2[2] = { cf+123, cf+127};
        static void **func_4863341552_op0[2] = { cf+125, cf+127};
        static void **exp_4863342016[5] = {cf+6, cf+18, cf+3, cf+19, cf+127};
        static void **exp_4863343616[4] = {cf+3, cf+21, cf+3, cf+127};
        static void **exp_4863343872[4] = {cf+3, cf+23, cf+3, cf+127};
        static void **exp_4863344128[4] = {cf+3, cf+25, cf+3, cf+127};
        static void **exp_4863344416[4] = {cf+3, cf+27, cf+3, cf+127};
        static void **exp_4863344704[4] = {cf+1, cf+29, cf+1, cf+127};
        static void **exp_4863345056[4] = {cf+1, cf+31, cf+1, cf+127};
        static void **exp_4863345360[3] = {cf+33, cf+1, cf+127};
        static void **exp_4863342976[4] = {cf+3, cf+45, cf+14, cf+127};
        static void **exp_4863343168[4] = {cf+3, cf+47, cf+14, cf+127};
        static void **exp_4863347168[4] = {cf+49, cf+3, cf+50, cf+127};
        static void **exp_4863341920[8] = {cf+52, cf+6, cf+49, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_4863347872[3] = {cf+8, cf+6, cf+127};
        static void **exp_4863348832[8] = {cf+57, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_4863348656[3] = {cf+2, cf+9, cf+127};
        static void **exp_4863348000[3] = {cf+10, cf+13, cf+127};
        static void **exp_4863349232[4] = {cf+113, cf+3, cf+19, cf+127};
        static void **exp_4863349856[4] = {cf+14, cf+115, cf+4, cf+127};
        static void **exp_4863349488[4] = {cf+14, cf+117, cf+4, cf+127};
        static void **exp_4863357072[4] = {cf+119, cf+6, cf+120, cf+127};
        static void **exp_4863357456[4] = {cf+122, cf+6, cf+120, cf+127};
        static void **exp_4863357712[4] = {cf+124, cf+6, cf+120, cf+127};
        static void **exp_4863356992[8] = {cf+126, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
goto LOOP;

func_4863339920:
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
            PC = func_4863339920_op0;
        break;
    }
    goto ***PC;
func_4863340672:
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
            PC = func_4863340672_op0;
        break;
        case 1:
            PC = func_4863340672_op1;
        break;
        case 2:
            PC = func_4863340672_op2;
        break;
        case 3:
            PC = func_4863340672_op3;
        break;
        case 4:
            PC = func_4863340672_op4;
        break;
        case 5:
            PC = func_4863340672_op5;
        break;
        case 6:
            PC = func_4863340672_op6;
        break;
    }
    goto ***PC;
func_4863340832:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4863340832_op0;
        break;
        case 1:
            PC = func_4863340832_op1;
        break;
        case 2:
            PC = func_4863340832_op2;
        break;
        case 3:
            PC = func_4863340832_op3;
        break;
        case 4:
            PC = func_4863340832_op4;
        break;
        case 5:
            PC = func_4863340832_op5;
        break;
        case 6:
            PC = func_4863340832_op6;
        break;
        case 7:
            PC = func_4863340832_op7;
        break;
        case 8:
            PC = func_4863340832_op8;
        break;
        case 9:
            PC = func_4863340832_op9;
        break;
    }
    goto ***PC;
func_4863340544:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4863340544_op0;
        break;
        case 1:
            PC = func_4863340544_op1;
        break;
        case 2:
            PC = func_4863340544_op2;
        break;
    }
    goto ***PC;
func_4863340192:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4863340192_op0;
        break;
        case 1:
            PC = func_4863340192_op1;
        break;
        case 2:
            PC = func_4863340192_op2;
        break;
    }
    goto ***PC;
func_4863339792:
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
            PC = func_4863339792_op0;
        break;
    }
    goto ***PC;
func_4863340432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4863340432_op0;
        break;
        case 1:
            PC = func_4863340432_op1;
        break;
    }
    goto ***PC;
func_4863340960:
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
            PC = func_4863340960_op0;
        break;
    }
    goto ***PC;
func_4863342592:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_4863342592_op0;
        break;
        case 1:
            PC = func_4863342592_op1;
        break;
        case 2:
            PC = func_4863342592_op2;
        break;
        case 3:
            PC = func_4863342592_op3;
        break;
        case 4:
            PC = func_4863342592_op4;
        break;
        case 5:
            PC = func_4863342592_op5;
        break;
        case 6:
            PC = func_4863342592_op6;
        break;
        case 7:
            PC = func_4863342592_op7;
        break;
        case 8:
            PC = func_4863342592_op8;
        break;
        case 9:
            PC = func_4863342592_op9;
        break;
        case 10:
            PC = func_4863342592_op10;
        break;
        case 11:
            PC = func_4863342592_op11;
        break;
        case 12:
            PC = func_4863342592_op12;
        break;
        case 13:
            PC = func_4863342592_op13;
        break;
        case 14:
            PC = func_4863342592_op14;
        break;
        case 15:
            PC = func_4863342592_op15;
        break;
        case 16:
            PC = func_4863342592_op16;
        break;
        case 17:
            PC = func_4863342592_op17;
        break;
        case 18:
            PC = func_4863342592_op18;
        break;
        case 19:
            PC = func_4863342592_op19;
        break;
        case 20:
            PC = func_4863342592_op20;
        break;
        case 21:
            PC = func_4863342592_op21;
        break;
        case 22:
            PC = func_4863342592_op22;
        break;
        case 23:
            PC = func_4863342592_op23;
        break;
        case 24:
            PC = func_4863342592_op24;
        break;
        case 25:
            PC = func_4863342592_op25;
        break;
        case 26:
            PC = func_4863342592_op26;
        break;
        case 27:
            PC = func_4863342592_op27;
        break;
        case 28:
            PC = func_4863342592_op28;
        break;
        case 29:
            PC = func_4863342592_op29;
        break;
        case 30:
            PC = func_4863342592_op30;
        break;
        case 31:
            PC = func_4863342592_op31;
        break;
        case 32:
            PC = func_4863342592_op32;
        break;
        case 33:
            PC = func_4863342592_op33;
        break;
        case 34:
            PC = func_4863342592_op34;
        break;
        case 35:
            PC = func_4863342592_op35;
        break;
        case 36:
            PC = func_4863342592_op36;
        break;
        case 37:
            PC = func_4863342592_op37;
        break;
        case 38:
            PC = func_4863342592_op38;
        break;
        case 39:
            PC = func_4863342592_op39;
        break;
        case 40:
            PC = func_4863342592_op40;
        break;
        case 41:
            PC = func_4863342592_op41;
        break;
        case 42:
            PC = func_4863342592_op42;
        break;
        case 43:
            PC = func_4863342592_op43;
        break;
        case 44:
            PC = func_4863342592_op44;
        break;
        case 45:
            PC = func_4863342592_op45;
        break;
        case 46:
            PC = func_4863342592_op46;
        break;
        case 47:
            PC = func_4863342592_op47;
        break;
        case 48:
            PC = func_4863342592_op48;
        break;
        case 49:
            PC = func_4863342592_op49;
        break;
        case 50:
            PC = func_4863342592_op50;
        break;
        case 51:
            PC = func_4863342592_op51;
        break;
    }
    goto ***PC;
func_4863340112:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4863340112_op0;
        break;
        case 1:
            PC = func_4863340112_op1;
        break;
    }
    goto ***PC;
func_4863341152:
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
            PC = func_4863341152_op0;
        break;
        case 1:
            PC = func_4863341152_op1;
        break;
    }
    goto ***PC;
func_4863341360:
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
            PC = func_4863341360_op0;
        break;
    }
    goto ***PC;
func_4863341280:
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
            PC = func_4863341280_op0;
        break;
    }
    goto ***PC;
func_4863341792:
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
            PC = func_4863341792_op0;
        break;
        case 1:
            PC = func_4863341792_op1;
        break;
        case 2:
            PC = func_4863341792_op2;
        break;
        case 3:
            PC = func_4863341792_op3;
        break;
        case 4:
            PC = func_4863341792_op4;
        break;
        case 5:
            PC = func_4863341792_op5;
        break;
    }
    goto ***PC;
func_4863342080:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4863342080_op0;
        break;
        case 1:
            PC = func_4863342080_op1;
        break;
        case 2:
            PC = func_4863342080_op2;
        break;
    }
    goto ***PC;
func_4863341632:
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
            PC = func_4863341632_op0;
        break;
        case 1:
            PC = func_4863341632_op1;
        break;
        case 2:
            PC = func_4863341632_op2;
        break;
    }
    goto ***PC;
func_4863341552:
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
            PC = func_4863341552_op0;
        break;
    }
    goto ***PC;
func_4863342016:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863342016;
    goto ***PC;
func_4863342336:
    extend(61);
    NEXT();
    goto ***PC;
func_4863342464:
    extend(59);
    NEXT();
    goto ***PC;
func_4863343616:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863343616;
    goto ***PC;
func_4863343744:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_4863343872:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863343872;
    goto ***PC;
func_4863344000:
    extend(33);
    extend(61);
    NEXT();
    goto ***PC;
func_4863344128:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863344128;
    goto ***PC;
func_4863344256:
    extend(62);
    NEXT();
    goto ***PC;
func_4863344416:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863344416;
    goto ***PC;
func_4863344544:
    extend(60);
    NEXT();
    goto ***PC;
func_4863344704:
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
    PC = exp_4863344704;
    goto ***PC;
func_4863344832:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_4863345056:
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
    PC = exp_4863345056;
    goto ***PC;
func_4863345184:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_4863345360:
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
    PC = exp_4863345360;
    goto ***PC;
func_4863342848:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto ***PC;
func_4863343488:
    extend(48);
    NEXT();
    goto ***PC;
func_4863343040:
    extend(49);
    NEXT();
    goto ***PC;
func_4863345936:
    extend(50);
    NEXT();
    goto ***PC;
func_4863346064:
    extend(51);
    NEXT();
    goto ***PC;
func_4863346192:
    extend(52);
    NEXT();
    goto ***PC;
func_4863346384:
    extend(53);
    NEXT();
    goto ***PC;
func_4863346512:
    extend(54);
    NEXT();
    goto ***PC;
func_4863346640:
    extend(55);
    NEXT();
    goto ***PC;
func_4863346768:
    extend(56);
    NEXT();
    goto ***PC;
func_4863346320:
    extend(57);
    NEXT();
    goto ***PC;
func_4863342976:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863342976;
    goto ***PC;
func_4863347312:
    extend(43);
    NEXT();
    goto ***PC;
func_4863343168:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863343168;
    goto ***PC;
func_4863343296:
    extend(45);
    NEXT();
    goto ***PC;
func_4863347168:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863347168;
    goto ***PC;
func_4863347536:
    extend(40);
    NEXT();
    goto ***PC;
func_4863347664:
    extend(41);
    NEXT();
    goto ***PC;
func_4863341920:
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
    PC = exp_4863341920;
    goto ***PC;
func_4863348272:
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
func_4863342656:
    extend(123);
    NEXT();
    goto ***PC;
func_4863348528:
    extend(125);
    NEXT();
    goto ***PC;
func_4863347872:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863347872;
    goto ***PC;
func_4863348832:
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
    PC = exp_4863348832;
    goto ***PC;
func_4863348960:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_4863350304:
    extend(97);
    NEXT();
    goto ***PC;
func_4863350432:
    extend(98);
    NEXT();
    goto ***PC;
func_4863350560:
    extend(99);
    NEXT();
    goto ***PC;
func_4863350720:
    extend(100);
    NEXT();
    goto ***PC;
func_4863350848:
    extend(101);
    NEXT();
    goto ***PC;
func_4863351040:
    extend(102);
    NEXT();
    goto ***PC;
func_4863351168:
    extend(103);
    NEXT();
    goto ***PC;
func_4863345488:
    extend(104);
    NEXT();
    goto ***PC;
func_4863345616:
    extend(105);
    NEXT();
    goto ***PC;
func_4863350976:
    extend(106);
    NEXT();
    goto ***PC;
func_4863351232:
    extend(107);
    NEXT();
    goto ***PC;
func_4863351360:
    extend(108);
    NEXT();
    goto ***PC;
func_4863351488:
    extend(109);
    NEXT();
    goto ***PC;
func_4863351616:
    extend(110);
    NEXT();
    goto ***PC;
func_4863351744:
    extend(111);
    NEXT();
    goto ***PC;
func_4863351872:
    extend(112);
    NEXT();
    goto ***PC;
func_4863352000:
    extend(113);
    NEXT();
    goto ***PC;
func_4863345744:
    extend(114);
    NEXT();
    goto ***PC;
func_4863352384:
    extend(115);
    NEXT();
    goto ***PC;
func_4863352512:
    extend(116);
    NEXT();
    goto ***PC;
func_4863352640:
    extend(117);
    NEXT();
    goto ***PC;
func_4863352768:
    extend(118);
    NEXT();
    goto ***PC;
func_4863352896:
    extend(119);
    NEXT();
    goto ***PC;
func_4863353024:
    extend(120);
    NEXT();
    goto ***PC;
func_4863353152:
    extend(121);
    NEXT();
    goto ***PC;
func_4863353280:
    extend(122);
    NEXT();
    goto ***PC;
func_4863353408:
    extend(65);
    NEXT();
    goto ***PC;
func_4863353536:
    extend(66);
    NEXT();
    goto ***PC;
func_4863353664:
    extend(67);
    NEXT();
    goto ***PC;
func_4863353792:
    extend(68);
    NEXT();
    goto ***PC;
func_4863353920:
    extend(69);
    NEXT();
    goto ***PC;
func_4863354048:
    extend(70);
    NEXT();
    goto ***PC;
func_4863354176:
    extend(71);
    NEXT();
    goto ***PC;
func_4863352128:
    extend(72);
    NEXT();
    goto ***PC;
func_4863352256:
    extend(73);
    NEXT();
    goto ***PC;
func_4863354816:
    extend(74);
    NEXT();
    goto ***PC;
func_4863354944:
    extend(75);
    NEXT();
    goto ***PC;
func_4863355072:
    extend(76);
    NEXT();
    goto ***PC;
func_4863355200:
    extend(77);
    NEXT();
    goto ***PC;
func_4863355328:
    extend(78);
    NEXT();
    goto ***PC;
func_4863355456:
    extend(79);
    NEXT();
    goto ***PC;
func_4863355584:
    extend(80);
    NEXT();
    goto ***PC;
func_4863355712:
    extend(81);
    NEXT();
    goto ***PC;
func_4863355840:
    extend(82);
    NEXT();
    goto ***PC;
func_4863355968:
    extend(83);
    NEXT();
    goto ***PC;
func_4863356096:
    extend(84);
    NEXT();
    goto ***PC;
func_4863356224:
    extend(85);
    NEXT();
    goto ***PC;
func_4863356352:
    extend(86);
    NEXT();
    goto ***PC;
func_4863356480:
    extend(87);
    NEXT();
    goto ***PC;
func_4863356608:
    extend(88);
    NEXT();
    goto ***PC;
func_4863356736:
    extend(89);
    NEXT();
    goto ***PC;
func_4863356864:
    extend(90);
    NEXT();
    goto ***PC;
func_4863348656:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863348656;
    goto ***PC;
func_4863348000:
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
    PC = exp_4863348000;
    goto ***PC;
func_4863349232:
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
    PC = exp_4863349232;
    goto ***PC;
func_4863349360:
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
func_4863349856:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863349856;
    goto ***PC;
func_4863349984:
    extend(42);
    NEXT();
    goto ***PC;
func_4863349488:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863349488;
    goto ***PC;
func_4863350112:
    extend(47);
    NEXT();
    goto ***PC;
func_4863357072:
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
    PC = exp_4863357072;
    goto ***PC;
func_4863357200:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_4863357328:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto ***PC;
func_4863357456:
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
    PC = exp_4863357456;
    goto ***PC;
func_4863357584:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_4863357712:
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
    PC = exp_4863357712;
    goto ***PC;
func_4863357840:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto ***PC;
func_4863356992:
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
    PC = exp_4863356992;
    goto ***PC;
func_4863349760:
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
    PC = func_4863341280_op0;
    goto ***PC;
}
