#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 55
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
        static void * cf[] = {&&func_4966080544, &&func_4966080928, &&func_4966081344, &&func_4966081440, &&func_4966081216, &&func_4966081136, &&func_4966081840, &&func_4966081056, &&func_4966081568, &&func_4966082096, &&func_4966081760, &&func_4966082032, &&func_4966082448, &&func_4966082816, &&func_4966082656, &&func_4966082384, &&func_4966082576, &&func_4966081632, &&func_4966083680, &&func_4966083808, &&func_4966083936, &&func_4966084064, &&func_4966084192, &&func_4966084320, &&func_4966084704, &&func_4966082288, &&func_4966084896, &&func_4966085024, &&func_4966085152, &&func_4966085344, &&func_4966085472, &&func_4966085600, &&func_4966085728, &&func_4966085280, &&func_4966086304, &&func_4966086432, &&func_4966083472, &&func_4966083600, &&func_4966084608, &&func_4966086784, &&func_4966086912, &&func_4966084448, &&func_4966087680, &&func_4966087808, &&func_4966082944, &&func_4966087456, &&func_4966088128, &&func_4966088256, &&func_4966088384, &&func_4966088512, &&func_4966088704, &&func_4966088832, &&func_4966088960, &&func_4966089088, &&func_4966088640, &&func_4966089856, &&func_4966087104, &&func_4967121024, &&func_4967121520, &&func_4967121808, &&func_4967121936, &&func_4967121728, &&func_4967121456, &&func_4967122656, &&func_4967122176, &&func_4967122864, &&func_4967122240, &&func_4967122480, &&RETURN, &&HALT};
        static void **func_4966080544_op0[2] = { cf+15, cf+68};
        static void **func_4966080928_op0[2] = { cf+18, cf+68};
        static void **func_4966080928_op1[2] = { cf+20, cf+68};
        static void **func_4966080928_op2[2] = { cf+22, cf+68};
        static void **func_4966081344_op0[2] = { cf+24, cf+68};
        static void **func_4966081344_op1[2] = { cf+25, cf+68};
        static void **func_4966081344_op2[2] = { cf+26, cf+68};
        static void **func_4966081344_op3[2] = { cf+27, cf+68};
        static void **func_4966081344_op4[2] = { cf+28, cf+68};
        static void **func_4966081344_op5[2] = { cf+29, cf+68};
        static void **func_4966081344_op6[2] = { cf+30, cf+68};
        static void **func_4966081344_op7[2] = { cf+31, cf+68};
        static void **func_4966081344_op8[2] = { cf+32, cf+68};
        static void **func_4966081344_op9[2] = { cf+33, cf+68};
        static void **func_4966081440_op0[2] = { cf+34, cf+68};
        static void **func_4966081440_op1[2] = { cf+36, cf+68};
        static void **func_4966081440_op2[2] = { cf+13, cf+68};
        static void **func_4966081216_op0[2] = { cf+38, cf+68};
        static void **func_4966081216_op1[2] = { cf+8, cf+68};
        static void **func_4966081216_op2[2] = { cf+6, cf+68};
        static void **func_4966081136_op0[2] = { cf+41, cf+68};
        static void **func_4966081840_op0[2] = { cf+45, cf+68};
        static void **func_4966081840_op1[2] = { cf+46, cf+68};
        static void **func_4966081840_op2[2] = { cf+47, cf+68};
        static void **func_4966081840_op3[2] = { cf+48, cf+68};
        static void **func_4966081840_op4[2] = { cf+49, cf+68};
        static void **func_4966081840_op5[2] = { cf+50, cf+68};
        static void **func_4966081840_op6[2] = { cf+51, cf+68};
        static void **func_4966081840_op7[2] = { cf+52, cf+68};
        static void **func_4966081840_op8[2] = { cf+53, cf+68};
        static void **func_4966081056_op0[2] = { cf+54, cf+68};
        static void **func_4966081056_op1[2] = { cf+56, cf+68};
        static void **func_4966081568_op0[2] = { cf+2, cf+68};
        static void **func_4966081568_op1[2] = { cf+58, cf+68};
        static void **func_4966082096_op0[2] = { cf+59, cf+68};
        static void **func_4966081760_op0[2] = { cf+61, cf+68};
        static void **func_4966082032_op0[2] = { cf+10, cf+69};
        static void **func_4966082448_op0[2] = { cf+7, cf+68};
        static void **func_4966082448_op1[2] = { cf+14, cf+68};
        static void **func_4966082448_op2[2] = { cf+5, cf+68};
        static void **func_4966082448_op3[2] = { cf+0, cf+68};
        static void **func_4966082448_op4[2] = { cf+9, cf+68};
        static void **func_4966082816_op0[2] = { cf+62, cf+68};
        static void **func_4966082816_op1[2] = { cf+64, cf+68};
        static void **func_4966082816_op2[2] = { cf+4, cf+68};
        static void **func_4966082656_op0[2] = { cf+66, cf+68};
        static void **exp_4966082384[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_4966083680[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_4966083936[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_4966084192[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_4966086304[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_4966083472[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_4966084608[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_4966084448[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4966088640[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4966087104[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4967121520[3] = {cf+2, cf+8, cf+68};
        static void **exp_4967121808[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_4967121728[3] = {cf+12, cf+10, cf+68};
        static void **exp_4967121456[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_4967122176[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_4967122240[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_4966080544:
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
            PC = func_4966080544_op0;
        break;
    }
    goto ***PC;
func_4966080928:
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
            PC = func_4966080928_op0;
        break;
        case 1:
            PC = func_4966080928_op1;
        break;
        case 2:
            PC = func_4966080928_op2;
        break;
    }
    goto ***PC;
func_4966081344:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4966081344_op0;
        break;
        case 1:
            PC = func_4966081344_op1;
        break;
        case 2:
            PC = func_4966081344_op2;
        break;
        case 3:
            PC = func_4966081344_op3;
        break;
        case 4:
            PC = func_4966081344_op4;
        break;
        case 5:
            PC = func_4966081344_op5;
        break;
        case 6:
            PC = func_4966081344_op6;
        break;
        case 7:
            PC = func_4966081344_op7;
        break;
        case 8:
            PC = func_4966081344_op8;
        break;
        case 9:
            PC = func_4966081344_op9;
        break;
    }
    goto ***PC;
func_4966081440:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4966081440_op0;
        break;
        case 1:
            PC = func_4966081440_op1;
        break;
        case 2:
            PC = func_4966081440_op2;
        break;
    }
    goto ***PC;
func_4966081216:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4966081216_op0;
        break;
        case 1:
            PC = func_4966081216_op1;
        break;
        case 2:
            PC = func_4966081216_op2;
        break;
    }
    goto ***PC;
func_4966081136:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4966081136_op0;
        break;
    }
    goto ***PC;
func_4966081840:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_4966081840_op0;
        break;
        case 1:
            PC = func_4966081840_op1;
        break;
        case 2:
            PC = func_4966081840_op2;
        break;
        case 3:
            PC = func_4966081840_op3;
        break;
        case 4:
            PC = func_4966081840_op4;
        break;
        case 5:
            PC = func_4966081840_op5;
        break;
        case 6:
            PC = func_4966081840_op6;
        break;
        case 7:
            PC = func_4966081840_op7;
        break;
        case 8:
            PC = func_4966081840_op8;
        break;
    }
    goto ***PC;
func_4966081056:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4966081056_op0;
        break;
        case 1:
            PC = func_4966081056_op1;
        break;
    }
    goto ***PC;
func_4966081568:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4966081568_op0;
        break;
        case 1:
            PC = func_4966081568_op1;
        break;
    }
    goto ***PC;
func_4966082096:
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
            PC = func_4966082096_op0;
        break;
    }
    goto ***PC;
func_4966081760:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4966081760_op0;
        break;
    }
    goto ***PC;
func_4966082032:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4966082032_op0;
        break;
    }
    goto ***PC;
func_4966082448:
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
            PC = func_4966082448_op0;
        break;
        case 1:
            PC = func_4966082448_op1;
        break;
        case 2:
            PC = func_4966082448_op2;
        break;
        case 3:
            PC = func_4966082448_op3;
        break;
        case 4:
            PC = func_4966082448_op4;
        break;
    }
    goto ***PC;
func_4966082816:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4966082816_op0;
        break;
        case 1:
            PC = func_4966082816_op1;
        break;
        case 2:
            PC = func_4966082816_op2;
        break;
    }
    goto ***PC;
func_4966082656:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4966082656_op0;
        break;
    }
    goto ***PC;
func_4966082384:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4966082384;
    goto ***PC;
func_4966082576:
    extend(61);
    NEXT();
    goto ***PC;
func_4966081632:
    extend(59);
    NEXT();
    goto ***PC;
func_4966083680:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4966083680;
    goto ***PC;
func_4966083808:
    extend(62);
    NEXT();
    goto ***PC;
func_4966083936:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4966083936;
    goto ***PC;
func_4966084064:
    extend(60);
    NEXT();
    goto ***PC;
func_4966084192:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4966084192;
    goto ***PC;
func_4966084320:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_4966084704:
    extend(48);
    NEXT();
    goto ***PC;
func_4966082288:
    extend(49);
    NEXT();
    goto ***PC;
func_4966084896:
    extend(50);
    NEXT();
    goto ***PC;
func_4966085024:
    extend(51);
    NEXT();
    goto ***PC;
func_4966085152:
    extend(52);
    NEXT();
    goto ***PC;
func_4966085344:
    extend(53);
    NEXT();
    goto ***PC;
func_4966085472:
    extend(54);
    NEXT();
    goto ***PC;
func_4966085600:
    extend(55);
    NEXT();
    goto ***PC;
func_4966085728:
    extend(56);
    NEXT();
    goto ***PC;
func_4966085280:
    extend(57);
    NEXT();
    goto ***PC;
func_4966086304:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4966086304;
    goto ***PC;
func_4966086432:
    extend(43);
    NEXT();
    goto ***PC;
func_4966083472:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4966083472;
    goto ***PC;
func_4966083600:
    extend(45);
    NEXT();
    goto ***PC;
func_4966084608:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4966084608;
    goto ***PC;
func_4966086784:
    extend(40);
    NEXT();
    goto ***PC;
func_4966086912:
    extend(41);
    NEXT();
    goto ***PC;
func_4966084448:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4966084448;
    goto ***PC;
func_4966087680:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_4966087808:
    extend(123);
    NEXT();
    goto ***PC;
func_4966082944:
    extend(125);
    NEXT();
    goto ***PC;
func_4966087456:
    extend(105);
    NEXT();
    goto ***PC;
func_4966088128:
    extend(106);
    NEXT();
    goto ***PC;
func_4966088256:
    extend(107);
    NEXT();
    goto ***PC;
func_4966088384:
    extend(120);
    NEXT();
    goto ***PC;
func_4966088512:
    extend(121);
    NEXT();
    goto ***PC;
func_4966088704:
    extend(122);
    NEXT();
    goto ***PC;
func_4966088832:
    extend(97);
    NEXT();
    goto ***PC;
func_4966088960:
    extend(98);
    NEXT();
    goto ***PC;
func_4966089088:
    extend(99);
    NEXT();
    goto ***PC;
func_4966088640:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4966088640;
    goto ***PC;
func_4966089856:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_4966087104:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4966087104;
    goto ***PC;
func_4967121024:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_4967121520:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4967121520;
    goto ***PC;
func_4967121808:
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
    PC = exp_4967121808;
    goto ***PC;
func_4967121936:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_4967121728:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4967121728;
    goto ***PC;
func_4967121456:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4967121456;
    goto ***PC;
func_4967122656:
    extend(42);
    NEXT();
    goto ***PC;
func_4967122176:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4967122176;
    goto ***PC;
func_4967122864:
    extend(47);
    NEXT();
    goto ***PC;
func_4967122240:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4967122240;
    goto ***PC;
func_4967122480:
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
    PC = func_4966082032_op0;
    goto ***PC;
}
