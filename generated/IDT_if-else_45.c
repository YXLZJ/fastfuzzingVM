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
        unsigned loop_limit = 12;
        static void * cf[] = {&&func_5442134752, &&func_5442144192, &&func_5442144112, &&func_5442144032, &&func_5442144656, &&func_5442143760, &&func_5442145184, &&func_5442143952, &&func_5442144480, &&func_5442144544, &&func_5442145424, &&func_5442145552, &&func_5442145776, &&func_5442145904, &&func_5442146032, &&func_5442146400, &&func_5442146528, &&func_5442144848, &&func_5442146912, &&func_5442147040, &&func_5442147168, &&func_5442147296, &&func_5442147424, &&func_5442147584, &&func_5442147712, &&func_5442147936, &&func_5442148064, &&func_5442148192, &&func_5442148320, &&func_5442148448, &&func_5442148640, &&func_5442147872, &&func_5442145680, &&func_5442146656, &&func_5442146784, &&func_5442146224, &&func_5442150128, &&func_5442150256, &&func_5442150064, &&func_5442149296, &&func_5442146288, &&func_5442150704, &&func_5442150832, &&func_5442150960, &&func_5442151152, &&func_5442151280, &&func_5442151408, &&func_5442151536, &&func_5442151088, &&func_5442151856, &&func_5442151984, &&func_5442149120, &&func_5442148832, &&func_5442152256, &&func_5442152384, &&RETURN, &&HALT};
        static void **func_5442134752_op0[2] = { cf+12, cf+55};
        static void **func_5442144192_op0[2] = { cf+15, cf+55};
        static void **func_5442144192_op1[2] = { cf+17, cf+55};
        static void **func_5442144192_op2[2] = { cf+19, cf+55};
        static void **func_5442144112_op0[2] = { cf+21, cf+55};
        static void **func_5442144112_op1[2] = { cf+11, cf+55};
        static void **func_5442144112_op2[2] = { cf+23, cf+55};
        static void **func_5442144032_op0[2] = { cf+6, cf+55};
        static void **func_5442144032_op1[2] = { cf+4, cf+55};
        static void **func_5442144656_op0[2] = { cf+25, cf+55};
        static void **func_5442144656_op1[2] = { cf+26, cf+55};
        static void **func_5442144656_op2[2] = { cf+27, cf+55};
        static void **func_5442144656_op3[2] = { cf+28, cf+55};
        static void **func_5442144656_op4[2] = { cf+29, cf+55};
        static void **func_5442144656_op5[2] = { cf+30, cf+55};
        static void **func_5442143760_op0[2] = { cf+31, cf+55};
        static void **func_5442143760_op1[2] = { cf+38, cf+55};
        static void **func_5442145184_op0[2] = { cf+39, cf+55};
        static void **func_5442145184_op1[2] = { cf+40, cf+55};
        static void **func_5442145184_op2[2] = { cf+41, cf+55};
        static void **func_5442145184_op3[2] = { cf+42, cf+55};
        static void **func_5442145184_op4[2] = { cf+43, cf+55};
        static void **func_5442145184_op5[2] = { cf+44, cf+55};
        static void **func_5442145184_op6[2] = { cf+45, cf+55};
        static void **func_5442145184_op7[2] = { cf+46, cf+55};
        static void **func_5442145184_op8[2] = { cf+47, cf+55};
        static void **func_5442145184_op9[2] = { cf+48, cf+55};
        static void **func_5442143952_op0[2] = { cf+49, cf+55};
        static void **func_5442144480_op0[2] = { cf+5, cf+56};
        static void **func_5442144544_op0[2] = { cf+5, cf+55};
        static void **func_5442144544_op1[2] = { cf+0, cf+55};
        static void **func_5442144544_op2[2] = { cf+7, cf+55};
        static void **func_5442145424_op0[2] = { cf+51, cf+55};
        static void **func_5442145424_op1[2] = { cf+52, cf+55};
        static void **func_5442145552_op0[2] = { cf+3, cf+55};
        static void **func_5442145552_op1[2] = { cf+53, cf+55};
        static void **exp_5442145776[5] = {cf+4, cf+13, cf+2, cf+14, cf+55};
        static void **exp_5442146400[4] = {cf+2, cf+16, cf+2, cf+55};
        static void **exp_5442144848[4] = {cf+2, cf+18, cf+2, cf+55};
        static void **exp_5442147040[4] = {cf+2, cf+20, cf+2, cf+55};
        static void **exp_5442147296[4] = {cf+11, cf+22, cf+2, cf+55};
        static void **exp_5442147584[4] = {cf+11, cf+24, cf+2, cf+55};
        static void **exp_5442147872[12] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+37, cf+35, cf+10, cf+36, cf+55};
        static void **exp_5442150064[8] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+55};
        static void **exp_5442151856[6] = {cf+50, cf+33, cf+2, cf+34, cf+14, cf+55};
        static void **exp_5442149120[3] = {cf+9, cf+10, cf+55};
        static void **exp_5442148832[1] = {cf+55};
        static void **exp_5442152256[4] = {cf+3, cf+54, cf+11, cf+55};
goto LOOP;

func_5442134752:
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
            PC = func_5442134752_op0;
        break;
    }
    goto ***PC;
func_5442144192:
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
            PC = func_5442144192_op0;
        break;
        case 1:
            PC = func_5442144192_op1;
        break;
        case 2:
            PC = func_5442144192_op2;
        break;
    }
    goto ***PC;
func_5442144112:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5442144112_op0;
        break;
        case 1:
            PC = func_5442144112_op1;
        break;
        case 2:
            PC = func_5442144112_op2;
        break;
    }
    goto ***PC;
func_5442144032:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5442144032_op0;
        break;
        case 1:
            PC = func_5442144032_op1;
        break;
    }
    goto ***PC;
func_5442144656:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5442144656_op0;
        break;
        case 1:
            PC = func_5442144656_op1;
        break;
        case 2:
            PC = func_5442144656_op2;
        break;
        case 3:
            PC = func_5442144656_op3;
        break;
        case 4:
            PC = func_5442144656_op4;
        break;
        case 5:
            PC = func_5442144656_op5;
        break;
    }
    goto ***PC;
func_5442143760:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5442143760_op0;
        break;
        case 1:
            PC = func_5442143760_op1;
        break;
    }
    goto ***PC;
func_5442145184:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5442145184_op0;
        break;
        case 1:
            PC = func_5442145184_op1;
        break;
        case 2:
            PC = func_5442145184_op2;
        break;
        case 3:
            PC = func_5442145184_op3;
        break;
        case 4:
            PC = func_5442145184_op4;
        break;
        case 5:
            PC = func_5442145184_op5;
        break;
        case 6:
            PC = func_5442145184_op6;
        break;
        case 7:
            PC = func_5442145184_op7;
        break;
        case 8:
            PC = func_5442145184_op8;
        break;
        case 9:
            PC = func_5442145184_op9;
        break;
    }
    goto ***PC;
func_5442143952:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
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
            PC = func_5442143952_op0;
        break;
    }
    goto ***PC;
func_5442144480:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5442144480_op0;
        break;
    }
    goto ***PC;
func_5442144544:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5442144544_op0;
        break;
        case 1:
            PC = func_5442144544_op1;
        break;
        case 2:
            PC = func_5442144544_op2;
        break;
    }
    goto ***PC;
func_5442145424:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5442145424_op0;
        break;
        case 1:
            PC = func_5442145424_op1;
        break;
    }
    goto ***PC;
func_5442145552:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5442145552_op0;
        break;
        case 1:
            PC = func_5442145552_op1;
        break;
    }
    goto ***PC;
func_5442145776:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5442145776;
    goto ***PC;
func_5442145904:
    extend(61);
    NEXT();
    goto ***PC;
func_5442146032:
    extend(59);
    NEXT();
    goto ***PC;
func_5442146400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5442146400;
    goto ***PC;
func_5442146528:
    extend(62);
    NEXT();
    goto ***PC;
func_5442144848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5442144848;
    goto ***PC;
func_5442146912:
    extend(60);
    NEXT();
    goto ***PC;
func_5442147040:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5442147040;
    goto ***PC;
func_5442147168:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5442147296:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5442147296;
    goto ***PC;
func_5442147424:
    extend(43);
    NEXT();
    goto ***PC;
func_5442147584:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5442147584;
    goto ***PC;
func_5442147712:
    extend(45);
    NEXT();
    goto ***PC;
func_5442147936:
    extend(120);
    NEXT();
    goto ***PC;
func_5442148064:
    extend(121);
    NEXT();
    goto ***PC;
func_5442148192:
    extend(122);
    NEXT();
    goto ***PC;
func_5442148320:
    extend(97);
    NEXT();
    goto ***PC;
func_5442148448:
    extend(98);
    NEXT();
    goto ***PC;
func_5442148640:
    extend(99);
    NEXT();
    goto ***PC;
func_5442147872:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        extend(101);
        extend(108);
        extend(115);
        extend(101);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5442147872;
    goto ***PC;
func_5442145680:
    extend(105);
    extend(102);
    NEXT();
    goto ***PC;
func_5442146656:
    extend(40);
    NEXT();
    goto ***PC;
func_5442146784:
    extend(41);
    NEXT();
    goto ***PC;
func_5442146224:
    extend(123);
    NEXT();
    goto ***PC;
func_5442150128:
    extend(125);
    NEXT();
    goto ***PC;
func_5442150256:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5442150064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5442150064;
    goto ***PC;
func_5442149296:
    extend(48);
    NEXT();
    goto ***PC;
func_5442146288:
    extend(49);
    NEXT();
    goto ***PC;
func_5442150704:
    extend(50);
    NEXT();
    goto ***PC;
func_5442150832:
    extend(51);
    NEXT();
    goto ***PC;
func_5442150960:
    extend(52);
    NEXT();
    goto ***PC;
func_5442151152:
    extend(53);
    NEXT();
    goto ***PC;
func_5442151280:
    extend(54);
    NEXT();
    goto ***PC;
func_5442151408:
    extend(55);
    NEXT();
    goto ***PC;
func_5442151536:
    extend(56);
    NEXT();
    goto ***PC;
func_5442151088:
    extend(57);
    NEXT();
    goto ***PC;
func_5442151856:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5442151856;
    goto ***PC;
func_5442151984:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto ***PC;
func_5442149120:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5442149120;
    goto ***PC;
func_5442148832:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5442148832;
    goto ***PC;
func_5442152256:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5442152256;
    goto ***PC;
func_5442152384:
    extend(42);
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
    PC = func_5442144480_op0;
    goto ***PC;
}
