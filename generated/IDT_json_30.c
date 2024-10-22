#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 30
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
        static void * cf[] = {&&func_5661279104, &&func_5661279680, &&func_5661279488, &&func_5661279248, &&func_5661279424, &&func_5661279904, &&func_5661280032, &&func_5661279824, &&func_5661280384, &&func_5661280816, &&func_5661280752, &&func_5661281008, &&func_5661280576, &&func_5661281136, &&func_5661281600, &&func_5661281728, &&func_5661281856, &&func_5661280448, &&func_5661282240, &&func_5661282432, &&func_5661282560, &&func_5661282688, &&func_5661282816, &&func_5661282368, &&func_5661280304, &&func_5661283200, &&func_5661281344, &&func_5661281472, &&func_5661283408, &&func_5661283536, &&func_5661283664, &&func_5661283840, &&func_5661283984, &&func_5661281984, &&func_5661283328, &&func_5661284752, &&func_5661284880, &&func_5661285040, &&func_5661285168, &&func_5661284592, &&func_5661285696, &&func_5661285824, &&RETURN, &&HALT};
        static void **func_5661279104_op0[2] = { cf+10, cf+42};
        static void **func_5661279104_op1[2] = { cf+13, cf+42};
        static void **func_5661279680_op0[2] = { cf+14, cf+42};
        static void **func_5661279680_op1[2] = { cf+15, cf+42};
        static void **func_5661279680_op2[2] = { cf+16, cf+42};
        static void **func_5661279680_op3[2] = { cf+17, cf+42};
        static void **func_5661279680_op4[2] = { cf+18, cf+42};
        static void **func_5661279680_op5[2] = { cf+19, cf+42};
        static void **func_5661279680_op6[2] = { cf+20, cf+42};
        static void **func_5661279680_op7[2] = { cf+21, cf+42};
        static void **func_5661279680_op8[2] = { cf+22, cf+42};
        static void **func_5661279680_op9[2] = { cf+23, cf+42};
        static void **func_5661279488_op0[2] = { cf+24, cf+42};
        static void **func_5661279488_op1[2] = { cf+9, cf+42};
        static void **func_5661279248_op0[2] = { cf+26, cf+42};
        static void **func_5661279248_op1[2] = { cf+6, cf+42};
        static void **func_5661279424_op0[2] = { cf+1, cf+42};
        static void **func_5661279424_op1[2] = { cf+27, cf+42};
        static void **func_5661279904_op0[2] = { cf+28, cf+42};
        static void **func_5661279904_op1[2] = { cf+31, cf+42};
        static void **func_5661280032_op0[2] = { cf+32, cf+42};
        static void **func_5661279824_op0[2] = { cf+9, cf+43};
        static void **func_5661280384_op0[2] = { cf+34, cf+42};
        static void **func_5661280384_op1[2] = { cf+35, cf+42};
        static void **func_5661280384_op2[2] = { cf+36, cf+42};
        static void **func_5661280384_op3[2] = { cf+37, cf+42};
        static void **func_5661280384_op4[2] = { cf+38, cf+42};
        static void **func_5661280816_op0[2] = { cf+5, cf+42};
        static void **func_5661280816_op1[2] = { cf+0, cf+42};
        static void **func_5661280816_op2[2] = { cf+8, cf+42};
        static void **func_5661280816_op3[2] = { cf+4, cf+42};
        static void **func_5661280816_op4[2] = { cf+39, cf+42};
        static void **func_5661280816_op5[2] = { cf+40, cf+42};
        static void **func_5661280816_op6[2] = { cf+41, cf+42};
        static void **exp_5661280752[4] = {cf+11, cf+2, cf+12, cf+42};
        static void **exp_5661281136[3] = {cf+11, cf+12, cf+42};
        static void **exp_5661280304[4] = {cf+9, cf+25, cf+2, cf+42};
        static void **exp_5661281344[4] = {cf+6, cf+25, cf+3, cf+42};
        static void **exp_5661281472[3] = {cf+1, cf+4, cf+42};
        static void **exp_5661283408[4] = {cf+29, cf+3, cf+30, cf+42};
        static void **exp_5661283840[3] = {cf+29, cf+30, cf+42};
        static void **exp_5661283984[4] = {cf+8, cf+33, cf+9, cf+42};
goto LOOP;

func_5661279104:
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
            PC = func_5661279104_op0;
        break;
        case 1:
            PC = func_5661279104_op1;
        break;
    }
    goto ***PC;
func_5661279680:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5661279680_op0;
        break;
        case 1:
            PC = func_5661279680_op1;
        break;
        case 2:
            PC = func_5661279680_op2;
        break;
        case 3:
            PC = func_5661279680_op3;
        break;
        case 4:
            PC = func_5661279680_op4;
        break;
        case 5:
            PC = func_5661279680_op5;
        break;
        case 6:
            PC = func_5661279680_op6;
        break;
        case 7:
            PC = func_5661279680_op7;
        break;
        case 8:
            PC = func_5661279680_op8;
        break;
        case 9:
            PC = func_5661279680_op9;
        break;
    }
    goto ***PC;
func_5661279488:
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
            PC = func_5661279488_op0;
        break;
        case 1:
            PC = func_5661279488_op1;
        break;
    }
    goto ***PC;
func_5661279248:
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
            PC = func_5661279248_op0;
        break;
        case 1:
            PC = func_5661279248_op1;
        break;
    }
    goto ***PC;
func_5661279424:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5661279424_op0;
        break;
        case 1:
            PC = func_5661279424_op1;
        break;
    }
    goto ***PC;
func_5661279904:
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
            PC = func_5661279904_op0;
        break;
        case 1:
            PC = func_5661279904_op1;
        break;
    }
    goto ***PC;
func_5661280032:
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
            PC = func_5661280032_op0;
        break;
    }
    goto ***PC;
func_5661279824:
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
            PC = func_5661279824_op0;
        break;
    }
    goto ***PC;
func_5661280384:
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
            PC = func_5661280384_op0;
        break;
        case 1:
            PC = func_5661280384_op1;
        break;
        case 2:
            PC = func_5661280384_op2;
        break;
        case 3:
            PC = func_5661280384_op3;
        break;
        case 4:
            PC = func_5661280384_op4;
        break;
    }
    goto ***PC;
func_5661280816:
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
            PC = func_5661280816_op0;
        break;
        case 1:
            PC = func_5661280816_op1;
        break;
        case 2:
            PC = func_5661280816_op2;
        break;
        case 3:
            PC = func_5661280816_op3;
        break;
        case 4:
            PC = func_5661280816_op4;
        break;
        case 5:
            PC = func_5661280816_op5;
        break;
        case 6:
            PC = func_5661280816_op6;
        break;
    }
    goto ***PC;
func_5661280752:
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
    PC = exp_5661280752;
    goto ***PC;
func_5661281008:
    extend(91);
    NEXT();
    goto ***PC;
func_5661280576:
    extend(93);
    NEXT();
    goto ***PC;
func_5661281136:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5661281136;
    goto ***PC;
func_5661281600:
    extend(48);
    NEXT();
    goto ***PC;
func_5661281728:
    extend(49);
    NEXT();
    goto ***PC;
func_5661281856:
    extend(50);
    NEXT();
    goto ***PC;
func_5661280448:
    extend(51);
    NEXT();
    goto ***PC;
func_5661282240:
    extend(52);
    NEXT();
    goto ***PC;
func_5661282432:
    extend(53);
    NEXT();
    goto ***PC;
func_5661282560:
    extend(54);
    NEXT();
    goto ***PC;
func_5661282688:
    extend(55);
    NEXT();
    goto ***PC;
func_5661282816:
    extend(56);
    NEXT();
    goto ***PC;
func_5661282368:
    extend(57);
    NEXT();
    goto ***PC;
func_5661280304:
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
    PC = exp_5661280304;
    goto ***PC;
func_5661283200:
    extend(44);
    NEXT();
    goto ***PC;
func_5661281344:
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
    PC = exp_5661281344;
    goto ***PC;
func_5661281472:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5661281472;
    goto ***PC;
func_5661283408:
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
    PC = exp_5661283408;
    goto ***PC;
func_5661283536:
    extend(123);
    NEXT();
    goto ***PC;
func_5661283664:
    extend(125);
    NEXT();
    goto ***PC;
func_5661283840:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5661283840;
    goto ***PC;
func_5661283984:
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
    PC = exp_5661283984;
    goto ***PC;
func_5661281984:
    extend(58);
    NEXT();
    goto ***PC;
func_5661283328:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto ***PC;
func_5661284752:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto ***PC;
func_5661284880:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto ***PC;
func_5661285040:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto ***PC;
func_5661285168:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto ***PC;
func_5661284592:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto ***PC;
func_5661285696:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5661285824:
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
    PC = func_5661279824_op0;
    goto ***PC;
}
