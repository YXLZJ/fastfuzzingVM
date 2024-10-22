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
        unsigned loop_limit = 16;
        static void * cf[] = {&&func_5182101024, &&func_5182101392, &&func_5182101808, &&func_5182101904, &&func_5182101680, &&func_5182101600, &&func_5182102304, &&func_5182101520, &&func_5182102032, &&func_5182102560, &&func_5182102224, &&func_5182102496, &&func_5182102912, &&func_5182103280, &&func_5182103120, &&func_5182102848, &&func_5182103040, &&func_5182102096, &&func_5182104144, &&func_5182104272, &&func_5182104400, &&func_5182104528, &&func_5182104656, &&func_5182104784, &&func_5182105168, &&func_5182102752, &&func_5182105360, &&func_5182105488, &&func_5182105616, &&func_5182105808, &&func_5182105936, &&func_5182106064, &&func_5182106192, &&func_5182105744, &&func_5182106768, &&func_5182106896, &&func_5182103936, &&func_5182104064, &&func_5182105072, &&func_5182107248, &&func_5182107376, &&func_5182104912, &&func_5182108144, &&func_5182108272, &&func_5182103408, &&func_5182107920, &&func_5182108592, &&func_5182108720, &&func_5182108848, &&func_5182108976, &&func_5182109168, &&func_5182109296, &&func_5182109424, &&func_5182109552, &&func_5182109104, &&func_5182110320, &&func_5182107568, &&func_5182110144, &&func_5182107744, &&func_5182109808, &&func_5182109936, &&func_5182110448, &&func_5182111296, &&func_5182111424, &&func_5182110576, &&func_5182106256, &&func_5182111232, &&func_5182106624, &&RETURN, &&HALT};
        static void **func_5182101024_op0[2] = { cf+15, cf+68};
        static void **func_5182101392_op0[2] = { cf+18, cf+68};
        static void **func_5182101392_op1[2] = { cf+20, cf+68};
        static void **func_5182101392_op2[2] = { cf+22, cf+68};
        static void **func_5182101808_op0[2] = { cf+24, cf+68};
        static void **func_5182101808_op1[2] = { cf+25, cf+68};
        static void **func_5182101808_op2[2] = { cf+26, cf+68};
        static void **func_5182101808_op3[2] = { cf+27, cf+68};
        static void **func_5182101808_op4[2] = { cf+28, cf+68};
        static void **func_5182101808_op5[2] = { cf+29, cf+68};
        static void **func_5182101808_op6[2] = { cf+30, cf+68};
        static void **func_5182101808_op7[2] = { cf+31, cf+68};
        static void **func_5182101808_op8[2] = { cf+32, cf+68};
        static void **func_5182101808_op9[2] = { cf+33, cf+68};
        static void **func_5182101904_op0[2] = { cf+34, cf+68};
        static void **func_5182101904_op1[2] = { cf+36, cf+68};
        static void **func_5182101904_op2[2] = { cf+13, cf+68};
        static void **func_5182101680_op0[2] = { cf+38, cf+68};
        static void **func_5182101680_op1[2] = { cf+8, cf+68};
        static void **func_5182101680_op2[2] = { cf+6, cf+68};
        static void **func_5182101600_op0[2] = { cf+41, cf+68};
        static void **func_5182102304_op0[2] = { cf+45, cf+68};
        static void **func_5182102304_op1[2] = { cf+46, cf+68};
        static void **func_5182102304_op2[2] = { cf+47, cf+68};
        static void **func_5182102304_op3[2] = { cf+48, cf+68};
        static void **func_5182102304_op4[2] = { cf+49, cf+68};
        static void **func_5182102304_op5[2] = { cf+50, cf+68};
        static void **func_5182102304_op6[2] = { cf+51, cf+68};
        static void **func_5182102304_op7[2] = { cf+52, cf+68};
        static void **func_5182102304_op8[2] = { cf+53, cf+68};
        static void **func_5182101520_op0[2] = { cf+54, cf+68};
        static void **func_5182101520_op1[2] = { cf+56, cf+68};
        static void **func_5182102032_op0[2] = { cf+2, cf+68};
        static void **func_5182102032_op1[2] = { cf+58, cf+68};
        static void **func_5182102560_op0[2] = { cf+59, cf+68};
        static void **func_5182102224_op0[2] = { cf+61, cf+68};
        static void **func_5182102496_op0[2] = { cf+10, cf+69};
        static void **func_5182102912_op0[2] = { cf+7, cf+68};
        static void **func_5182102912_op1[2] = { cf+14, cf+68};
        static void **func_5182102912_op2[2] = { cf+5, cf+68};
        static void **func_5182102912_op3[2] = { cf+0, cf+68};
        static void **func_5182102912_op4[2] = { cf+9, cf+68};
        static void **func_5182103280_op0[2] = { cf+62, cf+68};
        static void **func_5182103280_op1[2] = { cf+64, cf+68};
        static void **func_5182103280_op2[2] = { cf+4, cf+68};
        static void **func_5182103120_op0[2] = { cf+66, cf+68};
        static void **exp_5182102848[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_5182104144[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_5182104400[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_5182104656[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_5182106768[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_5182103936[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_5182105072[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_5182104912[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5182109104[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5182107568[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5182107744[3] = {cf+2, cf+8, cf+68};
        static void **exp_5182109808[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_5182110448[3] = {cf+12, cf+10, cf+68};
        static void **exp_5182111296[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_5182110576[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_5182111232[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_5182101024:
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
            PC = func_5182101024_op0;
        break;
    }
    goto ***PC;
func_5182101392:
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
            PC = func_5182101392_op0;
        break;
        case 1:
            PC = func_5182101392_op1;
        break;
        case 2:
            PC = func_5182101392_op2;
        break;
    }
    goto ***PC;
func_5182101808:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5182101808_op0;
        break;
        case 1:
            PC = func_5182101808_op1;
        break;
        case 2:
            PC = func_5182101808_op2;
        break;
        case 3:
            PC = func_5182101808_op3;
        break;
        case 4:
            PC = func_5182101808_op4;
        break;
        case 5:
            PC = func_5182101808_op5;
        break;
        case 6:
            PC = func_5182101808_op6;
        break;
        case 7:
            PC = func_5182101808_op7;
        break;
        case 8:
            PC = func_5182101808_op8;
        break;
        case 9:
            PC = func_5182101808_op9;
        break;
    }
    goto ***PC;
func_5182101904:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5182101904_op0;
        break;
        case 1:
            PC = func_5182101904_op1;
        break;
        case 2:
            PC = func_5182101904_op2;
        break;
    }
    goto ***PC;
func_5182101680:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5182101680_op0;
        break;
        case 1:
            PC = func_5182101680_op1;
        break;
        case 2:
            PC = func_5182101680_op2;
        break;
    }
    goto ***PC;
func_5182101600:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5182101600_op0;
        break;
    }
    goto ***PC;
func_5182102304:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5182102304_op0;
        break;
        case 1:
            PC = func_5182102304_op1;
        break;
        case 2:
            PC = func_5182102304_op2;
        break;
        case 3:
            PC = func_5182102304_op3;
        break;
        case 4:
            PC = func_5182102304_op4;
        break;
        case 5:
            PC = func_5182102304_op5;
        break;
        case 6:
            PC = func_5182102304_op6;
        break;
        case 7:
            PC = func_5182102304_op7;
        break;
        case 8:
            PC = func_5182102304_op8;
        break;
    }
    goto ***PC;
func_5182101520:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5182101520_op0;
        break;
        case 1:
            PC = func_5182101520_op1;
        break;
    }
    goto ***PC;
func_5182102032:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5182102032_op0;
        break;
        case 1:
            PC = func_5182102032_op1;
        break;
    }
    goto ***PC;
func_5182102560:
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
            PC = func_5182102560_op0;
        break;
    }
    goto ***PC;
func_5182102224:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5182102224_op0;
        break;
    }
    goto ***PC;
func_5182102496:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5182102496_op0;
        break;
    }
    goto ***PC;
func_5182102912:
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
            PC = func_5182102912_op0;
        break;
        case 1:
            PC = func_5182102912_op1;
        break;
        case 2:
            PC = func_5182102912_op2;
        break;
        case 3:
            PC = func_5182102912_op3;
        break;
        case 4:
            PC = func_5182102912_op4;
        break;
    }
    goto ***PC;
func_5182103280:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5182103280_op0;
        break;
        case 1:
            PC = func_5182103280_op1;
        break;
        case 2:
            PC = func_5182103280_op2;
        break;
    }
    goto ***PC;
func_5182103120:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5182103120_op0;
        break;
    }
    goto ***PC;
func_5182102848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182102848;
    goto ***PC;
func_5182103040:
    extend(61);
    NEXT();
    goto ***PC;
func_5182102096:
    extend(59);
    NEXT();
    goto ***PC;
func_5182104144:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182104144;
    goto ***PC;
func_5182104272:
    extend(62);
    NEXT();
    goto ***PC;
func_5182104400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182104400;
    goto ***PC;
func_5182104528:
    extend(60);
    NEXT();
    goto ***PC;
func_5182104656:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182104656;
    goto ***PC;
func_5182104784:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5182105168:
    extend(48);
    NEXT();
    goto ***PC;
func_5182102752:
    extend(49);
    NEXT();
    goto ***PC;
func_5182105360:
    extend(50);
    NEXT();
    goto ***PC;
func_5182105488:
    extend(51);
    NEXT();
    goto ***PC;
func_5182105616:
    extend(52);
    NEXT();
    goto ***PC;
func_5182105808:
    extend(53);
    NEXT();
    goto ***PC;
func_5182105936:
    extend(54);
    NEXT();
    goto ***PC;
func_5182106064:
    extend(55);
    NEXT();
    goto ***PC;
func_5182106192:
    extend(56);
    NEXT();
    goto ***PC;
func_5182105744:
    extend(57);
    NEXT();
    goto ***PC;
func_5182106768:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182106768;
    goto ***PC;
func_5182106896:
    extend(43);
    NEXT();
    goto ***PC;
func_5182103936:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182103936;
    goto ***PC;
func_5182104064:
    extend(45);
    NEXT();
    goto ***PC;
func_5182105072:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182105072;
    goto ***PC;
func_5182107248:
    extend(40);
    NEXT();
    goto ***PC;
func_5182107376:
    extend(41);
    NEXT();
    goto ***PC;
func_5182104912:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182104912;
    goto ***PC;
func_5182108144:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_5182108272:
    extend(123);
    NEXT();
    goto ***PC;
func_5182103408:
    extend(125);
    NEXT();
    goto ***PC;
func_5182107920:
    extend(105);
    NEXT();
    goto ***PC;
func_5182108592:
    extend(106);
    NEXT();
    goto ***PC;
func_5182108720:
    extend(107);
    NEXT();
    goto ***PC;
func_5182108848:
    extend(120);
    NEXT();
    goto ***PC;
func_5182108976:
    extend(121);
    NEXT();
    goto ***PC;
func_5182109168:
    extend(122);
    NEXT();
    goto ***PC;
func_5182109296:
    extend(97);
    NEXT();
    goto ***PC;
func_5182109424:
    extend(98);
    NEXT();
    goto ***PC;
func_5182109552:
    extend(99);
    NEXT();
    goto ***PC;
func_5182109104:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182109104;
    goto ***PC;
func_5182110320:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5182107568:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182107568;
    goto ***PC;
func_5182110144:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5182107744:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182107744;
    goto ***PC;
func_5182109808:
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
    PC = exp_5182109808;
    goto ***PC;
func_5182109936:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5182110448:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182110448;
    goto ***PC;
func_5182111296:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182111296;
    goto ***PC;
func_5182111424:
    extend(42);
    NEXT();
    goto ***PC;
func_5182110576:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182110576;
    goto ***PC;
func_5182106256:
    extend(47);
    NEXT();
    goto ***PC;
func_5182111232:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5182111232;
    goto ***PC;
func_5182106624:
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
    PC = func_5182102496_op0;
    goto ***PC;
}
