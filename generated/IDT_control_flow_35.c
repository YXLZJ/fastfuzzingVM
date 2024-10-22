#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 35
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
        static void * cf[] = {&&func_5760914976, &&func_5760915344, &&func_5760915760, &&func_5760915856, &&func_5760915632, &&func_5760915552, &&func_5760916256, &&func_5760915472, &&func_5760915984, &&func_5760916512, &&func_5760916176, &&func_5760916448, &&func_5760916864, &&func_5760917232, &&func_5760917072, &&func_5760916800, &&func_5760916992, &&func_5760916048, &&func_5760918096, &&func_5760918224, &&func_5760918352, &&func_5760918480, &&func_5760918608, &&func_5760918736, &&func_5760919120, &&func_5760916704, &&func_5760919312, &&func_5760919440, &&func_5760919568, &&func_5760919760, &&func_5760919888, &&func_5760920016, &&func_5760920144, &&func_5760919696, &&func_5760920720, &&func_5760920848, &&func_5760917888, &&func_5760918016, &&func_5760919024, &&func_5760921200, &&func_5760921328, &&func_5760918864, &&func_5760922096, &&func_5760922224, &&func_5760917360, &&func_5760921872, &&func_5760922544, &&func_5760922672, &&func_5760922800, &&func_5760922928, &&func_5760923120, &&func_5760923248, &&func_5760923376, &&func_5760923504, &&func_5760923056, &&func_5760924272, &&func_5760921520, &&func_5760924096, &&func_5760921696, &&func_5760923760, &&func_5760923888, &&func_5760924400, &&func_5760925248, &&func_5760925376, &&func_5760924528, &&func_5760920208, &&func_5760925184, &&func_5760920576, &&RETURN, &&HALT};
        static void **func_5760914976_op0[2] = { cf+15, cf+68};
        static void **func_5760915344_op0[2] = { cf+18, cf+68};
        static void **func_5760915344_op1[2] = { cf+20, cf+68};
        static void **func_5760915344_op2[2] = { cf+22, cf+68};
        static void **func_5760915760_op0[2] = { cf+24, cf+68};
        static void **func_5760915760_op1[2] = { cf+25, cf+68};
        static void **func_5760915760_op2[2] = { cf+26, cf+68};
        static void **func_5760915760_op3[2] = { cf+27, cf+68};
        static void **func_5760915760_op4[2] = { cf+28, cf+68};
        static void **func_5760915760_op5[2] = { cf+29, cf+68};
        static void **func_5760915760_op6[2] = { cf+30, cf+68};
        static void **func_5760915760_op7[2] = { cf+31, cf+68};
        static void **func_5760915760_op8[2] = { cf+32, cf+68};
        static void **func_5760915760_op9[2] = { cf+33, cf+68};
        static void **func_5760915856_op0[2] = { cf+34, cf+68};
        static void **func_5760915856_op1[2] = { cf+36, cf+68};
        static void **func_5760915856_op2[2] = { cf+13, cf+68};
        static void **func_5760915632_op0[2] = { cf+38, cf+68};
        static void **func_5760915632_op1[2] = { cf+8, cf+68};
        static void **func_5760915632_op2[2] = { cf+6, cf+68};
        static void **func_5760915552_op0[2] = { cf+41, cf+68};
        static void **func_5760916256_op0[2] = { cf+45, cf+68};
        static void **func_5760916256_op1[2] = { cf+46, cf+68};
        static void **func_5760916256_op2[2] = { cf+47, cf+68};
        static void **func_5760916256_op3[2] = { cf+48, cf+68};
        static void **func_5760916256_op4[2] = { cf+49, cf+68};
        static void **func_5760916256_op5[2] = { cf+50, cf+68};
        static void **func_5760916256_op6[2] = { cf+51, cf+68};
        static void **func_5760916256_op7[2] = { cf+52, cf+68};
        static void **func_5760916256_op8[2] = { cf+53, cf+68};
        static void **func_5760915472_op0[2] = { cf+54, cf+68};
        static void **func_5760915472_op1[2] = { cf+56, cf+68};
        static void **func_5760915984_op0[2] = { cf+2, cf+68};
        static void **func_5760915984_op1[2] = { cf+58, cf+68};
        static void **func_5760916512_op0[2] = { cf+59, cf+68};
        static void **func_5760916176_op0[2] = { cf+61, cf+68};
        static void **func_5760916448_op0[2] = { cf+10, cf+69};
        static void **func_5760916864_op0[2] = { cf+7, cf+68};
        static void **func_5760916864_op1[2] = { cf+14, cf+68};
        static void **func_5760916864_op2[2] = { cf+5, cf+68};
        static void **func_5760916864_op3[2] = { cf+0, cf+68};
        static void **func_5760916864_op4[2] = { cf+9, cf+68};
        static void **func_5760917232_op0[2] = { cf+62, cf+68};
        static void **func_5760917232_op1[2] = { cf+64, cf+68};
        static void **func_5760917232_op2[2] = { cf+4, cf+68};
        static void **func_5760917072_op0[2] = { cf+66, cf+68};
        static void **exp_5760916800[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_5760918096[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_5760918352[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_5760918608[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_5760920720[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_5760917888[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_5760919024[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_5760918864[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5760923056[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5760921520[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5760921696[3] = {cf+2, cf+8, cf+68};
        static void **exp_5760923760[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_5760924400[3] = {cf+12, cf+10, cf+68};
        static void **exp_5760925248[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_5760924528[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_5760925184[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_5760914976:
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
            PC = func_5760914976_op0;
        break;
    }
    goto ***PC;
func_5760915344:
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
            PC = func_5760915344_op0;
        break;
        case 1:
            PC = func_5760915344_op1;
        break;
        case 2:
            PC = func_5760915344_op2;
        break;
    }
    goto ***PC;
func_5760915760:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5760915760_op0;
        break;
        case 1:
            PC = func_5760915760_op1;
        break;
        case 2:
            PC = func_5760915760_op2;
        break;
        case 3:
            PC = func_5760915760_op3;
        break;
        case 4:
            PC = func_5760915760_op4;
        break;
        case 5:
            PC = func_5760915760_op5;
        break;
        case 6:
            PC = func_5760915760_op6;
        break;
        case 7:
            PC = func_5760915760_op7;
        break;
        case 8:
            PC = func_5760915760_op8;
        break;
        case 9:
            PC = func_5760915760_op9;
        break;
    }
    goto ***PC;
func_5760915856:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5760915856_op0;
        break;
        case 1:
            PC = func_5760915856_op1;
        break;
        case 2:
            PC = func_5760915856_op2;
        break;
    }
    goto ***PC;
func_5760915632:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5760915632_op0;
        break;
        case 1:
            PC = func_5760915632_op1;
        break;
        case 2:
            PC = func_5760915632_op2;
        break;
    }
    goto ***PC;
func_5760915552:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5760915552_op0;
        break;
    }
    goto ***PC;
func_5760916256:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5760916256_op0;
        break;
        case 1:
            PC = func_5760916256_op1;
        break;
        case 2:
            PC = func_5760916256_op2;
        break;
        case 3:
            PC = func_5760916256_op3;
        break;
        case 4:
            PC = func_5760916256_op4;
        break;
        case 5:
            PC = func_5760916256_op5;
        break;
        case 6:
            PC = func_5760916256_op6;
        break;
        case 7:
            PC = func_5760916256_op7;
        break;
        case 8:
            PC = func_5760916256_op8;
        break;
    }
    goto ***PC;
func_5760915472:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5760915472_op0;
        break;
        case 1:
            PC = func_5760915472_op1;
        break;
    }
    goto ***PC;
func_5760915984:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5760915984_op0;
        break;
        case 1:
            PC = func_5760915984_op1;
        break;
    }
    goto ***PC;
func_5760916512:
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
            PC = func_5760916512_op0;
        break;
    }
    goto ***PC;
func_5760916176:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5760916176_op0;
        break;
    }
    goto ***PC;
func_5760916448:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5760916448_op0;
        break;
    }
    goto ***PC;
func_5760916864:
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
            PC = func_5760916864_op0;
        break;
        case 1:
            PC = func_5760916864_op1;
        break;
        case 2:
            PC = func_5760916864_op2;
        break;
        case 3:
            PC = func_5760916864_op3;
        break;
        case 4:
            PC = func_5760916864_op4;
        break;
    }
    goto ***PC;
func_5760917232:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5760917232_op0;
        break;
        case 1:
            PC = func_5760917232_op1;
        break;
        case 2:
            PC = func_5760917232_op2;
        break;
    }
    goto ***PC;
func_5760917072:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5760917072_op0;
        break;
    }
    goto ***PC;
func_5760916800:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760916800;
    goto ***PC;
func_5760916992:
    extend(61);
    NEXT();
    goto ***PC;
func_5760916048:
    extend(59);
    NEXT();
    goto ***PC;
func_5760918096:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760918096;
    goto ***PC;
func_5760918224:
    extend(62);
    NEXT();
    goto ***PC;
func_5760918352:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760918352;
    goto ***PC;
func_5760918480:
    extend(60);
    NEXT();
    goto ***PC;
func_5760918608:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760918608;
    goto ***PC;
func_5760918736:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5760919120:
    extend(48);
    NEXT();
    goto ***PC;
func_5760916704:
    extend(49);
    NEXT();
    goto ***PC;
func_5760919312:
    extend(50);
    NEXT();
    goto ***PC;
func_5760919440:
    extend(51);
    NEXT();
    goto ***PC;
func_5760919568:
    extend(52);
    NEXT();
    goto ***PC;
func_5760919760:
    extend(53);
    NEXT();
    goto ***PC;
func_5760919888:
    extend(54);
    NEXT();
    goto ***PC;
func_5760920016:
    extend(55);
    NEXT();
    goto ***PC;
func_5760920144:
    extend(56);
    NEXT();
    goto ***PC;
func_5760919696:
    extend(57);
    NEXT();
    goto ***PC;
func_5760920720:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760920720;
    goto ***PC;
func_5760920848:
    extend(43);
    NEXT();
    goto ***PC;
func_5760917888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760917888;
    goto ***PC;
func_5760918016:
    extend(45);
    NEXT();
    goto ***PC;
func_5760919024:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760919024;
    goto ***PC;
func_5760921200:
    extend(40);
    NEXT();
    goto ***PC;
func_5760921328:
    extend(41);
    NEXT();
    goto ***PC;
func_5760918864:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760918864;
    goto ***PC;
func_5760922096:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_5760922224:
    extend(123);
    NEXT();
    goto ***PC;
func_5760917360:
    extend(125);
    NEXT();
    goto ***PC;
func_5760921872:
    extend(105);
    NEXT();
    goto ***PC;
func_5760922544:
    extend(106);
    NEXT();
    goto ***PC;
func_5760922672:
    extend(107);
    NEXT();
    goto ***PC;
func_5760922800:
    extend(120);
    NEXT();
    goto ***PC;
func_5760922928:
    extend(121);
    NEXT();
    goto ***PC;
func_5760923120:
    extend(122);
    NEXT();
    goto ***PC;
func_5760923248:
    extend(97);
    NEXT();
    goto ***PC;
func_5760923376:
    extend(98);
    NEXT();
    goto ***PC;
func_5760923504:
    extend(99);
    NEXT();
    goto ***PC;
func_5760923056:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760923056;
    goto ***PC;
func_5760924272:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5760921520:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760921520;
    goto ***PC;
func_5760924096:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5760921696:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760921696;
    goto ***PC;
func_5760923760:
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
    PC = exp_5760923760;
    goto ***PC;
func_5760923888:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5760924400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760924400;
    goto ***PC;
func_5760925248:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760925248;
    goto ***PC;
func_5760925376:
    extend(42);
    NEXT();
    goto ***PC;
func_5760924528:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760924528;
    goto ***PC;
func_5760920208:
    extend(47);
    NEXT();
    goto ***PC;
func_5760925184:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5760925184;
    goto ***PC;
func_5760920576:
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
    PC = func_5760916448_op0;
    goto ***PC;
}
