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
        unsigned loop_limit = 7;
        static void * cf[] = {&&func_4888484464, &&func_4888494672, &&func_4888494976, &&func_4888495328, &&func_4888495040, &&func_4888494592, &&func_4888494464, &&func_4888495792, &&func_4888494832, &&func_4888495456, &&func_4888495584, &&func_4888495712, &&func_4888496208, &&func_4888496336, &&func_4888496496, &&func_4888496704, &&func_4888496832, &&func_4888497216, &&func_4888496080, &&func_4888497568, &&func_4888494896, &&func_4888497760, &&func_4888497888, &&func_4888498016, &&func_4888498480, &&func_4888496624, &&func_4888498672, &&func_4888498832, &&func_4888498960, &&func_4888499152, &&func_4888499280, &&func_4888499408, &&func_4888499536, &&func_4888499088, &&func_4888497344, &&func_4888495968, &&func_4888500176, &&func_4888500304, &&func_4888500688, &&func_4888500816, &&func_4888500944, &&func_4888501104, &&func_4888501232, &&func_4888501424, &&func_4888501552, &&func_4888501680, &&func_4888501808, &&func_4888501360, &&func_4888500576, &&func_4888498208, &&func_4888498336, &&func_4888500496, &&func_4888502320, &&RETURN, &&HALT};
        static void **func_4888484464_op0[2] = { cf+11, cf+53};
        static void **func_4888484464_op1[2] = { cf+12, cf+53};
        static void **func_4888484464_op2[2] = { cf+13, cf+53};
        static void **func_4888484464_op3[2] = { cf+14, cf+53};
        static void **func_4888494672_op0[2] = { cf+15, cf+53};
        static void **func_4888494672_op1[2] = { cf+16, cf+53};
        static void **func_4888494976_op0[2] = { cf+18, cf+53};
        static void **func_4888494976_op1[2] = { cf+20, cf+53};
        static void **func_4888494976_op2[2] = { cf+22, cf+53};
        static void **func_4888495328_op0[2] = { cf+24, cf+53};
        static void **func_4888495328_op1[2] = { cf+25, cf+53};
        static void **func_4888495328_op2[2] = { cf+26, cf+53};
        static void **func_4888495328_op3[2] = { cf+27, cf+53};
        static void **func_4888495328_op4[2] = { cf+28, cf+53};
        static void **func_4888495328_op5[2] = { cf+29, cf+53};
        static void **func_4888495328_op6[2] = { cf+30, cf+53};
        static void **func_4888495328_op7[2] = { cf+31, cf+53};
        static void **func_4888495328_op8[2] = { cf+32, cf+53};
        static void **func_4888495328_op9[2] = { cf+33, cf+53};
        static void **func_4888495040_op0[2] = { cf+3, cf+53};
        static void **func_4888495040_op1[2] = { cf+34, cf+53};
        static void **func_4888494592_op0[2] = { cf+35, cf+53};
        static void **func_4888494464_op0[2] = { cf+5, cf+54};
        static void **func_4888495792_op0[2] = { cf+38, cf+53};
        static void **func_4888495792_op1[2] = { cf+39, cf+53};
        static void **func_4888495792_op2[2] = { cf+40, cf+53};
        static void **func_4888495792_op3[2] = { cf+41, cf+53};
        static void **func_4888495792_op4[2] = { cf+42, cf+53};
        static void **func_4888495792_op5[2] = { cf+43, cf+53};
        static void **func_4888495792_op6[2] = { cf+44, cf+53};
        static void **func_4888495792_op7[2] = { cf+45, cf+53};
        static void **func_4888495792_op8[2] = { cf+46, cf+53};
        static void **func_4888495792_op9[2] = { cf+47, cf+53};
        static void **func_4888494832_op0[2] = { cf+48, cf+53};
        static void **func_4888494832_op1[2] = { cf+49, cf+53};
        static void **func_4888494832_op2[2] = { cf+50, cf+53};
        static void **func_4888495456_op0[2] = { cf+4, cf+53};
        static void **func_4888495456_op1[2] = { cf+7, cf+53};
        static void **func_4888495584_op0[2] = { cf+51, cf+53};
        static void **exp_4888496832[4] = {cf+0, cf+17, cf+1, cf+53};
        static void **exp_4888496080[4] = {cf+0, cf+19, cf+9, cf+53};
        static void **exp_4888494896[4] = {cf+2, cf+21, cf+2, cf+53};
        static void **exp_4888497888[4] = {cf+2, cf+23, cf+2, cf+53};
        static void **exp_4888497344[3] = {cf+3, cf+4, cf+53};
        static void **exp_4888495968[6] = {cf+36, cf+1, cf+37, cf+8, cf+10, cf+53};
        static void **exp_4888500496[3] = {cf+52, cf+2, cf+53};
goto LOOP;

func_4888484464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        NEXT();
        goto ***PC;
    }
    xor(4);
    store();
    switch (branch) {
        case 0:
            PC = func_4888484464_op0;
        break;
        case 1:
            PC = func_4888484464_op1;
        break;
        case 2:
            PC = func_4888484464_op2;
        break;
        case 3:
            PC = func_4888484464_op3;
        break;
    }
    goto ***PC;
func_4888494672:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4888494672_op0;
        break;
        case 1:
            PC = func_4888494672_op1;
        break;
    }
    goto ***PC;
func_4888494976:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4888494976_op0;
        break;
        case 1:
            PC = func_4888494976_op1;
        break;
        case 2:
            PC = func_4888494976_op2;
        break;
    }
    goto ***PC;
func_4888495328:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4888495328_op0;
        break;
        case 1:
            PC = func_4888495328_op1;
        break;
        case 2:
            PC = func_4888495328_op2;
        break;
        case 3:
            PC = func_4888495328_op3;
        break;
        case 4:
            PC = func_4888495328_op4;
        break;
        case 5:
            PC = func_4888495328_op5;
        break;
        case 6:
            PC = func_4888495328_op6;
        break;
        case 7:
            PC = func_4888495328_op7;
        break;
        case 8:
            PC = func_4888495328_op8;
        break;
        case 9:
            PC = func_4888495328_op9;
        break;
    }
    goto ***PC;
func_4888495040:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4888495040_op0;
        break;
        case 1:
            PC = func_4888495040_op1;
        break;
    }
    goto ***PC;
func_4888494592:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4888494592_op0;
        break;
    }
    goto ***PC;
func_4888494464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4888494464_op0;
        break;
    }
    goto ***PC;
func_4888495792:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4888495792_op0;
        break;
        case 1:
            PC = func_4888495792_op1;
        break;
        case 2:
            PC = func_4888495792_op2;
        break;
        case 3:
            PC = func_4888495792_op3;
        break;
        case 4:
            PC = func_4888495792_op4;
        break;
        case 5:
            PC = func_4888495792_op5;
        break;
        case 6:
            PC = func_4888495792_op6;
        break;
        case 7:
            PC = func_4888495792_op7;
        break;
        case 8:
            PC = func_4888495792_op8;
        break;
        case 9:
            PC = func_4888495792_op9;
        break;
    }
    goto ***PC;
func_4888494832:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4888494832_op0;
        break;
        case 1:
            PC = func_4888494832_op1;
        break;
        case 2:
            PC = func_4888494832_op2;
        break;
    }
    goto ***PC;
func_4888495456:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4888495456_op0;
        break;
        case 1:
            PC = func_4888495456_op1;
        break;
    }
    goto ***PC;
func_4888495584:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4888495584_op0;
        break;
    }
    goto ***PC;
func_4888495712:
    extend(105);
    extend(100);
    NEXT();
    goto ***PC;
func_4888496208:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto ***PC;
func_4888496336:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto ***PC;
func_4888496496:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto ***PC;
func_4888496704:
    extend(42);
    NEXT();
    goto ***PC;
func_4888496832:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(44);
        extend(42);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4888496832;
    goto ***PC;
func_4888497216:
    extend(44);
    NEXT();
    goto ***PC;
func_4888496080:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4888496080;
    goto ***PC;
func_4888497568:
    extend(61);
    NEXT();
    goto ***PC;
func_4888494896:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(65);
        extend(78);
        extend(68);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4888494896;
    goto ***PC;
func_4888497760:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_4888497888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(79);
        extend(82);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4888497888;
    goto ***PC;
func_4888498016:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_4888498480:
    extend(48);
    NEXT();
    goto ***PC;
func_4888496624:
    extend(49);
    NEXT();
    goto ***PC;
func_4888498672:
    extend(50);
    NEXT();
    goto ***PC;
func_4888498832:
    extend(51);
    NEXT();
    goto ***PC;
func_4888498960:
    extend(52);
    NEXT();
    goto ***PC;
func_4888499152:
    extend(53);
    NEXT();
    goto ***PC;
func_4888499280:
    extend(54);
    NEXT();
    goto ***PC;
func_4888499408:
    extend(55);
    NEXT();
    goto ***PC;
func_4888499536:
    extend(56);
    NEXT();
    goto ***PC;
func_4888499088:
    extend(57);
    NEXT();
    goto ***PC;
func_4888497344:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4888497344;
    goto ***PC;
func_4888495968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4888495968;
    goto ***PC;
func_4888500176:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto ***PC;
func_4888500304:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto ***PC;
func_4888500688:
    extend(97);
    NEXT();
    goto ***PC;
func_4888500816:
    extend(98);
    NEXT();
    goto ***PC;
func_4888500944:
    extend(99);
    NEXT();
    goto ***PC;
func_4888501104:
    extend(100);
    NEXT();
    goto ***PC;
func_4888501232:
    extend(101);
    NEXT();
    goto ***PC;
func_4888501424:
    extend(102);
    NEXT();
    goto ***PC;
func_4888501552:
    extend(103);
    NEXT();
    goto ***PC;
func_4888501680:
    extend(104);
    NEXT();
    goto ***PC;
func_4888501808:
    extend(105);
    NEXT();
    goto ***PC;
func_4888501360:
    extend(106);
    NEXT();
    goto ***PC;
func_4888500576:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_4888498208:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_4888498336:
    extend(112);
    extend(114);
    extend(111);
    extend(100);
    extend(117);
    extend(99);
    extend(116);
    extend(115);
    NEXT();
    goto ***PC;
func_4888500496:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4888500496;
    goto ***PC;
func_4888502320:
    extend(87);
    extend(72);
    extend(69);
    extend(82);
    extend(69);
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
    PC = func_4888494464_op0;
    goto ***PC;
}
