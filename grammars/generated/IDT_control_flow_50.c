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
        unsigned loop_limit = 16;
        static void * cf[] = {&&func_5123380768, &&func_5123381136, &&func_5123381552, &&func_5123381648, &&func_5123381424, &&func_5123381344, &&func_5123382048, &&func_5123381264, &&func_5123381776, &&func_5123382304, &&func_5123381968, &&func_5123382240, &&func_5123382656, &&func_5123383024, &&func_5123382864, &&func_5123382592, &&func_5123382784, &&func_5123381840, &&func_5123383888, &&func_5123384016, &&func_5123384144, &&func_5123384272, &&func_5123384400, &&func_5123384528, &&func_5123384912, &&func_5123382496, &&func_5123385104, &&func_5123385232, &&func_5123385360, &&func_5123385552, &&func_5123385680, &&func_5123385808, &&func_5123385936, &&func_5123385488, &&func_5123386512, &&func_5123386640, &&func_5123383680, &&func_5123383808, &&func_5123384816, &&func_5123386992, &&func_5123387120, &&func_5123384656, &&func_5123387888, &&func_5123388016, &&func_5123383152, &&func_5123387664, &&func_5123388336, &&func_5123388464, &&func_5123388592, &&func_5123388720, &&func_5123388912, &&func_5123389040, &&func_5123389168, &&func_5123389296, &&func_5123388848, &&func_5123390064, &&func_5123387312, &&func_5123389888, &&func_5123387488, &&func_5123389552, &&func_5123389680, &&func_5123390192, &&func_5123391040, &&func_5123391168, &&func_5123390320, &&func_5123386000, &&func_5123390976, &&func_5123386368, &&RETURN, &&HALT};
        static void **func_5123380768_op0[2] = { cf+15, cf+68};
        static void **func_5123381136_op0[2] = { cf+18, cf+68};
        static void **func_5123381136_op1[2] = { cf+20, cf+68};
        static void **func_5123381136_op2[2] = { cf+22, cf+68};
        static void **func_5123381552_op0[2] = { cf+24, cf+68};
        static void **func_5123381552_op1[2] = { cf+25, cf+68};
        static void **func_5123381552_op2[2] = { cf+26, cf+68};
        static void **func_5123381552_op3[2] = { cf+27, cf+68};
        static void **func_5123381552_op4[2] = { cf+28, cf+68};
        static void **func_5123381552_op5[2] = { cf+29, cf+68};
        static void **func_5123381552_op6[2] = { cf+30, cf+68};
        static void **func_5123381552_op7[2] = { cf+31, cf+68};
        static void **func_5123381552_op8[2] = { cf+32, cf+68};
        static void **func_5123381552_op9[2] = { cf+33, cf+68};
        static void **func_5123381648_op0[2] = { cf+34, cf+68};
        static void **func_5123381648_op1[2] = { cf+36, cf+68};
        static void **func_5123381648_op2[2] = { cf+13, cf+68};
        static void **func_5123381424_op0[2] = { cf+38, cf+68};
        static void **func_5123381424_op1[2] = { cf+8, cf+68};
        static void **func_5123381424_op2[2] = { cf+6, cf+68};
        static void **func_5123381344_op0[2] = { cf+41, cf+68};
        static void **func_5123382048_op0[2] = { cf+45, cf+68};
        static void **func_5123382048_op1[2] = { cf+46, cf+68};
        static void **func_5123382048_op2[2] = { cf+47, cf+68};
        static void **func_5123382048_op3[2] = { cf+48, cf+68};
        static void **func_5123382048_op4[2] = { cf+49, cf+68};
        static void **func_5123382048_op5[2] = { cf+50, cf+68};
        static void **func_5123382048_op6[2] = { cf+51, cf+68};
        static void **func_5123382048_op7[2] = { cf+52, cf+68};
        static void **func_5123382048_op8[2] = { cf+53, cf+68};
        static void **func_5123381264_op0[2] = { cf+54, cf+68};
        static void **func_5123381264_op1[2] = { cf+56, cf+68};
        static void **func_5123381776_op0[2] = { cf+2, cf+68};
        static void **func_5123381776_op1[2] = { cf+58, cf+68};
        static void **func_5123382304_op0[2] = { cf+59, cf+68};
        static void **func_5123381968_op0[2] = { cf+61, cf+68};
        static void **func_5123382240_op0[2] = { cf+10, cf+69};
        static void **func_5123382656_op0[2] = { cf+7, cf+68};
        static void **func_5123382656_op1[2] = { cf+14, cf+68};
        static void **func_5123382656_op2[2] = { cf+5, cf+68};
        static void **func_5123382656_op3[2] = { cf+0, cf+68};
        static void **func_5123382656_op4[2] = { cf+9, cf+68};
        static void **func_5123383024_op0[2] = { cf+62, cf+68};
        static void **func_5123383024_op1[2] = { cf+64, cf+68};
        static void **func_5123383024_op2[2] = { cf+4, cf+68};
        static void **func_5123382864_op0[2] = { cf+66, cf+68};
        static void **exp_5123382592[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_5123383888[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_5123384144[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_5123384400[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_5123386512[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_5123383680[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_5123384816[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_5123384656[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5123388848[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5123387312[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5123387488[3] = {cf+2, cf+8, cf+68};
        static void **exp_5123389552[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_5123390192[3] = {cf+12, cf+10, cf+68};
        static void **exp_5123391040[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_5123390320[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_5123390976[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_5123380768:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5123380768_op0;
        break;
    }
    goto ***PC;
func_5123381136:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5123381136_op0;
        break;
        case 1:
            PC = func_5123381136_op1;
        break;
        case 2:
            PC = func_5123381136_op2;
        break;
    }
    goto ***PC;
func_5123381552:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5123381552_op0;
        break;
        case 1:
            PC = func_5123381552_op1;
        break;
        case 2:
            PC = func_5123381552_op2;
        break;
        case 3:
            PC = func_5123381552_op3;
        break;
        case 4:
            PC = func_5123381552_op4;
        break;
        case 5:
            PC = func_5123381552_op5;
        break;
        case 6:
            PC = func_5123381552_op6;
        break;
        case 7:
            PC = func_5123381552_op7;
        break;
        case 8:
            PC = func_5123381552_op8;
        break;
        case 9:
            PC = func_5123381552_op9;
        break;
    }
    goto ***PC;
func_5123381648:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5123381648_op0;
        break;
        case 1:
            PC = func_5123381648_op1;
        break;
        case 2:
            PC = func_5123381648_op2;
        break;
    }
    goto ***PC;
func_5123381424:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5123381424_op0;
        break;
        case 1:
            PC = func_5123381424_op1;
        break;
        case 2:
            PC = func_5123381424_op2;
        break;
    }
    goto ***PC;
func_5123381344:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5123381344_op0;
        break;
    }
    goto ***PC;
func_5123382048:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5123382048_op0;
        break;
        case 1:
            PC = func_5123382048_op1;
        break;
        case 2:
            PC = func_5123382048_op2;
        break;
        case 3:
            PC = func_5123382048_op3;
        break;
        case 4:
            PC = func_5123382048_op4;
        break;
        case 5:
            PC = func_5123382048_op5;
        break;
        case 6:
            PC = func_5123382048_op6;
        break;
        case 7:
            PC = func_5123382048_op7;
        break;
        case 8:
            PC = func_5123382048_op8;
        break;
    }
    goto ***PC;
func_5123381264:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5123381264_op0;
        break;
        case 1:
            PC = func_5123381264_op1;
        break;
    }
    goto ***PC;
func_5123381776:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5123381776_op0;
        break;
        case 1:
            PC = func_5123381776_op1;
        break;
    }
    goto ***PC;
func_5123382304:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5123382304_op0;
        break;
    }
    goto ***PC;
func_5123381968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5123381968_op0;
        break;
    }
    goto ***PC;
func_5123382240:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5123382240_op0;
        break;
    }
    goto ***PC;
func_5123382656:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5123382656_op0;
        break;
        case 1:
            PC = func_5123382656_op1;
        break;
        case 2:
            PC = func_5123382656_op2;
        break;
        case 3:
            PC = func_5123382656_op3;
        break;
        case 4:
            PC = func_5123382656_op4;
        break;
    }
    goto ***PC;
func_5123383024:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5123383024_op0;
        break;
        case 1:
            PC = func_5123383024_op1;
        break;
        case 2:
            PC = func_5123383024_op2;
        break;
    }
    goto ***PC;
func_5123382864:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5123382864_op0;
        break;
    }
    goto ***PC;
func_5123382592:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123382592;
    goto ***PC;
func_5123382784:
    extend(61);
    NEXT();
    goto ***PC;
func_5123381840:
    extend(59);
    NEXT();
    goto ***PC;
func_5123383888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123383888;
    goto ***PC;
func_5123384016:
    extend(62);
    NEXT();
    goto ***PC;
func_5123384144:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123384144;
    goto ***PC;
func_5123384272:
    extend(60);
    NEXT();
    goto ***PC;
func_5123384400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123384400;
    goto ***PC;
func_5123384528:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5123384912:
    extend(48);
    NEXT();
    goto ***PC;
func_5123382496:
    extend(49);
    NEXT();
    goto ***PC;
func_5123385104:
    extend(50);
    NEXT();
    goto ***PC;
func_5123385232:
    extend(51);
    NEXT();
    goto ***PC;
func_5123385360:
    extend(52);
    NEXT();
    goto ***PC;
func_5123385552:
    extend(53);
    NEXT();
    goto ***PC;
func_5123385680:
    extend(54);
    NEXT();
    goto ***PC;
func_5123385808:
    extend(55);
    NEXT();
    goto ***PC;
func_5123385936:
    extend(56);
    NEXT();
    goto ***PC;
func_5123385488:
    extend(57);
    NEXT();
    goto ***PC;
func_5123386512:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123386512;
    goto ***PC;
func_5123386640:
    extend(43);
    NEXT();
    goto ***PC;
func_5123383680:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123383680;
    goto ***PC;
func_5123383808:
    extend(45);
    NEXT();
    goto ***PC;
func_5123384816:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123384816;
    goto ***PC;
func_5123386992:
    extend(40);
    NEXT();
    goto ***PC;
func_5123387120:
    extend(41);
    NEXT();
    goto ***PC;
func_5123384656:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123384656;
    goto ***PC;
func_5123387888:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_5123388016:
    extend(123);
    NEXT();
    goto ***PC;
func_5123383152:
    extend(125);
    NEXT();
    goto ***PC;
func_5123387664:
    extend(105);
    NEXT();
    goto ***PC;
func_5123388336:
    extend(106);
    NEXT();
    goto ***PC;
func_5123388464:
    extend(107);
    NEXT();
    goto ***PC;
func_5123388592:
    extend(120);
    NEXT();
    goto ***PC;
func_5123388720:
    extend(121);
    NEXT();
    goto ***PC;
func_5123388912:
    extend(122);
    NEXT();
    goto ***PC;
func_5123389040:
    extend(97);
    NEXT();
    goto ***PC;
func_5123389168:
    extend(98);
    NEXT();
    goto ***PC;
func_5123389296:
    extend(99);
    NEXT();
    goto ***PC;
func_5123388848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123388848;
    goto ***PC;
func_5123390064:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5123387312:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123387312;
    goto ***PC;
func_5123389888:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5123387488:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123387488;
    goto ***PC;
func_5123389552:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123389552;
    goto ***PC;
func_5123389680:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5123390192:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123390192;
    goto ***PC;
func_5123391040:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123391040;
    goto ***PC;
func_5123391168:
    extend(42);
    NEXT();
    goto ***PC;
func_5123390320:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123390320;
    goto ***PC;
func_5123386000:
    extend(47);
    NEXT();
    goto ***PC;
func_5123390976:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5123390976;
    goto ***PC;
func_5123386368:
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
    PC = func_5123382240_op0;
    goto ***PC;
}
