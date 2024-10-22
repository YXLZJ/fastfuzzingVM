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
        unsigned loop_limit = 16;
        static void * cf[] = {&&func_5492479520, &&func_5492479888, &&func_5492480304, &&func_5492480400, &&func_5492480176, &&func_5492480096, &&func_5492480800, &&func_5492480016, &&func_5492480528, &&func_5492481056, &&func_5492480720, &&func_5492480992, &&func_5492481408, &&func_5492481776, &&func_5492481616, &&func_5492481344, &&func_5492481536, &&func_5492480592, &&func_5492482640, &&func_5492482768, &&func_5492482896, &&func_5492483024, &&func_5492483152, &&func_5492483280, &&func_5492483664, &&func_5492481248, &&func_5492483856, &&func_5492483984, &&func_5492484112, &&func_5492484304, &&func_5492484432, &&func_5492484560, &&func_5492484688, &&func_5492484240, &&func_5492485264, &&func_5492485392, &&func_5492482432, &&func_5492482560, &&func_5492483568, &&func_5492485744, &&func_5492485872, &&func_5492483408, &&func_5492486640, &&func_5492486768, &&func_5492481904, &&func_5492486416, &&func_5492487088, &&func_5492487216, &&func_5492487344, &&func_5492487472, &&func_5492487664, &&func_5492487792, &&func_5492487920, &&func_5492488048, &&func_5492487600, &&func_5492488816, &&func_5492486064, &&func_5492488640, &&func_5492486240, &&func_5492488304, &&func_5492488432, &&func_5492488944, &&func_5492489792, &&func_5492489920, &&func_5492489072, &&func_5492484752, &&func_5492489728, &&func_5492485120, &&RETURN, &&HALT};
        static void **func_5492479520_op0[2] = { cf+15, cf+68};
        static void **func_5492479888_op0[2] = { cf+18, cf+68};
        static void **func_5492479888_op1[2] = { cf+20, cf+68};
        static void **func_5492479888_op2[2] = { cf+22, cf+68};
        static void **func_5492480304_op0[2] = { cf+24, cf+68};
        static void **func_5492480304_op1[2] = { cf+25, cf+68};
        static void **func_5492480304_op2[2] = { cf+26, cf+68};
        static void **func_5492480304_op3[2] = { cf+27, cf+68};
        static void **func_5492480304_op4[2] = { cf+28, cf+68};
        static void **func_5492480304_op5[2] = { cf+29, cf+68};
        static void **func_5492480304_op6[2] = { cf+30, cf+68};
        static void **func_5492480304_op7[2] = { cf+31, cf+68};
        static void **func_5492480304_op8[2] = { cf+32, cf+68};
        static void **func_5492480304_op9[2] = { cf+33, cf+68};
        static void **func_5492480400_op0[2] = { cf+34, cf+68};
        static void **func_5492480400_op1[2] = { cf+36, cf+68};
        static void **func_5492480400_op2[2] = { cf+13, cf+68};
        static void **func_5492480176_op0[2] = { cf+38, cf+68};
        static void **func_5492480176_op1[2] = { cf+8, cf+68};
        static void **func_5492480176_op2[2] = { cf+6, cf+68};
        static void **func_5492480096_op0[2] = { cf+41, cf+68};
        static void **func_5492480800_op0[2] = { cf+45, cf+68};
        static void **func_5492480800_op1[2] = { cf+46, cf+68};
        static void **func_5492480800_op2[2] = { cf+47, cf+68};
        static void **func_5492480800_op3[2] = { cf+48, cf+68};
        static void **func_5492480800_op4[2] = { cf+49, cf+68};
        static void **func_5492480800_op5[2] = { cf+50, cf+68};
        static void **func_5492480800_op6[2] = { cf+51, cf+68};
        static void **func_5492480800_op7[2] = { cf+52, cf+68};
        static void **func_5492480800_op8[2] = { cf+53, cf+68};
        static void **func_5492480016_op0[2] = { cf+54, cf+68};
        static void **func_5492480016_op1[2] = { cf+56, cf+68};
        static void **func_5492480528_op0[2] = { cf+2, cf+68};
        static void **func_5492480528_op1[2] = { cf+58, cf+68};
        static void **func_5492481056_op0[2] = { cf+59, cf+68};
        static void **func_5492480720_op0[2] = { cf+61, cf+68};
        static void **func_5492480992_op0[2] = { cf+10, cf+69};
        static void **func_5492481408_op0[2] = { cf+7, cf+68};
        static void **func_5492481408_op1[2] = { cf+14, cf+68};
        static void **func_5492481408_op2[2] = { cf+5, cf+68};
        static void **func_5492481408_op3[2] = { cf+0, cf+68};
        static void **func_5492481408_op4[2] = { cf+9, cf+68};
        static void **func_5492481776_op0[2] = { cf+62, cf+68};
        static void **func_5492481776_op1[2] = { cf+64, cf+68};
        static void **func_5492481776_op2[2] = { cf+4, cf+68};
        static void **func_5492481616_op0[2] = { cf+66, cf+68};
        static void **exp_5492481344[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_5492482640[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_5492482896[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_5492483152[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_5492485264[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_5492482432[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_5492483568[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_5492483408[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5492487600[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5492486064[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5492486240[3] = {cf+2, cf+8, cf+68};
        static void **exp_5492488304[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_5492488944[3] = {cf+12, cf+10, cf+68};
        static void **exp_5492489792[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_5492489072[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_5492489728[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_5492479520:
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
            PC = func_5492479520_op0;
        break;
    }
    goto ***PC;
func_5492479888:
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
            PC = func_5492479888_op0;
        break;
        case 1:
            PC = func_5492479888_op1;
        break;
        case 2:
            PC = func_5492479888_op2;
        break;
    }
    goto ***PC;
func_5492480304:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480304_op0;
        break;
        case 1:
            PC = func_5492480304_op1;
        break;
        case 2:
            PC = func_5492480304_op2;
        break;
        case 3:
            PC = func_5492480304_op3;
        break;
        case 4:
            PC = func_5492480304_op4;
        break;
        case 5:
            PC = func_5492480304_op5;
        break;
        case 6:
            PC = func_5492480304_op6;
        break;
        case 7:
            PC = func_5492480304_op7;
        break;
        case 8:
            PC = func_5492480304_op8;
        break;
        case 9:
            PC = func_5492480304_op9;
        break;
    }
    goto ***PC;
func_5492480400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480400_op0;
        break;
        case 1:
            PC = func_5492480400_op1;
        break;
        case 2:
            PC = func_5492480400_op2;
        break;
    }
    goto ***PC;
func_5492480176:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480176_op0;
        break;
        case 1:
            PC = func_5492480176_op1;
        break;
        case 2:
            PC = func_5492480176_op2;
        break;
    }
    goto ***PC;
func_5492480096:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480096_op0;
        break;
    }
    goto ***PC;
func_5492480800:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480800_op0;
        break;
        case 1:
            PC = func_5492480800_op1;
        break;
        case 2:
            PC = func_5492480800_op2;
        break;
        case 3:
            PC = func_5492480800_op3;
        break;
        case 4:
            PC = func_5492480800_op4;
        break;
        case 5:
            PC = func_5492480800_op5;
        break;
        case 6:
            PC = func_5492480800_op6;
        break;
        case 7:
            PC = func_5492480800_op7;
        break;
        case 8:
            PC = func_5492480800_op8;
        break;
    }
    goto ***PC;
func_5492480016:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480016_op0;
        break;
        case 1:
            PC = func_5492480016_op1;
        break;
    }
    goto ***PC;
func_5492480528:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480528_op0;
        break;
        case 1:
            PC = func_5492480528_op1;
        break;
    }
    goto ***PC;
func_5492481056:
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
            PC = func_5492481056_op0;
        break;
    }
    goto ***PC;
func_5492480720:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480720_op0;
        break;
    }
    goto ***PC;
func_5492480992:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480992_op0;
        break;
    }
    goto ***PC;
func_5492481408:
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
            PC = func_5492481408_op0;
        break;
        case 1:
            PC = func_5492481408_op1;
        break;
        case 2:
            PC = func_5492481408_op2;
        break;
        case 3:
            PC = func_5492481408_op3;
        break;
        case 4:
            PC = func_5492481408_op4;
        break;
    }
    goto ***PC;
func_5492481776:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5492481776_op0;
        break;
        case 1:
            PC = func_5492481776_op1;
        break;
        case 2:
            PC = func_5492481776_op2;
        break;
    }
    goto ***PC;
func_5492481616:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5492481616_op0;
        break;
    }
    goto ***PC;
func_5492481344:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492481344;
    goto ***PC;
func_5492481536:
    extend(61);
    NEXT();
    goto ***PC;
func_5492480592:
    extend(59);
    NEXT();
    goto ***PC;
func_5492482640:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492482640;
    goto ***PC;
func_5492482768:
    extend(62);
    NEXT();
    goto ***PC;
func_5492482896:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492482896;
    goto ***PC;
func_5492483024:
    extend(60);
    NEXT();
    goto ***PC;
func_5492483152:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492483152;
    goto ***PC;
func_5492483280:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5492483664:
    extend(48);
    NEXT();
    goto ***PC;
func_5492481248:
    extend(49);
    NEXT();
    goto ***PC;
func_5492483856:
    extend(50);
    NEXT();
    goto ***PC;
func_5492483984:
    extend(51);
    NEXT();
    goto ***PC;
func_5492484112:
    extend(52);
    NEXT();
    goto ***PC;
func_5492484304:
    extend(53);
    NEXT();
    goto ***PC;
func_5492484432:
    extend(54);
    NEXT();
    goto ***PC;
func_5492484560:
    extend(55);
    NEXT();
    goto ***PC;
func_5492484688:
    extend(56);
    NEXT();
    goto ***PC;
func_5492484240:
    extend(57);
    NEXT();
    goto ***PC;
func_5492485264:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492485264;
    goto ***PC;
func_5492485392:
    extend(43);
    NEXT();
    goto ***PC;
func_5492482432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492482432;
    goto ***PC;
func_5492482560:
    extend(45);
    NEXT();
    goto ***PC;
func_5492483568:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492483568;
    goto ***PC;
func_5492485744:
    extend(40);
    NEXT();
    goto ***PC;
func_5492485872:
    extend(41);
    NEXT();
    goto ***PC;
func_5492483408:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492483408;
    goto ***PC;
func_5492486640:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_5492486768:
    extend(123);
    NEXT();
    goto ***PC;
func_5492481904:
    extend(125);
    NEXT();
    goto ***PC;
func_5492486416:
    extend(105);
    NEXT();
    goto ***PC;
func_5492487088:
    extend(106);
    NEXT();
    goto ***PC;
func_5492487216:
    extend(107);
    NEXT();
    goto ***PC;
func_5492487344:
    extend(120);
    NEXT();
    goto ***PC;
func_5492487472:
    extend(121);
    NEXT();
    goto ***PC;
func_5492487664:
    extend(122);
    NEXT();
    goto ***PC;
func_5492487792:
    extend(97);
    NEXT();
    goto ***PC;
func_5492487920:
    extend(98);
    NEXT();
    goto ***PC;
func_5492488048:
    extend(99);
    NEXT();
    goto ***PC;
func_5492487600:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492487600;
    goto ***PC;
func_5492488816:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5492486064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492486064;
    goto ***PC;
func_5492488640:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5492486240:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492486240;
    goto ***PC;
func_5492488304:
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
    PC = exp_5492488304;
    goto ***PC;
func_5492488432:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5492488944:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492488944;
    goto ***PC;
func_5492489792:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492489792;
    goto ***PC;
func_5492489920:
    extend(42);
    NEXT();
    goto ***PC;
func_5492489072:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492489072;
    goto ***PC;
func_5492484752:
    extend(47);
    NEXT();
    goto ***PC;
func_5492489728:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5492489728;
    goto ***PC;
func_5492485120:
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
    PC = func_5492480992_op0;
    goto ***PC;
}
