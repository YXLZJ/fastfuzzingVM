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

typedef void (*Inst)();
Inst *PC;

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
    Inst *frames[MAX_DEPTH];     // the first pointer of frames
    Inst **top;              // the top of stack
} Stack;

Stack stack;

bool endless = false;

bool running = true;
void func_4863333920(void);
void func_4863334288(void);
void func_4863334704(void);
void func_4863334800(void);
void func_4863334576(void);
void func_4863334496(void);
void func_4863335200(void);
void func_4863334416(void);
void func_4863334928(void);
void func_4863335456(void);
void func_4863335120(void);
void func_4863335392(void);
void func_4863335808(void);
void func_4863336176(void);
void func_4863336016(void);
void func_4863335744(void);
void func_4863335936(void);
void func_4863334992(void);
void func_4863337040(void);
void func_4863337168(void);
void func_4863337296(void);
void func_4863337424(void);
void func_4863337552(void);
void func_4863337680(void);
void func_4863338064(void);
void func_4863335648(void);
void func_4863338256(void);
void func_4863338384(void);
void func_4863338512(void);
void func_4863338704(void);
void func_4863338832(void);
void func_4863338960(void);
void func_4863339088(void);
void func_4863338640(void);
void func_4863339664(void);
void func_4863339792(void);
void func_4863336832(void);
void func_4863336960(void);
void func_4863337968(void);
void func_4863340144(void);
void func_4863340272(void);
void func_4863337808(void);
void func_4863341040(void);
void func_4863341168(void);
void func_4863336304(void);
void func_4863340816(void);
void func_4863341488(void);
void func_4863341616(void);
void func_4863341744(void);
void func_4863341872(void);
void func_4863342064(void);
void func_4863342192(void);
void func_4863342320(void);
void func_4863342448(void);
void func_4863342000(void);
void func_4863343216(void);
void func_4863340464(void);
void func_4863343040(void);
void func_4863340640(void);
void func_4863342704(void);
void func_4863342832(void);
void func_4863343344(void);
void func_4863344192(void);
void func_4863344320(void);
void func_4863343472(void);
void func_4863339152(void);
void func_4863344128(void);
void func_4863339520(void);
void HALT(void);
void RETURN(void);
Inst func_4863333920_op0[2] = {func_4863335744, RETURN};
Inst func_4863334288_op0[2] = {func_4863337040, RETURN};
Inst func_4863334288_op1[2] = {func_4863337296, RETURN};
Inst func_4863334288_op2[2] = {func_4863337552, RETURN};
Inst func_4863334704_op0[2] = {func_4863338064, RETURN};
Inst func_4863334704_op1[2] = {func_4863335648, RETURN};
Inst func_4863334704_op2[2] = {func_4863338256, RETURN};
Inst func_4863334704_op3[2] = {func_4863338384, RETURN};
Inst func_4863334704_op4[2] = {func_4863338512, RETURN};
Inst func_4863334704_op5[2] = {func_4863338704, RETURN};
Inst func_4863334704_op6[2] = {func_4863338832, RETURN};
Inst func_4863334704_op7[2] = {func_4863338960, RETURN};
Inst func_4863334704_op8[2] = {func_4863339088, RETURN};
Inst func_4863334704_op9[2] = {func_4863338640, RETURN};
Inst func_4863334800_op0[2] = {func_4863339664, RETURN};
Inst func_4863334800_op1[2] = {func_4863336832, RETURN};
Inst func_4863334800_op2[2] = {func_4863336176, RETURN};
Inst func_4863334576_op0[2] = {func_4863337968, RETURN};
Inst func_4863334576_op1[2] = {func_4863334928, RETURN};
Inst func_4863334576_op2[2] = {func_4863335200, RETURN};
Inst func_4863334496_op0[2] = {func_4863337808, RETURN};
Inst func_4863335200_op0[2] = {func_4863340816, RETURN};
Inst func_4863335200_op1[2] = {func_4863341488, RETURN};
Inst func_4863335200_op2[2] = {func_4863341616, RETURN};
Inst func_4863335200_op3[2] = {func_4863341744, RETURN};
Inst func_4863335200_op4[2] = {func_4863341872, RETURN};
Inst func_4863335200_op5[2] = {func_4863342064, RETURN};
Inst func_4863335200_op6[2] = {func_4863342192, RETURN};
Inst func_4863335200_op7[2] = {func_4863342320, RETURN};
Inst func_4863335200_op8[2] = {func_4863342448, RETURN};
Inst func_4863334416_op0[2] = {func_4863342000, RETURN};
Inst func_4863334416_op1[2] = {func_4863340464, RETURN};
Inst func_4863334928_op0[2] = {func_4863334704, RETURN};
Inst func_4863334928_op1[2] = {func_4863340640, RETURN};
Inst func_4863335456_op0[2] = {func_4863342704, RETURN};
Inst func_4863335120_op0[2] = {func_4863343344, RETURN};
Inst func_4863335392_op0[2] = {func_4863335120, HALT};
Inst func_4863335808_op0[2] = {func_4863334416, RETURN};
Inst func_4863335808_op1[2] = {func_4863336016, RETURN};
Inst func_4863335808_op2[2] = {func_4863334496, RETURN};
Inst func_4863335808_op3[2] = {func_4863333920, RETURN};
Inst func_4863335808_op4[2] = {func_4863335456, RETURN};
Inst func_4863336176_op0[2] = {func_4863344192, RETURN};
Inst func_4863336176_op1[2] = {func_4863343472, RETURN};
Inst func_4863336176_op2[2] = {func_4863334576, RETURN};
Inst func_4863336016_op0[2] = {func_4863344128, RETURN};
Inst exp_4863335744[5] = {func_4863335200, func_4863335936, func_4863334800, func_4863334992, RETURN};
Inst exp_4863337040[4] = {func_4863334800, func_4863337168, func_4863334800, RETURN};
Inst exp_4863337296[4] = {func_4863334800, func_4863337424, func_4863334800, RETURN};
Inst exp_4863337552[4] = {func_4863334800, func_4863337680, func_4863334800, RETURN};
Inst exp_4863339664[4] = {func_4863334800, func_4863339792, func_4863336176, RETURN};
Inst exp_4863336832[4] = {func_4863334800, func_4863336960, func_4863336176, RETURN};
Inst exp_4863337968[4] = {func_4863340144, func_4863334800, func_4863340272, RETURN};
Inst exp_4863337808[12] = {func_4863341040, func_4863340144, func_4863333920, func_4863334992, func_4863334288, func_4863334992, func_4863333920, func_4863340272, func_4863341168, func_4863335120, func_4863336304, RETURN};
Inst exp_4863342000[8] = {func_4863343216, func_4863340144, func_4863334288, func_4863340272, func_4863341168, func_4863335120, func_4863336304, RETURN};
Inst exp_4863340464[12] = {func_4863343216, func_4863340144, func_4863334288, func_4863340272, func_4863341168, func_4863335120, func_4863336304, func_4863343040, func_4863341168, func_4863335120, func_4863336304, RETURN};
Inst exp_4863340640[3] = {func_4863334704, func_4863334928, RETURN};
Inst exp_4863342704[6] = {func_4863342832, func_4863340144, func_4863334800, func_4863340272, func_4863334992, RETURN};
Inst exp_4863343344[3] = {func_4863335808, func_4863335120, RETURN};
Inst exp_4863344192[4] = {func_4863336176, func_4863344320, func_4863334576, RETURN};
Inst exp_4863343472[4] = {func_4863336176, func_4863339152, func_4863334576, RETURN};
Inst exp_4863344128[8] = {func_4863339520, func_4863340144, func_4863334288, func_4863340272, func_4863341168, func_4863335120, func_4863336304, RETURN};
void func_4863333920(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4863333920_op0;
        break;
    }
}
void func_4863334288(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4863334288_op0;
        break;
        case 1:
            PC = func_4863334288_op1;
        break;
        case 2:
            PC = func_4863334288_op2;
        break;
    }
}
void func_4863334704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4863334704_op0;
        break;
        case 1:
            PC = func_4863334704_op1;
        break;
        case 2:
            PC = func_4863334704_op2;
        break;
        case 3:
            PC = func_4863334704_op3;
        break;
        case 4:
            PC = func_4863334704_op4;
        break;
        case 5:
            PC = func_4863334704_op5;
        break;
        case 6:
            PC = func_4863334704_op6;
        break;
        case 7:
            PC = func_4863334704_op7;
        break;
        case 8:
            PC = func_4863334704_op8;
        break;
        case 9:
            PC = func_4863334704_op9;
        break;
    }
}
void func_4863334800(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4863334800_op0;
        break;
        case 1:
            PC = func_4863334800_op1;
        break;
        case 2:
            PC = func_4863334800_op2;
        break;
    }
}
void func_4863334576(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4863334576_op0;
        break;
        case 1:
            PC = func_4863334576_op1;
        break;
        case 2:
            PC = func_4863334576_op2;
        break;
    }
}
void func_4863334496(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4863334496_op0;
        break;
    }
}
void func_4863335200(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_4863335200_op0;
        break;
        case 1:
            PC = func_4863335200_op1;
        break;
        case 2:
            PC = func_4863335200_op2;
        break;
        case 3:
            PC = func_4863335200_op3;
        break;
        case 4:
            PC = func_4863335200_op4;
        break;
        case 5:
            PC = func_4863335200_op5;
        break;
        case 6:
            PC = func_4863335200_op6;
        break;
        case 7:
            PC = func_4863335200_op7;
        break;
        case 8:
            PC = func_4863335200_op8;
        break;
    }
}
void func_4863334416(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4863334416_op0;
        break;
        case 1:
            PC = func_4863334416_op1;
        break;
    }
}
void func_4863334928(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4863334928_op0;
        break;
        case 1:
            PC = func_4863334928_op1;
        break;
    }
}
void func_4863335456(void) {
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
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4863335456_op0;
        break;
    }
}
void func_4863335120(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4863335120_op0;
        break;
    }
}
void func_4863335392(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4863335392_op0;
        break;
    }
}
void func_4863335808(void) {
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
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_4863335808_op0;
        break;
        case 1:
            PC = func_4863335808_op1;
        break;
        case 2:
            PC = func_4863335808_op2;
        break;
        case 3:
            PC = func_4863335808_op3;
        break;
        case 4:
            PC = func_4863335808_op4;
        break;
    }
}
void func_4863336176(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4863336176_op0;
        break;
        case 1:
            PC = func_4863336176_op1;
        break;
        case 2:
            PC = func_4863336176_op2;
        break;
    }
}
void func_4863336016(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4863336016_op0;
        break;
    }
}
void func_4863335744(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_4863335744;
}
void func_4863335936(void) {
    extend(61);
    NEXT();
}
void func_4863334992(void) {
    extend(59);
    NEXT();
}
void func_4863337040(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4863337040;
}
void func_4863337168(void) {
    extend(62);
    NEXT();
}
void func_4863337296(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4863337296;
}
void func_4863337424(void) {
    extend(60);
    NEXT();
}
void func_4863337552(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4863337552;
}
void func_4863337680(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_4863338064(void) {
    extend(48);
    NEXT();
}
void func_4863335648(void) {
    extend(49);
    NEXT();
}
void func_4863338256(void) {
    extend(50);
    NEXT();
}
void func_4863338384(void) {
    extend(51);
    NEXT();
}
void func_4863338512(void) {
    extend(52);
    NEXT();
}
void func_4863338704(void) {
    extend(53);
    NEXT();
}
void func_4863338832(void) {
    extend(54);
    NEXT();
}
void func_4863338960(void) {
    extend(55);
    NEXT();
}
void func_4863339088(void) {
    extend(56);
    NEXT();
}
void func_4863338640(void) {
    extend(57);
    NEXT();
}
void func_4863339664(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4863339664;
}
void func_4863339792(void) {
    extend(43);
    NEXT();
}
void func_4863336832(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4863336832;
}
void func_4863336960(void) {
    extend(45);
    NEXT();
}
void func_4863337968(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_4863337968;
}
void func_4863340144(void) {
    extend(40);
    NEXT();
}
void func_4863340272(void) {
    extend(41);
    NEXT();
}
void func_4863337808(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_4863337808;
}
void func_4863341040(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_4863341168(void) {
    extend(123);
    NEXT();
}
void func_4863336304(void) {
    extend(125);
    NEXT();
}
void func_4863340816(void) {
    extend(105);
    NEXT();
}
void func_4863341488(void) {
    extend(106);
    NEXT();
}
void func_4863341616(void) {
    extend(107);
    NEXT();
}
void func_4863341744(void) {
    extend(120);
    NEXT();
}
void func_4863341872(void) {
    extend(121);
    NEXT();
}
void func_4863342064(void) {
    extend(122);
    NEXT();
}
void func_4863342192(void) {
    extend(97);
    NEXT();
}
void func_4863342320(void) {
    extend(98);
    NEXT();
}
void func_4863342448(void) {
    extend(99);
    NEXT();
}
void func_4863342000(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_4863342000;
}
void func_4863343216(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_4863340464(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_4863340464;
}
void func_4863343040(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_4863340640(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4863340640;
}
void func_4863342704(void) {
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
        return;
    }
    store();
    PC = exp_4863342704;
}
void func_4863342832(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_4863343344(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_4863343344;
}
void func_4863344192(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4863344192;
}
void func_4863344320(void) {
    extend(42);
    NEXT();
}
void func_4863343472(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4863343472;
}
void func_4863339152(void) {
    extend(47);
    NEXT();
}
void func_4863344128(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_4863344128;
}
void func_4863339520(void) {
    extend(32);
    extend(119);
    extend(104);
    extend(105);
    extend(108);
    extend(101);
    extend(32);
    NEXT();
}
void HALT(void) {
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    running = false;
}
void RETURN(void) {
    pop();
    PC = *stack.top;
    NEXT();
}
void mainloop(void) {
    running = true;
    PC =func_4863335392_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 16;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
