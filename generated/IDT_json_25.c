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
        unsigned loop_limit = 8;
        static void * cf[] = {&&func_5577394192, &&func_5577394768, &&func_5577394576, &&func_5577394336, &&func_5577394512, &&func_5577394992, &&func_5577395120, &&func_5577394912, &&func_5577395472, &&func_5577395904, &&func_5577395840, &&func_5577396096, &&func_5577395664, &&func_5577396224, &&func_5577396688, &&func_5577396816, &&func_5577396944, &&func_5577395536, &&func_5577397328, &&func_5577397520, &&func_5577397648, &&func_5577397776, &&func_5577397904, &&func_5577397456, &&func_5577395392, &&func_5577398288, &&func_5577396432, &&func_5577396560, &&func_5577398496, &&func_5577398624, &&func_5577398752, &&func_5577398928, &&func_5577399072, &&func_5577397072, &&func_5577398416, &&func_5577399840, &&func_5577399968, &&func_5577400128, &&func_5577400256, &&func_5577399680, &&func_5577400784, &&func_5577400912, &&RETURN, &&HALT};
        static void **func_5577394192_op0[2] = { cf+10, cf+42};
        static void **func_5577394192_op1[2] = { cf+13, cf+42};
        static void **func_5577394768_op0[2] = { cf+14, cf+42};
        static void **func_5577394768_op1[2] = { cf+15, cf+42};
        static void **func_5577394768_op2[2] = { cf+16, cf+42};
        static void **func_5577394768_op3[2] = { cf+17, cf+42};
        static void **func_5577394768_op4[2] = { cf+18, cf+42};
        static void **func_5577394768_op5[2] = { cf+19, cf+42};
        static void **func_5577394768_op6[2] = { cf+20, cf+42};
        static void **func_5577394768_op7[2] = { cf+21, cf+42};
        static void **func_5577394768_op8[2] = { cf+22, cf+42};
        static void **func_5577394768_op9[2] = { cf+23, cf+42};
        static void **func_5577394576_op0[2] = { cf+24, cf+42};
        static void **func_5577394576_op1[2] = { cf+9, cf+42};
        static void **func_5577394336_op0[2] = { cf+26, cf+42};
        static void **func_5577394336_op1[2] = { cf+6, cf+42};
        static void **func_5577394512_op0[2] = { cf+1, cf+42};
        static void **func_5577394512_op1[2] = { cf+27, cf+42};
        static void **func_5577394992_op0[2] = { cf+28, cf+42};
        static void **func_5577394992_op1[2] = { cf+31, cf+42};
        static void **func_5577395120_op0[2] = { cf+32, cf+42};
        static void **func_5577394912_op0[2] = { cf+9, cf+43};
        static void **func_5577395472_op0[2] = { cf+34, cf+42};
        static void **func_5577395472_op1[2] = { cf+35, cf+42};
        static void **func_5577395472_op2[2] = { cf+36, cf+42};
        static void **func_5577395472_op3[2] = { cf+37, cf+42};
        static void **func_5577395472_op4[2] = { cf+38, cf+42};
        static void **func_5577395904_op0[2] = { cf+5, cf+42};
        static void **func_5577395904_op1[2] = { cf+0, cf+42};
        static void **func_5577395904_op2[2] = { cf+8, cf+42};
        static void **func_5577395904_op3[2] = { cf+4, cf+42};
        static void **func_5577395904_op4[2] = { cf+39, cf+42};
        static void **func_5577395904_op5[2] = { cf+40, cf+42};
        static void **func_5577395904_op6[2] = { cf+41, cf+42};
        static void **exp_5577395840[4] = {cf+11, cf+2, cf+12, cf+42};
        static void **exp_5577396224[3] = {cf+11, cf+12, cf+42};
        static void **exp_5577395392[4] = {cf+9, cf+25, cf+2, cf+42};
        static void **exp_5577396432[4] = {cf+6, cf+25, cf+3, cf+42};
        static void **exp_5577396560[3] = {cf+1, cf+4, cf+42};
        static void **exp_5577398496[4] = {cf+29, cf+3, cf+30, cf+42};
        static void **exp_5577398928[3] = {cf+29, cf+30, cf+42};
        static void **exp_5577399072[4] = {cf+8, cf+33, cf+9, cf+42};
goto LOOP;

func_5577394192:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5577394192_op0;
        break;
        case 1:
            PC = func_5577394192_op1;
        break;
    }
    goto ***PC;
func_5577394768:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5577394768_op0;
        break;
        case 1:
            PC = func_5577394768_op1;
        break;
        case 2:
            PC = func_5577394768_op2;
        break;
        case 3:
            PC = func_5577394768_op3;
        break;
        case 4:
            PC = func_5577394768_op4;
        break;
        case 5:
            PC = func_5577394768_op5;
        break;
        case 6:
            PC = func_5577394768_op6;
        break;
        case 7:
            PC = func_5577394768_op7;
        break;
        case 8:
            PC = func_5577394768_op8;
        break;
        case 9:
            PC = func_5577394768_op9;
        break;
    }
    goto ***PC;
func_5577394576:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5577394576_op0;
        break;
        case 1:
            PC = func_5577394576_op1;
        break;
    }
    goto ***PC;
func_5577394336:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5577394336_op0;
        break;
        case 1:
            PC = func_5577394336_op1;
        break;
    }
    goto ***PC;
func_5577394512:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5577394512_op0;
        break;
        case 1:
            PC = func_5577394512_op1;
        break;
    }
    goto ***PC;
func_5577394992:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5577394992_op0;
        break;
        case 1:
            PC = func_5577394992_op1;
        break;
    }
    goto ***PC;
func_5577395120:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5577395120_op0;
        break;
    }
    goto ***PC;
func_5577394912:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5577394912_op0;
        break;
    }
    goto ***PC;
func_5577395472:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        NEXT();
        goto ***PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5577395472_op0;
        break;
        case 1:
            PC = func_5577395472_op1;
        break;
        case 2:
            PC = func_5577395472_op2;
        break;
        case 3:
            PC = func_5577395472_op3;
        break;
        case 4:
            PC = func_5577395472_op4;
        break;
    }
    goto ***PC;
func_5577395904:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    xor(7);
    store();
    switch (branch) {
        case 0:
            PC = func_5577395904_op0;
        break;
        case 1:
            PC = func_5577395904_op1;
        break;
        case 2:
            PC = func_5577395904_op2;
        break;
        case 3:
            PC = func_5577395904_op3;
        break;
        case 4:
            PC = func_5577395904_op4;
        break;
        case 5:
            PC = func_5577395904_op5;
        break;
        case 6:
            PC = func_5577395904_op6;
        break;
    }
    goto ***PC;
func_5577395840:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5577395840;
    goto ***PC;
func_5577396096:
    extend(91);
    NEXT();
    goto ***PC;
func_5577395664:
    extend(93);
    NEXT();
    goto ***PC;
func_5577396224:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5577396224;
    goto ***PC;
func_5577396688:
    extend(48);
    NEXT();
    goto ***PC;
func_5577396816:
    extend(49);
    NEXT();
    goto ***PC;
func_5577396944:
    extend(50);
    NEXT();
    goto ***PC;
func_5577395536:
    extend(51);
    NEXT();
    goto ***PC;
func_5577397328:
    extend(52);
    NEXT();
    goto ***PC;
func_5577397520:
    extend(53);
    NEXT();
    goto ***PC;
func_5577397648:
    extend(54);
    NEXT();
    goto ***PC;
func_5577397776:
    extend(55);
    NEXT();
    goto ***PC;
func_5577397904:
    extend(56);
    NEXT();
    goto ***PC;
func_5577397456:
    extend(57);
    NEXT();
    goto ***PC;
func_5577395392:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5577395392;
    goto ***PC;
func_5577398288:
    extend(44);
    NEXT();
    goto ***PC;
func_5577396432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5577396432;
    goto ***PC;
func_5577396560:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5577396560;
    goto ***PC;
func_5577398496:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5577398496;
    goto ***PC;
func_5577398624:
    extend(123);
    NEXT();
    goto ***PC;
func_5577398752:
    extend(125);
    NEXT();
    goto ***PC;
func_5577398928:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5577398928;
    goto ***PC;
func_5577399072:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5577399072;
    goto ***PC;
func_5577397072:
    extend(58);
    NEXT();
    goto ***PC;
func_5577398416:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto ***PC;
func_5577399840:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto ***PC;
func_5577399968:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto ***PC;
func_5577400128:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto ***PC;
func_5577400256:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto ***PC;
func_5577399680:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto ***PC;
func_5577400784:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5577400912:
    extend(110);
    extend(117);
    extend(108);
    extend(108);
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
    PC = func_5577394912_op0;
    goto ***PC;
}
