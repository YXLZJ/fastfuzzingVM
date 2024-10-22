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
        unsigned loop_limit = 16;
        static void * cf[] = {&&func_5031106080, &&func_5031106448, &&func_5031106864, &&func_5031106960, &&func_5031106736, &&func_5031106656, &&func_5031107360, &&func_5031106576, &&func_5031107088, &&func_5031107616, &&func_5031107280, &&func_5031107552, &&func_5031107968, &&func_5031108336, &&func_5031108176, &&func_5031107904, &&func_5031108096, &&func_5031107152, &&func_5031109200, &&func_5031109328, &&func_5031109456, &&func_5031109584, &&func_5031109712, &&func_5031109840, &&func_5031110224, &&func_5031107808, &&func_5031110416, &&func_5031110544, &&func_5031110672, &&func_5031110864, &&func_5031110992, &&func_5031111120, &&func_5031111248, &&func_5031110800, &&func_5031111824, &&func_5031111952, &&func_5031108992, &&func_5031109120, &&func_5031110128, &&func_5031112304, &&func_5031112432, &&func_5031109968, &&func_5031113200, &&func_5031113328, &&func_5031108464, &&func_5031112976, &&func_5031113648, &&func_5031113776, &&func_5031113904, &&func_5031114032, &&func_5031114224, &&func_5031114352, &&func_5031114480, &&func_5031114608, &&func_5031114160, &&func_5031115376, &&func_5031112624, &&func_5031115200, &&func_5031112800, &&func_5031114864, &&func_5031114992, &&func_5031115504, &&func_5031116352, &&func_5031116480, &&func_5031115632, &&func_5031111312, &&func_5031116288, &&func_5031111680, &&RETURN, &&HALT};
        static void **func_5031106080_op0[2] = { cf+15, cf+68};
        static void **func_5031106448_op0[2] = { cf+18, cf+68};
        static void **func_5031106448_op1[2] = { cf+20, cf+68};
        static void **func_5031106448_op2[2] = { cf+22, cf+68};
        static void **func_5031106864_op0[2] = { cf+24, cf+68};
        static void **func_5031106864_op1[2] = { cf+25, cf+68};
        static void **func_5031106864_op2[2] = { cf+26, cf+68};
        static void **func_5031106864_op3[2] = { cf+27, cf+68};
        static void **func_5031106864_op4[2] = { cf+28, cf+68};
        static void **func_5031106864_op5[2] = { cf+29, cf+68};
        static void **func_5031106864_op6[2] = { cf+30, cf+68};
        static void **func_5031106864_op7[2] = { cf+31, cf+68};
        static void **func_5031106864_op8[2] = { cf+32, cf+68};
        static void **func_5031106864_op9[2] = { cf+33, cf+68};
        static void **func_5031106960_op0[2] = { cf+34, cf+68};
        static void **func_5031106960_op1[2] = { cf+36, cf+68};
        static void **func_5031106960_op2[2] = { cf+13, cf+68};
        static void **func_5031106736_op0[2] = { cf+38, cf+68};
        static void **func_5031106736_op1[2] = { cf+8, cf+68};
        static void **func_5031106736_op2[2] = { cf+6, cf+68};
        static void **func_5031106656_op0[2] = { cf+41, cf+68};
        static void **func_5031107360_op0[2] = { cf+45, cf+68};
        static void **func_5031107360_op1[2] = { cf+46, cf+68};
        static void **func_5031107360_op2[2] = { cf+47, cf+68};
        static void **func_5031107360_op3[2] = { cf+48, cf+68};
        static void **func_5031107360_op4[2] = { cf+49, cf+68};
        static void **func_5031107360_op5[2] = { cf+50, cf+68};
        static void **func_5031107360_op6[2] = { cf+51, cf+68};
        static void **func_5031107360_op7[2] = { cf+52, cf+68};
        static void **func_5031107360_op8[2] = { cf+53, cf+68};
        static void **func_5031106576_op0[2] = { cf+54, cf+68};
        static void **func_5031106576_op1[2] = { cf+56, cf+68};
        static void **func_5031107088_op0[2] = { cf+2, cf+68};
        static void **func_5031107088_op1[2] = { cf+58, cf+68};
        static void **func_5031107616_op0[2] = { cf+59, cf+68};
        static void **func_5031107280_op0[2] = { cf+61, cf+68};
        static void **func_5031107552_op0[2] = { cf+10, cf+69};
        static void **func_5031107968_op0[2] = { cf+7, cf+68};
        static void **func_5031107968_op1[2] = { cf+14, cf+68};
        static void **func_5031107968_op2[2] = { cf+5, cf+68};
        static void **func_5031107968_op3[2] = { cf+0, cf+68};
        static void **func_5031107968_op4[2] = { cf+9, cf+68};
        static void **func_5031108336_op0[2] = { cf+62, cf+68};
        static void **func_5031108336_op1[2] = { cf+64, cf+68};
        static void **func_5031108336_op2[2] = { cf+4, cf+68};
        static void **func_5031108176_op0[2] = { cf+66, cf+68};
        static void **exp_5031107904[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_5031109200[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_5031109456[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_5031109712[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_5031111824[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_5031108992[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_5031110128[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_5031109968[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5031114160[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5031112624[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5031112800[3] = {cf+2, cf+8, cf+68};
        static void **exp_5031114864[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_5031115504[3] = {cf+12, cf+10, cf+68};
        static void **exp_5031116352[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_5031115632[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_5031116288[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_5031106080:
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
            PC = func_5031106080_op0;
        break;
    }
    goto ***PC;
func_5031106448:
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
            PC = func_5031106448_op0;
        break;
        case 1:
            PC = func_5031106448_op1;
        break;
        case 2:
            PC = func_5031106448_op2;
        break;
    }
    goto ***PC;
func_5031106864:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5031106864_op0;
        break;
        case 1:
            PC = func_5031106864_op1;
        break;
        case 2:
            PC = func_5031106864_op2;
        break;
        case 3:
            PC = func_5031106864_op3;
        break;
        case 4:
            PC = func_5031106864_op4;
        break;
        case 5:
            PC = func_5031106864_op5;
        break;
        case 6:
            PC = func_5031106864_op6;
        break;
        case 7:
            PC = func_5031106864_op7;
        break;
        case 8:
            PC = func_5031106864_op8;
        break;
        case 9:
            PC = func_5031106864_op9;
        break;
    }
    goto ***PC;
func_5031106960:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5031106960_op0;
        break;
        case 1:
            PC = func_5031106960_op1;
        break;
        case 2:
            PC = func_5031106960_op2;
        break;
    }
    goto ***PC;
func_5031106736:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5031106736_op0;
        break;
        case 1:
            PC = func_5031106736_op1;
        break;
        case 2:
            PC = func_5031106736_op2;
        break;
    }
    goto ***PC;
func_5031106656:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5031106656_op0;
        break;
    }
    goto ***PC;
func_5031107360:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5031107360_op0;
        break;
        case 1:
            PC = func_5031107360_op1;
        break;
        case 2:
            PC = func_5031107360_op2;
        break;
        case 3:
            PC = func_5031107360_op3;
        break;
        case 4:
            PC = func_5031107360_op4;
        break;
        case 5:
            PC = func_5031107360_op5;
        break;
        case 6:
            PC = func_5031107360_op6;
        break;
        case 7:
            PC = func_5031107360_op7;
        break;
        case 8:
            PC = func_5031107360_op8;
        break;
    }
    goto ***PC;
func_5031106576:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5031106576_op0;
        break;
        case 1:
            PC = func_5031106576_op1;
        break;
    }
    goto ***PC;
func_5031107088:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5031107088_op0;
        break;
        case 1:
            PC = func_5031107088_op1;
        break;
    }
    goto ***PC;
func_5031107616:
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
            PC = func_5031107616_op0;
        break;
    }
    goto ***PC;
func_5031107280:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5031107280_op0;
        break;
    }
    goto ***PC;
func_5031107552:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5031107552_op0;
        break;
    }
    goto ***PC;
func_5031107968:
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
            PC = func_5031107968_op0;
        break;
        case 1:
            PC = func_5031107968_op1;
        break;
        case 2:
            PC = func_5031107968_op2;
        break;
        case 3:
            PC = func_5031107968_op3;
        break;
        case 4:
            PC = func_5031107968_op4;
        break;
    }
    goto ***PC;
func_5031108336:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5031108336_op0;
        break;
        case 1:
            PC = func_5031108336_op1;
        break;
        case 2:
            PC = func_5031108336_op2;
        break;
    }
    goto ***PC;
func_5031108176:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5031108176_op0;
        break;
    }
    goto ***PC;
func_5031107904:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031107904;
    goto ***PC;
func_5031108096:
    extend(61);
    NEXT();
    goto ***PC;
func_5031107152:
    extend(59);
    NEXT();
    goto ***PC;
func_5031109200:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031109200;
    goto ***PC;
func_5031109328:
    extend(62);
    NEXT();
    goto ***PC;
func_5031109456:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031109456;
    goto ***PC;
func_5031109584:
    extend(60);
    NEXT();
    goto ***PC;
func_5031109712:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031109712;
    goto ***PC;
func_5031109840:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5031110224:
    extend(48);
    NEXT();
    goto ***PC;
func_5031107808:
    extend(49);
    NEXT();
    goto ***PC;
func_5031110416:
    extend(50);
    NEXT();
    goto ***PC;
func_5031110544:
    extend(51);
    NEXT();
    goto ***PC;
func_5031110672:
    extend(52);
    NEXT();
    goto ***PC;
func_5031110864:
    extend(53);
    NEXT();
    goto ***PC;
func_5031110992:
    extend(54);
    NEXT();
    goto ***PC;
func_5031111120:
    extend(55);
    NEXT();
    goto ***PC;
func_5031111248:
    extend(56);
    NEXT();
    goto ***PC;
func_5031110800:
    extend(57);
    NEXT();
    goto ***PC;
func_5031111824:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031111824;
    goto ***PC;
func_5031111952:
    extend(43);
    NEXT();
    goto ***PC;
func_5031108992:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031108992;
    goto ***PC;
func_5031109120:
    extend(45);
    NEXT();
    goto ***PC;
func_5031110128:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031110128;
    goto ***PC;
func_5031112304:
    extend(40);
    NEXT();
    goto ***PC;
func_5031112432:
    extend(41);
    NEXT();
    goto ***PC;
func_5031109968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031109968;
    goto ***PC;
func_5031113200:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_5031113328:
    extend(123);
    NEXT();
    goto ***PC;
func_5031108464:
    extend(125);
    NEXT();
    goto ***PC;
func_5031112976:
    extend(105);
    NEXT();
    goto ***PC;
func_5031113648:
    extend(106);
    NEXT();
    goto ***PC;
func_5031113776:
    extend(107);
    NEXT();
    goto ***PC;
func_5031113904:
    extend(120);
    NEXT();
    goto ***PC;
func_5031114032:
    extend(121);
    NEXT();
    goto ***PC;
func_5031114224:
    extend(122);
    NEXT();
    goto ***PC;
func_5031114352:
    extend(97);
    NEXT();
    goto ***PC;
func_5031114480:
    extend(98);
    NEXT();
    goto ***PC;
func_5031114608:
    extend(99);
    NEXT();
    goto ***PC;
func_5031114160:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031114160;
    goto ***PC;
func_5031115376:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5031112624:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031112624;
    goto ***PC;
func_5031115200:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5031112800:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031112800;
    goto ***PC;
func_5031114864:
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
    PC = exp_5031114864;
    goto ***PC;
func_5031114992:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5031115504:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031115504;
    goto ***PC;
func_5031116352:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031116352;
    goto ***PC;
func_5031116480:
    extend(42);
    NEXT();
    goto ***PC;
func_5031115632:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031115632;
    goto ***PC;
func_5031111312:
    extend(47);
    NEXT();
    goto ***PC;
func_5031116288:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5031116288;
    goto ***PC;
func_5031111680:
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
    PC = func_5031107552_op0;
    goto ***PC;
}
