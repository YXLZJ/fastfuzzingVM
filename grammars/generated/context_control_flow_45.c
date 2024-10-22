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
void func_5753568032(void);
void func_5753568400(void);
void func_5753568816(void);
void func_5753568912(void);
void func_5753568688(void);
void func_5753568608(void);
void func_5753569312(void);
void func_5753568528(void);
void func_5753569040(void);
void func_5753569568(void);
void func_5753569232(void);
void func_5753569504(void);
void func_5753569920(void);
void func_5753570288(void);
void func_5753570128(void);
void func_5753569856(void);
void func_5753570048(void);
void func_5753569104(void);
void func_5753571152(void);
void func_5753571280(void);
void func_5753571408(void);
void func_5753571536(void);
void func_5753571664(void);
void func_5753571792(void);
void func_5753572176(void);
void func_5753569760(void);
void func_5753572368(void);
void func_5753572496(void);
void func_5753572624(void);
void func_5753572816(void);
void func_5753572944(void);
void func_5753573072(void);
void func_5753573200(void);
void func_5753572752(void);
void func_5753573776(void);
void func_5753573904(void);
void func_5753570944(void);
void func_5753571072(void);
void func_5753572080(void);
void func_5753574256(void);
void func_5753574384(void);
void func_5753571920(void);
void func_5753575152(void);
void func_5753575280(void);
void func_5753570416(void);
void func_5753574928(void);
void func_5753575600(void);
void func_5753575728(void);
void func_5753575856(void);
void func_5753575984(void);
void func_5753576176(void);
void func_5753576304(void);
void func_5753576432(void);
void func_5753576560(void);
void func_5753576112(void);
void func_5753577328(void);
void func_5753574576(void);
void func_5753577152(void);
void func_5753574752(void);
void func_5753576816(void);
void func_5753576944(void);
void func_5753577456(void);
void func_5753578304(void);
void func_5753578432(void);
void func_5753577584(void);
void func_5753573264(void);
void func_5753578240(void);
void func_5753573632(void);
void HALT(void);
void RETURN(void);
Inst func_5753568032_op0[2] = {func_5753569856, RETURN};
Inst func_5753568400_op0[2] = {func_5753571152, RETURN};
Inst func_5753568400_op1[2] = {func_5753571408, RETURN};
Inst func_5753568400_op2[2] = {func_5753571664, RETURN};
Inst func_5753568816_op0[2] = {func_5753572176, RETURN};
Inst func_5753568816_op1[2] = {func_5753569760, RETURN};
Inst func_5753568816_op2[2] = {func_5753572368, RETURN};
Inst func_5753568816_op3[2] = {func_5753572496, RETURN};
Inst func_5753568816_op4[2] = {func_5753572624, RETURN};
Inst func_5753568816_op5[2] = {func_5753572816, RETURN};
Inst func_5753568816_op6[2] = {func_5753572944, RETURN};
Inst func_5753568816_op7[2] = {func_5753573072, RETURN};
Inst func_5753568816_op8[2] = {func_5753573200, RETURN};
Inst func_5753568816_op9[2] = {func_5753572752, RETURN};
Inst func_5753568912_op0[2] = {func_5753573776, RETURN};
Inst func_5753568912_op1[2] = {func_5753570944, RETURN};
Inst func_5753568912_op2[2] = {func_5753570288, RETURN};
Inst func_5753568688_op0[2] = {func_5753572080, RETURN};
Inst func_5753568688_op1[2] = {func_5753569040, RETURN};
Inst func_5753568688_op2[2] = {func_5753569312, RETURN};
Inst func_5753568608_op0[2] = {func_5753571920, RETURN};
Inst func_5753569312_op0[2] = {func_5753574928, RETURN};
Inst func_5753569312_op1[2] = {func_5753575600, RETURN};
Inst func_5753569312_op2[2] = {func_5753575728, RETURN};
Inst func_5753569312_op3[2] = {func_5753575856, RETURN};
Inst func_5753569312_op4[2] = {func_5753575984, RETURN};
Inst func_5753569312_op5[2] = {func_5753576176, RETURN};
Inst func_5753569312_op6[2] = {func_5753576304, RETURN};
Inst func_5753569312_op7[2] = {func_5753576432, RETURN};
Inst func_5753569312_op8[2] = {func_5753576560, RETURN};
Inst func_5753568528_op0[2] = {func_5753576112, RETURN};
Inst func_5753568528_op1[2] = {func_5753574576, RETURN};
Inst func_5753569040_op0[2] = {func_5753568816, RETURN};
Inst func_5753569040_op1[2] = {func_5753574752, RETURN};
Inst func_5753569568_op0[2] = {func_5753576816, RETURN};
Inst func_5753569232_op0[2] = {func_5753577456, RETURN};
Inst func_5753569504_op0[2] = {func_5753569232, HALT};
Inst func_5753569920_op0[2] = {func_5753568528, RETURN};
Inst func_5753569920_op1[2] = {func_5753570128, RETURN};
Inst func_5753569920_op2[2] = {func_5753568608, RETURN};
Inst func_5753569920_op3[2] = {func_5753568032, RETURN};
Inst func_5753569920_op4[2] = {func_5753569568, RETURN};
Inst func_5753570288_op0[2] = {func_5753578304, RETURN};
Inst func_5753570288_op1[2] = {func_5753577584, RETURN};
Inst func_5753570288_op2[2] = {func_5753568688, RETURN};
Inst func_5753570128_op0[2] = {func_5753578240, RETURN};
Inst exp_5753569856[5] = {func_5753569312, func_5753570048, func_5753568912, func_5753569104, RETURN};
Inst exp_5753571152[4] = {func_5753568912, func_5753571280, func_5753568912, RETURN};
Inst exp_5753571408[4] = {func_5753568912, func_5753571536, func_5753568912, RETURN};
Inst exp_5753571664[4] = {func_5753568912, func_5753571792, func_5753568912, RETURN};
Inst exp_5753573776[4] = {func_5753568912, func_5753573904, func_5753570288, RETURN};
Inst exp_5753570944[4] = {func_5753568912, func_5753571072, func_5753570288, RETURN};
Inst exp_5753572080[4] = {func_5753574256, func_5753568912, func_5753574384, RETURN};
Inst exp_5753571920[12] = {func_5753575152, func_5753574256, func_5753568032, func_5753569104, func_5753568400, func_5753569104, func_5753568032, func_5753574384, func_5753575280, func_5753569232, func_5753570416, RETURN};
Inst exp_5753576112[8] = {func_5753577328, func_5753574256, func_5753568400, func_5753574384, func_5753575280, func_5753569232, func_5753570416, RETURN};
Inst exp_5753574576[12] = {func_5753577328, func_5753574256, func_5753568400, func_5753574384, func_5753575280, func_5753569232, func_5753570416, func_5753577152, func_5753575280, func_5753569232, func_5753570416, RETURN};
Inst exp_5753574752[3] = {func_5753568816, func_5753569040, RETURN};
Inst exp_5753576816[6] = {func_5753576944, func_5753574256, func_5753568912, func_5753574384, func_5753569104, RETURN};
Inst exp_5753577456[3] = {func_5753569920, func_5753569232, RETURN};
Inst exp_5753578304[4] = {func_5753570288, func_5753578432, func_5753568688, RETURN};
Inst exp_5753577584[4] = {func_5753570288, func_5753573264, func_5753568688, RETURN};
Inst exp_5753578240[8] = {func_5753573632, func_5753574256, func_5753568400, func_5753574384, func_5753575280, func_5753569232, func_5753570416, RETURN};
void func_5753568032(void) {
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
            PC = func_5753568032_op0;
        break;
    }
}
void func_5753568400(void) {
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
            PC = func_5753568400_op0;
        break;
        case 1:
            PC = func_5753568400_op1;
        break;
        case 2:
            PC = func_5753568400_op2;
        break;
    }
}
void func_5753568816(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5753568816_op0;
        break;
        case 1:
            PC = func_5753568816_op1;
        break;
        case 2:
            PC = func_5753568816_op2;
        break;
        case 3:
            PC = func_5753568816_op3;
        break;
        case 4:
            PC = func_5753568816_op4;
        break;
        case 5:
            PC = func_5753568816_op5;
        break;
        case 6:
            PC = func_5753568816_op6;
        break;
        case 7:
            PC = func_5753568816_op7;
        break;
        case 8:
            PC = func_5753568816_op8;
        break;
        case 9:
            PC = func_5753568816_op9;
        break;
    }
}
void func_5753568912(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5753568912_op0;
        break;
        case 1:
            PC = func_5753568912_op1;
        break;
        case 2:
            PC = func_5753568912_op2;
        break;
    }
}
void func_5753568688(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5753568688_op0;
        break;
        case 1:
            PC = func_5753568688_op1;
        break;
        case 2:
            PC = func_5753568688_op2;
        break;
    }
}
void func_5753568608(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5753568608_op0;
        break;
    }
}
void func_5753569312(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5753569312_op0;
        break;
        case 1:
            PC = func_5753569312_op1;
        break;
        case 2:
            PC = func_5753569312_op2;
        break;
        case 3:
            PC = func_5753569312_op3;
        break;
        case 4:
            PC = func_5753569312_op4;
        break;
        case 5:
            PC = func_5753569312_op5;
        break;
        case 6:
            PC = func_5753569312_op6;
        break;
        case 7:
            PC = func_5753569312_op7;
        break;
        case 8:
            PC = func_5753569312_op8;
        break;
    }
}
void func_5753568528(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5753568528_op0;
        break;
        case 1:
            PC = func_5753568528_op1;
        break;
    }
}
void func_5753569040(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5753569040_op0;
        break;
        case 1:
            PC = func_5753569040_op1;
        break;
    }
}
void func_5753569568(void) {
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
            PC = func_5753569568_op0;
        break;
    }
}
void func_5753569232(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5753569232_op0;
        break;
    }
}
void func_5753569504(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5753569504_op0;
        break;
    }
}
void func_5753569920(void) {
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
            PC = func_5753569920_op0;
        break;
        case 1:
            PC = func_5753569920_op1;
        break;
        case 2:
            PC = func_5753569920_op2;
        break;
        case 3:
            PC = func_5753569920_op3;
        break;
        case 4:
            PC = func_5753569920_op4;
        break;
    }
}
void func_5753570288(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5753570288_op0;
        break;
        case 1:
            PC = func_5753570288_op1;
        break;
        case 2:
            PC = func_5753570288_op2;
        break;
    }
}
void func_5753570128(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5753570128_op0;
        break;
    }
}
void func_5753569856(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5753569856;
}
void func_5753570048(void) {
    extend(61);
    NEXT();
}
void func_5753569104(void) {
    extend(59);
    NEXT();
}
void func_5753571152(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5753571152;
}
void func_5753571280(void) {
    extend(62);
    NEXT();
}
void func_5753571408(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5753571408;
}
void func_5753571536(void) {
    extend(60);
    NEXT();
}
void func_5753571664(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5753571664;
}
void func_5753571792(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5753572176(void) {
    extend(48);
    NEXT();
}
void func_5753569760(void) {
    extend(49);
    NEXT();
}
void func_5753572368(void) {
    extend(50);
    NEXT();
}
void func_5753572496(void) {
    extend(51);
    NEXT();
}
void func_5753572624(void) {
    extend(52);
    NEXT();
}
void func_5753572816(void) {
    extend(53);
    NEXT();
}
void func_5753572944(void) {
    extend(54);
    NEXT();
}
void func_5753573072(void) {
    extend(55);
    NEXT();
}
void func_5753573200(void) {
    extend(56);
    NEXT();
}
void func_5753572752(void) {
    extend(57);
    NEXT();
}
void func_5753573776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5753573776;
}
void func_5753573904(void) {
    extend(43);
    NEXT();
}
void func_5753570944(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5753570944;
}
void func_5753571072(void) {
    extend(45);
    NEXT();
}
void func_5753572080(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5753572080;
}
void func_5753574256(void) {
    extend(40);
    NEXT();
}
void func_5753574384(void) {
    extend(41);
    NEXT();
}
void func_5753571920(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5753571920;
}
void func_5753575152(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_5753575280(void) {
    extend(123);
    NEXT();
}
void func_5753570416(void) {
    extend(125);
    NEXT();
}
void func_5753574928(void) {
    extend(105);
    NEXT();
}
void func_5753575600(void) {
    extend(106);
    NEXT();
}
void func_5753575728(void) {
    extend(107);
    NEXT();
}
void func_5753575856(void) {
    extend(120);
    NEXT();
}
void func_5753575984(void) {
    extend(121);
    NEXT();
}
void func_5753576176(void) {
    extend(122);
    NEXT();
}
void func_5753576304(void) {
    extend(97);
    NEXT();
}
void func_5753576432(void) {
    extend(98);
    NEXT();
}
void func_5753576560(void) {
    extend(99);
    NEXT();
}
void func_5753576112(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5753576112;
}
void func_5753577328(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5753574576(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5753574576;
}
void func_5753577152(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5753574752(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5753574752;
}
void func_5753576816(void) {
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
    PC = exp_5753576816;
}
void func_5753576944(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5753577456(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5753577456;
}
void func_5753578304(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5753578304;
}
void func_5753578432(void) {
    extend(42);
    NEXT();
}
void func_5753577584(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5753577584;
}
void func_5753573264(void) {
    extend(47);
    NEXT();
}
void func_5753578240(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5753578240;
}
void func_5753573632(void) {
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
    PC =func_5753569504_op0;
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
