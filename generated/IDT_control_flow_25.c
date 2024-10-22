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
        unsigned loop_limit = 16;
        static void * cf[] = {&&func_5341484576, &&func_5341484944, &&func_5341485360, &&func_5341485456, &&func_5341485232, &&func_5341485152, &&func_5341485856, &&func_5341485072, &&func_5341485584, &&func_5341486112, &&func_5341485776, &&func_5341486048, &&func_5341486464, &&func_5341486832, &&func_5341486672, &&func_5341486400, &&func_5341486592, &&func_5341485648, &&func_5341487696, &&func_5341487824, &&func_5341487952, &&func_5341488080, &&func_5341488208, &&func_5341488336, &&func_5341488720, &&func_5341486304, &&func_5341488912, &&func_5341489040, &&func_5341489168, &&func_5341489360, &&func_5341489488, &&func_5341489616, &&func_5341489744, &&func_5341489296, &&func_5341490320, &&func_5341490448, &&func_5341487488, &&func_5341487616, &&func_5341488624, &&func_5341490800, &&func_5341490928, &&func_5341488464, &&func_5341491696, &&func_5341491824, &&func_5341486960, &&func_5341491472, &&func_5341492144, &&func_5341492272, &&func_5341492400, &&func_5341492528, &&func_5341492720, &&func_5341492848, &&func_5341492976, &&func_5341493104, &&func_5341492656, &&func_5341493872, &&func_5341491120, &&func_5341493696, &&func_5341491296, &&func_5341493360, &&func_5341493488, &&func_5341494000, &&func_5341494848, &&func_5341494976, &&func_5341494128, &&func_5341489808, &&func_5341494784, &&func_5341490176, &&RETURN, &&HALT};
        static void **func_5341484576_op0[2] = { cf+15, cf+68};
        static void **func_5341484944_op0[2] = { cf+18, cf+68};
        static void **func_5341484944_op1[2] = { cf+20, cf+68};
        static void **func_5341484944_op2[2] = { cf+22, cf+68};
        static void **func_5341485360_op0[2] = { cf+24, cf+68};
        static void **func_5341485360_op1[2] = { cf+25, cf+68};
        static void **func_5341485360_op2[2] = { cf+26, cf+68};
        static void **func_5341485360_op3[2] = { cf+27, cf+68};
        static void **func_5341485360_op4[2] = { cf+28, cf+68};
        static void **func_5341485360_op5[2] = { cf+29, cf+68};
        static void **func_5341485360_op6[2] = { cf+30, cf+68};
        static void **func_5341485360_op7[2] = { cf+31, cf+68};
        static void **func_5341485360_op8[2] = { cf+32, cf+68};
        static void **func_5341485360_op9[2] = { cf+33, cf+68};
        static void **func_5341485456_op0[2] = { cf+34, cf+68};
        static void **func_5341485456_op1[2] = { cf+36, cf+68};
        static void **func_5341485456_op2[2] = { cf+13, cf+68};
        static void **func_5341485232_op0[2] = { cf+38, cf+68};
        static void **func_5341485232_op1[2] = { cf+8, cf+68};
        static void **func_5341485232_op2[2] = { cf+6, cf+68};
        static void **func_5341485152_op0[2] = { cf+41, cf+68};
        static void **func_5341485856_op0[2] = { cf+45, cf+68};
        static void **func_5341485856_op1[2] = { cf+46, cf+68};
        static void **func_5341485856_op2[2] = { cf+47, cf+68};
        static void **func_5341485856_op3[2] = { cf+48, cf+68};
        static void **func_5341485856_op4[2] = { cf+49, cf+68};
        static void **func_5341485856_op5[2] = { cf+50, cf+68};
        static void **func_5341485856_op6[2] = { cf+51, cf+68};
        static void **func_5341485856_op7[2] = { cf+52, cf+68};
        static void **func_5341485856_op8[2] = { cf+53, cf+68};
        static void **func_5341485072_op0[2] = { cf+54, cf+68};
        static void **func_5341485072_op1[2] = { cf+56, cf+68};
        static void **func_5341485584_op0[2] = { cf+2, cf+68};
        static void **func_5341485584_op1[2] = { cf+58, cf+68};
        static void **func_5341486112_op0[2] = { cf+59, cf+68};
        static void **func_5341485776_op0[2] = { cf+61, cf+68};
        static void **func_5341486048_op0[2] = { cf+10, cf+69};
        static void **func_5341486464_op0[2] = { cf+7, cf+68};
        static void **func_5341486464_op1[2] = { cf+14, cf+68};
        static void **func_5341486464_op2[2] = { cf+5, cf+68};
        static void **func_5341486464_op3[2] = { cf+0, cf+68};
        static void **func_5341486464_op4[2] = { cf+9, cf+68};
        static void **func_5341486832_op0[2] = { cf+62, cf+68};
        static void **func_5341486832_op1[2] = { cf+64, cf+68};
        static void **func_5341486832_op2[2] = { cf+4, cf+68};
        static void **func_5341486672_op0[2] = { cf+66, cf+68};
        static void **exp_5341486400[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_5341487696[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_5341487952[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_5341488208[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_5341490320[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_5341487488[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_5341488624[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_5341488464[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5341492656[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5341491120[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5341491296[3] = {cf+2, cf+8, cf+68};
        static void **exp_5341493360[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_5341494000[3] = {cf+12, cf+10, cf+68};
        static void **exp_5341494848[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_5341494128[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_5341494784[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_5341484576:
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
            PC = func_5341484576_op0;
        break;
    }
    goto ***PC;
func_5341484944:
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
            PC = func_5341484944_op0;
        break;
        case 1:
            PC = func_5341484944_op1;
        break;
        case 2:
            PC = func_5341484944_op2;
        break;
    }
    goto ***PC;
func_5341485360:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5341485360_op0;
        break;
        case 1:
            PC = func_5341485360_op1;
        break;
        case 2:
            PC = func_5341485360_op2;
        break;
        case 3:
            PC = func_5341485360_op3;
        break;
        case 4:
            PC = func_5341485360_op4;
        break;
        case 5:
            PC = func_5341485360_op5;
        break;
        case 6:
            PC = func_5341485360_op6;
        break;
        case 7:
            PC = func_5341485360_op7;
        break;
        case 8:
            PC = func_5341485360_op8;
        break;
        case 9:
            PC = func_5341485360_op9;
        break;
    }
    goto ***PC;
func_5341485456:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5341485456_op0;
        break;
        case 1:
            PC = func_5341485456_op1;
        break;
        case 2:
            PC = func_5341485456_op2;
        break;
    }
    goto ***PC;
func_5341485232:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5341485232_op0;
        break;
        case 1:
            PC = func_5341485232_op1;
        break;
        case 2:
            PC = func_5341485232_op2;
        break;
    }
    goto ***PC;
func_5341485152:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341485152_op0;
        break;
    }
    goto ***PC;
func_5341485856:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5341485856_op0;
        break;
        case 1:
            PC = func_5341485856_op1;
        break;
        case 2:
            PC = func_5341485856_op2;
        break;
        case 3:
            PC = func_5341485856_op3;
        break;
        case 4:
            PC = func_5341485856_op4;
        break;
        case 5:
            PC = func_5341485856_op5;
        break;
        case 6:
            PC = func_5341485856_op6;
        break;
        case 7:
            PC = func_5341485856_op7;
        break;
        case 8:
            PC = func_5341485856_op8;
        break;
    }
    goto ***PC;
func_5341485072:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5341485072_op0;
        break;
        case 1:
            PC = func_5341485072_op1;
        break;
    }
    goto ***PC;
func_5341485584:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5341485584_op0;
        break;
        case 1:
            PC = func_5341485584_op1;
        break;
    }
    goto ***PC;
func_5341486112:
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
            PC = func_5341486112_op0;
        break;
    }
    goto ***PC;
func_5341485776:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341485776_op0;
        break;
    }
    goto ***PC;
func_5341486048:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341486048_op0;
        break;
    }
    goto ***PC;
func_5341486464:
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
            PC = func_5341486464_op0;
        break;
        case 1:
            PC = func_5341486464_op1;
        break;
        case 2:
            PC = func_5341486464_op2;
        break;
        case 3:
            PC = func_5341486464_op3;
        break;
        case 4:
            PC = func_5341486464_op4;
        break;
    }
    goto ***PC;
func_5341486832:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5341486832_op0;
        break;
        case 1:
            PC = func_5341486832_op1;
        break;
        case 2:
            PC = func_5341486832_op2;
        break;
    }
    goto ***PC;
func_5341486672:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341486672_op0;
        break;
    }
    goto ***PC;
func_5341486400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341486400;
    goto ***PC;
func_5341486592:
    extend(61);
    NEXT();
    goto ***PC;
func_5341485648:
    extend(59);
    NEXT();
    goto ***PC;
func_5341487696:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341487696;
    goto ***PC;
func_5341487824:
    extend(62);
    NEXT();
    goto ***PC;
func_5341487952:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341487952;
    goto ***PC;
func_5341488080:
    extend(60);
    NEXT();
    goto ***PC;
func_5341488208:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341488208;
    goto ***PC;
func_5341488336:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5341488720:
    extend(48);
    NEXT();
    goto ***PC;
func_5341486304:
    extend(49);
    NEXT();
    goto ***PC;
func_5341488912:
    extend(50);
    NEXT();
    goto ***PC;
func_5341489040:
    extend(51);
    NEXT();
    goto ***PC;
func_5341489168:
    extend(52);
    NEXT();
    goto ***PC;
func_5341489360:
    extend(53);
    NEXT();
    goto ***PC;
func_5341489488:
    extend(54);
    NEXT();
    goto ***PC;
func_5341489616:
    extend(55);
    NEXT();
    goto ***PC;
func_5341489744:
    extend(56);
    NEXT();
    goto ***PC;
func_5341489296:
    extend(57);
    NEXT();
    goto ***PC;
func_5341490320:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341490320;
    goto ***PC;
func_5341490448:
    extend(43);
    NEXT();
    goto ***PC;
func_5341487488:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341487488;
    goto ***PC;
func_5341487616:
    extend(45);
    NEXT();
    goto ***PC;
func_5341488624:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341488624;
    goto ***PC;
func_5341490800:
    extend(40);
    NEXT();
    goto ***PC;
func_5341490928:
    extend(41);
    NEXT();
    goto ***PC;
func_5341488464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341488464;
    goto ***PC;
func_5341491696:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_5341491824:
    extend(123);
    NEXT();
    goto ***PC;
func_5341486960:
    extend(125);
    NEXT();
    goto ***PC;
func_5341491472:
    extend(105);
    NEXT();
    goto ***PC;
func_5341492144:
    extend(106);
    NEXT();
    goto ***PC;
func_5341492272:
    extend(107);
    NEXT();
    goto ***PC;
func_5341492400:
    extend(120);
    NEXT();
    goto ***PC;
func_5341492528:
    extend(121);
    NEXT();
    goto ***PC;
func_5341492720:
    extend(122);
    NEXT();
    goto ***PC;
func_5341492848:
    extend(97);
    NEXT();
    goto ***PC;
func_5341492976:
    extend(98);
    NEXT();
    goto ***PC;
func_5341493104:
    extend(99);
    NEXT();
    goto ***PC;
func_5341492656:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341492656;
    goto ***PC;
func_5341493872:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5341491120:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341491120;
    goto ***PC;
func_5341493696:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5341491296:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341491296;
    goto ***PC;
func_5341493360:
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
    PC = exp_5341493360;
    goto ***PC;
func_5341493488:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5341494000:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341494000;
    goto ***PC;
func_5341494848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341494848;
    goto ***PC;
func_5341494976:
    extend(42);
    NEXT();
    goto ***PC;
func_5341494128:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341494128;
    goto ***PC;
func_5341489808:
    extend(47);
    NEXT();
    goto ***PC;
func_5341494784:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5341494784;
    goto ***PC;
func_5341490176:
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
    PC = func_5341486048_op0;
    goto ***PC;
}
