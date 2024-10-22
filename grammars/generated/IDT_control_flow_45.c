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
        unsigned loop_limit = 16;
        static void * cf[] = {&&func_4863333920, &&func_4863334288, &&func_4863334704, &&func_4863334800, &&func_4863334576, &&func_4863334496, &&func_4863335200, &&func_4863334416, &&func_4863334928, &&func_4863335456, &&func_4863335120, &&func_4863335392, &&func_4863335808, &&func_4863336176, &&func_4863336016, &&func_4863335744, &&func_4863335936, &&func_4863334992, &&func_4863337040, &&func_4863337168, &&func_4863337296, &&func_4863337424, &&func_4863337552, &&func_4863337680, &&func_4863338064, &&func_4863335648, &&func_4863338256, &&func_4863338384, &&func_4863338512, &&func_4863338704, &&func_4863338832, &&func_4863338960, &&func_4863339088, &&func_4863338640, &&func_4863339664, &&func_4863339792, &&func_4863336832, &&func_4863336960, &&func_4863337968, &&func_4863340144, &&func_4863340272, &&func_4863337808, &&func_4863341040, &&func_4863341168, &&func_4863336304, &&func_4863340816, &&func_4863341488, &&func_4863341616, &&func_4863341744, &&func_4863341872, &&func_4863342064, &&func_4863342192, &&func_4863342320, &&func_4863342448, &&func_4863342000, &&func_4863343216, &&func_4863340464, &&func_4863343040, &&func_4863340640, &&func_4863342704, &&func_4863342832, &&func_4863343344, &&func_4863344192, &&func_4863344320, &&func_4863343472, &&func_4863339152, &&func_4863344128, &&func_4863339520, &&RETURN, &&HALT};
        static void **func_4863333920_op0[2] = { cf+15, cf+68};
        static void **func_4863334288_op0[2] = { cf+18, cf+68};
        static void **func_4863334288_op1[2] = { cf+20, cf+68};
        static void **func_4863334288_op2[2] = { cf+22, cf+68};
        static void **func_4863334704_op0[2] = { cf+24, cf+68};
        static void **func_4863334704_op1[2] = { cf+25, cf+68};
        static void **func_4863334704_op2[2] = { cf+26, cf+68};
        static void **func_4863334704_op3[2] = { cf+27, cf+68};
        static void **func_4863334704_op4[2] = { cf+28, cf+68};
        static void **func_4863334704_op5[2] = { cf+29, cf+68};
        static void **func_4863334704_op6[2] = { cf+30, cf+68};
        static void **func_4863334704_op7[2] = { cf+31, cf+68};
        static void **func_4863334704_op8[2] = { cf+32, cf+68};
        static void **func_4863334704_op9[2] = { cf+33, cf+68};
        static void **func_4863334800_op0[2] = { cf+34, cf+68};
        static void **func_4863334800_op1[2] = { cf+36, cf+68};
        static void **func_4863334800_op2[2] = { cf+13, cf+68};
        static void **func_4863334576_op0[2] = { cf+38, cf+68};
        static void **func_4863334576_op1[2] = { cf+8, cf+68};
        static void **func_4863334576_op2[2] = { cf+6, cf+68};
        static void **func_4863334496_op0[2] = { cf+41, cf+68};
        static void **func_4863335200_op0[2] = { cf+45, cf+68};
        static void **func_4863335200_op1[2] = { cf+46, cf+68};
        static void **func_4863335200_op2[2] = { cf+47, cf+68};
        static void **func_4863335200_op3[2] = { cf+48, cf+68};
        static void **func_4863335200_op4[2] = { cf+49, cf+68};
        static void **func_4863335200_op5[2] = { cf+50, cf+68};
        static void **func_4863335200_op6[2] = { cf+51, cf+68};
        static void **func_4863335200_op7[2] = { cf+52, cf+68};
        static void **func_4863335200_op8[2] = { cf+53, cf+68};
        static void **func_4863334416_op0[2] = { cf+54, cf+68};
        static void **func_4863334416_op1[2] = { cf+56, cf+68};
        static void **func_4863334928_op0[2] = { cf+2, cf+68};
        static void **func_4863334928_op1[2] = { cf+58, cf+68};
        static void **func_4863335456_op0[2] = { cf+59, cf+68};
        static void **func_4863335120_op0[2] = { cf+61, cf+68};
        static void **func_4863335392_op0[2] = { cf+10, cf+69};
        static void **func_4863335808_op0[2] = { cf+7, cf+68};
        static void **func_4863335808_op1[2] = { cf+14, cf+68};
        static void **func_4863335808_op2[2] = { cf+5, cf+68};
        static void **func_4863335808_op3[2] = { cf+0, cf+68};
        static void **func_4863335808_op4[2] = { cf+9, cf+68};
        static void **func_4863336176_op0[2] = { cf+62, cf+68};
        static void **func_4863336176_op1[2] = { cf+64, cf+68};
        static void **func_4863336176_op2[2] = { cf+4, cf+68};
        static void **func_4863336016_op0[2] = { cf+66, cf+68};
        static void **exp_4863335744[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_4863337040[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_4863337296[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_4863337552[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_4863339664[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_4863336832[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_4863337968[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_4863337808[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4863342000[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4863340464[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4863340640[3] = {cf+2, cf+8, cf+68};
        static void **exp_4863342704[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_4863343344[3] = {cf+12, cf+10, cf+68};
        static void **exp_4863344192[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_4863343472[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_4863344128[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_4863333920:
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
            PC = func_4863333920_op0;
        break;
    }
    goto ***PC;
func_4863334288:
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
            PC = func_4863334288_op0;
        break;
        case 1:
            PC = func_4863334288_op1;
        break;
        case 2:
            PC = func_4863334288_op2;
        break;
    }
    goto ***PC;
func_4863334704:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4863334704_op0;
        break;
        case 1:
            PC = func_4863334704_op1;
        break;
        case 2:
            PC = func_4863334704_op2;
        break;
        case 3:
            PC = func_4863334704_op3;
        break;
        case 4:
            PC = func_4863334704_op4;
        break;
        case 5:
            PC = func_4863334704_op5;
        break;
        case 6:
            PC = func_4863334704_op6;
        break;
        case 7:
            PC = func_4863334704_op7;
        break;
        case 8:
            PC = func_4863334704_op8;
        break;
        case 9:
            PC = func_4863334704_op9;
        break;
    }
    goto ***PC;
func_4863334800:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4863334800_op0;
        break;
        case 1:
            PC = func_4863334800_op1;
        break;
        case 2:
            PC = func_4863334800_op2;
        break;
    }
    goto ***PC;
func_4863334576:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4863334576_op0;
        break;
        case 1:
            PC = func_4863334576_op1;
        break;
        case 2:
            PC = func_4863334576_op2;
        break;
    }
    goto ***PC;
func_4863334496:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4863334496_op0;
        break;
    }
    goto ***PC;
func_4863335200:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_4863335200_op0;
        break;
        case 1:
            PC = func_4863335200_op1;
        break;
        case 2:
            PC = func_4863335200_op2;
        break;
        case 3:
            PC = func_4863335200_op3;
        break;
        case 4:
            PC = func_4863335200_op4;
        break;
        case 5:
            PC = func_4863335200_op5;
        break;
        case 6:
            PC = func_4863335200_op6;
        break;
        case 7:
            PC = func_4863335200_op7;
        break;
        case 8:
            PC = func_4863335200_op8;
        break;
    }
    goto ***PC;
func_4863334416:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4863334416_op0;
        break;
        case 1:
            PC = func_4863334416_op1;
        break;
    }
    goto ***PC;
func_4863334928:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4863334928_op0;
        break;
        case 1:
            PC = func_4863334928_op1;
        break;
    }
    goto ***PC;
func_4863335456:
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
            PC = func_4863335456_op0;
        break;
    }
    goto ***PC;
func_4863335120:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4863335120_op0;
        break;
    }
    goto ***PC;
func_4863335392:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4863335392_op0;
        break;
    }
    goto ***PC;
func_4863335808:
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
            PC = func_4863335808_op0;
        break;
        case 1:
            PC = func_4863335808_op1;
        break;
        case 2:
            PC = func_4863335808_op2;
        break;
        case 3:
            PC = func_4863335808_op3;
        break;
        case 4:
            PC = func_4863335808_op4;
        break;
    }
    goto ***PC;
func_4863336176:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4863336176_op0;
        break;
        case 1:
            PC = func_4863336176_op1;
        break;
        case 2:
            PC = func_4863336176_op2;
        break;
    }
    goto ***PC;
func_4863336016:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4863336016_op0;
        break;
    }
    goto ***PC;
func_4863335744:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863335744;
    goto ***PC;
func_4863335936:
    extend(61);
    NEXT();
    goto ***PC;
func_4863334992:
    extend(59);
    NEXT();
    goto ***PC;
func_4863337040:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863337040;
    goto ***PC;
func_4863337168:
    extend(62);
    NEXT();
    goto ***PC;
func_4863337296:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863337296;
    goto ***PC;
func_4863337424:
    extend(60);
    NEXT();
    goto ***PC;
func_4863337552:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863337552;
    goto ***PC;
func_4863337680:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_4863338064:
    extend(48);
    NEXT();
    goto ***PC;
func_4863335648:
    extend(49);
    NEXT();
    goto ***PC;
func_4863338256:
    extend(50);
    NEXT();
    goto ***PC;
func_4863338384:
    extend(51);
    NEXT();
    goto ***PC;
func_4863338512:
    extend(52);
    NEXT();
    goto ***PC;
func_4863338704:
    extend(53);
    NEXT();
    goto ***PC;
func_4863338832:
    extend(54);
    NEXT();
    goto ***PC;
func_4863338960:
    extend(55);
    NEXT();
    goto ***PC;
func_4863339088:
    extend(56);
    NEXT();
    goto ***PC;
func_4863338640:
    extend(57);
    NEXT();
    goto ***PC;
func_4863339664:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863339664;
    goto ***PC;
func_4863339792:
    extend(43);
    NEXT();
    goto ***PC;
func_4863336832:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863336832;
    goto ***PC;
func_4863336960:
    extend(45);
    NEXT();
    goto ***PC;
func_4863337968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863337968;
    goto ***PC;
func_4863340144:
    extend(40);
    NEXT();
    goto ***PC;
func_4863340272:
    extend(41);
    NEXT();
    goto ***PC;
func_4863337808:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863337808;
    goto ***PC;
func_4863341040:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_4863341168:
    extend(123);
    NEXT();
    goto ***PC;
func_4863336304:
    extend(125);
    NEXT();
    goto ***PC;
func_4863340816:
    extend(105);
    NEXT();
    goto ***PC;
func_4863341488:
    extend(106);
    NEXT();
    goto ***PC;
func_4863341616:
    extend(107);
    NEXT();
    goto ***PC;
func_4863341744:
    extend(120);
    NEXT();
    goto ***PC;
func_4863341872:
    extend(121);
    NEXT();
    goto ***PC;
func_4863342064:
    extend(122);
    NEXT();
    goto ***PC;
func_4863342192:
    extend(97);
    NEXT();
    goto ***PC;
func_4863342320:
    extend(98);
    NEXT();
    goto ***PC;
func_4863342448:
    extend(99);
    NEXT();
    goto ***PC;
func_4863342000:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863342000;
    goto ***PC;
func_4863343216:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_4863340464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863340464;
    goto ***PC;
func_4863343040:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_4863340640:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863340640;
    goto ***PC;
func_4863342704:
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
    PC = exp_4863342704;
    goto ***PC;
func_4863342832:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_4863343344:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863343344;
    goto ***PC;
func_4863344192:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863344192;
    goto ***PC;
func_4863344320:
    extend(42);
    NEXT();
    goto ***PC;
func_4863343472:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863343472;
    goto ***PC;
func_4863339152:
    extend(47);
    NEXT();
    goto ***PC;
func_4863344128:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4863344128;
    goto ***PC;
func_4863339520:
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
    PC = func_4863335392_op0;
    goto ***PC;
}
