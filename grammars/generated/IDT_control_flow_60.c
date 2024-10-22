#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 60
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
        static void * cf[] = {&&func_5307930144, &&func_5307930512, &&func_5307930928, &&func_5307931024, &&func_5307930800, &&func_5307930720, &&func_5307931424, &&func_5307930640, &&func_5307931152, &&func_5307931680, &&func_5307931344, &&func_5307931616, &&func_5307932032, &&func_5307932400, &&func_5307932240, &&func_5307931968, &&func_5307932160, &&func_5307931216, &&func_5307933264, &&func_5307933392, &&func_5307933520, &&func_5307933648, &&func_5307933776, &&func_5307933904, &&func_5307934288, &&func_5307931872, &&func_5307934480, &&func_5307934608, &&func_5307934736, &&func_5307934928, &&func_5307935056, &&func_5307935184, &&func_5307935312, &&func_5307934864, &&func_5307935888, &&func_5307936016, &&func_5307933056, &&func_5307933184, &&func_5307934192, &&func_5307936368, &&func_5307936496, &&func_5307934032, &&func_5307937264, &&func_5307937392, &&func_5307932528, &&func_5307937040, &&func_5307937712, &&func_5307937840, &&func_5307937968, &&func_5307938096, &&func_5307938288, &&func_5307938416, &&func_5307938544, &&func_5307938672, &&func_5307938224, &&func_5307939440, &&func_5307936688, &&func_5307939264, &&func_5307936864, &&func_5307938928, &&func_5307939056, &&func_5307939568, &&func_5307940416, &&func_5307940544, &&func_5307939696, &&func_5307935376, &&func_5307940352, &&func_5307935744, &&RETURN, &&HALT};
        static void **func_5307930144_op0[2] = { cf+15, cf+68};
        static void **func_5307930512_op0[2] = { cf+18, cf+68};
        static void **func_5307930512_op1[2] = { cf+20, cf+68};
        static void **func_5307930512_op2[2] = { cf+22, cf+68};
        static void **func_5307930928_op0[2] = { cf+24, cf+68};
        static void **func_5307930928_op1[2] = { cf+25, cf+68};
        static void **func_5307930928_op2[2] = { cf+26, cf+68};
        static void **func_5307930928_op3[2] = { cf+27, cf+68};
        static void **func_5307930928_op4[2] = { cf+28, cf+68};
        static void **func_5307930928_op5[2] = { cf+29, cf+68};
        static void **func_5307930928_op6[2] = { cf+30, cf+68};
        static void **func_5307930928_op7[2] = { cf+31, cf+68};
        static void **func_5307930928_op8[2] = { cf+32, cf+68};
        static void **func_5307930928_op9[2] = { cf+33, cf+68};
        static void **func_5307931024_op0[2] = { cf+34, cf+68};
        static void **func_5307931024_op1[2] = { cf+36, cf+68};
        static void **func_5307931024_op2[2] = { cf+13, cf+68};
        static void **func_5307930800_op0[2] = { cf+38, cf+68};
        static void **func_5307930800_op1[2] = { cf+8, cf+68};
        static void **func_5307930800_op2[2] = { cf+6, cf+68};
        static void **func_5307930720_op0[2] = { cf+41, cf+68};
        static void **func_5307931424_op0[2] = { cf+45, cf+68};
        static void **func_5307931424_op1[2] = { cf+46, cf+68};
        static void **func_5307931424_op2[2] = { cf+47, cf+68};
        static void **func_5307931424_op3[2] = { cf+48, cf+68};
        static void **func_5307931424_op4[2] = { cf+49, cf+68};
        static void **func_5307931424_op5[2] = { cf+50, cf+68};
        static void **func_5307931424_op6[2] = { cf+51, cf+68};
        static void **func_5307931424_op7[2] = { cf+52, cf+68};
        static void **func_5307931424_op8[2] = { cf+53, cf+68};
        static void **func_5307930640_op0[2] = { cf+54, cf+68};
        static void **func_5307930640_op1[2] = { cf+56, cf+68};
        static void **func_5307931152_op0[2] = { cf+2, cf+68};
        static void **func_5307931152_op1[2] = { cf+58, cf+68};
        static void **func_5307931680_op0[2] = { cf+59, cf+68};
        static void **func_5307931344_op0[2] = { cf+61, cf+68};
        static void **func_5307931616_op0[2] = { cf+10, cf+69};
        static void **func_5307932032_op0[2] = { cf+7, cf+68};
        static void **func_5307932032_op1[2] = { cf+14, cf+68};
        static void **func_5307932032_op2[2] = { cf+5, cf+68};
        static void **func_5307932032_op3[2] = { cf+0, cf+68};
        static void **func_5307932032_op4[2] = { cf+9, cf+68};
        static void **func_5307932400_op0[2] = { cf+62, cf+68};
        static void **func_5307932400_op1[2] = { cf+64, cf+68};
        static void **func_5307932400_op2[2] = { cf+4, cf+68};
        static void **func_5307932240_op0[2] = { cf+66, cf+68};
        static void **exp_5307931968[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_5307933264[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_5307933520[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_5307933776[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_5307935888[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_5307933056[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_5307934192[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_5307934032[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5307938224[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5307936688[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5307936864[3] = {cf+2, cf+8, cf+68};
        static void **exp_5307938928[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_5307939568[3] = {cf+12, cf+10, cf+68};
        static void **exp_5307940416[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_5307939696[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_5307940352[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_5307930144:
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
            PC = func_5307930144_op0;
        break;
    }
    goto ***PC;
func_5307930512:
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
            PC = func_5307930512_op0;
        break;
        case 1:
            PC = func_5307930512_op1;
        break;
        case 2:
            PC = func_5307930512_op2;
        break;
    }
    goto ***PC;
func_5307930928:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5307930928_op0;
        break;
        case 1:
            PC = func_5307930928_op1;
        break;
        case 2:
            PC = func_5307930928_op2;
        break;
        case 3:
            PC = func_5307930928_op3;
        break;
        case 4:
            PC = func_5307930928_op4;
        break;
        case 5:
            PC = func_5307930928_op5;
        break;
        case 6:
            PC = func_5307930928_op6;
        break;
        case 7:
            PC = func_5307930928_op7;
        break;
        case 8:
            PC = func_5307930928_op8;
        break;
        case 9:
            PC = func_5307930928_op9;
        break;
    }
    goto ***PC;
func_5307931024:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5307931024_op0;
        break;
        case 1:
            PC = func_5307931024_op1;
        break;
        case 2:
            PC = func_5307931024_op2;
        break;
    }
    goto ***PC;
func_5307930800:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5307930800_op0;
        break;
        case 1:
            PC = func_5307930800_op1;
        break;
        case 2:
            PC = func_5307930800_op2;
        break;
    }
    goto ***PC;
func_5307930720:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5307930720_op0;
        break;
    }
    goto ***PC;
func_5307931424:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5307931424_op0;
        break;
        case 1:
            PC = func_5307931424_op1;
        break;
        case 2:
            PC = func_5307931424_op2;
        break;
        case 3:
            PC = func_5307931424_op3;
        break;
        case 4:
            PC = func_5307931424_op4;
        break;
        case 5:
            PC = func_5307931424_op5;
        break;
        case 6:
            PC = func_5307931424_op6;
        break;
        case 7:
            PC = func_5307931424_op7;
        break;
        case 8:
            PC = func_5307931424_op8;
        break;
    }
    goto ***PC;
func_5307930640:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5307930640_op0;
        break;
        case 1:
            PC = func_5307930640_op1;
        break;
    }
    goto ***PC;
func_5307931152:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5307931152_op0;
        break;
        case 1:
            PC = func_5307931152_op1;
        break;
    }
    goto ***PC;
func_5307931680:
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
            PC = func_5307931680_op0;
        break;
    }
    goto ***PC;
func_5307931344:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5307931344_op0;
        break;
    }
    goto ***PC;
func_5307931616:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5307931616_op0;
        break;
    }
    goto ***PC;
func_5307932032:
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
            PC = func_5307932032_op0;
        break;
        case 1:
            PC = func_5307932032_op1;
        break;
        case 2:
            PC = func_5307932032_op2;
        break;
        case 3:
            PC = func_5307932032_op3;
        break;
        case 4:
            PC = func_5307932032_op4;
        break;
    }
    goto ***PC;
func_5307932400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5307932400_op0;
        break;
        case 1:
            PC = func_5307932400_op1;
        break;
        case 2:
            PC = func_5307932400_op2;
        break;
    }
    goto ***PC;
func_5307932240:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5307932240_op0;
        break;
    }
    goto ***PC;
func_5307931968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307931968;
    goto ***PC;
func_5307932160:
    extend(61);
    NEXT();
    goto ***PC;
func_5307931216:
    extend(59);
    NEXT();
    goto ***PC;
func_5307933264:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307933264;
    goto ***PC;
func_5307933392:
    extend(62);
    NEXT();
    goto ***PC;
func_5307933520:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307933520;
    goto ***PC;
func_5307933648:
    extend(60);
    NEXT();
    goto ***PC;
func_5307933776:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307933776;
    goto ***PC;
func_5307933904:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5307934288:
    extend(48);
    NEXT();
    goto ***PC;
func_5307931872:
    extend(49);
    NEXT();
    goto ***PC;
func_5307934480:
    extend(50);
    NEXT();
    goto ***PC;
func_5307934608:
    extend(51);
    NEXT();
    goto ***PC;
func_5307934736:
    extend(52);
    NEXT();
    goto ***PC;
func_5307934928:
    extend(53);
    NEXT();
    goto ***PC;
func_5307935056:
    extend(54);
    NEXT();
    goto ***PC;
func_5307935184:
    extend(55);
    NEXT();
    goto ***PC;
func_5307935312:
    extend(56);
    NEXT();
    goto ***PC;
func_5307934864:
    extend(57);
    NEXT();
    goto ***PC;
func_5307935888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307935888;
    goto ***PC;
func_5307936016:
    extend(43);
    NEXT();
    goto ***PC;
func_5307933056:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307933056;
    goto ***PC;
func_5307933184:
    extend(45);
    NEXT();
    goto ***PC;
func_5307934192:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307934192;
    goto ***PC;
func_5307936368:
    extend(40);
    NEXT();
    goto ***PC;
func_5307936496:
    extend(41);
    NEXT();
    goto ***PC;
func_5307934032:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307934032;
    goto ***PC;
func_5307937264:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_5307937392:
    extend(123);
    NEXT();
    goto ***PC;
func_5307932528:
    extend(125);
    NEXT();
    goto ***PC;
func_5307937040:
    extend(105);
    NEXT();
    goto ***PC;
func_5307937712:
    extend(106);
    NEXT();
    goto ***PC;
func_5307937840:
    extend(107);
    NEXT();
    goto ***PC;
func_5307937968:
    extend(120);
    NEXT();
    goto ***PC;
func_5307938096:
    extend(121);
    NEXT();
    goto ***PC;
func_5307938288:
    extend(122);
    NEXT();
    goto ***PC;
func_5307938416:
    extend(97);
    NEXT();
    goto ***PC;
func_5307938544:
    extend(98);
    NEXT();
    goto ***PC;
func_5307938672:
    extend(99);
    NEXT();
    goto ***PC;
func_5307938224:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307938224;
    goto ***PC;
func_5307939440:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5307936688:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307936688;
    goto ***PC;
func_5307939264:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5307936864:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307936864;
    goto ***PC;
func_5307938928:
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
    PC = exp_5307938928;
    goto ***PC;
func_5307939056:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5307939568:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307939568;
    goto ***PC;
func_5307940416:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307940416;
    goto ***PC;
func_5307940544:
    extend(42);
    NEXT();
    goto ***PC;
func_5307939696:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307939696;
    goto ***PC;
func_5307935376:
    extend(47);
    NEXT();
    goto ***PC;
func_5307940352:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5307940352;
    goto ***PC;
func_5307935744:
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
    PC = func_5307931616_op0;
    goto ***PC;
}
