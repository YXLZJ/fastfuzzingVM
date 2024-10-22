#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 35
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
void func_5576365600(void);
void func_5576365968(void);
void func_5576366384(void);
void func_5576366480(void);
void func_5576366256(void);
void func_5576366176(void);
void func_5576366880(void);
void func_5576366096(void);
void func_5576366608(void);
void func_5576367136(void);
void func_5576366800(void);
void func_5576367072(void);
void func_5576367488(void);
void func_5576367856(void);
void func_5576367696(void);
void func_5576367424(void);
void func_5576367616(void);
void func_5576366672(void);
void func_5576368720(void);
void func_5576368848(void);
void func_5576368976(void);
void func_5576369104(void);
void func_5576369232(void);
void func_5576369360(void);
void func_5576369744(void);
void func_5576367328(void);
void func_5576369936(void);
void func_5576370064(void);
void func_5576370192(void);
void func_5576370384(void);
void func_5576370512(void);
void func_5576370640(void);
void func_5576370768(void);
void func_5576370320(void);
void func_5576371344(void);
void func_5576371472(void);
void func_5576368512(void);
void func_5576368640(void);
void func_5576369648(void);
void func_5576371824(void);
void func_5576371952(void);
void func_5576369488(void);
void func_5576372720(void);
void func_5576372848(void);
void func_5576367984(void);
void func_5576372496(void);
void func_5576373168(void);
void func_5576373296(void);
void func_5576373424(void);
void func_5576373552(void);
void func_5576373744(void);
void func_5576373872(void);
void func_5576374000(void);
void func_5576374128(void);
void func_5576373680(void);
void func_5576374896(void);
void func_5576372144(void);
void func_5576374720(void);
void func_5576372320(void);
void func_5576374384(void);
void func_5576374512(void);
void func_5576375024(void);
void func_5576375872(void);
void func_5576376000(void);
void func_5576375152(void);
void func_5576370832(void);
void func_5576375808(void);
void func_5576371200(void);
void HALT(void);
void RETURN(void);
Inst func_5576365600_op0[2] = {func_5576367424, RETURN};
Inst func_5576365968_op0[2] = {func_5576368720, RETURN};
Inst func_5576365968_op1[2] = {func_5576368976, RETURN};
Inst func_5576365968_op2[2] = {func_5576369232, RETURN};
Inst func_5576366384_op0[2] = {func_5576369744, RETURN};
Inst func_5576366384_op1[2] = {func_5576367328, RETURN};
Inst func_5576366384_op2[2] = {func_5576369936, RETURN};
Inst func_5576366384_op3[2] = {func_5576370064, RETURN};
Inst func_5576366384_op4[2] = {func_5576370192, RETURN};
Inst func_5576366384_op5[2] = {func_5576370384, RETURN};
Inst func_5576366384_op6[2] = {func_5576370512, RETURN};
Inst func_5576366384_op7[2] = {func_5576370640, RETURN};
Inst func_5576366384_op8[2] = {func_5576370768, RETURN};
Inst func_5576366384_op9[2] = {func_5576370320, RETURN};
Inst func_5576366480_op0[2] = {func_5576371344, RETURN};
Inst func_5576366480_op1[2] = {func_5576368512, RETURN};
Inst func_5576366480_op2[2] = {func_5576367856, RETURN};
Inst func_5576366256_op0[2] = {func_5576369648, RETURN};
Inst func_5576366256_op1[2] = {func_5576366608, RETURN};
Inst func_5576366256_op2[2] = {func_5576366880, RETURN};
Inst func_5576366176_op0[2] = {func_5576369488, RETURN};
Inst func_5576366880_op0[2] = {func_5576372496, RETURN};
Inst func_5576366880_op1[2] = {func_5576373168, RETURN};
Inst func_5576366880_op2[2] = {func_5576373296, RETURN};
Inst func_5576366880_op3[2] = {func_5576373424, RETURN};
Inst func_5576366880_op4[2] = {func_5576373552, RETURN};
Inst func_5576366880_op5[2] = {func_5576373744, RETURN};
Inst func_5576366880_op6[2] = {func_5576373872, RETURN};
Inst func_5576366880_op7[2] = {func_5576374000, RETURN};
Inst func_5576366880_op8[2] = {func_5576374128, RETURN};
Inst func_5576366096_op0[2] = {func_5576373680, RETURN};
Inst func_5576366096_op1[2] = {func_5576372144, RETURN};
Inst func_5576366608_op0[2] = {func_5576366384, RETURN};
Inst func_5576366608_op1[2] = {func_5576372320, RETURN};
Inst func_5576367136_op0[2] = {func_5576374384, RETURN};
Inst func_5576366800_op0[2] = {func_5576375024, RETURN};
Inst func_5576367072_op0[2] = {func_5576366800, HALT};
Inst func_5576367488_op0[2] = {func_5576366096, RETURN};
Inst func_5576367488_op1[2] = {func_5576367696, RETURN};
Inst func_5576367488_op2[2] = {func_5576366176, RETURN};
Inst func_5576367488_op3[2] = {func_5576365600, RETURN};
Inst func_5576367488_op4[2] = {func_5576367136, RETURN};
Inst func_5576367856_op0[2] = {func_5576375872, RETURN};
Inst func_5576367856_op1[2] = {func_5576375152, RETURN};
Inst func_5576367856_op2[2] = {func_5576366256, RETURN};
Inst func_5576367696_op0[2] = {func_5576375808, RETURN};
Inst exp_5576367424[5] = {func_5576366880, func_5576367616, func_5576366480, func_5576366672, RETURN};
Inst exp_5576368720[4] = {func_5576366480, func_5576368848, func_5576366480, RETURN};
Inst exp_5576368976[4] = {func_5576366480, func_5576369104, func_5576366480, RETURN};
Inst exp_5576369232[4] = {func_5576366480, func_5576369360, func_5576366480, RETURN};
Inst exp_5576371344[4] = {func_5576366480, func_5576371472, func_5576367856, RETURN};
Inst exp_5576368512[4] = {func_5576366480, func_5576368640, func_5576367856, RETURN};
Inst exp_5576369648[4] = {func_5576371824, func_5576366480, func_5576371952, RETURN};
Inst exp_5576369488[12] = {func_5576372720, func_5576371824, func_5576365600, func_5576366672, func_5576365968, func_5576366672, func_5576365600, func_5576371952, func_5576372848, func_5576366800, func_5576367984, RETURN};
Inst exp_5576373680[8] = {func_5576374896, func_5576371824, func_5576365968, func_5576371952, func_5576372848, func_5576366800, func_5576367984, RETURN};
Inst exp_5576372144[12] = {func_5576374896, func_5576371824, func_5576365968, func_5576371952, func_5576372848, func_5576366800, func_5576367984, func_5576374720, func_5576372848, func_5576366800, func_5576367984, RETURN};
Inst exp_5576372320[3] = {func_5576366384, func_5576366608, RETURN};
Inst exp_5576374384[6] = {func_5576374512, func_5576371824, func_5576366480, func_5576371952, func_5576366672, RETURN};
Inst exp_5576375024[3] = {func_5576367488, func_5576366800, RETURN};
Inst exp_5576375872[4] = {func_5576367856, func_5576376000, func_5576366256, RETURN};
Inst exp_5576375152[4] = {func_5576367856, func_5576370832, func_5576366256, RETURN};
Inst exp_5576375808[8] = {func_5576371200, func_5576371824, func_5576365968, func_5576371952, func_5576372848, func_5576366800, func_5576367984, RETURN};
void func_5576365600(void) {
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
            PC = func_5576365600_op0;
        break;
    }
}
void func_5576365968(void) {
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
            PC = func_5576365968_op0;
        break;
        case 1:
            PC = func_5576365968_op1;
        break;
        case 2:
            PC = func_5576365968_op2;
        break;
    }
}
void func_5576366384(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5576366384_op0;
        break;
        case 1:
            PC = func_5576366384_op1;
        break;
        case 2:
            PC = func_5576366384_op2;
        break;
        case 3:
            PC = func_5576366384_op3;
        break;
        case 4:
            PC = func_5576366384_op4;
        break;
        case 5:
            PC = func_5576366384_op5;
        break;
        case 6:
            PC = func_5576366384_op6;
        break;
        case 7:
            PC = func_5576366384_op7;
        break;
        case 8:
            PC = func_5576366384_op8;
        break;
        case 9:
            PC = func_5576366384_op9;
        break;
    }
}
void func_5576366480(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5576366480_op0;
        break;
        case 1:
            PC = func_5576366480_op1;
        break;
        case 2:
            PC = func_5576366480_op2;
        break;
    }
}
void func_5576366256(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5576366256_op0;
        break;
        case 1:
            PC = func_5576366256_op1;
        break;
        case 2:
            PC = func_5576366256_op2;
        break;
    }
}
void func_5576366176(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5576366176_op0;
        break;
    }
}
void func_5576366880(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5576366880_op0;
        break;
        case 1:
            PC = func_5576366880_op1;
        break;
        case 2:
            PC = func_5576366880_op2;
        break;
        case 3:
            PC = func_5576366880_op3;
        break;
        case 4:
            PC = func_5576366880_op4;
        break;
        case 5:
            PC = func_5576366880_op5;
        break;
        case 6:
            PC = func_5576366880_op6;
        break;
        case 7:
            PC = func_5576366880_op7;
        break;
        case 8:
            PC = func_5576366880_op8;
        break;
    }
}
void func_5576366096(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5576366096_op0;
        break;
        case 1:
            PC = func_5576366096_op1;
        break;
    }
}
void func_5576366608(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5576366608_op0;
        break;
        case 1:
            PC = func_5576366608_op1;
        break;
    }
}
void func_5576367136(void) {
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
            PC = func_5576367136_op0;
        break;
    }
}
void func_5576366800(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5576366800_op0;
        break;
    }
}
void func_5576367072(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5576367072_op0;
        break;
    }
}
void func_5576367488(void) {
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
            PC = func_5576367488_op0;
        break;
        case 1:
            PC = func_5576367488_op1;
        break;
        case 2:
            PC = func_5576367488_op2;
        break;
        case 3:
            PC = func_5576367488_op3;
        break;
        case 4:
            PC = func_5576367488_op4;
        break;
    }
}
void func_5576367856(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5576367856_op0;
        break;
        case 1:
            PC = func_5576367856_op1;
        break;
        case 2:
            PC = func_5576367856_op2;
        break;
    }
}
void func_5576367696(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5576367696_op0;
        break;
    }
}
void func_5576367424(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5576367424;
}
void func_5576367616(void) {
    extend(61);
    NEXT();
}
void func_5576366672(void) {
    extend(59);
    NEXT();
}
void func_5576368720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5576368720;
}
void func_5576368848(void) {
    extend(62);
    NEXT();
}
void func_5576368976(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5576368976;
}
void func_5576369104(void) {
    extend(60);
    NEXT();
}
void func_5576369232(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5576369232;
}
void func_5576369360(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5576369744(void) {
    extend(48);
    NEXT();
}
void func_5576367328(void) {
    extend(49);
    NEXT();
}
void func_5576369936(void) {
    extend(50);
    NEXT();
}
void func_5576370064(void) {
    extend(51);
    NEXT();
}
void func_5576370192(void) {
    extend(52);
    NEXT();
}
void func_5576370384(void) {
    extend(53);
    NEXT();
}
void func_5576370512(void) {
    extend(54);
    NEXT();
}
void func_5576370640(void) {
    extend(55);
    NEXT();
}
void func_5576370768(void) {
    extend(56);
    NEXT();
}
void func_5576370320(void) {
    extend(57);
    NEXT();
}
void func_5576371344(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5576371344;
}
void func_5576371472(void) {
    extend(43);
    NEXT();
}
void func_5576368512(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5576368512;
}
void func_5576368640(void) {
    extend(45);
    NEXT();
}
void func_5576369648(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5576369648;
}
void func_5576371824(void) {
    extend(40);
    NEXT();
}
void func_5576371952(void) {
    extend(41);
    NEXT();
}
void func_5576369488(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5576369488;
}
void func_5576372720(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_5576372848(void) {
    extend(123);
    NEXT();
}
void func_5576367984(void) {
    extend(125);
    NEXT();
}
void func_5576372496(void) {
    extend(105);
    NEXT();
}
void func_5576373168(void) {
    extend(106);
    NEXT();
}
void func_5576373296(void) {
    extend(107);
    NEXT();
}
void func_5576373424(void) {
    extend(120);
    NEXT();
}
void func_5576373552(void) {
    extend(121);
    NEXT();
}
void func_5576373744(void) {
    extend(122);
    NEXT();
}
void func_5576373872(void) {
    extend(97);
    NEXT();
}
void func_5576374000(void) {
    extend(98);
    NEXT();
}
void func_5576374128(void) {
    extend(99);
    NEXT();
}
void func_5576373680(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5576373680;
}
void func_5576374896(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5576372144(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5576372144;
}
void func_5576374720(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5576372320(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5576372320;
}
void func_5576374384(void) {
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
    PC = exp_5576374384;
}
void func_5576374512(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5576375024(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5576375024;
}
void func_5576375872(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5576375872;
}
void func_5576376000(void) {
    extend(42);
    NEXT();
}
void func_5576375152(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5576375152;
}
void func_5576370832(void) {
    extend(47);
    NEXT();
}
void func_5576375808(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5576375808;
}
void func_5576371200(void) {
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
    PC =func_5576367072_op0;
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
