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
void func_5174747072(void);
void func_5174747456(void);
void func_5174747872(void);
void func_5174747968(void);
void func_5174747744(void);
void func_5174747664(void);
void func_5174748368(void);
void func_5174747584(void);
void func_5174748096(void);
void func_5174748624(void);
void func_5174748288(void);
void func_5174748560(void);
void func_5174748976(void);
void func_5174749344(void);
void func_5174749184(void);
void func_5174748912(void);
void func_5174749104(void);
void func_5174748160(void);
void func_5174750208(void);
void func_5174750336(void);
void func_5174750464(void);
void func_5174750592(void);
void func_5174750720(void);
void func_5174750848(void);
void func_5174751232(void);
void func_5174748816(void);
void func_5174751424(void);
void func_5174751552(void);
void func_5174751680(void);
void func_5174751872(void);
void func_5174752000(void);
void func_5174752128(void);
void func_5174752256(void);
void func_5174751808(void);
void func_5174752832(void);
void func_5174752960(void);
void func_5174750000(void);
void func_5174750128(void);
void func_5174751136(void);
void func_5174753312(void);
void func_5174753440(void);
void func_5174750976(void);
void func_5174754208(void);
void func_5174754336(void);
void func_5174749472(void);
void func_5174753984(void);
void func_5174754656(void);
void func_5174754784(void);
void func_5174754912(void);
void func_5174755040(void);
void func_5174755232(void);
void func_5174755360(void);
void func_5174755488(void);
void func_5174755616(void);
void func_5174755168(void);
void func_5174756384(void);
void func_5174753632(void);
void func_5174756208(void);
void func_5174753808(void);
void func_5174755872(void);
void func_5174756000(void);
void func_5174756512(void);
void func_5174757360(void);
void func_5174757488(void);
void func_5174756640(void);
void func_5174752320(void);
void func_5174757296(void);
void func_5174752688(void);
void HALT(void);
void RETURN(void);
Inst func_5174747072_op0[2] = {func_5174748912, RETURN};
Inst func_5174747456_op0[2] = {func_5174750208, RETURN};
Inst func_5174747456_op1[2] = {func_5174750464, RETURN};
Inst func_5174747456_op2[2] = {func_5174750720, RETURN};
Inst func_5174747872_op0[2] = {func_5174751232, RETURN};
Inst func_5174747872_op1[2] = {func_5174748816, RETURN};
Inst func_5174747872_op2[2] = {func_5174751424, RETURN};
Inst func_5174747872_op3[2] = {func_5174751552, RETURN};
Inst func_5174747872_op4[2] = {func_5174751680, RETURN};
Inst func_5174747872_op5[2] = {func_5174751872, RETURN};
Inst func_5174747872_op6[2] = {func_5174752000, RETURN};
Inst func_5174747872_op7[2] = {func_5174752128, RETURN};
Inst func_5174747872_op8[2] = {func_5174752256, RETURN};
Inst func_5174747872_op9[2] = {func_5174751808, RETURN};
Inst func_5174747968_op0[2] = {func_5174752832, RETURN};
Inst func_5174747968_op1[2] = {func_5174750000, RETURN};
Inst func_5174747968_op2[2] = {func_5174749344, RETURN};
Inst func_5174747744_op0[2] = {func_5174751136, RETURN};
Inst func_5174747744_op1[2] = {func_5174748096, RETURN};
Inst func_5174747744_op2[2] = {func_5174748368, RETURN};
Inst func_5174747664_op0[2] = {func_5174750976, RETURN};
Inst func_5174748368_op0[2] = {func_5174753984, RETURN};
Inst func_5174748368_op1[2] = {func_5174754656, RETURN};
Inst func_5174748368_op2[2] = {func_5174754784, RETURN};
Inst func_5174748368_op3[2] = {func_5174754912, RETURN};
Inst func_5174748368_op4[2] = {func_5174755040, RETURN};
Inst func_5174748368_op5[2] = {func_5174755232, RETURN};
Inst func_5174748368_op6[2] = {func_5174755360, RETURN};
Inst func_5174748368_op7[2] = {func_5174755488, RETURN};
Inst func_5174748368_op8[2] = {func_5174755616, RETURN};
Inst func_5174747584_op0[2] = {func_5174755168, RETURN};
Inst func_5174747584_op1[2] = {func_5174753632, RETURN};
Inst func_5174748096_op0[2] = {func_5174747872, RETURN};
Inst func_5174748096_op1[2] = {func_5174753808, RETURN};
Inst func_5174748624_op0[2] = {func_5174755872, RETURN};
Inst func_5174748288_op0[2] = {func_5174756512, RETURN};
Inst func_5174748560_op0[2] = {func_5174748288, HALT};
Inst func_5174748976_op0[2] = {func_5174747584, RETURN};
Inst func_5174748976_op1[2] = {func_5174749184, RETURN};
Inst func_5174748976_op2[2] = {func_5174747664, RETURN};
Inst func_5174748976_op3[2] = {func_5174747072, RETURN};
Inst func_5174748976_op4[2] = {func_5174748624, RETURN};
Inst func_5174749344_op0[2] = {func_5174757360, RETURN};
Inst func_5174749344_op1[2] = {func_5174756640, RETURN};
Inst func_5174749344_op2[2] = {func_5174747744, RETURN};
Inst func_5174749184_op0[2] = {func_5174757296, RETURN};
Inst exp_5174748912[5] = {func_5174748368, func_5174749104, func_5174747968, func_5174748160, RETURN};
Inst exp_5174750208[4] = {func_5174747968, func_5174750336, func_5174747968, RETURN};
Inst exp_5174750464[4] = {func_5174747968, func_5174750592, func_5174747968, RETURN};
Inst exp_5174750720[4] = {func_5174747968, func_5174750848, func_5174747968, RETURN};
Inst exp_5174752832[4] = {func_5174747968, func_5174752960, func_5174749344, RETURN};
Inst exp_5174750000[4] = {func_5174747968, func_5174750128, func_5174749344, RETURN};
Inst exp_5174751136[4] = {func_5174753312, func_5174747968, func_5174753440, RETURN};
Inst exp_5174750976[12] = {func_5174754208, func_5174753312, func_5174747072, func_5174748160, func_5174747456, func_5174748160, func_5174747072, func_5174753440, func_5174754336, func_5174748288, func_5174749472, RETURN};
Inst exp_5174755168[8] = {func_5174756384, func_5174753312, func_5174747456, func_5174753440, func_5174754336, func_5174748288, func_5174749472, RETURN};
Inst exp_5174753632[12] = {func_5174756384, func_5174753312, func_5174747456, func_5174753440, func_5174754336, func_5174748288, func_5174749472, func_5174756208, func_5174754336, func_5174748288, func_5174749472, RETURN};
Inst exp_5174753808[3] = {func_5174747872, func_5174748096, RETURN};
Inst exp_5174755872[6] = {func_5174756000, func_5174753312, func_5174747968, func_5174753440, func_5174748160, RETURN};
Inst exp_5174756512[3] = {func_5174748976, func_5174748288, RETURN};
Inst exp_5174757360[4] = {func_5174749344, func_5174757488, func_5174747744, RETURN};
Inst exp_5174756640[4] = {func_5174749344, func_5174752320, func_5174747744, RETURN};
Inst exp_5174757296[8] = {func_5174752688, func_5174753312, func_5174747456, func_5174753440, func_5174754336, func_5174748288, func_5174749472, RETURN};
void func_5174747072(void) {
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
            PC = func_5174747072_op0;
        break;
    }
}
void func_5174747456(void) {
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
            PC = func_5174747456_op0;
        break;
        case 1:
            PC = func_5174747456_op1;
        break;
        case 2:
            PC = func_5174747456_op2;
        break;
    }
}
void func_5174747872(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5174747872_op0;
        break;
        case 1:
            PC = func_5174747872_op1;
        break;
        case 2:
            PC = func_5174747872_op2;
        break;
        case 3:
            PC = func_5174747872_op3;
        break;
        case 4:
            PC = func_5174747872_op4;
        break;
        case 5:
            PC = func_5174747872_op5;
        break;
        case 6:
            PC = func_5174747872_op6;
        break;
        case 7:
            PC = func_5174747872_op7;
        break;
        case 8:
            PC = func_5174747872_op8;
        break;
        case 9:
            PC = func_5174747872_op9;
        break;
    }
}
void func_5174747968(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5174747968_op0;
        break;
        case 1:
            PC = func_5174747968_op1;
        break;
        case 2:
            PC = func_5174747968_op2;
        break;
    }
}
void func_5174747744(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5174747744_op0;
        break;
        case 1:
            PC = func_5174747744_op1;
        break;
        case 2:
            PC = func_5174747744_op2;
        break;
    }
}
void func_5174747664(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5174747664_op0;
        break;
    }
}
void func_5174748368(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5174748368_op0;
        break;
        case 1:
            PC = func_5174748368_op1;
        break;
        case 2:
            PC = func_5174748368_op2;
        break;
        case 3:
            PC = func_5174748368_op3;
        break;
        case 4:
            PC = func_5174748368_op4;
        break;
        case 5:
            PC = func_5174748368_op5;
        break;
        case 6:
            PC = func_5174748368_op6;
        break;
        case 7:
            PC = func_5174748368_op7;
        break;
        case 8:
            PC = func_5174748368_op8;
        break;
    }
}
void func_5174747584(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5174747584_op0;
        break;
        case 1:
            PC = func_5174747584_op1;
        break;
    }
}
void func_5174748096(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5174748096_op0;
        break;
        case 1:
            PC = func_5174748096_op1;
        break;
    }
}
void func_5174748624(void) {
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
            PC = func_5174748624_op0;
        break;
    }
}
void func_5174748288(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5174748288_op0;
        break;
    }
}
void func_5174748560(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5174748560_op0;
        break;
    }
}
void func_5174748976(void) {
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
            PC = func_5174748976_op0;
        break;
        case 1:
            PC = func_5174748976_op1;
        break;
        case 2:
            PC = func_5174748976_op2;
        break;
        case 3:
            PC = func_5174748976_op3;
        break;
        case 4:
            PC = func_5174748976_op4;
        break;
    }
}
void func_5174749344(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5174749344_op0;
        break;
        case 1:
            PC = func_5174749344_op1;
        break;
        case 2:
            PC = func_5174749344_op2;
        break;
    }
}
void func_5174749184(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5174749184_op0;
        break;
    }
}
void func_5174748912(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5174748912;
}
void func_5174749104(void) {
    extend(61);
    NEXT();
}
void func_5174748160(void) {
    extend(59);
    NEXT();
}
void func_5174750208(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5174750208;
}
void func_5174750336(void) {
    extend(62);
    NEXT();
}
void func_5174750464(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5174750464;
}
void func_5174750592(void) {
    extend(60);
    NEXT();
}
void func_5174750720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5174750720;
}
void func_5174750848(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5174751232(void) {
    extend(48);
    NEXT();
}
void func_5174748816(void) {
    extend(49);
    NEXT();
}
void func_5174751424(void) {
    extend(50);
    NEXT();
}
void func_5174751552(void) {
    extend(51);
    NEXT();
}
void func_5174751680(void) {
    extend(52);
    NEXT();
}
void func_5174751872(void) {
    extend(53);
    NEXT();
}
void func_5174752000(void) {
    extend(54);
    NEXT();
}
void func_5174752128(void) {
    extend(55);
    NEXT();
}
void func_5174752256(void) {
    extend(56);
    NEXT();
}
void func_5174751808(void) {
    extend(57);
    NEXT();
}
void func_5174752832(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5174752832;
}
void func_5174752960(void) {
    extend(43);
    NEXT();
}
void func_5174750000(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5174750000;
}
void func_5174750128(void) {
    extend(45);
    NEXT();
}
void func_5174751136(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5174751136;
}
void func_5174753312(void) {
    extend(40);
    NEXT();
}
void func_5174753440(void) {
    extend(41);
    NEXT();
}
void func_5174750976(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5174750976;
}
void func_5174754208(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_5174754336(void) {
    extend(123);
    NEXT();
}
void func_5174749472(void) {
    extend(125);
    NEXT();
}
void func_5174753984(void) {
    extend(105);
    NEXT();
}
void func_5174754656(void) {
    extend(106);
    NEXT();
}
void func_5174754784(void) {
    extend(107);
    NEXT();
}
void func_5174754912(void) {
    extend(120);
    NEXT();
}
void func_5174755040(void) {
    extend(121);
    NEXT();
}
void func_5174755232(void) {
    extend(122);
    NEXT();
}
void func_5174755360(void) {
    extend(97);
    NEXT();
}
void func_5174755488(void) {
    extend(98);
    NEXT();
}
void func_5174755616(void) {
    extend(99);
    NEXT();
}
void func_5174755168(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5174755168;
}
void func_5174756384(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5174753632(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5174753632;
}
void func_5174756208(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5174753808(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5174753808;
}
void func_5174755872(void) {
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
    PC = exp_5174755872;
}
void func_5174756000(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5174756512(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5174756512;
}
void func_5174757360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5174757360;
}
void func_5174757488(void) {
    extend(42);
    NEXT();
}
void func_5174756640(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5174756640;
}
void func_5174752320(void) {
    extend(47);
    NEXT();
}
void func_5174757296(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5174757296;
}
void func_5174752688(void) {
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
    PC =func_5174748560_op0;
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
