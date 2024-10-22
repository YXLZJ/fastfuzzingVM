#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 50
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
        static void * cf[] = {&&func_5660257680, &&func_5660258432, &&func_5660258592, &&func_5660258304, &&func_5660257952, &&func_5660257552, &&func_5660258192, &&func_5660258720, &&func_5660260352, &&func_5660257872, &&func_5660258912, &&func_5660259120, &&func_5660259040, &&func_5660259552, &&func_5660259840, &&func_5660259392, &&func_5660259312, &&func_5660259776, &&func_5660260096, &&func_5660260224, &&func_5660261376, &&func_5660261504, &&func_5660261632, &&func_5660261760, &&func_5660261888, &&func_5660262016, &&func_5660262176, &&func_5660262304, &&func_5660262464, &&func_5660262592, &&func_5660262816, &&func_5660262944, &&func_5660263120, &&func_5660260608, &&func_5660261248, &&func_5660260800, &&func_5660263696, &&func_5660263824, &&func_5660263952, &&func_5660264144, &&func_5660264272, &&func_5660264400, &&func_5660264528, &&func_5660264080, &&func_5660260736, &&func_5660265072, &&func_5660260928, &&func_5660261056, &&func_5660264928, &&func_5660265296, &&func_5660265424, &&func_5660259680, &&func_5660266032, &&func_5660260416, &&func_5660266288, &&func_5660265632, &&func_5660266592, &&func_5660266720, &&func_5660268064, &&func_5660268192, &&func_5660268320, &&func_5660268480, &&func_5660268608, &&func_5660268800, &&func_5660268928, &&func_5660263248, &&func_5660263376, &&func_5660268736, &&func_5660268992, &&func_5660269120, &&func_5660269248, &&func_5660269376, &&func_5660269504, &&func_5660269632, &&func_5660269760, &&func_5660263504, &&func_5660270144, &&func_5660270272, &&func_5660270400, &&func_5660270528, &&func_5660270656, &&func_5660270784, &&func_5660270912, &&func_5660271040, &&func_5660271168, &&func_5660271296, &&func_5660271424, &&func_5660271552, &&func_5660271680, &&func_5660271808, &&func_5660271936, &&func_5660269888, &&func_5660270016, &&func_5660272576, &&func_5660272704, &&func_5660272832, &&func_5660272960, &&func_5660273088, &&func_5660273216, &&func_5660273344, &&func_5660273472, &&func_5660273600, &&func_5660273728, &&func_5660273856, &&func_5660273984, &&func_5660274112, &&func_5660274240, &&func_5660274368, &&func_5660274496, &&func_5660274624, &&func_5660266416, &&func_5660265760, &&func_5660266992, &&func_5660267120, &&func_5660267616, &&func_5660267744, &&func_5660267248, &&func_5660267872, &&func_5660274832, &&func_5660274960, &&func_5660275088, &&func_5660275216, &&func_5660275344, &&func_5660275472, &&func_5660275600, &&func_5660274752, &&func_5660267520, &&RETURN, &&HALT};
        static void **func_5660257680_op0[2] = { cf+17, cf+127};
        static void **func_5660258432_op0[2] = { cf+20, cf+127};
        static void **func_5660258432_op1[2] = { cf+22, cf+127};
        static void **func_5660258432_op2[2] = { cf+24, cf+127};
        static void **func_5660258432_op3[2] = { cf+26, cf+127};
        static void **func_5660258432_op4[2] = { cf+28, cf+127};
        static void **func_5660258432_op5[2] = { cf+30, cf+127};
        static void **func_5660258432_op6[2] = { cf+32, cf+127};
        static void **func_5660258592_op0[2] = { cf+34, cf+127};
        static void **func_5660258592_op1[2] = { cf+35, cf+127};
        static void **func_5660258592_op2[2] = { cf+36, cf+127};
        static void **func_5660258592_op3[2] = { cf+37, cf+127};
        static void **func_5660258592_op4[2] = { cf+38, cf+127};
        static void **func_5660258592_op5[2] = { cf+39, cf+127};
        static void **func_5660258592_op6[2] = { cf+40, cf+127};
        static void **func_5660258592_op7[2] = { cf+41, cf+127};
        static void **func_5660258592_op8[2] = { cf+42, cf+127};
        static void **func_5660258592_op9[2] = { cf+43, cf+127};
        static void **func_5660258304_op0[2] = { cf+44, cf+127};
        static void **func_5660258304_op1[2] = { cf+46, cf+127};
        static void **func_5660258304_op2[2] = { cf+14, cf+127};
        static void **func_5660257952_op0[2] = { cf+48, cf+127};
        static void **func_5660257952_op1[2] = { cf+9, cf+127};
        static void **func_5660257952_op2[2] = { cf+6, cf+127};
        static void **func_5660257552_op0[2] = { cf+51, cf+127};
        static void **func_5660258192_op0[2] = { cf+55, cf+127};
        static void **func_5660258192_op1[2] = { cf+8, cf+127};
        static void **func_5660258720_op0[2] = { cf+56, cf+127};
        static void **func_5660260352_op0[2] = { cf+58, cf+127};
        static void **func_5660260352_op1[2] = { cf+59, cf+127};
        static void **func_5660260352_op2[2] = { cf+60, cf+127};
        static void **func_5660260352_op3[2] = { cf+61, cf+127};
        static void **func_5660260352_op4[2] = { cf+62, cf+127};
        static void **func_5660260352_op5[2] = { cf+63, cf+127};
        static void **func_5660260352_op6[2] = { cf+64, cf+127};
        static void **func_5660260352_op7[2] = { cf+65, cf+127};
        static void **func_5660260352_op8[2] = { cf+66, cf+127};
        static void **func_5660260352_op9[2] = { cf+67, cf+127};
        static void **func_5660260352_op10[2] = { cf+68, cf+127};
        static void **func_5660260352_op11[2] = { cf+69, cf+127};
        static void **func_5660260352_op12[2] = { cf+70, cf+127};
        static void **func_5660260352_op13[2] = { cf+71, cf+127};
        static void **func_5660260352_op14[2] = { cf+72, cf+127};
        static void **func_5660260352_op15[2] = { cf+73, cf+127};
        static void **func_5660260352_op16[2] = { cf+74, cf+127};
        static void **func_5660260352_op17[2] = { cf+75, cf+127};
        static void **func_5660260352_op18[2] = { cf+76, cf+127};
        static void **func_5660260352_op19[2] = { cf+77, cf+127};
        static void **func_5660260352_op20[2] = { cf+78, cf+127};
        static void **func_5660260352_op21[2] = { cf+79, cf+127};
        static void **func_5660260352_op22[2] = { cf+80, cf+127};
        static void **func_5660260352_op23[2] = { cf+81, cf+127};
        static void **func_5660260352_op24[2] = { cf+82, cf+127};
        static void **func_5660260352_op25[2] = { cf+83, cf+127};
        static void **func_5660260352_op26[2] = { cf+84, cf+127};
        static void **func_5660260352_op27[2] = { cf+85, cf+127};
        static void **func_5660260352_op28[2] = { cf+86, cf+127};
        static void **func_5660260352_op29[2] = { cf+87, cf+127};
        static void **func_5660260352_op30[2] = { cf+88, cf+127};
        static void **func_5660260352_op31[2] = { cf+89, cf+127};
        static void **func_5660260352_op32[2] = { cf+90, cf+127};
        static void **func_5660260352_op33[2] = { cf+91, cf+127};
        static void **func_5660260352_op34[2] = { cf+92, cf+127};
        static void **func_5660260352_op35[2] = { cf+93, cf+127};
        static void **func_5660260352_op36[2] = { cf+94, cf+127};
        static void **func_5660260352_op37[2] = { cf+95, cf+127};
        static void **func_5660260352_op38[2] = { cf+96, cf+127};
        static void **func_5660260352_op39[2] = { cf+97, cf+127};
        static void **func_5660260352_op40[2] = { cf+98, cf+127};
        static void **func_5660260352_op41[2] = { cf+99, cf+127};
        static void **func_5660260352_op42[2] = { cf+100, cf+127};
        static void **func_5660260352_op43[2] = { cf+101, cf+127};
        static void **func_5660260352_op44[2] = { cf+102, cf+127};
        static void **func_5660260352_op45[2] = { cf+103, cf+127};
        static void **func_5660260352_op46[2] = { cf+104, cf+127};
        static void **func_5660260352_op47[2] = { cf+105, cf+127};
        static void **func_5660260352_op48[2] = { cf+106, cf+127};
        static void **func_5660260352_op49[2] = { cf+107, cf+127};
        static void **func_5660260352_op50[2] = { cf+108, cf+127};
        static void **func_5660260352_op51[2] = { cf+109, cf+127};
        static void **func_5660257872_op0[2] = { cf+110, cf+127};
        static void **func_5660257872_op1[2] = { cf+2, cf+127};
        static void **func_5660258912_op0[2] = { cf+111, cf+127};
        static void **func_5660258912_op1[2] = { cf+13, cf+127};
        static void **func_5660259120_op0[2] = { cf+112, cf+127};
        static void **func_5660259040_op0[2] = { cf+10, cf+128};
        static void **func_5660259552_op0[2] = { cf+15, cf+127};
        static void **func_5660259552_op1[2] = { cf+0, cf+127};
        static void **func_5660259552_op2[2] = { cf+7, cf+127};
        static void **func_5660259552_op3[2] = { cf+16, cf+127};
        static void **func_5660259552_op4[2] = { cf+5, cf+127};
        static void **func_5660259552_op5[2] = { cf+11, cf+127};
        static void **func_5660259840_op0[2] = { cf+114, cf+127};
        static void **func_5660259840_op1[2] = { cf+116, cf+127};
        static void **func_5660259840_op2[2] = { cf+4, cf+127};
        static void **func_5660259392_op0[2] = { cf+118, cf+127};
        static void **func_5660259392_op1[2] = { cf+121, cf+127};
        static void **func_5660259392_op2[2] = { cf+123, cf+127};
        static void **func_5660259312_op0[2] = { cf+125, cf+127};
        static void **exp_5660259776[5] = {cf+6, cf+18, cf+3, cf+19, cf+127};
        static void **exp_5660261376[4] = {cf+3, cf+21, cf+3, cf+127};
        static void **exp_5660261632[4] = {cf+3, cf+23, cf+3, cf+127};
        static void **exp_5660261888[4] = {cf+3, cf+25, cf+3, cf+127};
        static void **exp_5660262176[4] = {cf+3, cf+27, cf+3, cf+127};
        static void **exp_5660262464[4] = {cf+1, cf+29, cf+1, cf+127};
        static void **exp_5660262816[4] = {cf+1, cf+31, cf+1, cf+127};
        static void **exp_5660263120[3] = {cf+33, cf+1, cf+127};
        static void **exp_5660260736[4] = {cf+3, cf+45, cf+14, cf+127};
        static void **exp_5660260928[4] = {cf+3, cf+47, cf+14, cf+127};
        static void **exp_5660264928[4] = {cf+49, cf+3, cf+50, cf+127};
        static void **exp_5660259680[8] = {cf+52, cf+6, cf+49, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_5660265632[3] = {cf+8, cf+6, cf+127};
        static void **exp_5660266592[8] = {cf+57, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_5660266416[3] = {cf+2, cf+9, cf+127};
        static void **exp_5660265760[3] = {cf+10, cf+13, cf+127};
        static void **exp_5660266992[4] = {cf+113, cf+3, cf+19, cf+127};
        static void **exp_5660267616[4] = {cf+14, cf+115, cf+4, cf+127};
        static void **exp_5660267248[4] = {cf+14, cf+117, cf+4, cf+127};
        static void **exp_5660274832[4] = {cf+119, cf+6, cf+120, cf+127};
        static void **exp_5660275216[4] = {cf+122, cf+6, cf+120, cf+127};
        static void **exp_5660275472[4] = {cf+124, cf+6, cf+120, cf+127};
        static void **exp_5660274752[8] = {cf+126, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
goto LOOP;

func_5660257680:
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
            PC = func_5660257680_op0;
        break;
    }
    goto ***PC;
func_5660258432:
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
            PC = func_5660258432_op0;
        break;
        case 1:
            PC = func_5660258432_op1;
        break;
        case 2:
            PC = func_5660258432_op2;
        break;
        case 3:
            PC = func_5660258432_op3;
        break;
        case 4:
            PC = func_5660258432_op4;
        break;
        case 5:
            PC = func_5660258432_op5;
        break;
        case 6:
            PC = func_5660258432_op6;
        break;
    }
    goto ***PC;
func_5660258592:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5660258592_op0;
        break;
        case 1:
            PC = func_5660258592_op1;
        break;
        case 2:
            PC = func_5660258592_op2;
        break;
        case 3:
            PC = func_5660258592_op3;
        break;
        case 4:
            PC = func_5660258592_op4;
        break;
        case 5:
            PC = func_5660258592_op5;
        break;
        case 6:
            PC = func_5660258592_op6;
        break;
        case 7:
            PC = func_5660258592_op7;
        break;
        case 8:
            PC = func_5660258592_op8;
        break;
        case 9:
            PC = func_5660258592_op9;
        break;
    }
    goto ***PC;
func_5660258304:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5660258304_op0;
        break;
        case 1:
            PC = func_5660258304_op1;
        break;
        case 2:
            PC = func_5660258304_op2;
        break;
    }
    goto ***PC;
func_5660257952:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5660257952_op0;
        break;
        case 1:
            PC = func_5660257952_op1;
        break;
        case 2:
            PC = func_5660257952_op2;
        break;
    }
    goto ***PC;
func_5660257552:
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
            PC = func_5660257552_op0;
        break;
    }
    goto ***PC;
func_5660258192:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5660258192_op0;
        break;
        case 1:
            PC = func_5660258192_op1;
        break;
    }
    goto ***PC;
func_5660258720:
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
            PC = func_5660258720_op0;
        break;
    }
    goto ***PC;
func_5660260352:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5660260352_op0;
        break;
        case 1:
            PC = func_5660260352_op1;
        break;
        case 2:
            PC = func_5660260352_op2;
        break;
        case 3:
            PC = func_5660260352_op3;
        break;
        case 4:
            PC = func_5660260352_op4;
        break;
        case 5:
            PC = func_5660260352_op5;
        break;
        case 6:
            PC = func_5660260352_op6;
        break;
        case 7:
            PC = func_5660260352_op7;
        break;
        case 8:
            PC = func_5660260352_op8;
        break;
        case 9:
            PC = func_5660260352_op9;
        break;
        case 10:
            PC = func_5660260352_op10;
        break;
        case 11:
            PC = func_5660260352_op11;
        break;
        case 12:
            PC = func_5660260352_op12;
        break;
        case 13:
            PC = func_5660260352_op13;
        break;
        case 14:
            PC = func_5660260352_op14;
        break;
        case 15:
            PC = func_5660260352_op15;
        break;
        case 16:
            PC = func_5660260352_op16;
        break;
        case 17:
            PC = func_5660260352_op17;
        break;
        case 18:
            PC = func_5660260352_op18;
        break;
        case 19:
            PC = func_5660260352_op19;
        break;
        case 20:
            PC = func_5660260352_op20;
        break;
        case 21:
            PC = func_5660260352_op21;
        break;
        case 22:
            PC = func_5660260352_op22;
        break;
        case 23:
            PC = func_5660260352_op23;
        break;
        case 24:
            PC = func_5660260352_op24;
        break;
        case 25:
            PC = func_5660260352_op25;
        break;
        case 26:
            PC = func_5660260352_op26;
        break;
        case 27:
            PC = func_5660260352_op27;
        break;
        case 28:
            PC = func_5660260352_op28;
        break;
        case 29:
            PC = func_5660260352_op29;
        break;
        case 30:
            PC = func_5660260352_op30;
        break;
        case 31:
            PC = func_5660260352_op31;
        break;
        case 32:
            PC = func_5660260352_op32;
        break;
        case 33:
            PC = func_5660260352_op33;
        break;
        case 34:
            PC = func_5660260352_op34;
        break;
        case 35:
            PC = func_5660260352_op35;
        break;
        case 36:
            PC = func_5660260352_op36;
        break;
        case 37:
            PC = func_5660260352_op37;
        break;
        case 38:
            PC = func_5660260352_op38;
        break;
        case 39:
            PC = func_5660260352_op39;
        break;
        case 40:
            PC = func_5660260352_op40;
        break;
        case 41:
            PC = func_5660260352_op41;
        break;
        case 42:
            PC = func_5660260352_op42;
        break;
        case 43:
            PC = func_5660260352_op43;
        break;
        case 44:
            PC = func_5660260352_op44;
        break;
        case 45:
            PC = func_5660260352_op45;
        break;
        case 46:
            PC = func_5660260352_op46;
        break;
        case 47:
            PC = func_5660260352_op47;
        break;
        case 48:
            PC = func_5660260352_op48;
        break;
        case 49:
            PC = func_5660260352_op49;
        break;
        case 50:
            PC = func_5660260352_op50;
        break;
        case 51:
            PC = func_5660260352_op51;
        break;
    }
    goto ***PC;
func_5660257872:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5660257872_op0;
        break;
        case 1:
            PC = func_5660257872_op1;
        break;
    }
    goto ***PC;
func_5660258912:
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
            PC = func_5660258912_op0;
        break;
        case 1:
            PC = func_5660258912_op1;
        break;
    }
    goto ***PC;
func_5660259120:
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
            PC = func_5660259120_op0;
        break;
    }
    goto ***PC;
func_5660259040:
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
            PC = func_5660259040_op0;
        break;
    }
    goto ***PC;
func_5660259552:
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
            PC = func_5660259552_op0;
        break;
        case 1:
            PC = func_5660259552_op1;
        break;
        case 2:
            PC = func_5660259552_op2;
        break;
        case 3:
            PC = func_5660259552_op3;
        break;
        case 4:
            PC = func_5660259552_op4;
        break;
        case 5:
            PC = func_5660259552_op5;
        break;
    }
    goto ***PC;
func_5660259840:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5660259840_op0;
        break;
        case 1:
            PC = func_5660259840_op1;
        break;
        case 2:
            PC = func_5660259840_op2;
        break;
    }
    goto ***PC;
func_5660259392:
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
            PC = func_5660259392_op0;
        break;
        case 1:
            PC = func_5660259392_op1;
        break;
        case 2:
            PC = func_5660259392_op2;
        break;
    }
    goto ***PC;
func_5660259312:
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
            PC = func_5660259312_op0;
        break;
    }
    goto ***PC;
func_5660259776:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5660259776;
    goto ***PC;
func_5660260096:
    extend(61);
    NEXT();
    goto ***PC;
func_5660260224:
    extend(59);
    NEXT();
    goto ***PC;
func_5660261376:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5660261376;
    goto ***PC;
func_5660261504:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5660261632:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5660261632;
    goto ***PC;
func_5660261760:
    extend(33);
    extend(61);
    NEXT();
    goto ***PC;
func_5660261888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5660261888;
    goto ***PC;
func_5660262016:
    extend(62);
    NEXT();
    goto ***PC;
func_5660262176:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5660262176;
    goto ***PC;
func_5660262304:
    extend(60);
    NEXT();
    goto ***PC;
func_5660262464:
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
    PC = exp_5660262464;
    goto ***PC;
func_5660262592:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_5660262816:
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
    PC = exp_5660262816;
    goto ***PC;
func_5660262944:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_5660263120:
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
    PC = exp_5660263120;
    goto ***PC;
func_5660260608:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto ***PC;
func_5660261248:
    extend(48);
    NEXT();
    goto ***PC;
func_5660260800:
    extend(49);
    NEXT();
    goto ***PC;
func_5660263696:
    extend(50);
    NEXT();
    goto ***PC;
func_5660263824:
    extend(51);
    NEXT();
    goto ***PC;
func_5660263952:
    extend(52);
    NEXT();
    goto ***PC;
func_5660264144:
    extend(53);
    NEXT();
    goto ***PC;
func_5660264272:
    extend(54);
    NEXT();
    goto ***PC;
func_5660264400:
    extend(55);
    NEXT();
    goto ***PC;
func_5660264528:
    extend(56);
    NEXT();
    goto ***PC;
func_5660264080:
    extend(57);
    NEXT();
    goto ***PC;
func_5660260736:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5660260736;
    goto ***PC;
func_5660265072:
    extend(43);
    NEXT();
    goto ***PC;
func_5660260928:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5660260928;
    goto ***PC;
func_5660261056:
    extend(45);
    NEXT();
    goto ***PC;
func_5660264928:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5660264928;
    goto ***PC;
func_5660265296:
    extend(40);
    NEXT();
    goto ***PC;
func_5660265424:
    extend(41);
    NEXT();
    goto ***PC;
func_5660259680:
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
    PC = exp_5660259680;
    goto ***PC;
func_5660266032:
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
func_5660260416:
    extend(123);
    NEXT();
    goto ***PC;
func_5660266288:
    extend(125);
    NEXT();
    goto ***PC;
func_5660265632:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5660265632;
    goto ***PC;
func_5660266592:
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
    PC = exp_5660266592;
    goto ***PC;
func_5660266720:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5660268064:
    extend(97);
    NEXT();
    goto ***PC;
func_5660268192:
    extend(98);
    NEXT();
    goto ***PC;
func_5660268320:
    extend(99);
    NEXT();
    goto ***PC;
func_5660268480:
    extend(100);
    NEXT();
    goto ***PC;
func_5660268608:
    extend(101);
    NEXT();
    goto ***PC;
func_5660268800:
    extend(102);
    NEXT();
    goto ***PC;
func_5660268928:
    extend(103);
    NEXT();
    goto ***PC;
func_5660263248:
    extend(104);
    NEXT();
    goto ***PC;
func_5660263376:
    extend(105);
    NEXT();
    goto ***PC;
func_5660268736:
    extend(106);
    NEXT();
    goto ***PC;
func_5660268992:
    extend(107);
    NEXT();
    goto ***PC;
func_5660269120:
    extend(108);
    NEXT();
    goto ***PC;
func_5660269248:
    extend(109);
    NEXT();
    goto ***PC;
func_5660269376:
    extend(110);
    NEXT();
    goto ***PC;
func_5660269504:
    extend(111);
    NEXT();
    goto ***PC;
func_5660269632:
    extend(112);
    NEXT();
    goto ***PC;
func_5660269760:
    extend(113);
    NEXT();
    goto ***PC;
func_5660263504:
    extend(114);
    NEXT();
    goto ***PC;
func_5660270144:
    extend(115);
    NEXT();
    goto ***PC;
func_5660270272:
    extend(116);
    NEXT();
    goto ***PC;
func_5660270400:
    extend(117);
    NEXT();
    goto ***PC;
func_5660270528:
    extend(118);
    NEXT();
    goto ***PC;
func_5660270656:
    extend(119);
    NEXT();
    goto ***PC;
func_5660270784:
    extend(120);
    NEXT();
    goto ***PC;
func_5660270912:
    extend(121);
    NEXT();
    goto ***PC;
func_5660271040:
    extend(122);
    NEXT();
    goto ***PC;
func_5660271168:
    extend(65);
    NEXT();
    goto ***PC;
func_5660271296:
    extend(66);
    NEXT();
    goto ***PC;
func_5660271424:
    extend(67);
    NEXT();
    goto ***PC;
func_5660271552:
    extend(68);
    NEXT();
    goto ***PC;
func_5660271680:
    extend(69);
    NEXT();
    goto ***PC;
func_5660271808:
    extend(70);
    NEXT();
    goto ***PC;
func_5660271936:
    extend(71);
    NEXT();
    goto ***PC;
func_5660269888:
    extend(72);
    NEXT();
    goto ***PC;
func_5660270016:
    extend(73);
    NEXT();
    goto ***PC;
func_5660272576:
    extend(74);
    NEXT();
    goto ***PC;
func_5660272704:
    extend(75);
    NEXT();
    goto ***PC;
func_5660272832:
    extend(76);
    NEXT();
    goto ***PC;
func_5660272960:
    extend(77);
    NEXT();
    goto ***PC;
func_5660273088:
    extend(78);
    NEXT();
    goto ***PC;
func_5660273216:
    extend(79);
    NEXT();
    goto ***PC;
func_5660273344:
    extend(80);
    NEXT();
    goto ***PC;
func_5660273472:
    extend(81);
    NEXT();
    goto ***PC;
func_5660273600:
    extend(82);
    NEXT();
    goto ***PC;
func_5660273728:
    extend(83);
    NEXT();
    goto ***PC;
func_5660273856:
    extend(84);
    NEXT();
    goto ***PC;
func_5660273984:
    extend(85);
    NEXT();
    goto ***PC;
func_5660274112:
    extend(86);
    NEXT();
    goto ***PC;
func_5660274240:
    extend(87);
    NEXT();
    goto ***PC;
func_5660274368:
    extend(88);
    NEXT();
    goto ***PC;
func_5660274496:
    extend(89);
    NEXT();
    goto ***PC;
func_5660274624:
    extend(90);
    NEXT();
    goto ***PC;
func_5660266416:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5660266416;
    goto ***PC;
func_5660265760:
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
    PC = exp_5660265760;
    goto ***PC;
func_5660266992:
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
    PC = exp_5660266992;
    goto ***PC;
func_5660267120:
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
func_5660267616:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5660267616;
    goto ***PC;
func_5660267744:
    extend(42);
    NEXT();
    goto ***PC;
func_5660267248:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5660267248;
    goto ***PC;
func_5660267872:
    extend(47);
    NEXT();
    goto ***PC;
func_5660274832:
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
    PC = exp_5660274832;
    goto ***PC;
func_5660274960:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5660275088:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto ***PC;
func_5660275216:
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
    PC = exp_5660275216;
    goto ***PC;
func_5660275344:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5660275472:
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
    PC = exp_5660275472;
    goto ***PC;
func_5660275600:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto ***PC;
func_5660274752:
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
    PC = exp_5660274752;
    goto ***PC;
func_5660267520:
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
    PC = func_5660259040_op0;
    goto ***PC;
}
