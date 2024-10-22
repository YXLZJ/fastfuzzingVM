#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 50
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
void func_5760914976(void);
void func_5760915344(void);
void func_5760915760(void);
void func_5760915856(void);
void func_5760915632(void);
void func_5760915552(void);
void func_5760916256(void);
void func_5760915472(void);
void func_5760915984(void);
void func_5760916512(void);
void func_5760916176(void);
void func_5760916448(void);
void func_5760916864(void);
void func_5760917232(void);
void func_5760917072(void);
void func_5760916800(void);
void func_5760916992(void);
void func_5760916048(void);
void func_5760918096(void);
void func_5760918224(void);
void func_5760918352(void);
void func_5760918480(void);
void func_5760918608(void);
void func_5760918736(void);
void func_5760919120(void);
void func_5760916704(void);
void func_5760919312(void);
void func_5760919440(void);
void func_5760919568(void);
void func_5760919760(void);
void func_5760919888(void);
void func_5760920016(void);
void func_5760920144(void);
void func_5760919696(void);
void func_5760920720(void);
void func_5760920848(void);
void func_5760917888(void);
void func_5760918016(void);
void func_5760919024(void);
void func_5760921200(void);
void func_5760921328(void);
void func_5760918864(void);
void func_5760922096(void);
void func_5760922224(void);
void func_5760917360(void);
void func_5760921872(void);
void func_5760922544(void);
void func_5760922672(void);
void func_5760922800(void);
void func_5760922928(void);
void func_5760923120(void);
void func_5760923248(void);
void func_5760923376(void);
void func_5760923504(void);
void func_5760923056(void);
void func_5760924272(void);
void func_5760921520(void);
void func_5760924096(void);
void func_5760921696(void);
void func_5760923760(void);
void func_5760923888(void);
void func_5760924400(void);
void func_5760925248(void);
void func_5760925376(void);
void func_5760924528(void);
void func_5760920208(void);
void func_5760925184(void);
void func_5760920576(void);
void HALT(void);
void RETURN(void);
Inst func_5760914976_op0[2] = {func_5760916800, RETURN};
Inst func_5760915344_op0[2] = {func_5760918096, RETURN};
Inst func_5760915344_op1[2] = {func_5760918352, RETURN};
Inst func_5760915344_op2[2] = {func_5760918608, RETURN};
Inst func_5760915760_op0[2] = {func_5760919120, RETURN};
Inst func_5760915760_op1[2] = {func_5760916704, RETURN};
Inst func_5760915760_op2[2] = {func_5760919312, RETURN};
Inst func_5760915760_op3[2] = {func_5760919440, RETURN};
Inst func_5760915760_op4[2] = {func_5760919568, RETURN};
Inst func_5760915760_op5[2] = {func_5760919760, RETURN};
Inst func_5760915760_op6[2] = {func_5760919888, RETURN};
Inst func_5760915760_op7[2] = {func_5760920016, RETURN};
Inst func_5760915760_op8[2] = {func_5760920144, RETURN};
Inst func_5760915760_op9[2] = {func_5760919696, RETURN};
Inst func_5760915856_op0[2] = {func_5760920720, RETURN};
Inst func_5760915856_op1[2] = {func_5760917888, RETURN};
Inst func_5760915856_op2[2] = {func_5760917232, RETURN};
Inst func_5760915632_op0[2] = {func_5760919024, RETURN};
Inst func_5760915632_op1[2] = {func_5760915984, RETURN};
Inst func_5760915632_op2[2] = {func_5760916256, RETURN};
Inst func_5760915552_op0[2] = {func_5760918864, RETURN};
Inst func_5760916256_op0[2] = {func_5760921872, RETURN};
Inst func_5760916256_op1[2] = {func_5760922544, RETURN};
Inst func_5760916256_op2[2] = {func_5760922672, RETURN};
Inst func_5760916256_op3[2] = {func_5760922800, RETURN};
Inst func_5760916256_op4[2] = {func_5760922928, RETURN};
Inst func_5760916256_op5[2] = {func_5760923120, RETURN};
Inst func_5760916256_op6[2] = {func_5760923248, RETURN};
Inst func_5760916256_op7[2] = {func_5760923376, RETURN};
Inst func_5760916256_op8[2] = {func_5760923504, RETURN};
Inst func_5760915472_op0[2] = {func_5760923056, RETURN};
Inst func_5760915472_op1[2] = {func_5760921520, RETURN};
Inst func_5760915984_op0[2] = {func_5760915760, RETURN};
Inst func_5760915984_op1[2] = {func_5760921696, RETURN};
Inst func_5760916512_op0[2] = {func_5760923760, RETURN};
Inst func_5760916176_op0[2] = {func_5760924400, RETURN};
Inst func_5760916448_op0[2] = {func_5760916176, HALT};
Inst func_5760916864_op0[2] = {func_5760915472, RETURN};
Inst func_5760916864_op1[2] = {func_5760917072, RETURN};
Inst func_5760916864_op2[2] = {func_5760915552, RETURN};
Inst func_5760916864_op3[2] = {func_5760914976, RETURN};
Inst func_5760916864_op4[2] = {func_5760916512, RETURN};
Inst func_5760917232_op0[2] = {func_5760925248, RETURN};
Inst func_5760917232_op1[2] = {func_5760924528, RETURN};
Inst func_5760917232_op2[2] = {func_5760915632, RETURN};
Inst func_5760917072_op0[2] = {func_5760925184, RETURN};
Inst exp_5760916800[5] = {func_5760916256, func_5760916992, func_5760915856, func_5760916048, RETURN};
Inst exp_5760918096[4] = {func_5760915856, func_5760918224, func_5760915856, RETURN};
Inst exp_5760918352[4] = {func_5760915856, func_5760918480, func_5760915856, RETURN};
Inst exp_5760918608[4] = {func_5760915856, func_5760918736, func_5760915856, RETURN};
Inst exp_5760920720[4] = {func_5760915856, func_5760920848, func_5760917232, RETURN};
Inst exp_5760917888[4] = {func_5760915856, func_5760918016, func_5760917232, RETURN};
Inst exp_5760919024[4] = {func_5760921200, func_5760915856, func_5760921328, RETURN};
Inst exp_5760918864[12] = {func_5760922096, func_5760921200, func_5760914976, func_5760916048, func_5760915344, func_5760916048, func_5760914976, func_5760921328, func_5760922224, func_5760916176, func_5760917360, RETURN};
Inst exp_5760923056[8] = {func_5760924272, func_5760921200, func_5760915344, func_5760921328, func_5760922224, func_5760916176, func_5760917360, RETURN};
Inst exp_5760921520[12] = {func_5760924272, func_5760921200, func_5760915344, func_5760921328, func_5760922224, func_5760916176, func_5760917360, func_5760924096, func_5760922224, func_5760916176, func_5760917360, RETURN};
Inst exp_5760921696[3] = {func_5760915760, func_5760915984, RETURN};
Inst exp_5760923760[6] = {func_5760923888, func_5760921200, func_5760915856, func_5760921328, func_5760916048, RETURN};
Inst exp_5760924400[3] = {func_5760916864, func_5760916176, RETURN};
Inst exp_5760925248[4] = {func_5760917232, func_5760925376, func_5760915632, RETURN};
Inst exp_5760924528[4] = {func_5760917232, func_5760920208, func_5760915632, RETURN};
Inst exp_5760925184[8] = {func_5760920576, func_5760921200, func_5760915344, func_5760921328, func_5760922224, func_5760916176, func_5760917360, RETURN};
void func_5760914976(void) {
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
            PC = func_5760914976_op0;
        break;
    }
}
void func_5760915344(void) {
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
            PC = func_5760915344_op0;
        break;
        case 1:
            PC = func_5760915344_op1;
        break;
        case 2:
            PC = func_5760915344_op2;
        break;
    }
}
void func_5760915760(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5760915760_op0;
        break;
        case 1:
            PC = func_5760915760_op1;
        break;
        case 2:
            PC = func_5760915760_op2;
        break;
        case 3:
            PC = func_5760915760_op3;
        break;
        case 4:
            PC = func_5760915760_op4;
        break;
        case 5:
            PC = func_5760915760_op5;
        break;
        case 6:
            PC = func_5760915760_op6;
        break;
        case 7:
            PC = func_5760915760_op7;
        break;
        case 8:
            PC = func_5760915760_op8;
        break;
        case 9:
            PC = func_5760915760_op9;
        break;
    }
}
void func_5760915856(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5760915856_op0;
        break;
        case 1:
            PC = func_5760915856_op1;
        break;
        case 2:
            PC = func_5760915856_op2;
        break;
    }
}
void func_5760915632(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5760915632_op0;
        break;
        case 1:
            PC = func_5760915632_op1;
        break;
        case 2:
            PC = func_5760915632_op2;
        break;
    }
}
void func_5760915552(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5760915552_op0;
        break;
    }
}
void func_5760916256(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5760916256_op0;
        break;
        case 1:
            PC = func_5760916256_op1;
        break;
        case 2:
            PC = func_5760916256_op2;
        break;
        case 3:
            PC = func_5760916256_op3;
        break;
        case 4:
            PC = func_5760916256_op4;
        break;
        case 5:
            PC = func_5760916256_op5;
        break;
        case 6:
            PC = func_5760916256_op6;
        break;
        case 7:
            PC = func_5760916256_op7;
        break;
        case 8:
            PC = func_5760916256_op8;
        break;
    }
}
void func_5760915472(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5760915472_op0;
        break;
        case 1:
            PC = func_5760915472_op1;
        break;
    }
}
void func_5760915984(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5760915984_op0;
        break;
        case 1:
            PC = func_5760915984_op1;
        break;
    }
}
void func_5760916512(void) {
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
            PC = func_5760916512_op0;
        break;
    }
}
void func_5760916176(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5760916176_op0;
        break;
    }
}
void func_5760916448(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5760916448_op0;
        break;
    }
}
void func_5760916864(void) {
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
            PC = func_5760916864_op0;
        break;
        case 1:
            PC = func_5760916864_op1;
        break;
        case 2:
            PC = func_5760916864_op2;
        break;
        case 3:
            PC = func_5760916864_op3;
        break;
        case 4:
            PC = func_5760916864_op4;
        break;
    }
}
void func_5760917232(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5760917232_op0;
        break;
        case 1:
            PC = func_5760917232_op1;
        break;
        case 2:
            PC = func_5760917232_op2;
        break;
    }
}
void func_5760917072(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5760917072_op0;
        break;
    }
}
void func_5760916800(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5760916800;
}
void func_5760916992(void) {
    extend(61);
    NEXT();
}
void func_5760916048(void) {
    extend(59);
    NEXT();
}
void func_5760918096(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5760918096;
}
void func_5760918224(void) {
    extend(62);
    NEXT();
}
void func_5760918352(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5760918352;
}
void func_5760918480(void) {
    extend(60);
    NEXT();
}
void func_5760918608(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5760918608;
}
void func_5760918736(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5760919120(void) {
    extend(48);
    NEXT();
}
void func_5760916704(void) {
    extend(49);
    NEXT();
}
void func_5760919312(void) {
    extend(50);
    NEXT();
}
void func_5760919440(void) {
    extend(51);
    NEXT();
}
void func_5760919568(void) {
    extend(52);
    NEXT();
}
void func_5760919760(void) {
    extend(53);
    NEXT();
}
void func_5760919888(void) {
    extend(54);
    NEXT();
}
void func_5760920016(void) {
    extend(55);
    NEXT();
}
void func_5760920144(void) {
    extend(56);
    NEXT();
}
void func_5760919696(void) {
    extend(57);
    NEXT();
}
void func_5760920720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5760920720;
}
void func_5760920848(void) {
    extend(43);
    NEXT();
}
void func_5760917888(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5760917888;
}
void func_5760918016(void) {
    extend(45);
    NEXT();
}
void func_5760919024(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5760919024;
}
void func_5760921200(void) {
    extend(40);
    NEXT();
}
void func_5760921328(void) {
    extend(41);
    NEXT();
}
void func_5760918864(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5760918864;
}
void func_5760922096(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_5760922224(void) {
    extend(123);
    NEXT();
}
void func_5760917360(void) {
    extend(125);
    NEXT();
}
void func_5760921872(void) {
    extend(105);
    NEXT();
}
void func_5760922544(void) {
    extend(106);
    NEXT();
}
void func_5760922672(void) {
    extend(107);
    NEXT();
}
void func_5760922800(void) {
    extend(120);
    NEXT();
}
void func_5760922928(void) {
    extend(121);
    NEXT();
}
void func_5760923120(void) {
    extend(122);
    NEXT();
}
void func_5760923248(void) {
    extend(97);
    NEXT();
}
void func_5760923376(void) {
    extend(98);
    NEXT();
}
void func_5760923504(void) {
    extend(99);
    NEXT();
}
void func_5760923056(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5760923056;
}
void func_5760924272(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5760921520(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5760921520;
}
void func_5760924096(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5760921696(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5760921696;
}
void func_5760923760(void) {
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
    PC = exp_5760923760;
}
void func_5760923888(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5760924400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5760924400;
}
void func_5760925248(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5760925248;
}
void func_5760925376(void) {
    extend(42);
    NEXT();
}
void func_5760924528(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5760924528;
}
void func_5760920208(void) {
    extend(47);
    NEXT();
}
void func_5760925184(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5760925184;
}
void func_5760920576(void) {
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
    PC =func_5760916448_op0;
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
