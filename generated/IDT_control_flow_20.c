#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 20
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
        static void * cf[] = {&&func_5073049120, &&func_5073049488, &&func_5073049904, &&func_5073050000, &&func_5073049776, &&func_5073049696, &&func_5073050400, &&func_5073049616, &&func_5073050128, &&func_5073050656, &&func_5073050320, &&func_5073050592, &&func_5073051008, &&func_5073051376, &&func_5073051216, &&func_5073050944, &&func_5073051136, &&func_5073050192, &&func_5073052240, &&func_5073052368, &&func_5073052496, &&func_5073052624, &&func_5073052752, &&func_5073052880, &&func_5073053264, &&func_5073050848, &&func_5073053456, &&func_5073053584, &&func_5073053712, &&func_5073053904, &&func_5073054032, &&func_5073054160, &&func_5073054288, &&func_5073053840, &&func_5073054864, &&func_5073054992, &&func_5073052032, &&func_5073052160, &&func_5073053168, &&func_5073055344, &&func_5073055472, &&func_5073053008, &&func_5073056240, &&func_5073056368, &&func_5073051504, &&func_5073056016, &&func_5073056688, &&func_5073056816, &&func_5073056944, &&func_5073057072, &&func_5073057264, &&func_5073057392, &&func_5073057520, &&func_5073057648, &&func_5073057200, &&func_5073058416, &&func_5073055664, &&func_5073058240, &&func_5073055840, &&func_5073057904, &&func_5073058032, &&func_5073058544, &&func_5073059392, &&func_5073059520, &&func_5073058672, &&func_5073054352, &&func_5073059328, &&func_5073054720, &&RETURN, &&HALT};
        static void **func_5073049120_op0[2] = { cf+15, cf+68};
        static void **func_5073049488_op0[2] = { cf+18, cf+68};
        static void **func_5073049488_op1[2] = { cf+20, cf+68};
        static void **func_5073049488_op2[2] = { cf+22, cf+68};
        static void **func_5073049904_op0[2] = { cf+24, cf+68};
        static void **func_5073049904_op1[2] = { cf+25, cf+68};
        static void **func_5073049904_op2[2] = { cf+26, cf+68};
        static void **func_5073049904_op3[2] = { cf+27, cf+68};
        static void **func_5073049904_op4[2] = { cf+28, cf+68};
        static void **func_5073049904_op5[2] = { cf+29, cf+68};
        static void **func_5073049904_op6[2] = { cf+30, cf+68};
        static void **func_5073049904_op7[2] = { cf+31, cf+68};
        static void **func_5073049904_op8[2] = { cf+32, cf+68};
        static void **func_5073049904_op9[2] = { cf+33, cf+68};
        static void **func_5073050000_op0[2] = { cf+34, cf+68};
        static void **func_5073050000_op1[2] = { cf+36, cf+68};
        static void **func_5073050000_op2[2] = { cf+13, cf+68};
        static void **func_5073049776_op0[2] = { cf+38, cf+68};
        static void **func_5073049776_op1[2] = { cf+8, cf+68};
        static void **func_5073049776_op2[2] = { cf+6, cf+68};
        static void **func_5073049696_op0[2] = { cf+41, cf+68};
        static void **func_5073050400_op0[2] = { cf+45, cf+68};
        static void **func_5073050400_op1[2] = { cf+46, cf+68};
        static void **func_5073050400_op2[2] = { cf+47, cf+68};
        static void **func_5073050400_op3[2] = { cf+48, cf+68};
        static void **func_5073050400_op4[2] = { cf+49, cf+68};
        static void **func_5073050400_op5[2] = { cf+50, cf+68};
        static void **func_5073050400_op6[2] = { cf+51, cf+68};
        static void **func_5073050400_op7[2] = { cf+52, cf+68};
        static void **func_5073050400_op8[2] = { cf+53, cf+68};
        static void **func_5073049616_op0[2] = { cf+54, cf+68};
        static void **func_5073049616_op1[2] = { cf+56, cf+68};
        static void **func_5073050128_op0[2] = { cf+2, cf+68};
        static void **func_5073050128_op1[2] = { cf+58, cf+68};
        static void **func_5073050656_op0[2] = { cf+59, cf+68};
        static void **func_5073050320_op0[2] = { cf+61, cf+68};
        static void **func_5073050592_op0[2] = { cf+10, cf+69};
        static void **func_5073051008_op0[2] = { cf+7, cf+68};
        static void **func_5073051008_op1[2] = { cf+14, cf+68};
        static void **func_5073051008_op2[2] = { cf+5, cf+68};
        static void **func_5073051008_op3[2] = { cf+0, cf+68};
        static void **func_5073051008_op4[2] = { cf+9, cf+68};
        static void **func_5073051376_op0[2] = { cf+62, cf+68};
        static void **func_5073051376_op1[2] = { cf+64, cf+68};
        static void **func_5073051376_op2[2] = { cf+4, cf+68};
        static void **func_5073051216_op0[2] = { cf+66, cf+68};
        static void **exp_5073050944[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_5073052240[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_5073052496[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_5073052752[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_5073054864[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_5073052032[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_5073053168[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_5073053008[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5073057200[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5073055664[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5073055840[3] = {cf+2, cf+8, cf+68};
        static void **exp_5073057904[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_5073058544[3] = {cf+12, cf+10, cf+68};
        static void **exp_5073059392[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_5073058672[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_5073059328[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_5073049120:
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
            PC = func_5073049120_op0;
        break;
    }
    goto ***PC;
func_5073049488:
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
            PC = func_5073049488_op0;
        break;
        case 1:
            PC = func_5073049488_op1;
        break;
        case 2:
            PC = func_5073049488_op2;
        break;
    }
    goto ***PC;
func_5073049904:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5073049904_op0;
        break;
        case 1:
            PC = func_5073049904_op1;
        break;
        case 2:
            PC = func_5073049904_op2;
        break;
        case 3:
            PC = func_5073049904_op3;
        break;
        case 4:
            PC = func_5073049904_op4;
        break;
        case 5:
            PC = func_5073049904_op5;
        break;
        case 6:
            PC = func_5073049904_op6;
        break;
        case 7:
            PC = func_5073049904_op7;
        break;
        case 8:
            PC = func_5073049904_op8;
        break;
        case 9:
            PC = func_5073049904_op9;
        break;
    }
    goto ***PC;
func_5073050000:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5073050000_op0;
        break;
        case 1:
            PC = func_5073050000_op1;
        break;
        case 2:
            PC = func_5073050000_op2;
        break;
    }
    goto ***PC;
func_5073049776:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5073049776_op0;
        break;
        case 1:
            PC = func_5073049776_op1;
        break;
        case 2:
            PC = func_5073049776_op2;
        break;
    }
    goto ***PC;
func_5073049696:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5073049696_op0;
        break;
    }
    goto ***PC;
func_5073050400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5073050400_op0;
        break;
        case 1:
            PC = func_5073050400_op1;
        break;
        case 2:
            PC = func_5073050400_op2;
        break;
        case 3:
            PC = func_5073050400_op3;
        break;
        case 4:
            PC = func_5073050400_op4;
        break;
        case 5:
            PC = func_5073050400_op5;
        break;
        case 6:
            PC = func_5073050400_op6;
        break;
        case 7:
            PC = func_5073050400_op7;
        break;
        case 8:
            PC = func_5073050400_op8;
        break;
    }
    goto ***PC;
func_5073049616:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5073049616_op0;
        break;
        case 1:
            PC = func_5073049616_op1;
        break;
    }
    goto ***PC;
func_5073050128:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5073050128_op0;
        break;
        case 1:
            PC = func_5073050128_op1;
        break;
    }
    goto ***PC;
func_5073050656:
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
            PC = func_5073050656_op0;
        break;
    }
    goto ***PC;
func_5073050320:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5073050320_op0;
        break;
    }
    goto ***PC;
func_5073050592:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5073050592_op0;
        break;
    }
    goto ***PC;
func_5073051008:
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
            PC = func_5073051008_op0;
        break;
        case 1:
            PC = func_5073051008_op1;
        break;
        case 2:
            PC = func_5073051008_op2;
        break;
        case 3:
            PC = func_5073051008_op3;
        break;
        case 4:
            PC = func_5073051008_op4;
        break;
    }
    goto ***PC;
func_5073051376:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5073051376_op0;
        break;
        case 1:
            PC = func_5073051376_op1;
        break;
        case 2:
            PC = func_5073051376_op2;
        break;
    }
    goto ***PC;
func_5073051216:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5073051216_op0;
        break;
    }
    goto ***PC;
func_5073050944:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073050944;
    goto ***PC;
func_5073051136:
    extend(61);
    NEXT();
    goto ***PC;
func_5073050192:
    extend(59);
    NEXT();
    goto ***PC;
func_5073052240:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073052240;
    goto ***PC;
func_5073052368:
    extend(62);
    NEXT();
    goto ***PC;
func_5073052496:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073052496;
    goto ***PC;
func_5073052624:
    extend(60);
    NEXT();
    goto ***PC;
func_5073052752:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073052752;
    goto ***PC;
func_5073052880:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5073053264:
    extend(48);
    NEXT();
    goto ***PC;
func_5073050848:
    extend(49);
    NEXT();
    goto ***PC;
func_5073053456:
    extend(50);
    NEXT();
    goto ***PC;
func_5073053584:
    extend(51);
    NEXT();
    goto ***PC;
func_5073053712:
    extend(52);
    NEXT();
    goto ***PC;
func_5073053904:
    extend(53);
    NEXT();
    goto ***PC;
func_5073054032:
    extend(54);
    NEXT();
    goto ***PC;
func_5073054160:
    extend(55);
    NEXT();
    goto ***PC;
func_5073054288:
    extend(56);
    NEXT();
    goto ***PC;
func_5073053840:
    extend(57);
    NEXT();
    goto ***PC;
func_5073054864:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073054864;
    goto ***PC;
func_5073054992:
    extend(43);
    NEXT();
    goto ***PC;
func_5073052032:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073052032;
    goto ***PC;
func_5073052160:
    extend(45);
    NEXT();
    goto ***PC;
func_5073053168:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073053168;
    goto ***PC;
func_5073055344:
    extend(40);
    NEXT();
    goto ***PC;
func_5073055472:
    extend(41);
    NEXT();
    goto ***PC;
func_5073053008:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073053008;
    goto ***PC;
func_5073056240:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_5073056368:
    extend(123);
    NEXT();
    goto ***PC;
func_5073051504:
    extend(125);
    NEXT();
    goto ***PC;
func_5073056016:
    extend(105);
    NEXT();
    goto ***PC;
func_5073056688:
    extend(106);
    NEXT();
    goto ***PC;
func_5073056816:
    extend(107);
    NEXT();
    goto ***PC;
func_5073056944:
    extend(120);
    NEXT();
    goto ***PC;
func_5073057072:
    extend(121);
    NEXT();
    goto ***PC;
func_5073057264:
    extend(122);
    NEXT();
    goto ***PC;
func_5073057392:
    extend(97);
    NEXT();
    goto ***PC;
func_5073057520:
    extend(98);
    NEXT();
    goto ***PC;
func_5073057648:
    extend(99);
    NEXT();
    goto ***PC;
func_5073057200:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073057200;
    goto ***PC;
func_5073058416:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5073055664:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073055664;
    goto ***PC;
func_5073058240:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5073055840:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073055840;
    goto ***PC;
func_5073057904:
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
    PC = exp_5073057904;
    goto ***PC;
func_5073058032:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5073058544:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073058544;
    goto ***PC;
func_5073059392:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073059392;
    goto ***PC;
func_5073059520:
    extend(42);
    NEXT();
    goto ***PC;
func_5073058672:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073058672;
    goto ***PC;
func_5073054352:
    extend(47);
    NEXT();
    goto ***PC;
func_5073059328:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5073059328;
    goto ***PC;
func_5073054720:
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
    PC = func_5073050592_op0;
    goto ***PC;
}
