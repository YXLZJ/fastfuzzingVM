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
void func_5802844896(void);
void func_5802854336(void);
void func_5802854256(void);
void func_5802854176(void);
void func_5802854800(void);
void func_5802853904(void);
void func_5802855328(void);
void func_5802854096(void);
void func_5802854624(void);
void func_5802854688(void);
void func_5802855568(void);
void func_5802855696(void);
void func_5802855920(void);
void func_5802856048(void);
void func_5802856176(void);
void func_5802856544(void);
void func_5802856672(void);
void func_5802854992(void);
void func_5802857056(void);
void func_5802857184(void);
void func_5802857312(void);
void func_5802857440(void);
void func_5802857568(void);
void func_5802857728(void);
void func_5802857856(void);
void func_5802858080(void);
void func_5802858208(void);
void func_5802858336(void);
void func_5802858464(void);
void func_5802858592(void);
void func_5802858784(void);
void func_5802858016(void);
void func_5802855824(void);
void func_5802856800(void);
void func_5802856928(void);
void func_5802856368(void);
void func_5802860272(void);
void func_5802860400(void);
void func_5802860208(void);
void func_5802859440(void);
void func_5802856432(void);
void func_5802860848(void);
void func_5802860976(void);
void func_5802861104(void);
void func_5802861296(void);
void func_5802861424(void);
void func_5802861552(void);
void func_5802861680(void);
void func_5802861232(void);
void func_5802862000(void);
void func_5802862128(void);
void func_5802859264(void);
void func_5802858976(void);
void func_5802862400(void);
void func_5802862528(void);
void HALT(void);
void RETURN(void);
Inst func_5802844896_op0[2] = {func_5802855920, RETURN};
Inst func_5802854336_op0[2] = {func_5802856544, RETURN};
Inst func_5802854336_op1[2] = {func_5802854992, RETURN};
Inst func_5802854336_op2[2] = {func_5802857184, RETURN};
Inst func_5802854256_op0[2] = {func_5802857440, RETURN};
Inst func_5802854256_op1[2] = {func_5802855696, RETURN};
Inst func_5802854256_op2[2] = {func_5802857728, RETURN};
Inst func_5802854176_op0[2] = {func_5802855328, RETURN};
Inst func_5802854176_op1[2] = {func_5802854800, RETURN};
Inst func_5802854800_op0[2] = {func_5802858080, RETURN};
Inst func_5802854800_op1[2] = {func_5802858208, RETURN};
Inst func_5802854800_op2[2] = {func_5802858336, RETURN};
Inst func_5802854800_op3[2] = {func_5802858464, RETURN};
Inst func_5802854800_op4[2] = {func_5802858592, RETURN};
Inst func_5802854800_op5[2] = {func_5802858784, RETURN};
Inst func_5802853904_op0[2] = {func_5802858016, RETURN};
Inst func_5802853904_op1[2] = {func_5802860208, RETURN};
Inst func_5802855328_op0[2] = {func_5802859440, RETURN};
Inst func_5802855328_op1[2] = {func_5802856432, RETURN};
Inst func_5802855328_op2[2] = {func_5802860848, RETURN};
Inst func_5802855328_op3[2] = {func_5802860976, RETURN};
Inst func_5802855328_op4[2] = {func_5802861104, RETURN};
Inst func_5802855328_op5[2] = {func_5802861296, RETURN};
Inst func_5802855328_op6[2] = {func_5802861424, RETURN};
Inst func_5802855328_op7[2] = {func_5802861552, RETURN};
Inst func_5802855328_op8[2] = {func_5802861680, RETURN};
Inst func_5802855328_op9[2] = {func_5802861232, RETURN};
Inst func_5802854096_op0[2] = {func_5802862000, RETURN};
Inst func_5802854624_op0[2] = {func_5802853904, HALT};
Inst func_5802854688_op0[2] = {func_5802853904, RETURN};
Inst func_5802854688_op1[2] = {func_5802844896, RETURN};
Inst func_5802854688_op2[2] = {func_5802854096, RETURN};
Inst func_5802855568_op0[2] = {func_5802859264, RETURN};
Inst func_5802855568_op1[2] = {func_5802858976, RETURN};
Inst func_5802855696_op0[2] = {func_5802854176, RETURN};
Inst func_5802855696_op1[2] = {func_5802862400, RETURN};
Inst exp_5802855920[5] = {func_5802854800, func_5802856048, func_5802854256, func_5802856176, RETURN};
Inst exp_5802856544[4] = {func_5802854256, func_5802856672, func_5802854256, RETURN};
Inst exp_5802854992[4] = {func_5802854256, func_5802857056, func_5802854256, RETURN};
Inst exp_5802857184[4] = {func_5802854256, func_5802857312, func_5802854256, RETURN};
Inst exp_5802857440[4] = {func_5802855696, func_5802857568, func_5802854256, RETURN};
Inst exp_5802857728[4] = {func_5802855696, func_5802857856, func_5802854256, RETURN};
Inst exp_5802858016[12] = {func_5802855824, func_5802856800, func_5802854336, func_5802856928, func_5802856368, func_5802855568, func_5802860272, func_5802860400, func_5802856368, func_5802855568, func_5802860272, RETURN};
Inst exp_5802860208[8] = {func_5802855824, func_5802856800, func_5802854336, func_5802856928, func_5802856368, func_5802855568, func_5802860272, RETURN};
Inst exp_5802862000[6] = {func_5802862128, func_5802856800, func_5802854256, func_5802856928, func_5802856176, RETURN};
Inst exp_5802859264[3] = {func_5802854688, func_5802855568, RETURN};
Inst exp_5802858976[1] = {RETURN};
Inst exp_5802862400[4] = {func_5802854176, func_5802862528, func_5802855696, RETURN};
void func_5802844896(void) {
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
            PC = func_5802844896_op0;
        break;
    }
}
void func_5802854336(void) {
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
            PC = func_5802854336_op0;
        break;
        case 1:
            PC = func_5802854336_op1;
        break;
        case 2:
            PC = func_5802854336_op2;
        break;
    }
}
void func_5802854256(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5802854256_op0;
        break;
        case 1:
            PC = func_5802854256_op1;
        break;
        case 2:
            PC = func_5802854256_op2;
        break;
    }
}
void func_5802854176(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5802854176_op0;
        break;
        case 1:
            PC = func_5802854176_op1;
        break;
    }
}
void func_5802854800(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5802854800_op0;
        break;
        case 1:
            PC = func_5802854800_op1;
        break;
        case 2:
            PC = func_5802854800_op2;
        break;
        case 3:
            PC = func_5802854800_op3;
        break;
        case 4:
            PC = func_5802854800_op4;
        break;
        case 5:
            PC = func_5802854800_op5;
        break;
    }
}
void func_5802853904(void) {
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
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5802853904_op0;
        break;
        case 1:
            PC = func_5802853904_op1;
        break;
    }
}
void func_5802855328(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5802855328_op0;
        break;
        case 1:
            PC = func_5802855328_op1;
        break;
        case 2:
            PC = func_5802855328_op2;
        break;
        case 3:
            PC = func_5802855328_op3;
        break;
        case 4:
            PC = func_5802855328_op4;
        break;
        case 5:
            PC = func_5802855328_op5;
        break;
        case 6:
            PC = func_5802855328_op6;
        break;
        case 7:
            PC = func_5802855328_op7;
        break;
        case 8:
            PC = func_5802855328_op8;
        break;
        case 9:
            PC = func_5802855328_op9;
        break;
    }
}
void func_5802854096(void) {
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
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5802854096_op0;
        break;
    }
}
void func_5802854624(void) {
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
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5802854624_op0;
        break;
    }
}
void func_5802854688(void) {
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
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5802854688_op0;
        break;
        case 1:
            PC = func_5802854688_op1;
        break;
        case 2:
            PC = func_5802854688_op2;
        break;
    }
}
void func_5802855568(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5802855568_op0;
        break;
        case 1:
            PC = func_5802855568_op1;
        break;
    }
}
void func_5802855696(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5802855696_op0;
        break;
        case 1:
            PC = func_5802855696_op1;
        break;
    }
}
void func_5802855920(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5802855920;
}
void func_5802856048(void) {
    extend(61);
    NEXT();
}
void func_5802856176(void) {
    extend(59);
    NEXT();
}
void func_5802856544(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5802856544;
}
void func_5802856672(void) {
    extend(62);
    NEXT();
}
void func_5802854992(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5802854992;
}
void func_5802857056(void) {
    extend(60);
    NEXT();
}
void func_5802857184(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5802857184;
}
void func_5802857312(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5802857440(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5802857440;
}
void func_5802857568(void) {
    extend(43);
    NEXT();
}
void func_5802857728(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5802857728;
}
void func_5802857856(void) {
    extend(45);
    NEXT();
}
void func_5802858080(void) {
    extend(120);
    NEXT();
}
void func_5802858208(void) {
    extend(121);
    NEXT();
}
void func_5802858336(void) {
    extend(122);
    NEXT();
}
void func_5802858464(void) {
    extend(97);
    NEXT();
}
void func_5802858592(void) {
    extend(98);
    NEXT();
}
void func_5802858784(void) {
    extend(99);
    NEXT();
}
void func_5802858016(void) {
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
        return;
    }
    store();
    PC = exp_5802858016;
}
void func_5802855824(void) {
    extend(105);
    extend(102);
    NEXT();
}
void func_5802856800(void) {
    extend(40);
    NEXT();
}
void func_5802856928(void) {
    extend(41);
    NEXT();
}
void func_5802856368(void) {
    extend(123);
    NEXT();
}
void func_5802860272(void) {
    extend(125);
    NEXT();
}
void func_5802860400(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5802860208(void) {
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
        return;
    }
    store();
    PC = exp_5802860208;
}
void func_5802859440(void) {
    extend(48);
    NEXT();
}
void func_5802856432(void) {
    extend(49);
    NEXT();
}
void func_5802860848(void) {
    extend(50);
    NEXT();
}
void func_5802860976(void) {
    extend(51);
    NEXT();
}
void func_5802861104(void) {
    extend(52);
    NEXT();
}
void func_5802861296(void) {
    extend(53);
    NEXT();
}
void func_5802861424(void) {
    extend(54);
    NEXT();
}
void func_5802861552(void) {
    extend(55);
    NEXT();
}
void func_5802861680(void) {
    extend(56);
    NEXT();
}
void func_5802861232(void) {
    extend(57);
    NEXT();
}
void func_5802862000(void) {
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
        return;
    }
    store();
    PC = exp_5802862000;
}
void func_5802862128(void) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
}
void func_5802859264(void) {
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
        return;
    }
    store();
    PC = exp_5802859264;
}
void func_5802858976(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5802858976;
}
void func_5802862400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5802862400;
}
void func_5802862528(void) {
    extend(42);
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
    PC =func_5802854624_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 12;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
