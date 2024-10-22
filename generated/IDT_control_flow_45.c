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
        unsigned loop_limit = 16;
        static void * cf[] = {&&func_5584754208, &&func_5584754576, &&func_5584754992, &&func_5584755088, &&func_5584754864, &&func_5584754784, &&func_5584755488, &&func_5584754704, &&func_5584755216, &&func_5584755744, &&func_5584755408, &&func_5584755680, &&func_5584756096, &&func_5584756464, &&func_5584756304, &&func_5584756032, &&func_5584756224, &&func_5584755280, &&func_5584757328, &&func_5584757456, &&func_5584757584, &&func_5584757712, &&func_5584757840, &&func_5584757968, &&func_5584758352, &&func_5584755936, &&func_5584758544, &&func_5584758672, &&func_5584758800, &&func_5584758992, &&func_5584759120, &&func_5584759248, &&func_5584759376, &&func_5584758928, &&func_5584759952, &&func_5584760080, &&func_5584757120, &&func_5584757248, &&func_5584758256, &&func_5584760432, &&func_5584760560, &&func_5584758096, &&func_5584761328, &&func_5584761456, &&func_5584756592, &&func_5584761104, &&func_5584761776, &&func_5584761904, &&func_5584762032, &&func_5584762160, &&func_5584762352, &&func_5584762480, &&func_5584762608, &&func_5584762736, &&func_5584762288, &&func_5584763504, &&func_5584760752, &&func_5584763328, &&func_5584760928, &&func_5584762992, &&func_5584763120, &&func_5584763632, &&func_5584764480, &&func_5584764608, &&func_5584763760, &&func_5584759440, &&func_5584764416, &&func_5584759808, &&RETURN, &&HALT};
        static void **func_5584754208_op0[2] = { cf+15, cf+68};
        static void **func_5584754576_op0[2] = { cf+18, cf+68};
        static void **func_5584754576_op1[2] = { cf+20, cf+68};
        static void **func_5584754576_op2[2] = { cf+22, cf+68};
        static void **func_5584754992_op0[2] = { cf+24, cf+68};
        static void **func_5584754992_op1[2] = { cf+25, cf+68};
        static void **func_5584754992_op2[2] = { cf+26, cf+68};
        static void **func_5584754992_op3[2] = { cf+27, cf+68};
        static void **func_5584754992_op4[2] = { cf+28, cf+68};
        static void **func_5584754992_op5[2] = { cf+29, cf+68};
        static void **func_5584754992_op6[2] = { cf+30, cf+68};
        static void **func_5584754992_op7[2] = { cf+31, cf+68};
        static void **func_5584754992_op8[2] = { cf+32, cf+68};
        static void **func_5584754992_op9[2] = { cf+33, cf+68};
        static void **func_5584755088_op0[2] = { cf+34, cf+68};
        static void **func_5584755088_op1[2] = { cf+36, cf+68};
        static void **func_5584755088_op2[2] = { cf+13, cf+68};
        static void **func_5584754864_op0[2] = { cf+38, cf+68};
        static void **func_5584754864_op1[2] = { cf+8, cf+68};
        static void **func_5584754864_op2[2] = { cf+6, cf+68};
        static void **func_5584754784_op0[2] = { cf+41, cf+68};
        static void **func_5584755488_op0[2] = { cf+45, cf+68};
        static void **func_5584755488_op1[2] = { cf+46, cf+68};
        static void **func_5584755488_op2[2] = { cf+47, cf+68};
        static void **func_5584755488_op3[2] = { cf+48, cf+68};
        static void **func_5584755488_op4[2] = { cf+49, cf+68};
        static void **func_5584755488_op5[2] = { cf+50, cf+68};
        static void **func_5584755488_op6[2] = { cf+51, cf+68};
        static void **func_5584755488_op7[2] = { cf+52, cf+68};
        static void **func_5584755488_op8[2] = { cf+53, cf+68};
        static void **func_5584754704_op0[2] = { cf+54, cf+68};
        static void **func_5584754704_op1[2] = { cf+56, cf+68};
        static void **func_5584755216_op0[2] = { cf+2, cf+68};
        static void **func_5584755216_op1[2] = { cf+58, cf+68};
        static void **func_5584755744_op0[2] = { cf+59, cf+68};
        static void **func_5584755408_op0[2] = { cf+61, cf+68};
        static void **func_5584755680_op0[2] = { cf+10, cf+69};
        static void **func_5584756096_op0[2] = { cf+7, cf+68};
        static void **func_5584756096_op1[2] = { cf+14, cf+68};
        static void **func_5584756096_op2[2] = { cf+5, cf+68};
        static void **func_5584756096_op3[2] = { cf+0, cf+68};
        static void **func_5584756096_op4[2] = { cf+9, cf+68};
        static void **func_5584756464_op0[2] = { cf+62, cf+68};
        static void **func_5584756464_op1[2] = { cf+64, cf+68};
        static void **func_5584756464_op2[2] = { cf+4, cf+68};
        static void **func_5584756304_op0[2] = { cf+66, cf+68};
        static void **exp_5584756032[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_5584757328[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_5584757584[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_5584757840[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_5584759952[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_5584757120[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_5584758256[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_5584758096[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5584762288[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5584760752[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5584760928[3] = {cf+2, cf+8, cf+68};
        static void **exp_5584762992[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_5584763632[3] = {cf+12, cf+10, cf+68};
        static void **exp_5584764480[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_5584763760[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_5584764416[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_5584754208:
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
            PC = func_5584754208_op0;
        break;
    }
    goto ***PC;
func_5584754576:
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
            PC = func_5584754576_op0;
        break;
        case 1:
            PC = func_5584754576_op1;
        break;
        case 2:
            PC = func_5584754576_op2;
        break;
    }
    goto ***PC;
func_5584754992:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5584754992_op0;
        break;
        case 1:
            PC = func_5584754992_op1;
        break;
        case 2:
            PC = func_5584754992_op2;
        break;
        case 3:
            PC = func_5584754992_op3;
        break;
        case 4:
            PC = func_5584754992_op4;
        break;
        case 5:
            PC = func_5584754992_op5;
        break;
        case 6:
            PC = func_5584754992_op6;
        break;
        case 7:
            PC = func_5584754992_op7;
        break;
        case 8:
            PC = func_5584754992_op8;
        break;
        case 9:
            PC = func_5584754992_op9;
        break;
    }
    goto ***PC;
func_5584755088:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5584755088_op0;
        break;
        case 1:
            PC = func_5584755088_op1;
        break;
        case 2:
            PC = func_5584755088_op2;
        break;
    }
    goto ***PC;
func_5584754864:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5584754864_op0;
        break;
        case 1:
            PC = func_5584754864_op1;
        break;
        case 2:
            PC = func_5584754864_op2;
        break;
    }
    goto ***PC;
func_5584754784:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5584754784_op0;
        break;
    }
    goto ***PC;
func_5584755488:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5584755488_op0;
        break;
        case 1:
            PC = func_5584755488_op1;
        break;
        case 2:
            PC = func_5584755488_op2;
        break;
        case 3:
            PC = func_5584755488_op3;
        break;
        case 4:
            PC = func_5584755488_op4;
        break;
        case 5:
            PC = func_5584755488_op5;
        break;
        case 6:
            PC = func_5584755488_op6;
        break;
        case 7:
            PC = func_5584755488_op7;
        break;
        case 8:
            PC = func_5584755488_op8;
        break;
    }
    goto ***PC;
func_5584754704:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5584754704_op0;
        break;
        case 1:
            PC = func_5584754704_op1;
        break;
    }
    goto ***PC;
func_5584755216:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5584755216_op0;
        break;
        case 1:
            PC = func_5584755216_op1;
        break;
    }
    goto ***PC;
func_5584755744:
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
            PC = func_5584755744_op0;
        break;
    }
    goto ***PC;
func_5584755408:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5584755408_op0;
        break;
    }
    goto ***PC;
func_5584755680:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5584755680_op0;
        break;
    }
    goto ***PC;
func_5584756096:
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
            PC = func_5584756096_op0;
        break;
        case 1:
            PC = func_5584756096_op1;
        break;
        case 2:
            PC = func_5584756096_op2;
        break;
        case 3:
            PC = func_5584756096_op3;
        break;
        case 4:
            PC = func_5584756096_op4;
        break;
    }
    goto ***PC;
func_5584756464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5584756464_op0;
        break;
        case 1:
            PC = func_5584756464_op1;
        break;
        case 2:
            PC = func_5584756464_op2;
        break;
    }
    goto ***PC;
func_5584756304:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5584756304_op0;
        break;
    }
    goto ***PC;
func_5584756032:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584756032;
    goto ***PC;
func_5584756224:
    extend(61);
    NEXT();
    goto ***PC;
func_5584755280:
    extend(59);
    NEXT();
    goto ***PC;
func_5584757328:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584757328;
    goto ***PC;
func_5584757456:
    extend(62);
    NEXT();
    goto ***PC;
func_5584757584:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584757584;
    goto ***PC;
func_5584757712:
    extend(60);
    NEXT();
    goto ***PC;
func_5584757840:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584757840;
    goto ***PC;
func_5584757968:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5584758352:
    extend(48);
    NEXT();
    goto ***PC;
func_5584755936:
    extend(49);
    NEXT();
    goto ***PC;
func_5584758544:
    extend(50);
    NEXT();
    goto ***PC;
func_5584758672:
    extend(51);
    NEXT();
    goto ***PC;
func_5584758800:
    extend(52);
    NEXT();
    goto ***PC;
func_5584758992:
    extend(53);
    NEXT();
    goto ***PC;
func_5584759120:
    extend(54);
    NEXT();
    goto ***PC;
func_5584759248:
    extend(55);
    NEXT();
    goto ***PC;
func_5584759376:
    extend(56);
    NEXT();
    goto ***PC;
func_5584758928:
    extend(57);
    NEXT();
    goto ***PC;
func_5584759952:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584759952;
    goto ***PC;
func_5584760080:
    extend(43);
    NEXT();
    goto ***PC;
func_5584757120:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584757120;
    goto ***PC;
func_5584757248:
    extend(45);
    NEXT();
    goto ***PC;
func_5584758256:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584758256;
    goto ***PC;
func_5584760432:
    extend(40);
    NEXT();
    goto ***PC;
func_5584760560:
    extend(41);
    NEXT();
    goto ***PC;
func_5584758096:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584758096;
    goto ***PC;
func_5584761328:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_5584761456:
    extend(123);
    NEXT();
    goto ***PC;
func_5584756592:
    extend(125);
    NEXT();
    goto ***PC;
func_5584761104:
    extend(105);
    NEXT();
    goto ***PC;
func_5584761776:
    extend(106);
    NEXT();
    goto ***PC;
func_5584761904:
    extend(107);
    NEXT();
    goto ***PC;
func_5584762032:
    extend(120);
    NEXT();
    goto ***PC;
func_5584762160:
    extend(121);
    NEXT();
    goto ***PC;
func_5584762352:
    extend(122);
    NEXT();
    goto ***PC;
func_5584762480:
    extend(97);
    NEXT();
    goto ***PC;
func_5584762608:
    extend(98);
    NEXT();
    goto ***PC;
func_5584762736:
    extend(99);
    NEXT();
    goto ***PC;
func_5584762288:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584762288;
    goto ***PC;
func_5584763504:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5584760752:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584760752;
    goto ***PC;
func_5584763328:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5584760928:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584760928;
    goto ***PC;
func_5584762992:
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
    PC = exp_5584762992;
    goto ***PC;
func_5584763120:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5584763632:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584763632;
    goto ***PC;
func_5584764480:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584764480;
    goto ***PC;
func_5584764608:
    extend(42);
    NEXT();
    goto ***PC;
func_5584763760:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584763760;
    goto ***PC;
func_5584759440:
    extend(47);
    NEXT();
    goto ***PC;
func_5584764416:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5584764416;
    goto ***PC;
func_5584759808:
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
    PC = func_5584755680_op0;
    goto ***PC;
}
