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
        unsigned loop_limit = 8;
        static void * cf[] = {&&func_5794462944, &&func_5794463504, &&func_5794463312, &&func_5794463072, &&func_5794463248, &&func_5794463728, &&func_5794463856, &&func_5794463648, &&func_5794464208, &&func_5794464640, &&func_5794464576, &&func_5794464832, &&func_5794464400, &&func_5794464960, &&func_5794465424, &&func_5794465552, &&func_5794465680, &&func_5794464272, &&func_5794466064, &&func_5794466256, &&func_5794466384, &&func_5794466512, &&func_5794466640, &&func_5794466192, &&func_5794464128, &&func_5794467024, &&func_5794465168, &&func_5794465296, &&func_5794467232, &&func_5794467360, &&func_5794467488, &&func_5794467664, &&func_5794467808, &&func_5794465808, &&func_5794467152, &&func_5794468576, &&func_5794468704, &&func_5794468864, &&func_5794468992, &&func_5794468416, &&func_5794469520, &&func_5794469648, &&RETURN, &&HALT};
        static void **func_5794462944_op0[2] = { cf+10, cf+42};
        static void **func_5794462944_op1[2] = { cf+13, cf+42};
        static void **func_5794463504_op0[2] = { cf+14, cf+42};
        static void **func_5794463504_op1[2] = { cf+15, cf+42};
        static void **func_5794463504_op2[2] = { cf+16, cf+42};
        static void **func_5794463504_op3[2] = { cf+17, cf+42};
        static void **func_5794463504_op4[2] = { cf+18, cf+42};
        static void **func_5794463504_op5[2] = { cf+19, cf+42};
        static void **func_5794463504_op6[2] = { cf+20, cf+42};
        static void **func_5794463504_op7[2] = { cf+21, cf+42};
        static void **func_5794463504_op8[2] = { cf+22, cf+42};
        static void **func_5794463504_op9[2] = { cf+23, cf+42};
        static void **func_5794463312_op0[2] = { cf+24, cf+42};
        static void **func_5794463312_op1[2] = { cf+9, cf+42};
        static void **func_5794463072_op0[2] = { cf+26, cf+42};
        static void **func_5794463072_op1[2] = { cf+6, cf+42};
        static void **func_5794463248_op0[2] = { cf+1, cf+42};
        static void **func_5794463248_op1[2] = { cf+27, cf+42};
        static void **func_5794463728_op0[2] = { cf+28, cf+42};
        static void **func_5794463728_op1[2] = { cf+31, cf+42};
        static void **func_5794463856_op0[2] = { cf+32, cf+42};
        static void **func_5794463648_op0[2] = { cf+9, cf+43};
        static void **func_5794464208_op0[2] = { cf+34, cf+42};
        static void **func_5794464208_op1[2] = { cf+35, cf+42};
        static void **func_5794464208_op2[2] = { cf+36, cf+42};
        static void **func_5794464208_op3[2] = { cf+37, cf+42};
        static void **func_5794464208_op4[2] = { cf+38, cf+42};
        static void **func_5794464640_op0[2] = { cf+5, cf+42};
        static void **func_5794464640_op1[2] = { cf+0, cf+42};
        static void **func_5794464640_op2[2] = { cf+8, cf+42};
        static void **func_5794464640_op3[2] = { cf+4, cf+42};
        static void **func_5794464640_op4[2] = { cf+39, cf+42};
        static void **func_5794464640_op5[2] = { cf+40, cf+42};
        static void **func_5794464640_op6[2] = { cf+41, cf+42};
        static void **exp_5794464576[4] = {cf+11, cf+2, cf+12, cf+42};
        static void **exp_5794464960[3] = {cf+11, cf+12, cf+42};
        static void **exp_5794464128[4] = {cf+9, cf+25, cf+2, cf+42};
        static void **exp_5794465168[4] = {cf+6, cf+25, cf+3, cf+42};
        static void **exp_5794465296[3] = {cf+1, cf+4, cf+42};
        static void **exp_5794467232[4] = {cf+29, cf+3, cf+30, cf+42};
        static void **exp_5794467664[3] = {cf+29, cf+30, cf+42};
        static void **exp_5794467808[4] = {cf+8, cf+33, cf+9, cf+42};
goto LOOP;

func_5794462944:
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
            PC = func_5794462944_op0;
        break;
        case 1:
            PC = func_5794462944_op1;
        break;
    }
    goto ***PC;
func_5794463504:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5794463504_op0;
        break;
        case 1:
            PC = func_5794463504_op1;
        break;
        case 2:
            PC = func_5794463504_op2;
        break;
        case 3:
            PC = func_5794463504_op3;
        break;
        case 4:
            PC = func_5794463504_op4;
        break;
        case 5:
            PC = func_5794463504_op5;
        break;
        case 6:
            PC = func_5794463504_op6;
        break;
        case 7:
            PC = func_5794463504_op7;
        break;
        case 8:
            PC = func_5794463504_op8;
        break;
        case 9:
            PC = func_5794463504_op9;
        break;
    }
    goto ***PC;
func_5794463312:
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
            PC = func_5794463312_op0;
        break;
        case 1:
            PC = func_5794463312_op1;
        break;
    }
    goto ***PC;
func_5794463072:
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
            PC = func_5794463072_op0;
        break;
        case 1:
            PC = func_5794463072_op1;
        break;
    }
    goto ***PC;
func_5794463248:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5794463248_op0;
        break;
        case 1:
            PC = func_5794463248_op1;
        break;
    }
    goto ***PC;
func_5794463728:
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
            PC = func_5794463728_op0;
        break;
        case 1:
            PC = func_5794463728_op1;
        break;
    }
    goto ***PC;
func_5794463856:
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
            PC = func_5794463856_op0;
        break;
    }
    goto ***PC;
func_5794463648:
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
            PC = func_5794463648_op0;
        break;
    }
    goto ***PC;
func_5794464208:
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
            PC = func_5794464208_op0;
        break;
        case 1:
            PC = func_5794464208_op1;
        break;
        case 2:
            PC = func_5794464208_op2;
        break;
        case 3:
            PC = func_5794464208_op3;
        break;
        case 4:
            PC = func_5794464208_op4;
        break;
    }
    goto ***PC;
func_5794464640:
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
            PC = func_5794464640_op0;
        break;
        case 1:
            PC = func_5794464640_op1;
        break;
        case 2:
            PC = func_5794464640_op2;
        break;
        case 3:
            PC = func_5794464640_op3;
        break;
        case 4:
            PC = func_5794464640_op4;
        break;
        case 5:
            PC = func_5794464640_op5;
        break;
        case 6:
            PC = func_5794464640_op6;
        break;
    }
    goto ***PC;
func_5794464576:
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
    PC = exp_5794464576;
    goto ***PC;
func_5794464832:
    extend(91);
    NEXT();
    goto ***PC;
func_5794464400:
    extend(93);
    NEXT();
    goto ***PC;
func_5794464960:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5794464960;
    goto ***PC;
func_5794465424:
    extend(48);
    NEXT();
    goto ***PC;
func_5794465552:
    extend(49);
    NEXT();
    goto ***PC;
func_5794465680:
    extend(50);
    NEXT();
    goto ***PC;
func_5794464272:
    extend(51);
    NEXT();
    goto ***PC;
func_5794466064:
    extend(52);
    NEXT();
    goto ***PC;
func_5794466256:
    extend(53);
    NEXT();
    goto ***PC;
func_5794466384:
    extend(54);
    NEXT();
    goto ***PC;
func_5794466512:
    extend(55);
    NEXT();
    goto ***PC;
func_5794466640:
    extend(56);
    NEXT();
    goto ***PC;
func_5794466192:
    extend(57);
    NEXT();
    goto ***PC;
func_5794464128:
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
    PC = exp_5794464128;
    goto ***PC;
func_5794467024:
    extend(44);
    NEXT();
    goto ***PC;
func_5794465168:
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
    PC = exp_5794465168;
    goto ***PC;
func_5794465296:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5794465296;
    goto ***PC;
func_5794467232:
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
    PC = exp_5794467232;
    goto ***PC;
func_5794467360:
    extend(123);
    NEXT();
    goto ***PC;
func_5794467488:
    extend(125);
    NEXT();
    goto ***PC;
func_5794467664:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5794467664;
    goto ***PC;
func_5794467808:
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
    PC = exp_5794467808;
    goto ***PC;
func_5794465808:
    extend(58);
    NEXT();
    goto ***PC;
func_5794467152:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto ***PC;
func_5794468576:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto ***PC;
func_5794468704:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto ***PC;
func_5794468864:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto ***PC;
func_5794468992:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto ***PC;
func_5794468416:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto ***PC;
func_5794469520:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5794469648:
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
    PC = func_5794463648_op0;
    goto ***PC;
}
