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
void func_5073049120(void);
void func_5073049488(void);
void func_5073049904(void);
void func_5073050000(void);
void func_5073049776(void);
void func_5073049696(void);
void func_5073050400(void);
void func_5073049616(void);
void func_5073050128(void);
void func_5073050656(void);
void func_5073050320(void);
void func_5073050592(void);
void func_5073051008(void);
void func_5073051376(void);
void func_5073051216(void);
void func_5073050944(void);
void func_5073051136(void);
void func_5073050192(void);
void func_5073052240(void);
void func_5073052368(void);
void func_5073052496(void);
void func_5073052624(void);
void func_5073052752(void);
void func_5073052880(void);
void func_5073053264(void);
void func_5073050848(void);
void func_5073053456(void);
void func_5073053584(void);
void func_5073053712(void);
void func_5073053904(void);
void func_5073054032(void);
void func_5073054160(void);
void func_5073054288(void);
void func_5073053840(void);
void func_5073054864(void);
void func_5073054992(void);
void func_5073052032(void);
void func_5073052160(void);
void func_5073053168(void);
void func_5073055344(void);
void func_5073055472(void);
void func_5073053008(void);
void func_5073056240(void);
void func_5073056368(void);
void func_5073051504(void);
void func_5073056016(void);
void func_5073056688(void);
void func_5073056816(void);
void func_5073056944(void);
void func_5073057072(void);
void func_5073057264(void);
void func_5073057392(void);
void func_5073057520(void);
void func_5073057648(void);
void func_5073057200(void);
void func_5073058416(void);
void func_5073055664(void);
void func_5073058240(void);
void func_5073055840(void);
void func_5073057904(void);
void func_5073058032(void);
void func_5073058544(void);
void func_5073059392(void);
void func_5073059520(void);
void func_5073058672(void);
void func_5073054352(void);
void func_5073059328(void);
void func_5073054720(void);
void HALT(void);
void RETURN(void);
Inst func_5073049120_op0[2] = {func_5073050944, RETURN};
Inst func_5073049488_op0[2] = {func_5073052240, RETURN};
Inst func_5073049488_op1[2] = {func_5073052496, RETURN};
Inst func_5073049488_op2[2] = {func_5073052752, RETURN};
Inst func_5073049904_op0[2] = {func_5073053264, RETURN};
Inst func_5073049904_op1[2] = {func_5073050848, RETURN};
Inst func_5073049904_op2[2] = {func_5073053456, RETURN};
Inst func_5073049904_op3[2] = {func_5073053584, RETURN};
Inst func_5073049904_op4[2] = {func_5073053712, RETURN};
Inst func_5073049904_op5[2] = {func_5073053904, RETURN};
Inst func_5073049904_op6[2] = {func_5073054032, RETURN};
Inst func_5073049904_op7[2] = {func_5073054160, RETURN};
Inst func_5073049904_op8[2] = {func_5073054288, RETURN};
Inst func_5073049904_op9[2] = {func_5073053840, RETURN};
Inst func_5073050000_op0[2] = {func_5073054864, RETURN};
Inst func_5073050000_op1[2] = {func_5073052032, RETURN};
Inst func_5073050000_op2[2] = {func_5073051376, RETURN};
Inst func_5073049776_op0[2] = {func_5073053168, RETURN};
Inst func_5073049776_op1[2] = {func_5073050128, RETURN};
Inst func_5073049776_op2[2] = {func_5073050400, RETURN};
Inst func_5073049696_op0[2] = {func_5073053008, RETURN};
Inst func_5073050400_op0[2] = {func_5073056016, RETURN};
Inst func_5073050400_op1[2] = {func_5073056688, RETURN};
Inst func_5073050400_op2[2] = {func_5073056816, RETURN};
Inst func_5073050400_op3[2] = {func_5073056944, RETURN};
Inst func_5073050400_op4[2] = {func_5073057072, RETURN};
Inst func_5073050400_op5[2] = {func_5073057264, RETURN};
Inst func_5073050400_op6[2] = {func_5073057392, RETURN};
Inst func_5073050400_op7[2] = {func_5073057520, RETURN};
Inst func_5073050400_op8[2] = {func_5073057648, RETURN};
Inst func_5073049616_op0[2] = {func_5073057200, RETURN};
Inst func_5073049616_op1[2] = {func_5073055664, RETURN};
Inst func_5073050128_op0[2] = {func_5073049904, RETURN};
Inst func_5073050128_op1[2] = {func_5073055840, RETURN};
Inst func_5073050656_op0[2] = {func_5073057904, RETURN};
Inst func_5073050320_op0[2] = {func_5073058544, RETURN};
Inst func_5073050592_op0[2] = {func_5073050320, HALT};
Inst func_5073051008_op0[2] = {func_5073049616, RETURN};
Inst func_5073051008_op1[2] = {func_5073051216, RETURN};
Inst func_5073051008_op2[2] = {func_5073049696, RETURN};
Inst func_5073051008_op3[2] = {func_5073049120, RETURN};
Inst func_5073051008_op4[2] = {func_5073050656, RETURN};
Inst func_5073051376_op0[2] = {func_5073059392, RETURN};
Inst func_5073051376_op1[2] = {func_5073058672, RETURN};
Inst func_5073051376_op2[2] = {func_5073049776, RETURN};
Inst func_5073051216_op0[2] = {func_5073059328, RETURN};
Inst exp_5073050944[5] = {func_5073050400, func_5073051136, func_5073050000, func_5073050192, RETURN};
Inst exp_5073052240[4] = {func_5073050000, func_5073052368, func_5073050000, RETURN};
Inst exp_5073052496[4] = {func_5073050000, func_5073052624, func_5073050000, RETURN};
Inst exp_5073052752[4] = {func_5073050000, func_5073052880, func_5073050000, RETURN};
Inst exp_5073054864[4] = {func_5073050000, func_5073054992, func_5073051376, RETURN};
Inst exp_5073052032[4] = {func_5073050000, func_5073052160, func_5073051376, RETURN};
Inst exp_5073053168[4] = {func_5073055344, func_5073050000, func_5073055472, RETURN};
Inst exp_5073053008[12] = {func_5073056240, func_5073055344, func_5073049120, func_5073050192, func_5073049488, func_5073050192, func_5073049120, func_5073055472, func_5073056368, func_5073050320, func_5073051504, RETURN};
Inst exp_5073057200[8] = {func_5073058416, func_5073055344, func_5073049488, func_5073055472, func_5073056368, func_5073050320, func_5073051504, RETURN};
Inst exp_5073055664[12] = {func_5073058416, func_5073055344, func_5073049488, func_5073055472, func_5073056368, func_5073050320, func_5073051504, func_5073058240, func_5073056368, func_5073050320, func_5073051504, RETURN};
Inst exp_5073055840[3] = {func_5073049904, func_5073050128, RETURN};
Inst exp_5073057904[6] = {func_5073058032, func_5073055344, func_5073050000, func_5073055472, func_5073050192, RETURN};
Inst exp_5073058544[3] = {func_5073051008, func_5073050320, RETURN};
Inst exp_5073059392[4] = {func_5073051376, func_5073059520, func_5073049776, RETURN};
Inst exp_5073058672[4] = {func_5073051376, func_5073054352, func_5073049776, RETURN};
Inst exp_5073059328[8] = {func_5073054720, func_5073055344, func_5073049488, func_5073055472, func_5073056368, func_5073050320, func_5073051504, RETURN};
void func_5073049120(void) {
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
            PC = func_5073049120_op0;
        break;
    }
}
void func_5073049488(void) {
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
            PC = func_5073049488_op0;
        break;
        case 1:
            PC = func_5073049488_op1;
        break;
        case 2:
            PC = func_5073049488_op2;
        break;
    }
}
void func_5073049904(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
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
}
void func_5073050000(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
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
}
void func_5073049776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
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
}
void func_5073049696(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5073049696_op0;
        break;
    }
}
void func_5073050400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
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
}
void func_5073049616(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
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
}
void func_5073050128(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
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
}
void func_5073050656(void) {
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
            PC = func_5073050656_op0;
        break;
    }
}
void func_5073050320(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5073050320_op0;
        break;
    }
}
void func_5073050592(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5073050592_op0;
        break;
    }
}
void func_5073051008(void) {
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
}
void func_5073051376(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
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
}
void func_5073051216(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5073051216_op0;
        break;
    }
}
void func_5073050944(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5073050944;
}
void func_5073051136(void) {
    extend(61);
    NEXT();
}
void func_5073050192(void) {
    extend(59);
    NEXT();
}
void func_5073052240(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5073052240;
}
void func_5073052368(void) {
    extend(62);
    NEXT();
}
void func_5073052496(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5073052496;
}
void func_5073052624(void) {
    extend(60);
    NEXT();
}
void func_5073052752(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5073052752;
}
void func_5073052880(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5073053264(void) {
    extend(48);
    NEXT();
}
void func_5073050848(void) {
    extend(49);
    NEXT();
}
void func_5073053456(void) {
    extend(50);
    NEXT();
}
void func_5073053584(void) {
    extend(51);
    NEXT();
}
void func_5073053712(void) {
    extend(52);
    NEXT();
}
void func_5073053904(void) {
    extend(53);
    NEXT();
}
void func_5073054032(void) {
    extend(54);
    NEXT();
}
void func_5073054160(void) {
    extend(55);
    NEXT();
}
void func_5073054288(void) {
    extend(56);
    NEXT();
}
void func_5073053840(void) {
    extend(57);
    NEXT();
}
void func_5073054864(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5073054864;
}
void func_5073054992(void) {
    extend(43);
    NEXT();
}
void func_5073052032(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5073052032;
}
void func_5073052160(void) {
    extend(45);
    NEXT();
}
void func_5073053168(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5073053168;
}
void func_5073055344(void) {
    extend(40);
    NEXT();
}
void func_5073055472(void) {
    extend(41);
    NEXT();
}
void func_5073053008(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5073053008;
}
void func_5073056240(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_5073056368(void) {
    extend(123);
    NEXT();
}
void func_5073051504(void) {
    extend(125);
    NEXT();
}
void func_5073056016(void) {
    extend(105);
    NEXT();
}
void func_5073056688(void) {
    extend(106);
    NEXT();
}
void func_5073056816(void) {
    extend(107);
    NEXT();
}
void func_5073056944(void) {
    extend(120);
    NEXT();
}
void func_5073057072(void) {
    extend(121);
    NEXT();
}
void func_5073057264(void) {
    extend(122);
    NEXT();
}
void func_5073057392(void) {
    extend(97);
    NEXT();
}
void func_5073057520(void) {
    extend(98);
    NEXT();
}
void func_5073057648(void) {
    extend(99);
    NEXT();
}
void func_5073057200(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5073057200;
}
void func_5073058416(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5073055664(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5073055664;
}
void func_5073058240(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5073055840(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5073055840;
}
void func_5073057904(void) {
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
    PC = exp_5073057904;
}
void func_5073058032(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5073058544(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5073058544;
}
void func_5073059392(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5073059392;
}
void func_5073059520(void) {
    extend(42);
    NEXT();
}
void func_5073058672(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5073058672;
}
void func_5073054352(void) {
    extend(47);
    NEXT();
}
void func_5073059328(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5073059328;
}
void func_5073054720(void) {
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
    PC =func_5073050592_op0;
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
