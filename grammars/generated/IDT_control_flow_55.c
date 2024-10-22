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
        static void * cf[] = {&&func_4931477744, &&func_4931478128, &&func_4931478544, &&func_4931478640, &&func_4931478416, &&func_4931478336, &&func_4931479040, &&func_4931478256, &&func_4931478768, &&func_4931479296, &&func_4931478960, &&func_4931479232, &&func_4931479648, &&func_4931480016, &&func_4931479856, &&func_4931479584, &&func_4931479776, &&func_4931478832, &&func_4931480880, &&func_4931481008, &&func_4931481136, &&func_4931481264, &&func_4931481392, &&func_4931481520, &&func_4931481904, &&func_4931479488, &&func_4931482096, &&func_4931482224, &&func_4931482352, &&func_4931482544, &&func_4931482672, &&func_4931482800, &&func_4931482928, &&func_4931482480, &&func_4931483504, &&func_4931483632, &&func_4931480672, &&func_4931480800, &&func_4931481808, &&func_4931483984, &&func_4931484112, &&func_4931481648, &&func_4931484880, &&func_4931485008, &&func_4931480144, &&func_4931484656, &&func_4931485328, &&func_4931485456, &&func_4931485584, &&func_4931485712, &&func_4931485904, &&func_4931486032, &&func_4931486160, &&func_4931486288, &&func_4931485840, &&func_4931487056, &&func_4931484304, &&func_4931486880, &&func_4931484480, &&func_4931486544, &&func_4931486672, &&func_4931487184, &&func_4931488032, &&func_4931488160, &&func_4931487312, &&func_4931482992, &&func_4931487968, &&func_4931483360, &&RETURN, &&HALT};
        static void **func_4931477744_op0[2] = { cf+15, cf+68};
        static void **func_4931478128_op0[2] = { cf+18, cf+68};
        static void **func_4931478128_op1[2] = { cf+20, cf+68};
        static void **func_4931478128_op2[2] = { cf+22, cf+68};
        static void **func_4931478544_op0[2] = { cf+24, cf+68};
        static void **func_4931478544_op1[2] = { cf+25, cf+68};
        static void **func_4931478544_op2[2] = { cf+26, cf+68};
        static void **func_4931478544_op3[2] = { cf+27, cf+68};
        static void **func_4931478544_op4[2] = { cf+28, cf+68};
        static void **func_4931478544_op5[2] = { cf+29, cf+68};
        static void **func_4931478544_op6[2] = { cf+30, cf+68};
        static void **func_4931478544_op7[2] = { cf+31, cf+68};
        static void **func_4931478544_op8[2] = { cf+32, cf+68};
        static void **func_4931478544_op9[2] = { cf+33, cf+68};
        static void **func_4931478640_op0[2] = { cf+34, cf+68};
        static void **func_4931478640_op1[2] = { cf+36, cf+68};
        static void **func_4931478640_op2[2] = { cf+13, cf+68};
        static void **func_4931478416_op0[2] = { cf+38, cf+68};
        static void **func_4931478416_op1[2] = { cf+8, cf+68};
        static void **func_4931478416_op2[2] = { cf+6, cf+68};
        static void **func_4931478336_op0[2] = { cf+41, cf+68};
        static void **func_4931479040_op0[2] = { cf+45, cf+68};
        static void **func_4931479040_op1[2] = { cf+46, cf+68};
        static void **func_4931479040_op2[2] = { cf+47, cf+68};
        static void **func_4931479040_op3[2] = { cf+48, cf+68};
        static void **func_4931479040_op4[2] = { cf+49, cf+68};
        static void **func_4931479040_op5[2] = { cf+50, cf+68};
        static void **func_4931479040_op6[2] = { cf+51, cf+68};
        static void **func_4931479040_op7[2] = { cf+52, cf+68};
        static void **func_4931479040_op8[2] = { cf+53, cf+68};
        static void **func_4931478256_op0[2] = { cf+54, cf+68};
        static void **func_4931478256_op1[2] = { cf+56, cf+68};
        static void **func_4931478768_op0[2] = { cf+2, cf+68};
        static void **func_4931478768_op1[2] = { cf+58, cf+68};
        static void **func_4931479296_op0[2] = { cf+59, cf+68};
        static void **func_4931478960_op0[2] = { cf+61, cf+68};
        static void **func_4931479232_op0[2] = { cf+10, cf+69};
        static void **func_4931479648_op0[2] = { cf+7, cf+68};
        static void **func_4931479648_op1[2] = { cf+14, cf+68};
        static void **func_4931479648_op2[2] = { cf+5, cf+68};
        static void **func_4931479648_op3[2] = { cf+0, cf+68};
        static void **func_4931479648_op4[2] = { cf+9, cf+68};
        static void **func_4931480016_op0[2] = { cf+62, cf+68};
        static void **func_4931480016_op1[2] = { cf+64, cf+68};
        static void **func_4931480016_op2[2] = { cf+4, cf+68};
        static void **func_4931479856_op0[2] = { cf+66, cf+68};
        static void **exp_4931479584[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_4931480880[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_4931481136[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_4931481392[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_4931483504[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_4931480672[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_4931481808[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_4931481648[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4931485840[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4931484304[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4931484480[3] = {cf+2, cf+8, cf+68};
        static void **exp_4931486544[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_4931487184[3] = {cf+12, cf+10, cf+68};
        static void **exp_4931488032[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_4931487312[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_4931487968[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_4931477744:
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
            PC = func_4931477744_op0;
        break;
    }
    goto ***PC;
func_4931478128:
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
            PC = func_4931478128_op0;
        break;
        case 1:
            PC = func_4931478128_op1;
        break;
        case 2:
            PC = func_4931478128_op2;
        break;
    }
    goto ***PC;
func_4931478544:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4931478544_op0;
        break;
        case 1:
            PC = func_4931478544_op1;
        break;
        case 2:
            PC = func_4931478544_op2;
        break;
        case 3:
            PC = func_4931478544_op3;
        break;
        case 4:
            PC = func_4931478544_op4;
        break;
        case 5:
            PC = func_4931478544_op5;
        break;
        case 6:
            PC = func_4931478544_op6;
        break;
        case 7:
            PC = func_4931478544_op7;
        break;
        case 8:
            PC = func_4931478544_op8;
        break;
        case 9:
            PC = func_4931478544_op9;
        break;
    }
    goto ***PC;
func_4931478640:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4931478640_op0;
        break;
        case 1:
            PC = func_4931478640_op1;
        break;
        case 2:
            PC = func_4931478640_op2;
        break;
    }
    goto ***PC;
func_4931478416:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4931478416_op0;
        break;
        case 1:
            PC = func_4931478416_op1;
        break;
        case 2:
            PC = func_4931478416_op2;
        break;
    }
    goto ***PC;
func_4931478336:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4931478336_op0;
        break;
    }
    goto ***PC;
func_4931479040:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_4931479040_op0;
        break;
        case 1:
            PC = func_4931479040_op1;
        break;
        case 2:
            PC = func_4931479040_op2;
        break;
        case 3:
            PC = func_4931479040_op3;
        break;
        case 4:
            PC = func_4931479040_op4;
        break;
        case 5:
            PC = func_4931479040_op5;
        break;
        case 6:
            PC = func_4931479040_op6;
        break;
        case 7:
            PC = func_4931479040_op7;
        break;
        case 8:
            PC = func_4931479040_op8;
        break;
    }
    goto ***PC;
func_4931478256:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4931478256_op0;
        break;
        case 1:
            PC = func_4931478256_op1;
        break;
    }
    goto ***PC;
func_4931478768:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4931478768_op0;
        break;
        case 1:
            PC = func_4931478768_op1;
        break;
    }
    goto ***PC;
func_4931479296:
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
            PC = func_4931479296_op0;
        break;
    }
    goto ***PC;
func_4931478960:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4931478960_op0;
        break;
    }
    goto ***PC;
func_4931479232:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4931479232_op0;
        break;
    }
    goto ***PC;
func_4931479648:
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
            PC = func_4931479648_op0;
        break;
        case 1:
            PC = func_4931479648_op1;
        break;
        case 2:
            PC = func_4931479648_op2;
        break;
        case 3:
            PC = func_4931479648_op3;
        break;
        case 4:
            PC = func_4931479648_op4;
        break;
    }
    goto ***PC;
func_4931480016:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4931480016_op0;
        break;
        case 1:
            PC = func_4931480016_op1;
        break;
        case 2:
            PC = func_4931480016_op2;
        break;
    }
    goto ***PC;
func_4931479856:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4931479856_op0;
        break;
    }
    goto ***PC;
func_4931479584:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931479584;
    goto ***PC;
func_4931479776:
    extend(61);
    NEXT();
    goto ***PC;
func_4931478832:
    extend(59);
    NEXT();
    goto ***PC;
func_4931480880:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931480880;
    goto ***PC;
func_4931481008:
    extend(62);
    NEXT();
    goto ***PC;
func_4931481136:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931481136;
    goto ***PC;
func_4931481264:
    extend(60);
    NEXT();
    goto ***PC;
func_4931481392:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931481392;
    goto ***PC;
func_4931481520:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_4931481904:
    extend(48);
    NEXT();
    goto ***PC;
func_4931479488:
    extend(49);
    NEXT();
    goto ***PC;
func_4931482096:
    extend(50);
    NEXT();
    goto ***PC;
func_4931482224:
    extend(51);
    NEXT();
    goto ***PC;
func_4931482352:
    extend(52);
    NEXT();
    goto ***PC;
func_4931482544:
    extend(53);
    NEXT();
    goto ***PC;
func_4931482672:
    extend(54);
    NEXT();
    goto ***PC;
func_4931482800:
    extend(55);
    NEXT();
    goto ***PC;
func_4931482928:
    extend(56);
    NEXT();
    goto ***PC;
func_4931482480:
    extend(57);
    NEXT();
    goto ***PC;
func_4931483504:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931483504;
    goto ***PC;
func_4931483632:
    extend(43);
    NEXT();
    goto ***PC;
func_4931480672:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931480672;
    goto ***PC;
func_4931480800:
    extend(45);
    NEXT();
    goto ***PC;
func_4931481808:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931481808;
    goto ***PC;
func_4931483984:
    extend(40);
    NEXT();
    goto ***PC;
func_4931484112:
    extend(41);
    NEXT();
    goto ***PC;
func_4931481648:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931481648;
    goto ***PC;
func_4931484880:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_4931485008:
    extend(123);
    NEXT();
    goto ***PC;
func_4931480144:
    extend(125);
    NEXT();
    goto ***PC;
func_4931484656:
    extend(105);
    NEXT();
    goto ***PC;
func_4931485328:
    extend(106);
    NEXT();
    goto ***PC;
func_4931485456:
    extend(107);
    NEXT();
    goto ***PC;
func_4931485584:
    extend(120);
    NEXT();
    goto ***PC;
func_4931485712:
    extend(121);
    NEXT();
    goto ***PC;
func_4931485904:
    extend(122);
    NEXT();
    goto ***PC;
func_4931486032:
    extend(97);
    NEXT();
    goto ***PC;
func_4931486160:
    extend(98);
    NEXT();
    goto ***PC;
func_4931486288:
    extend(99);
    NEXT();
    goto ***PC;
func_4931485840:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931485840;
    goto ***PC;
func_4931487056:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_4931484304:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931484304;
    goto ***PC;
func_4931486880:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_4931484480:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931484480;
    goto ***PC;
func_4931486544:
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
    PC = exp_4931486544;
    goto ***PC;
func_4931486672:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_4931487184:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931487184;
    goto ***PC;
func_4931488032:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931488032;
    goto ***PC;
func_4931488160:
    extend(42);
    NEXT();
    goto ***PC;
func_4931487312:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931487312;
    goto ***PC;
func_4931482992:
    extend(47);
    NEXT();
    goto ***PC;
func_4931487968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4931487968;
    goto ***PC;
func_4931483360:
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
    PC = func_4931479232_op0;
    goto ***PC;
}
