#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 40
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
void func_5586834784(void);
void func_5586835168(void);
void func_5586835584(void);
void func_5586835680(void);
void func_5586835456(void);
void func_5586835376(void);
void func_5586836080(void);
void func_5586835296(void);
void func_5586835808(void);
void func_5586836336(void);
void func_5586836000(void);
void func_5586836272(void);
void func_5586836688(void);
void func_5586837056(void);
void func_5586836896(void);
void func_5586836624(void);
void func_5586836816(void);
void func_5586835872(void);
void func_5586837920(void);
void func_5586838048(void);
void func_5586838176(void);
void func_5586838304(void);
void func_5586838432(void);
void func_5586838560(void);
void func_5586838944(void);
void func_5586836528(void);
void func_5586839136(void);
void func_5586839264(void);
void func_5586839392(void);
void func_5586839584(void);
void func_5586839712(void);
void func_5586839840(void);
void func_5586839968(void);
void func_5586839520(void);
void func_5586840544(void);
void func_5586840672(void);
void func_5586837712(void);
void func_5586837840(void);
void func_5586838848(void);
void func_5586841024(void);
void func_5586841152(void);
void func_5586838688(void);
void func_5586841920(void);
void func_5586842048(void);
void func_5586837184(void);
void func_5586841696(void);
void func_5586842368(void);
void func_5586842496(void);
void func_5586842624(void);
void func_5586842752(void);
void func_5586842944(void);
void func_5586843072(void);
void func_5586843200(void);
void func_5586843328(void);
void func_5586842880(void);
void func_5586844096(void);
void func_5586841344(void);
void func_5586843920(void);
void func_5586841520(void);
void func_5586843584(void);
void func_5586843712(void);
void func_5586844224(void);
void func_5586845072(void);
void func_5586845200(void);
void func_5586844352(void);
void func_5586840032(void);
void func_5586845008(void);
void func_5586840400(void);
void HALT(void);
void RETURN(void);
Inst func_5586834784_op0[2] = {func_5586836624, RETURN};
Inst func_5586835168_op0[2] = {func_5586837920, RETURN};
Inst func_5586835168_op1[2] = {func_5586838176, RETURN};
Inst func_5586835168_op2[2] = {func_5586838432, RETURN};
Inst func_5586835584_op0[2] = {func_5586838944, RETURN};
Inst func_5586835584_op1[2] = {func_5586836528, RETURN};
Inst func_5586835584_op2[2] = {func_5586839136, RETURN};
Inst func_5586835584_op3[2] = {func_5586839264, RETURN};
Inst func_5586835584_op4[2] = {func_5586839392, RETURN};
Inst func_5586835584_op5[2] = {func_5586839584, RETURN};
Inst func_5586835584_op6[2] = {func_5586839712, RETURN};
Inst func_5586835584_op7[2] = {func_5586839840, RETURN};
Inst func_5586835584_op8[2] = {func_5586839968, RETURN};
Inst func_5586835584_op9[2] = {func_5586839520, RETURN};
Inst func_5586835680_op0[2] = {func_5586840544, RETURN};
Inst func_5586835680_op1[2] = {func_5586837712, RETURN};
Inst func_5586835680_op2[2] = {func_5586837056, RETURN};
Inst func_5586835456_op0[2] = {func_5586838848, RETURN};
Inst func_5586835456_op1[2] = {func_5586835808, RETURN};
Inst func_5586835456_op2[2] = {func_5586836080, RETURN};
Inst func_5586835376_op0[2] = {func_5586838688, RETURN};
Inst func_5586836080_op0[2] = {func_5586841696, RETURN};
Inst func_5586836080_op1[2] = {func_5586842368, RETURN};
Inst func_5586836080_op2[2] = {func_5586842496, RETURN};
Inst func_5586836080_op3[2] = {func_5586842624, RETURN};
Inst func_5586836080_op4[2] = {func_5586842752, RETURN};
Inst func_5586836080_op5[2] = {func_5586842944, RETURN};
Inst func_5586836080_op6[2] = {func_5586843072, RETURN};
Inst func_5586836080_op7[2] = {func_5586843200, RETURN};
Inst func_5586836080_op8[2] = {func_5586843328, RETURN};
Inst func_5586835296_op0[2] = {func_5586842880, RETURN};
Inst func_5586835296_op1[2] = {func_5586841344, RETURN};
Inst func_5586835808_op0[2] = {func_5586835584, RETURN};
Inst func_5586835808_op1[2] = {func_5586841520, RETURN};
Inst func_5586836336_op0[2] = {func_5586843584, RETURN};
Inst func_5586836000_op0[2] = {func_5586844224, RETURN};
Inst func_5586836272_op0[2] = {func_5586836000, HALT};
Inst func_5586836688_op0[2] = {func_5586835296, RETURN};
Inst func_5586836688_op1[2] = {func_5586836896, RETURN};
Inst func_5586836688_op2[2] = {func_5586835376, RETURN};
Inst func_5586836688_op3[2] = {func_5586834784, RETURN};
Inst func_5586836688_op4[2] = {func_5586836336, RETURN};
Inst func_5586837056_op0[2] = {func_5586845072, RETURN};
Inst func_5586837056_op1[2] = {func_5586844352, RETURN};
Inst func_5586837056_op2[2] = {func_5586835456, RETURN};
Inst func_5586836896_op0[2] = {func_5586845008, RETURN};
Inst exp_5586836624[5] = {func_5586836080, func_5586836816, func_5586835680, func_5586835872, RETURN};
Inst exp_5586837920[4] = {func_5586835680, func_5586838048, func_5586835680, RETURN};
Inst exp_5586838176[4] = {func_5586835680, func_5586838304, func_5586835680, RETURN};
Inst exp_5586838432[4] = {func_5586835680, func_5586838560, func_5586835680, RETURN};
Inst exp_5586840544[4] = {func_5586835680, func_5586840672, func_5586837056, RETURN};
Inst exp_5586837712[4] = {func_5586835680, func_5586837840, func_5586837056, RETURN};
Inst exp_5586838848[4] = {func_5586841024, func_5586835680, func_5586841152, RETURN};
Inst exp_5586838688[12] = {func_5586841920, func_5586841024, func_5586834784, func_5586835872, func_5586835168, func_5586835872, func_5586834784, func_5586841152, func_5586842048, func_5586836000, func_5586837184, RETURN};
Inst exp_5586842880[8] = {func_5586844096, func_5586841024, func_5586835168, func_5586841152, func_5586842048, func_5586836000, func_5586837184, RETURN};
Inst exp_5586841344[12] = {func_5586844096, func_5586841024, func_5586835168, func_5586841152, func_5586842048, func_5586836000, func_5586837184, func_5586843920, func_5586842048, func_5586836000, func_5586837184, RETURN};
Inst exp_5586841520[3] = {func_5586835584, func_5586835808, RETURN};
Inst exp_5586843584[6] = {func_5586843712, func_5586841024, func_5586835680, func_5586841152, func_5586835872, RETURN};
Inst exp_5586844224[3] = {func_5586836688, func_5586836000, RETURN};
Inst exp_5586845072[4] = {func_5586837056, func_5586845200, func_5586835456, RETURN};
Inst exp_5586844352[4] = {func_5586837056, func_5586840032, func_5586835456, RETURN};
Inst exp_5586845008[8] = {func_5586840400, func_5586841024, func_5586835168, func_5586841152, func_5586842048, func_5586836000, func_5586837184, RETURN};
void func_5586834784(void) {
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
            PC = func_5586834784_op0;
        break;
    }
}
void func_5586835168(void) {
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
            PC = func_5586835168_op0;
        break;
        case 1:
            PC = func_5586835168_op1;
        break;
        case 2:
            PC = func_5586835168_op2;
        break;
    }
}
void func_5586835584(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5586835584_op0;
        break;
        case 1:
            PC = func_5586835584_op1;
        break;
        case 2:
            PC = func_5586835584_op2;
        break;
        case 3:
            PC = func_5586835584_op3;
        break;
        case 4:
            PC = func_5586835584_op4;
        break;
        case 5:
            PC = func_5586835584_op5;
        break;
        case 6:
            PC = func_5586835584_op6;
        break;
        case 7:
            PC = func_5586835584_op7;
        break;
        case 8:
            PC = func_5586835584_op8;
        break;
        case 9:
            PC = func_5586835584_op9;
        break;
    }
}
void func_5586835680(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5586835680_op0;
        break;
        case 1:
            PC = func_5586835680_op1;
        break;
        case 2:
            PC = func_5586835680_op2;
        break;
    }
}
void func_5586835456(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5586835456_op0;
        break;
        case 1:
            PC = func_5586835456_op1;
        break;
        case 2:
            PC = func_5586835456_op2;
        break;
    }
}
void func_5586835376(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5586835376_op0;
        break;
    }
}
void func_5586836080(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5586836080_op0;
        break;
        case 1:
            PC = func_5586836080_op1;
        break;
        case 2:
            PC = func_5586836080_op2;
        break;
        case 3:
            PC = func_5586836080_op3;
        break;
        case 4:
            PC = func_5586836080_op4;
        break;
        case 5:
            PC = func_5586836080_op5;
        break;
        case 6:
            PC = func_5586836080_op6;
        break;
        case 7:
            PC = func_5586836080_op7;
        break;
        case 8:
            PC = func_5586836080_op8;
        break;
    }
}
void func_5586835296(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5586835296_op0;
        break;
        case 1:
            PC = func_5586835296_op1;
        break;
    }
}
void func_5586835808(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5586835808_op0;
        break;
        case 1:
            PC = func_5586835808_op1;
        break;
    }
}
void func_5586836336(void) {
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
            PC = func_5586836336_op0;
        break;
    }
}
void func_5586836000(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5586836000_op0;
        break;
    }
}
void func_5586836272(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5586836272_op0;
        break;
    }
}
void func_5586836688(void) {
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
            PC = func_5586836688_op0;
        break;
        case 1:
            PC = func_5586836688_op1;
        break;
        case 2:
            PC = func_5586836688_op2;
        break;
        case 3:
            PC = func_5586836688_op3;
        break;
        case 4:
            PC = func_5586836688_op4;
        break;
    }
}
void func_5586837056(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5586837056_op0;
        break;
        case 1:
            PC = func_5586837056_op1;
        break;
        case 2:
            PC = func_5586837056_op2;
        break;
    }
}
void func_5586836896(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5586836896_op0;
        break;
    }
}
void func_5586836624(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5586836624;
}
void func_5586836816(void) {
    extend(61);
    NEXT();
}
void func_5586835872(void) {
    extend(59);
    NEXT();
}
void func_5586837920(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5586837920;
}
void func_5586838048(void) {
    extend(62);
    NEXT();
}
void func_5586838176(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5586838176;
}
void func_5586838304(void) {
    extend(60);
    NEXT();
}
void func_5586838432(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5586838432;
}
void func_5586838560(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5586838944(void) {
    extend(48);
    NEXT();
}
void func_5586836528(void) {
    extend(49);
    NEXT();
}
void func_5586839136(void) {
    extend(50);
    NEXT();
}
void func_5586839264(void) {
    extend(51);
    NEXT();
}
void func_5586839392(void) {
    extend(52);
    NEXT();
}
void func_5586839584(void) {
    extend(53);
    NEXT();
}
void func_5586839712(void) {
    extend(54);
    NEXT();
}
void func_5586839840(void) {
    extend(55);
    NEXT();
}
void func_5586839968(void) {
    extend(56);
    NEXT();
}
void func_5586839520(void) {
    extend(57);
    NEXT();
}
void func_5586840544(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5586840544;
}
void func_5586840672(void) {
    extend(43);
    NEXT();
}
void func_5586837712(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5586837712;
}
void func_5586837840(void) {
    extend(45);
    NEXT();
}
void func_5586838848(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5586838848;
}
void func_5586841024(void) {
    extend(40);
    NEXT();
}
void func_5586841152(void) {
    extend(41);
    NEXT();
}
void func_5586838688(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5586838688;
}
void func_5586841920(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_5586842048(void) {
    extend(123);
    NEXT();
}
void func_5586837184(void) {
    extend(125);
    NEXT();
}
void func_5586841696(void) {
    extend(105);
    NEXT();
}
void func_5586842368(void) {
    extend(106);
    NEXT();
}
void func_5586842496(void) {
    extend(107);
    NEXT();
}
void func_5586842624(void) {
    extend(120);
    NEXT();
}
void func_5586842752(void) {
    extend(121);
    NEXT();
}
void func_5586842944(void) {
    extend(122);
    NEXT();
}
void func_5586843072(void) {
    extend(97);
    NEXT();
}
void func_5586843200(void) {
    extend(98);
    NEXT();
}
void func_5586843328(void) {
    extend(99);
    NEXT();
}
void func_5586842880(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5586842880;
}
void func_5586844096(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5586841344(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5586841344;
}
void func_5586843920(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5586841520(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5586841520;
}
void func_5586843584(void) {
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
    PC = exp_5586843584;
}
void func_5586843712(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5586844224(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5586844224;
}
void func_5586845072(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5586845072;
}
void func_5586845200(void) {
    extend(42);
    NEXT();
}
void func_5586844352(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5586844352;
}
void func_5586840032(void) {
    extend(47);
    NEXT();
}
void func_5586845008(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5586845008;
}
void func_5586840400(void) {
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
    PC =func_5586836272_op0;
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
