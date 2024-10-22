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
        unsigned loop_limit = 8;
        static void * cf[] = {&&func_5526027488, &&func_5526028048, &&func_5526027856, &&func_5526027616, &&func_5526027792, &&func_5526028272, &&func_5526028400, &&func_5526028192, &&func_5526028752, &&func_5526029184, &&func_5526029120, &&func_5526029376, &&func_5526028944, &&func_5526029504, &&func_5526029968, &&func_5526030096, &&func_5526030224, &&func_5526028816, &&func_5526030608, &&func_5526030800, &&func_5526030928, &&func_5526031056, &&func_5526031184, &&func_5526030736, &&func_5526028672, &&func_5526031568, &&func_5526029712, &&func_5526029840, &&func_5526031776, &&func_5526031904, &&func_5526032032, &&func_5526032208, &&func_5526032352, &&func_5526030352, &&func_5526031696, &&func_5526033120, &&func_5526033248, &&func_5526033408, &&func_5526033536, &&func_5526032960, &&func_5526034064, &&func_5526034192, &&RETURN, &&HALT};
        static void **func_5526027488_op0[2] = { cf+10, cf+42};
        static void **func_5526027488_op1[2] = { cf+13, cf+42};
        static void **func_5526028048_op0[2] = { cf+14, cf+42};
        static void **func_5526028048_op1[2] = { cf+15, cf+42};
        static void **func_5526028048_op2[2] = { cf+16, cf+42};
        static void **func_5526028048_op3[2] = { cf+17, cf+42};
        static void **func_5526028048_op4[2] = { cf+18, cf+42};
        static void **func_5526028048_op5[2] = { cf+19, cf+42};
        static void **func_5526028048_op6[2] = { cf+20, cf+42};
        static void **func_5526028048_op7[2] = { cf+21, cf+42};
        static void **func_5526028048_op8[2] = { cf+22, cf+42};
        static void **func_5526028048_op9[2] = { cf+23, cf+42};
        static void **func_5526027856_op0[2] = { cf+24, cf+42};
        static void **func_5526027856_op1[2] = { cf+9, cf+42};
        static void **func_5526027616_op0[2] = { cf+26, cf+42};
        static void **func_5526027616_op1[2] = { cf+6, cf+42};
        static void **func_5526027792_op0[2] = { cf+1, cf+42};
        static void **func_5526027792_op1[2] = { cf+27, cf+42};
        static void **func_5526028272_op0[2] = { cf+28, cf+42};
        static void **func_5526028272_op1[2] = { cf+31, cf+42};
        static void **func_5526028400_op0[2] = { cf+32, cf+42};
        static void **func_5526028192_op0[2] = { cf+9, cf+43};
        static void **func_5526028752_op0[2] = { cf+34, cf+42};
        static void **func_5526028752_op1[2] = { cf+35, cf+42};
        static void **func_5526028752_op2[2] = { cf+36, cf+42};
        static void **func_5526028752_op3[2] = { cf+37, cf+42};
        static void **func_5526028752_op4[2] = { cf+38, cf+42};
        static void **func_5526029184_op0[2] = { cf+5, cf+42};
        static void **func_5526029184_op1[2] = { cf+0, cf+42};
        static void **func_5526029184_op2[2] = { cf+8, cf+42};
        static void **func_5526029184_op3[2] = { cf+4, cf+42};
        static void **func_5526029184_op4[2] = { cf+39, cf+42};
        static void **func_5526029184_op5[2] = { cf+40, cf+42};
        static void **func_5526029184_op6[2] = { cf+41, cf+42};
        static void **exp_5526029120[4] = {cf+11, cf+2, cf+12, cf+42};
        static void **exp_5526029504[3] = {cf+11, cf+12, cf+42};
        static void **exp_5526028672[4] = {cf+9, cf+25, cf+2, cf+42};
        static void **exp_5526029712[4] = {cf+6, cf+25, cf+3, cf+42};
        static void **exp_5526029840[3] = {cf+1, cf+4, cf+42};
        static void **exp_5526031776[4] = {cf+29, cf+3, cf+30, cf+42};
        static void **exp_5526032208[3] = {cf+29, cf+30, cf+42};
        static void **exp_5526032352[4] = {cf+8, cf+33, cf+9, cf+42};
goto LOOP;

func_5526027488:
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
            PC = func_5526027488_op0;
        break;
        case 1:
            PC = func_5526027488_op1;
        break;
    }
    goto ***PC;
func_5526028048:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5526028048_op0;
        break;
        case 1:
            PC = func_5526028048_op1;
        break;
        case 2:
            PC = func_5526028048_op2;
        break;
        case 3:
            PC = func_5526028048_op3;
        break;
        case 4:
            PC = func_5526028048_op4;
        break;
        case 5:
            PC = func_5526028048_op5;
        break;
        case 6:
            PC = func_5526028048_op6;
        break;
        case 7:
            PC = func_5526028048_op7;
        break;
        case 8:
            PC = func_5526028048_op8;
        break;
        case 9:
            PC = func_5526028048_op9;
        break;
    }
    goto ***PC;
func_5526027856:
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
            PC = func_5526027856_op0;
        break;
        case 1:
            PC = func_5526027856_op1;
        break;
    }
    goto ***PC;
func_5526027616:
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
            PC = func_5526027616_op0;
        break;
        case 1:
            PC = func_5526027616_op1;
        break;
    }
    goto ***PC;
func_5526027792:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5526027792_op0;
        break;
        case 1:
            PC = func_5526027792_op1;
        break;
    }
    goto ***PC;
func_5526028272:
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
            PC = func_5526028272_op0;
        break;
        case 1:
            PC = func_5526028272_op1;
        break;
    }
    goto ***PC;
func_5526028400:
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
            PC = func_5526028400_op0;
        break;
    }
    goto ***PC;
func_5526028192:
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
            PC = func_5526028192_op0;
        break;
    }
    goto ***PC;
func_5526028752:
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
            PC = func_5526028752_op0;
        break;
        case 1:
            PC = func_5526028752_op1;
        break;
        case 2:
            PC = func_5526028752_op2;
        break;
        case 3:
            PC = func_5526028752_op3;
        break;
        case 4:
            PC = func_5526028752_op4;
        break;
    }
    goto ***PC;
func_5526029184:
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
            PC = func_5526029184_op0;
        break;
        case 1:
            PC = func_5526029184_op1;
        break;
        case 2:
            PC = func_5526029184_op2;
        break;
        case 3:
            PC = func_5526029184_op3;
        break;
        case 4:
            PC = func_5526029184_op4;
        break;
        case 5:
            PC = func_5526029184_op5;
        break;
        case 6:
            PC = func_5526029184_op6;
        break;
    }
    goto ***PC;
func_5526029120:
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
    PC = exp_5526029120;
    goto ***PC;
func_5526029376:
    extend(91);
    NEXT();
    goto ***PC;
func_5526028944:
    extend(93);
    NEXT();
    goto ***PC;
func_5526029504:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5526029504;
    goto ***PC;
func_5526029968:
    extend(48);
    NEXT();
    goto ***PC;
func_5526030096:
    extend(49);
    NEXT();
    goto ***PC;
func_5526030224:
    extend(50);
    NEXT();
    goto ***PC;
func_5526028816:
    extend(51);
    NEXT();
    goto ***PC;
func_5526030608:
    extend(52);
    NEXT();
    goto ***PC;
func_5526030800:
    extend(53);
    NEXT();
    goto ***PC;
func_5526030928:
    extend(54);
    NEXT();
    goto ***PC;
func_5526031056:
    extend(55);
    NEXT();
    goto ***PC;
func_5526031184:
    extend(56);
    NEXT();
    goto ***PC;
func_5526030736:
    extend(57);
    NEXT();
    goto ***PC;
func_5526028672:
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
    PC = exp_5526028672;
    goto ***PC;
func_5526031568:
    extend(44);
    NEXT();
    goto ***PC;
func_5526029712:
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
    PC = exp_5526029712;
    goto ***PC;
func_5526029840:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5526029840;
    goto ***PC;
func_5526031776:
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
    PC = exp_5526031776;
    goto ***PC;
func_5526031904:
    extend(123);
    NEXT();
    goto ***PC;
func_5526032032:
    extend(125);
    NEXT();
    goto ***PC;
func_5526032208:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5526032208;
    goto ***PC;
func_5526032352:
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
    PC = exp_5526032352;
    goto ***PC;
func_5526030352:
    extend(58);
    NEXT();
    goto ***PC;
func_5526031696:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto ***PC;
func_5526033120:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto ***PC;
func_5526033248:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto ***PC;
func_5526033408:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto ***PC;
func_5526033536:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto ***PC;
func_5526032960:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto ***PC;
func_5526034064:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5526034192:
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
    PC = func_5526028192_op0;
    goto ***PC;
}
