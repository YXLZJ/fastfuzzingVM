#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 20
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
void func_5014328864(void);
void func_5014329232(void);
void func_5014329648(void);
void func_5014329744(void);
void func_5014329520(void);
void func_5014329440(void);
void func_5014330144(void);
void func_5014329360(void);
void func_5014329872(void);
void func_5014330400(void);
void func_5014330064(void);
void func_5014330336(void);
void func_5014330752(void);
void func_5014331120(void);
void func_5014330960(void);
void func_5014330688(void);
void func_5014330880(void);
void func_5014329936(void);
void func_5014331984(void);
void func_5014332112(void);
void func_5014332240(void);
void func_5014332368(void);
void func_5014332496(void);
void func_5014332624(void);
void func_5014333008(void);
void func_5014330592(void);
void func_5014333200(void);
void func_5014333328(void);
void func_5014333456(void);
void func_5014333648(void);
void func_5014333776(void);
void func_5014333904(void);
void func_5014334032(void);
void func_5014333584(void);
void func_5014334608(void);
void func_5014334736(void);
void func_5014331776(void);
void func_5014331904(void);
void func_5014332912(void);
void func_5014335088(void);
void func_5014335216(void);
void func_5014332752(void);
void func_5014335984(void);
void func_5014336112(void);
void func_5014331248(void);
void func_5014335760(void);
void func_5014336432(void);
void func_5014336560(void);
void func_5014336688(void);
void func_5014336816(void);
void func_5014337008(void);
void func_5014337136(void);
void func_5014337264(void);
void func_5014337392(void);
void func_5014336944(void);
void func_5014338160(void);
void func_5014335408(void);
void func_5014337984(void);
void func_5014335584(void);
void func_5014337648(void);
void func_5014337776(void);
void func_5014338288(void);
void func_5014339136(void);
void func_5014339264(void);
void func_5014338416(void);
void func_5014334096(void);
void func_5014339072(void);
void func_5014334464(void);
void HALT(void);
void RETURN(void);
Inst func_5014328864_op0[2] = {func_5014330688, RETURN};
Inst func_5014329232_op0[2] = {func_5014331984, RETURN};
Inst func_5014329232_op1[2] = {func_5014332240, RETURN};
Inst func_5014329232_op2[2] = {func_5014332496, RETURN};
Inst func_5014329648_op0[2] = {func_5014333008, RETURN};
Inst func_5014329648_op1[2] = {func_5014330592, RETURN};
Inst func_5014329648_op2[2] = {func_5014333200, RETURN};
Inst func_5014329648_op3[2] = {func_5014333328, RETURN};
Inst func_5014329648_op4[2] = {func_5014333456, RETURN};
Inst func_5014329648_op5[2] = {func_5014333648, RETURN};
Inst func_5014329648_op6[2] = {func_5014333776, RETURN};
Inst func_5014329648_op7[2] = {func_5014333904, RETURN};
Inst func_5014329648_op8[2] = {func_5014334032, RETURN};
Inst func_5014329648_op9[2] = {func_5014333584, RETURN};
Inst func_5014329744_op0[2] = {func_5014334608, RETURN};
Inst func_5014329744_op1[2] = {func_5014331776, RETURN};
Inst func_5014329744_op2[2] = {func_5014331120, RETURN};
Inst func_5014329520_op0[2] = {func_5014332912, RETURN};
Inst func_5014329520_op1[2] = {func_5014329872, RETURN};
Inst func_5014329520_op2[2] = {func_5014330144, RETURN};
Inst func_5014329440_op0[2] = {func_5014332752, RETURN};
Inst func_5014330144_op0[2] = {func_5014335760, RETURN};
Inst func_5014330144_op1[2] = {func_5014336432, RETURN};
Inst func_5014330144_op2[2] = {func_5014336560, RETURN};
Inst func_5014330144_op3[2] = {func_5014336688, RETURN};
Inst func_5014330144_op4[2] = {func_5014336816, RETURN};
Inst func_5014330144_op5[2] = {func_5014337008, RETURN};
Inst func_5014330144_op6[2] = {func_5014337136, RETURN};
Inst func_5014330144_op7[2] = {func_5014337264, RETURN};
Inst func_5014330144_op8[2] = {func_5014337392, RETURN};
Inst func_5014329360_op0[2] = {func_5014336944, RETURN};
Inst func_5014329360_op1[2] = {func_5014335408, RETURN};
Inst func_5014329872_op0[2] = {func_5014329648, RETURN};
Inst func_5014329872_op1[2] = {func_5014335584, RETURN};
Inst func_5014330400_op0[2] = {func_5014337648, RETURN};
Inst func_5014330064_op0[2] = {func_5014338288, RETURN};
Inst func_5014330336_op0[2] = {func_5014330064, HALT};
Inst func_5014330752_op0[2] = {func_5014329360, RETURN};
Inst func_5014330752_op1[2] = {func_5014330960, RETURN};
Inst func_5014330752_op2[2] = {func_5014329440, RETURN};
Inst func_5014330752_op3[2] = {func_5014328864, RETURN};
Inst func_5014330752_op4[2] = {func_5014330400, RETURN};
Inst func_5014331120_op0[2] = {func_5014339136, RETURN};
Inst func_5014331120_op1[2] = {func_5014338416, RETURN};
Inst func_5014331120_op2[2] = {func_5014329520, RETURN};
Inst func_5014330960_op0[2] = {func_5014339072, RETURN};
Inst exp_5014330688[5] = {func_5014330144, func_5014330880, func_5014329744, func_5014329936, RETURN};
Inst exp_5014331984[4] = {func_5014329744, func_5014332112, func_5014329744, RETURN};
Inst exp_5014332240[4] = {func_5014329744, func_5014332368, func_5014329744, RETURN};
Inst exp_5014332496[4] = {func_5014329744, func_5014332624, func_5014329744, RETURN};
Inst exp_5014334608[4] = {func_5014329744, func_5014334736, func_5014331120, RETURN};
Inst exp_5014331776[4] = {func_5014329744, func_5014331904, func_5014331120, RETURN};
Inst exp_5014332912[4] = {func_5014335088, func_5014329744, func_5014335216, RETURN};
Inst exp_5014332752[12] = {func_5014335984, func_5014335088, func_5014328864, func_5014329936, func_5014329232, func_5014329936, func_5014328864, func_5014335216, func_5014336112, func_5014330064, func_5014331248, RETURN};
Inst exp_5014336944[8] = {func_5014338160, func_5014335088, func_5014329232, func_5014335216, func_5014336112, func_5014330064, func_5014331248, RETURN};
Inst exp_5014335408[12] = {func_5014338160, func_5014335088, func_5014329232, func_5014335216, func_5014336112, func_5014330064, func_5014331248, func_5014337984, func_5014336112, func_5014330064, func_5014331248, RETURN};
Inst exp_5014335584[3] = {func_5014329648, func_5014329872, RETURN};
Inst exp_5014337648[6] = {func_5014337776, func_5014335088, func_5014329744, func_5014335216, func_5014329936, RETURN};
Inst exp_5014338288[3] = {func_5014330752, func_5014330064, RETURN};
Inst exp_5014339136[4] = {func_5014331120, func_5014339264, func_5014329520, RETURN};
Inst exp_5014338416[4] = {func_5014331120, func_5014334096, func_5014329520, RETURN};
Inst exp_5014339072[8] = {func_5014334464, func_5014335088, func_5014329232, func_5014335216, func_5014336112, func_5014330064, func_5014331248, RETURN};
void func_5014328864(void) {
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
            PC = func_5014328864_op0;
        break;
    }
}
void func_5014329232(void) {
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
            PC = func_5014329232_op0;
        break;
        case 1:
            PC = func_5014329232_op1;
        break;
        case 2:
            PC = func_5014329232_op2;
        break;
    }
}
void func_5014329648(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5014329648_op0;
        break;
        case 1:
            PC = func_5014329648_op1;
        break;
        case 2:
            PC = func_5014329648_op2;
        break;
        case 3:
            PC = func_5014329648_op3;
        break;
        case 4:
            PC = func_5014329648_op4;
        break;
        case 5:
            PC = func_5014329648_op5;
        break;
        case 6:
            PC = func_5014329648_op6;
        break;
        case 7:
            PC = func_5014329648_op7;
        break;
        case 8:
            PC = func_5014329648_op8;
        break;
        case 9:
            PC = func_5014329648_op9;
        break;
    }
}
void func_5014329744(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5014329744_op0;
        break;
        case 1:
            PC = func_5014329744_op1;
        break;
        case 2:
            PC = func_5014329744_op2;
        break;
    }
}
void func_5014329520(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5014329520_op0;
        break;
        case 1:
            PC = func_5014329520_op1;
        break;
        case 2:
            PC = func_5014329520_op2;
        break;
    }
}
void func_5014329440(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5014329440_op0;
        break;
    }
}
void func_5014330144(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5014330144_op0;
        break;
        case 1:
            PC = func_5014330144_op1;
        break;
        case 2:
            PC = func_5014330144_op2;
        break;
        case 3:
            PC = func_5014330144_op3;
        break;
        case 4:
            PC = func_5014330144_op4;
        break;
        case 5:
            PC = func_5014330144_op5;
        break;
        case 6:
            PC = func_5014330144_op6;
        break;
        case 7:
            PC = func_5014330144_op7;
        break;
        case 8:
            PC = func_5014330144_op8;
        break;
    }
}
void func_5014329360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5014329360_op0;
        break;
        case 1:
            PC = func_5014329360_op1;
        break;
    }
}
void func_5014329872(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5014329872_op0;
        break;
        case 1:
            PC = func_5014329872_op1;
        break;
    }
}
void func_5014330400(void) {
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
            PC = func_5014330400_op0;
        break;
    }
}
void func_5014330064(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5014330064_op0;
        break;
    }
}
void func_5014330336(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5014330336_op0;
        break;
    }
}
void func_5014330752(void) {
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
            PC = func_5014330752_op0;
        break;
        case 1:
            PC = func_5014330752_op1;
        break;
        case 2:
            PC = func_5014330752_op2;
        break;
        case 3:
            PC = func_5014330752_op3;
        break;
        case 4:
            PC = func_5014330752_op4;
        break;
    }
}
void func_5014331120(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5014331120_op0;
        break;
        case 1:
            PC = func_5014331120_op1;
        break;
        case 2:
            PC = func_5014331120_op2;
        break;
    }
}
void func_5014330960(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5014330960_op0;
        break;
    }
}
void func_5014330688(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5014330688;
}
void func_5014330880(void) {
    extend(61);
    NEXT();
}
void func_5014329936(void) {
    extend(59);
    NEXT();
}
void func_5014331984(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5014331984;
}
void func_5014332112(void) {
    extend(62);
    NEXT();
}
void func_5014332240(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5014332240;
}
void func_5014332368(void) {
    extend(60);
    NEXT();
}
void func_5014332496(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5014332496;
}
void func_5014332624(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5014333008(void) {
    extend(48);
    NEXT();
}
void func_5014330592(void) {
    extend(49);
    NEXT();
}
void func_5014333200(void) {
    extend(50);
    NEXT();
}
void func_5014333328(void) {
    extend(51);
    NEXT();
}
void func_5014333456(void) {
    extend(52);
    NEXT();
}
void func_5014333648(void) {
    extend(53);
    NEXT();
}
void func_5014333776(void) {
    extend(54);
    NEXT();
}
void func_5014333904(void) {
    extend(55);
    NEXT();
}
void func_5014334032(void) {
    extend(56);
    NEXT();
}
void func_5014333584(void) {
    extend(57);
    NEXT();
}
void func_5014334608(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5014334608;
}
void func_5014334736(void) {
    extend(43);
    NEXT();
}
void func_5014331776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5014331776;
}
void func_5014331904(void) {
    extend(45);
    NEXT();
}
void func_5014332912(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5014332912;
}
void func_5014335088(void) {
    extend(40);
    NEXT();
}
void func_5014335216(void) {
    extend(41);
    NEXT();
}
void func_5014332752(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5014332752;
}
void func_5014335984(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_5014336112(void) {
    extend(123);
    NEXT();
}
void func_5014331248(void) {
    extend(125);
    NEXT();
}
void func_5014335760(void) {
    extend(105);
    NEXT();
}
void func_5014336432(void) {
    extend(106);
    NEXT();
}
void func_5014336560(void) {
    extend(107);
    NEXT();
}
void func_5014336688(void) {
    extend(120);
    NEXT();
}
void func_5014336816(void) {
    extend(121);
    NEXT();
}
void func_5014337008(void) {
    extend(122);
    NEXT();
}
void func_5014337136(void) {
    extend(97);
    NEXT();
}
void func_5014337264(void) {
    extend(98);
    NEXT();
}
void func_5014337392(void) {
    extend(99);
    NEXT();
}
void func_5014336944(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5014336944;
}
void func_5014338160(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5014335408(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5014335408;
}
void func_5014337984(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5014335584(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5014335584;
}
void func_5014337648(void) {
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
    PC = exp_5014337648;
}
void func_5014337776(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5014338288(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5014338288;
}
void func_5014339136(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5014339136;
}
void func_5014339264(void) {
    extend(42);
    NEXT();
}
void func_5014338416(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5014338416;
}
void func_5014334096(void) {
    extend(47);
    NEXT();
}
void func_5014339072(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5014339072;
}
void func_5014334464(void) {
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
    PC =func_5014330336_op0;
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
