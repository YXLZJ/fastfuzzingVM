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
        static void * cf[] = {&&func_4922054176, &&func_4922054544, &&func_4922054960, &&func_4922055056, &&func_4922054832, &&func_4922054752, &&func_4922055456, &&func_4922054672, &&func_4922055184, &&func_4922055712, &&func_4922055376, &&func_4922055648, &&func_4922056064, &&func_4922056432, &&func_4922056272, &&func_4922056000, &&func_4922056192, &&func_4922055248, &&func_4922057296, &&func_4922057424, &&func_4922057552, &&func_4922057680, &&func_4922057808, &&func_4922057936, &&func_4922058320, &&func_4922055904, &&func_4922058512, &&func_4922058640, &&func_4922058768, &&func_4922058960, &&func_4922059088, &&func_4922059216, &&func_4922059344, &&func_4922058896, &&func_4922059920, &&func_4922060048, &&func_4922057088, &&func_4922057216, &&func_4922058224, &&func_4922060400, &&func_4922060528, &&func_4922058064, &&func_4922061296, &&func_4923080896, &&func_4923080832, &&func_4923081776, &&func_4923081920, &&func_4923082064, &&func_4923082224, &&func_4923082352, &&func_4923082544, &&func_4923082672, &&func_4923082800, &&func_4923082928, &&func_4923081632, &&func_4923083632, &&func_4923081296, &&func_4923083520, &&func_4923081504, &&func_4923081424, &&func_4923083248, &&func_4923083424, &&func_4923083952, &&func_4923084672, &&func_4923083824, &&func_4923084800, &&func_4923084608, &&func_4923085232, &&RETURN, &&HALT};
        static void **func_4922054176_op0[2] = { cf+15, cf+68};
        static void **func_4922054544_op0[2] = { cf+18, cf+68};
        static void **func_4922054544_op1[2] = { cf+20, cf+68};
        static void **func_4922054544_op2[2] = { cf+22, cf+68};
        static void **func_4922054960_op0[2] = { cf+24, cf+68};
        static void **func_4922054960_op1[2] = { cf+25, cf+68};
        static void **func_4922054960_op2[2] = { cf+26, cf+68};
        static void **func_4922054960_op3[2] = { cf+27, cf+68};
        static void **func_4922054960_op4[2] = { cf+28, cf+68};
        static void **func_4922054960_op5[2] = { cf+29, cf+68};
        static void **func_4922054960_op6[2] = { cf+30, cf+68};
        static void **func_4922054960_op7[2] = { cf+31, cf+68};
        static void **func_4922054960_op8[2] = { cf+32, cf+68};
        static void **func_4922054960_op9[2] = { cf+33, cf+68};
        static void **func_4922055056_op0[2] = { cf+34, cf+68};
        static void **func_4922055056_op1[2] = { cf+36, cf+68};
        static void **func_4922055056_op2[2] = { cf+13, cf+68};
        static void **func_4922054832_op0[2] = { cf+38, cf+68};
        static void **func_4922054832_op1[2] = { cf+8, cf+68};
        static void **func_4922054832_op2[2] = { cf+6, cf+68};
        static void **func_4922054752_op0[2] = { cf+41, cf+68};
        static void **func_4922055456_op0[2] = { cf+45, cf+68};
        static void **func_4922055456_op1[2] = { cf+46, cf+68};
        static void **func_4922055456_op2[2] = { cf+47, cf+68};
        static void **func_4922055456_op3[2] = { cf+48, cf+68};
        static void **func_4922055456_op4[2] = { cf+49, cf+68};
        static void **func_4922055456_op5[2] = { cf+50, cf+68};
        static void **func_4922055456_op6[2] = { cf+51, cf+68};
        static void **func_4922055456_op7[2] = { cf+52, cf+68};
        static void **func_4922055456_op8[2] = { cf+53, cf+68};
        static void **func_4922054672_op0[2] = { cf+54, cf+68};
        static void **func_4922054672_op1[2] = { cf+56, cf+68};
        static void **func_4922055184_op0[2] = { cf+2, cf+68};
        static void **func_4922055184_op1[2] = { cf+58, cf+68};
        static void **func_4922055712_op0[2] = { cf+59, cf+68};
        static void **func_4922055376_op0[2] = { cf+61, cf+68};
        static void **func_4922055648_op0[2] = { cf+10, cf+69};
        static void **func_4922056064_op0[2] = { cf+7, cf+68};
        static void **func_4922056064_op1[2] = { cf+14, cf+68};
        static void **func_4922056064_op2[2] = { cf+5, cf+68};
        static void **func_4922056064_op3[2] = { cf+0, cf+68};
        static void **func_4922056064_op4[2] = { cf+9, cf+68};
        static void **func_4922056432_op0[2] = { cf+62, cf+68};
        static void **func_4922056432_op1[2] = { cf+64, cf+68};
        static void **func_4922056432_op2[2] = { cf+4, cf+68};
        static void **func_4922056272_op0[2] = { cf+66, cf+68};
        static void **exp_4922056000[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_4922057296[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_4922057552[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_4922057808[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_4922059920[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_4922057088[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_4922058224[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_4922058064[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4923081632[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4923081296[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4923081504[3] = {cf+2, cf+8, cf+68};
        static void **exp_4923081424[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_4923083424[3] = {cf+12, cf+10, cf+68};
        static void **exp_4923083952[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_4923083824[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_4923084608[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_4922054176:
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
            PC = func_4922054176_op0;
        break;
    }
    goto ***PC;
func_4922054544:
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
            PC = func_4922054544_op0;
        break;
        case 1:
            PC = func_4922054544_op1;
        break;
        case 2:
            PC = func_4922054544_op2;
        break;
    }
    goto ***PC;
func_4922054960:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4922054960_op0;
        break;
        case 1:
            PC = func_4922054960_op1;
        break;
        case 2:
            PC = func_4922054960_op2;
        break;
        case 3:
            PC = func_4922054960_op3;
        break;
        case 4:
            PC = func_4922054960_op4;
        break;
        case 5:
            PC = func_4922054960_op5;
        break;
        case 6:
            PC = func_4922054960_op6;
        break;
        case 7:
            PC = func_4922054960_op7;
        break;
        case 8:
            PC = func_4922054960_op8;
        break;
        case 9:
            PC = func_4922054960_op9;
        break;
    }
    goto ***PC;
func_4922055056:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4922055056_op0;
        break;
        case 1:
            PC = func_4922055056_op1;
        break;
        case 2:
            PC = func_4922055056_op2;
        break;
    }
    goto ***PC;
func_4922054832:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4922054832_op0;
        break;
        case 1:
            PC = func_4922054832_op1;
        break;
        case 2:
            PC = func_4922054832_op2;
        break;
    }
    goto ***PC;
func_4922054752:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4922054752_op0;
        break;
    }
    goto ***PC;
func_4922055456:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_4922055456_op0;
        break;
        case 1:
            PC = func_4922055456_op1;
        break;
        case 2:
            PC = func_4922055456_op2;
        break;
        case 3:
            PC = func_4922055456_op3;
        break;
        case 4:
            PC = func_4922055456_op4;
        break;
        case 5:
            PC = func_4922055456_op5;
        break;
        case 6:
            PC = func_4922055456_op6;
        break;
        case 7:
            PC = func_4922055456_op7;
        break;
        case 8:
            PC = func_4922055456_op8;
        break;
    }
    goto ***PC;
func_4922054672:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4922054672_op0;
        break;
        case 1:
            PC = func_4922054672_op1;
        break;
    }
    goto ***PC;
func_4922055184:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4922055184_op0;
        break;
        case 1:
            PC = func_4922055184_op1;
        break;
    }
    goto ***PC;
func_4922055712:
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
            PC = func_4922055712_op0;
        break;
    }
    goto ***PC;
func_4922055376:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4922055376_op0;
        break;
    }
    goto ***PC;
func_4922055648:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4922055648_op0;
        break;
    }
    goto ***PC;
func_4922056064:
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
            PC = func_4922056064_op0;
        break;
        case 1:
            PC = func_4922056064_op1;
        break;
        case 2:
            PC = func_4922056064_op2;
        break;
        case 3:
            PC = func_4922056064_op3;
        break;
        case 4:
            PC = func_4922056064_op4;
        break;
    }
    goto ***PC;
func_4922056432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4922056432_op0;
        break;
        case 1:
            PC = func_4922056432_op1;
        break;
        case 2:
            PC = func_4922056432_op2;
        break;
    }
    goto ***PC;
func_4922056272:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4922056272_op0;
        break;
    }
    goto ***PC;
func_4922056000:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922056000;
    goto ***PC;
func_4922056192:
    extend(61);
    NEXT();
    goto ***PC;
func_4922055248:
    extend(59);
    NEXT();
    goto ***PC;
func_4922057296:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922057296;
    goto ***PC;
func_4922057424:
    extend(62);
    NEXT();
    goto ***PC;
func_4922057552:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922057552;
    goto ***PC;
func_4922057680:
    extend(60);
    NEXT();
    goto ***PC;
func_4922057808:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922057808;
    goto ***PC;
func_4922057936:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_4922058320:
    extend(48);
    NEXT();
    goto ***PC;
func_4922055904:
    extend(49);
    NEXT();
    goto ***PC;
func_4922058512:
    extend(50);
    NEXT();
    goto ***PC;
func_4922058640:
    extend(51);
    NEXT();
    goto ***PC;
func_4922058768:
    extend(52);
    NEXT();
    goto ***PC;
func_4922058960:
    extend(53);
    NEXT();
    goto ***PC;
func_4922059088:
    extend(54);
    NEXT();
    goto ***PC;
func_4922059216:
    extend(55);
    NEXT();
    goto ***PC;
func_4922059344:
    extend(56);
    NEXT();
    goto ***PC;
func_4922058896:
    extend(57);
    NEXT();
    goto ***PC;
func_4922059920:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922059920;
    goto ***PC;
func_4922060048:
    extend(43);
    NEXT();
    goto ***PC;
func_4922057088:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922057088;
    goto ***PC;
func_4922057216:
    extend(45);
    NEXT();
    goto ***PC;
func_4922058224:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922058224;
    goto ***PC;
func_4922060400:
    extend(40);
    NEXT();
    goto ***PC;
func_4922060528:
    extend(41);
    NEXT();
    goto ***PC;
func_4922058064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4922058064;
    goto ***PC;
func_4922061296:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_4923080896:
    extend(123);
    NEXT();
    goto ***PC;
func_4923080832:
    extend(125);
    NEXT();
    goto ***PC;
func_4923081776:
    extend(105);
    NEXT();
    goto ***PC;
func_4923081920:
    extend(106);
    NEXT();
    goto ***PC;
func_4923082064:
    extend(107);
    NEXT();
    goto ***PC;
func_4923082224:
    extend(120);
    NEXT();
    goto ***PC;
func_4923082352:
    extend(121);
    NEXT();
    goto ***PC;
func_4923082544:
    extend(122);
    NEXT();
    goto ***PC;
func_4923082672:
    extend(97);
    NEXT();
    goto ***PC;
func_4923082800:
    extend(98);
    NEXT();
    goto ***PC;
func_4923082928:
    extend(99);
    NEXT();
    goto ***PC;
func_4923081632:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4923081632;
    goto ***PC;
func_4923083632:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_4923081296:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4923081296;
    goto ***PC;
func_4923083520:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_4923081504:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4923081504;
    goto ***PC;
func_4923081424:
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
    PC = exp_4923081424;
    goto ***PC;
func_4923083248:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_4923083424:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4923083424;
    goto ***PC;
func_4923083952:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4923083952;
    goto ***PC;
func_4923084672:
    extend(42);
    NEXT();
    goto ***PC;
func_4923083824:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4923083824;
    goto ***PC;
func_4923084800:
    extend(47);
    NEXT();
    goto ***PC;
func_4923084608:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4923084608;
    goto ***PC;
func_4923085232:
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
    PC = func_4922055648_op0;
    goto ***PC;
}
