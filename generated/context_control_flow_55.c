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
void func_5022717472(void);
void func_5022717840(void);
void func_5022718256(void);
void func_5022718352(void);
void func_5022718128(void);
void func_5022718048(void);
void func_5022718752(void);
void func_5022717968(void);
void func_5022718480(void);
void func_5022719008(void);
void func_5022718672(void);
void func_5022718944(void);
void func_5022719360(void);
void func_5022719728(void);
void func_5022719568(void);
void func_5022719296(void);
void func_5022719488(void);
void func_5022718544(void);
void func_5022720592(void);
void func_5022720720(void);
void func_5022720848(void);
void func_5022720976(void);
void func_5022721104(void);
void func_5022721232(void);
void func_5022721616(void);
void func_5022719200(void);
void func_5022721808(void);
void func_5022721936(void);
void func_5022722064(void);
void func_5022722256(void);
void func_5022722384(void);
void func_5022722512(void);
void func_5022722640(void);
void func_5022722192(void);
void func_5022723216(void);
void func_5022723344(void);
void func_5022720384(void);
void func_5022720512(void);
void func_5022721520(void);
void func_5022723696(void);
void func_5022723824(void);
void func_5022721360(void);
void func_5022724592(void);
void func_5022724720(void);
void func_5022719856(void);
void func_5022724368(void);
void func_5022725040(void);
void func_5022725168(void);
void func_5022725296(void);
void func_5022725424(void);
void func_5022725616(void);
void func_5022725744(void);
void func_5022725872(void);
void func_5022726000(void);
void func_5022725552(void);
void func_5022726768(void);
void func_5022724016(void);
void func_5022726592(void);
void func_5022724192(void);
void func_5022726256(void);
void func_5022726384(void);
void func_5022726896(void);
void func_5022727744(void);
void func_5022727872(void);
void func_5022727024(void);
void func_5022722704(void);
void func_5022727680(void);
void func_5022723072(void);
void HALT(void);
void RETURN(void);
Inst func_5022717472_op0[2] = {func_5022719296, RETURN};
Inst func_5022717840_op0[2] = {func_5022720592, RETURN};
Inst func_5022717840_op1[2] = {func_5022720848, RETURN};
Inst func_5022717840_op2[2] = {func_5022721104, RETURN};
Inst func_5022718256_op0[2] = {func_5022721616, RETURN};
Inst func_5022718256_op1[2] = {func_5022719200, RETURN};
Inst func_5022718256_op2[2] = {func_5022721808, RETURN};
Inst func_5022718256_op3[2] = {func_5022721936, RETURN};
Inst func_5022718256_op4[2] = {func_5022722064, RETURN};
Inst func_5022718256_op5[2] = {func_5022722256, RETURN};
Inst func_5022718256_op6[2] = {func_5022722384, RETURN};
Inst func_5022718256_op7[2] = {func_5022722512, RETURN};
Inst func_5022718256_op8[2] = {func_5022722640, RETURN};
Inst func_5022718256_op9[2] = {func_5022722192, RETURN};
Inst func_5022718352_op0[2] = {func_5022723216, RETURN};
Inst func_5022718352_op1[2] = {func_5022720384, RETURN};
Inst func_5022718352_op2[2] = {func_5022719728, RETURN};
Inst func_5022718128_op0[2] = {func_5022721520, RETURN};
Inst func_5022718128_op1[2] = {func_5022718480, RETURN};
Inst func_5022718128_op2[2] = {func_5022718752, RETURN};
Inst func_5022718048_op0[2] = {func_5022721360, RETURN};
Inst func_5022718752_op0[2] = {func_5022724368, RETURN};
Inst func_5022718752_op1[2] = {func_5022725040, RETURN};
Inst func_5022718752_op2[2] = {func_5022725168, RETURN};
Inst func_5022718752_op3[2] = {func_5022725296, RETURN};
Inst func_5022718752_op4[2] = {func_5022725424, RETURN};
Inst func_5022718752_op5[2] = {func_5022725616, RETURN};
Inst func_5022718752_op6[2] = {func_5022725744, RETURN};
Inst func_5022718752_op7[2] = {func_5022725872, RETURN};
Inst func_5022718752_op8[2] = {func_5022726000, RETURN};
Inst func_5022717968_op0[2] = {func_5022725552, RETURN};
Inst func_5022717968_op1[2] = {func_5022724016, RETURN};
Inst func_5022718480_op0[2] = {func_5022718256, RETURN};
Inst func_5022718480_op1[2] = {func_5022724192, RETURN};
Inst func_5022719008_op0[2] = {func_5022726256, RETURN};
Inst func_5022718672_op0[2] = {func_5022726896, RETURN};
Inst func_5022718944_op0[2] = {func_5022718672, HALT};
Inst func_5022719360_op0[2] = {func_5022717968, RETURN};
Inst func_5022719360_op1[2] = {func_5022719568, RETURN};
Inst func_5022719360_op2[2] = {func_5022718048, RETURN};
Inst func_5022719360_op3[2] = {func_5022717472, RETURN};
Inst func_5022719360_op4[2] = {func_5022719008, RETURN};
Inst func_5022719728_op0[2] = {func_5022727744, RETURN};
Inst func_5022719728_op1[2] = {func_5022727024, RETURN};
Inst func_5022719728_op2[2] = {func_5022718128, RETURN};
Inst func_5022719568_op0[2] = {func_5022727680, RETURN};
Inst exp_5022719296[5] = {func_5022718752, func_5022719488, func_5022718352, func_5022718544, RETURN};
Inst exp_5022720592[4] = {func_5022718352, func_5022720720, func_5022718352, RETURN};
Inst exp_5022720848[4] = {func_5022718352, func_5022720976, func_5022718352, RETURN};
Inst exp_5022721104[4] = {func_5022718352, func_5022721232, func_5022718352, RETURN};
Inst exp_5022723216[4] = {func_5022718352, func_5022723344, func_5022719728, RETURN};
Inst exp_5022720384[4] = {func_5022718352, func_5022720512, func_5022719728, RETURN};
Inst exp_5022721520[4] = {func_5022723696, func_5022718352, func_5022723824, RETURN};
Inst exp_5022721360[12] = {func_5022724592, func_5022723696, func_5022717472, func_5022718544, func_5022717840, func_5022718544, func_5022717472, func_5022723824, func_5022724720, func_5022718672, func_5022719856, RETURN};
Inst exp_5022725552[8] = {func_5022726768, func_5022723696, func_5022717840, func_5022723824, func_5022724720, func_5022718672, func_5022719856, RETURN};
Inst exp_5022724016[12] = {func_5022726768, func_5022723696, func_5022717840, func_5022723824, func_5022724720, func_5022718672, func_5022719856, func_5022726592, func_5022724720, func_5022718672, func_5022719856, RETURN};
Inst exp_5022724192[3] = {func_5022718256, func_5022718480, RETURN};
Inst exp_5022726256[6] = {func_5022726384, func_5022723696, func_5022718352, func_5022723824, func_5022718544, RETURN};
Inst exp_5022726896[3] = {func_5022719360, func_5022718672, RETURN};
Inst exp_5022727744[4] = {func_5022719728, func_5022727872, func_5022718128, RETURN};
Inst exp_5022727024[4] = {func_5022719728, func_5022722704, func_5022718128, RETURN};
Inst exp_5022727680[8] = {func_5022723072, func_5022723696, func_5022717840, func_5022723824, func_5022724720, func_5022718672, func_5022719856, RETURN};
void func_5022717472(void) {
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
            PC = func_5022717472_op0;
        break;
    }
}
void func_5022717840(void) {
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
            PC = func_5022717840_op0;
        break;
        case 1:
            PC = func_5022717840_op1;
        break;
        case 2:
            PC = func_5022717840_op2;
        break;
    }
}
void func_5022718256(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718256_op0;
        break;
        case 1:
            PC = func_5022718256_op1;
        break;
        case 2:
            PC = func_5022718256_op2;
        break;
        case 3:
            PC = func_5022718256_op3;
        break;
        case 4:
            PC = func_5022718256_op4;
        break;
        case 5:
            PC = func_5022718256_op5;
        break;
        case 6:
            PC = func_5022718256_op6;
        break;
        case 7:
            PC = func_5022718256_op7;
        break;
        case 8:
            PC = func_5022718256_op8;
        break;
        case 9:
            PC = func_5022718256_op9;
        break;
    }
}
void func_5022718352(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718352_op0;
        break;
        case 1:
            PC = func_5022718352_op1;
        break;
        case 2:
            PC = func_5022718352_op2;
        break;
    }
}
void func_5022718128(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718128_op0;
        break;
        case 1:
            PC = func_5022718128_op1;
        break;
        case 2:
            PC = func_5022718128_op2;
        break;
    }
}
void func_5022718048(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718048_op0;
        break;
    }
}
void func_5022718752(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718752_op0;
        break;
        case 1:
            PC = func_5022718752_op1;
        break;
        case 2:
            PC = func_5022718752_op2;
        break;
        case 3:
            PC = func_5022718752_op3;
        break;
        case 4:
            PC = func_5022718752_op4;
        break;
        case 5:
            PC = func_5022718752_op5;
        break;
        case 6:
            PC = func_5022718752_op6;
        break;
        case 7:
            PC = func_5022718752_op7;
        break;
        case 8:
            PC = func_5022718752_op8;
        break;
    }
}
void func_5022717968(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5022717968_op0;
        break;
        case 1:
            PC = func_5022717968_op1;
        break;
    }
}
void func_5022718480(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718480_op0;
        break;
        case 1:
            PC = func_5022718480_op1;
        break;
    }
}
void func_5022719008(void) {
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
            PC = func_5022719008_op0;
        break;
    }
}
void func_5022718672(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718672_op0;
        break;
    }
}
void func_5022718944(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718944_op0;
        break;
    }
}
void func_5022719360(void) {
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
            PC = func_5022719360_op0;
        break;
        case 1:
            PC = func_5022719360_op1;
        break;
        case 2:
            PC = func_5022719360_op2;
        break;
        case 3:
            PC = func_5022719360_op3;
        break;
        case 4:
            PC = func_5022719360_op4;
        break;
    }
}
void func_5022719728(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5022719728_op0;
        break;
        case 1:
            PC = func_5022719728_op1;
        break;
        case 2:
            PC = func_5022719728_op2;
        break;
    }
}
void func_5022719568(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022719568_op0;
        break;
    }
}
void func_5022719296(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5022719296;
}
void func_5022719488(void) {
    extend(61);
    NEXT();
}
void func_5022718544(void) {
    extend(59);
    NEXT();
}
void func_5022720592(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5022720592;
}
void func_5022720720(void) {
    extend(62);
    NEXT();
}
void func_5022720848(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5022720848;
}
void func_5022720976(void) {
    extend(60);
    NEXT();
}
void func_5022721104(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5022721104;
}
void func_5022721232(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5022721616(void) {
    extend(48);
    NEXT();
}
void func_5022719200(void) {
    extend(49);
    NEXT();
}
void func_5022721808(void) {
    extend(50);
    NEXT();
}
void func_5022721936(void) {
    extend(51);
    NEXT();
}
void func_5022722064(void) {
    extend(52);
    NEXT();
}
void func_5022722256(void) {
    extend(53);
    NEXT();
}
void func_5022722384(void) {
    extend(54);
    NEXT();
}
void func_5022722512(void) {
    extend(55);
    NEXT();
}
void func_5022722640(void) {
    extend(56);
    NEXT();
}
void func_5022722192(void) {
    extend(57);
    NEXT();
}
void func_5022723216(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5022723216;
}
void func_5022723344(void) {
    extend(43);
    NEXT();
}
void func_5022720384(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5022720384;
}
void func_5022720512(void) {
    extend(45);
    NEXT();
}
void func_5022721520(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5022721520;
}
void func_5022723696(void) {
    extend(40);
    NEXT();
}
void func_5022723824(void) {
    extend(41);
    NEXT();
}
void func_5022721360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5022721360;
}
void func_5022724592(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_5022724720(void) {
    extend(123);
    NEXT();
}
void func_5022719856(void) {
    extend(125);
    NEXT();
}
void func_5022724368(void) {
    extend(105);
    NEXT();
}
void func_5022725040(void) {
    extend(106);
    NEXT();
}
void func_5022725168(void) {
    extend(107);
    NEXT();
}
void func_5022725296(void) {
    extend(120);
    NEXT();
}
void func_5022725424(void) {
    extend(121);
    NEXT();
}
void func_5022725616(void) {
    extend(122);
    NEXT();
}
void func_5022725744(void) {
    extend(97);
    NEXT();
}
void func_5022725872(void) {
    extend(98);
    NEXT();
}
void func_5022726000(void) {
    extend(99);
    NEXT();
}
void func_5022725552(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5022725552;
}
void func_5022726768(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5022724016(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5022724016;
}
void func_5022726592(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5022724192(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5022724192;
}
void func_5022726256(void) {
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
    PC = exp_5022726256;
}
void func_5022726384(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5022726896(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5022726896;
}
void func_5022727744(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5022727744;
}
void func_5022727872(void) {
    extend(42);
    NEXT();
}
void func_5022727024(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5022727024;
}
void func_5022722704(void) {
    extend(47);
    NEXT();
}
void func_5022727680(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5022727680;
}
void func_5022723072(void) {
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
    PC =func_5022718944_op0;
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
