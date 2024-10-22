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
        unsigned loop_limit = 8;
        static void * cf[] = {&&func_5324700896, &&func_5324701456, &&func_5324701264, &&func_5324701024, &&func_5324701200, &&func_5324701680, &&func_5324701808, &&func_5324701600, &&func_5324702160, &&func_5324702592, &&func_5324702528, &&func_5324702784, &&func_5324702352, &&func_5324702912, &&func_5324703376, &&func_5324703504, &&func_5324703632, &&func_5324702224, &&func_5324704016, &&func_5324704208, &&func_5324704336, &&func_5324704464, &&func_5324704592, &&func_5324704144, &&func_5324702080, &&func_5324704976, &&func_5324703120, &&func_5324703248, &&func_5324705184, &&func_5324705312, &&func_5324705440, &&func_5324705616, &&func_5324705760, &&func_5324703760, &&func_5324705104, &&func_5324706528, &&func_5324706656, &&func_5324706816, &&func_5324706944, &&func_5324706368, &&func_5324707472, &&func_5324707600, &&RETURN, &&HALT};
        static void **func_5324700896_op0[2] = { cf+10, cf+42};
        static void **func_5324700896_op1[2] = { cf+13, cf+42};
        static void **func_5324701456_op0[2] = { cf+14, cf+42};
        static void **func_5324701456_op1[2] = { cf+15, cf+42};
        static void **func_5324701456_op2[2] = { cf+16, cf+42};
        static void **func_5324701456_op3[2] = { cf+17, cf+42};
        static void **func_5324701456_op4[2] = { cf+18, cf+42};
        static void **func_5324701456_op5[2] = { cf+19, cf+42};
        static void **func_5324701456_op6[2] = { cf+20, cf+42};
        static void **func_5324701456_op7[2] = { cf+21, cf+42};
        static void **func_5324701456_op8[2] = { cf+22, cf+42};
        static void **func_5324701456_op9[2] = { cf+23, cf+42};
        static void **func_5324701264_op0[2] = { cf+24, cf+42};
        static void **func_5324701264_op1[2] = { cf+9, cf+42};
        static void **func_5324701024_op0[2] = { cf+26, cf+42};
        static void **func_5324701024_op1[2] = { cf+6, cf+42};
        static void **func_5324701200_op0[2] = { cf+1, cf+42};
        static void **func_5324701200_op1[2] = { cf+27, cf+42};
        static void **func_5324701680_op0[2] = { cf+28, cf+42};
        static void **func_5324701680_op1[2] = { cf+31, cf+42};
        static void **func_5324701808_op0[2] = { cf+32, cf+42};
        static void **func_5324701600_op0[2] = { cf+9, cf+43};
        static void **func_5324702160_op0[2] = { cf+34, cf+42};
        static void **func_5324702160_op1[2] = { cf+35, cf+42};
        static void **func_5324702160_op2[2] = { cf+36, cf+42};
        static void **func_5324702160_op3[2] = { cf+37, cf+42};
        static void **func_5324702160_op4[2] = { cf+38, cf+42};
        static void **func_5324702592_op0[2] = { cf+5, cf+42};
        static void **func_5324702592_op1[2] = { cf+0, cf+42};
        static void **func_5324702592_op2[2] = { cf+8, cf+42};
        static void **func_5324702592_op3[2] = { cf+4, cf+42};
        static void **func_5324702592_op4[2] = { cf+39, cf+42};
        static void **func_5324702592_op5[2] = { cf+40, cf+42};
        static void **func_5324702592_op6[2] = { cf+41, cf+42};
        static void **exp_5324702528[4] = {cf+11, cf+2, cf+12, cf+42};
        static void **exp_5324702912[3] = {cf+11, cf+12, cf+42};
        static void **exp_5324702080[4] = {cf+9, cf+25, cf+2, cf+42};
        static void **exp_5324703120[4] = {cf+6, cf+25, cf+3, cf+42};
        static void **exp_5324703248[3] = {cf+1, cf+4, cf+42};
        static void **exp_5324705184[4] = {cf+29, cf+3, cf+30, cf+42};
        static void **exp_5324705616[3] = {cf+29, cf+30, cf+42};
        static void **exp_5324705760[4] = {cf+8, cf+33, cf+9, cf+42};
goto LOOP;

func_5324700896:
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
            PC = func_5324700896_op0;
        break;
        case 1:
            PC = func_5324700896_op1;
        break;
    }
    goto ***PC;
func_5324701456:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5324701456_op0;
        break;
        case 1:
            PC = func_5324701456_op1;
        break;
        case 2:
            PC = func_5324701456_op2;
        break;
        case 3:
            PC = func_5324701456_op3;
        break;
        case 4:
            PC = func_5324701456_op4;
        break;
        case 5:
            PC = func_5324701456_op5;
        break;
        case 6:
            PC = func_5324701456_op6;
        break;
        case 7:
            PC = func_5324701456_op7;
        break;
        case 8:
            PC = func_5324701456_op8;
        break;
        case 9:
            PC = func_5324701456_op9;
        break;
    }
    goto ***PC;
func_5324701264:
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
            PC = func_5324701264_op0;
        break;
        case 1:
            PC = func_5324701264_op1;
        break;
    }
    goto ***PC;
func_5324701024:
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
            PC = func_5324701024_op0;
        break;
        case 1:
            PC = func_5324701024_op1;
        break;
    }
    goto ***PC;
func_5324701200:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5324701200_op0;
        break;
        case 1:
            PC = func_5324701200_op1;
        break;
    }
    goto ***PC;
func_5324701680:
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
            PC = func_5324701680_op0;
        break;
        case 1:
            PC = func_5324701680_op1;
        break;
    }
    goto ***PC;
func_5324701808:
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
            PC = func_5324701808_op0;
        break;
    }
    goto ***PC;
func_5324701600:
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
            PC = func_5324701600_op0;
        break;
    }
    goto ***PC;
func_5324702160:
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
            PC = func_5324702160_op0;
        break;
        case 1:
            PC = func_5324702160_op1;
        break;
        case 2:
            PC = func_5324702160_op2;
        break;
        case 3:
            PC = func_5324702160_op3;
        break;
        case 4:
            PC = func_5324702160_op4;
        break;
    }
    goto ***PC;
func_5324702592:
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
            PC = func_5324702592_op0;
        break;
        case 1:
            PC = func_5324702592_op1;
        break;
        case 2:
            PC = func_5324702592_op2;
        break;
        case 3:
            PC = func_5324702592_op3;
        break;
        case 4:
            PC = func_5324702592_op4;
        break;
        case 5:
            PC = func_5324702592_op5;
        break;
        case 6:
            PC = func_5324702592_op6;
        break;
    }
    goto ***PC;
func_5324702528:
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
    PC = exp_5324702528;
    goto ***PC;
func_5324702784:
    extend(91);
    NEXT();
    goto ***PC;
func_5324702352:
    extend(93);
    NEXT();
    goto ***PC;
func_5324702912:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5324702912;
    goto ***PC;
func_5324703376:
    extend(48);
    NEXT();
    goto ***PC;
func_5324703504:
    extend(49);
    NEXT();
    goto ***PC;
func_5324703632:
    extend(50);
    NEXT();
    goto ***PC;
func_5324702224:
    extend(51);
    NEXT();
    goto ***PC;
func_5324704016:
    extend(52);
    NEXT();
    goto ***PC;
func_5324704208:
    extend(53);
    NEXT();
    goto ***PC;
func_5324704336:
    extend(54);
    NEXT();
    goto ***PC;
func_5324704464:
    extend(55);
    NEXT();
    goto ***PC;
func_5324704592:
    extend(56);
    NEXT();
    goto ***PC;
func_5324704144:
    extend(57);
    NEXT();
    goto ***PC;
func_5324702080:
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
    PC = exp_5324702080;
    goto ***PC;
func_5324704976:
    extend(44);
    NEXT();
    goto ***PC;
func_5324703120:
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
    PC = exp_5324703120;
    goto ***PC;
func_5324703248:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5324703248;
    goto ***PC;
func_5324705184:
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
    PC = exp_5324705184;
    goto ***PC;
func_5324705312:
    extend(123);
    NEXT();
    goto ***PC;
func_5324705440:
    extend(125);
    NEXT();
    goto ***PC;
func_5324705616:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5324705616;
    goto ***PC;
func_5324705760:
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
    PC = exp_5324705760;
    goto ***PC;
func_5324703760:
    extend(58);
    NEXT();
    goto ***PC;
func_5324705104:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto ***PC;
func_5324706528:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto ***PC;
func_5324706656:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto ***PC;
func_5324706816:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto ***PC;
func_5324706944:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto ***PC;
func_5324706368:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto ***PC;
func_5324707472:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5324707600:
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
    PC = func_5324701600_op0;
    goto ***PC;
}
