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
void func_5349857904(void);
void func_5349868112(void);
void func_5349868416(void);
void func_5349868768(void);
void func_5349868480(void);
void func_5349868032(void);
void func_5349867904(void);
void func_5349869232(void);
void func_5349868272(void);
void func_5349868896(void);
void func_5349869024(void);
void func_5349869152(void);
void func_5349869648(void);
void func_5349869776(void);
void func_5349869936(void);
void func_5349870144(void);
void func_5349870272(void);
void func_5349870656(void);
void func_5349869520(void);
void func_5349871008(void);
void func_5349868336(void);
void func_5349871200(void);
void func_5349871328(void);
void func_5349871456(void);
void func_5349871920(void);
void func_5349870064(void);
void func_5349872112(void);
void func_5349872272(void);
void func_5349872400(void);
void func_5349872592(void);
void func_5349872720(void);
void func_5349872848(void);
void func_5349872976(void);
void func_5349872528(void);
void func_5349870784(void);
void func_5349869408(void);
void func_5349873616(void);
void func_5349873744(void);
void func_5349874128(void);
void func_5349874256(void);
void func_5349874384(void);
void func_5349874544(void);
void func_5349874672(void);
void func_5349874864(void);
void func_5349874992(void);
void func_5349875120(void);
void func_5349875248(void);
void func_5349874800(void);
void func_5349874016(void);
void func_5349871648(void);
void func_5349871776(void);
void func_5349873936(void);
void func_5349875760(void);
void HALT(void);
void RETURN(void);
Inst func_5349857904_op0[2] = {func_5349869152, RETURN};
Inst func_5349857904_op1[2] = {func_5349869648, RETURN};
Inst func_5349857904_op2[2] = {func_5349869776, RETURN};
Inst func_5349857904_op3[2] = {func_5349869936, RETURN};
Inst func_5349868112_op0[2] = {func_5349870144, RETURN};
Inst func_5349868112_op1[2] = {func_5349870272, RETURN};
Inst func_5349868416_op0[2] = {func_5349869520, RETURN};
Inst func_5349868416_op1[2] = {func_5349868336, RETURN};
Inst func_5349868416_op2[2] = {func_5349871328, RETURN};
Inst func_5349868768_op0[2] = {func_5349871920, RETURN};
Inst func_5349868768_op1[2] = {func_5349870064, RETURN};
Inst func_5349868768_op2[2] = {func_5349872112, RETURN};
Inst func_5349868768_op3[2] = {func_5349872272, RETURN};
Inst func_5349868768_op4[2] = {func_5349872400, RETURN};
Inst func_5349868768_op5[2] = {func_5349872592, RETURN};
Inst func_5349868768_op6[2] = {func_5349872720, RETURN};
Inst func_5349868768_op7[2] = {func_5349872848, RETURN};
Inst func_5349868768_op8[2] = {func_5349872976, RETURN};
Inst func_5349868768_op9[2] = {func_5349872528, RETURN};
Inst func_5349868480_op0[2] = {func_5349868768, RETURN};
Inst func_5349868480_op1[2] = {func_5349870784, RETURN};
Inst func_5349868032_op0[2] = {func_5349869408, RETURN};
Inst func_5349867904_op0[2] = {func_5349868032, HALT};
Inst func_5349869232_op0[2] = {func_5349874128, RETURN};
Inst func_5349869232_op1[2] = {func_5349874256, RETURN};
Inst func_5349869232_op2[2] = {func_5349874384, RETURN};
Inst func_5349869232_op3[2] = {func_5349874544, RETURN};
Inst func_5349869232_op4[2] = {func_5349874672, RETURN};
Inst func_5349869232_op5[2] = {func_5349874864, RETURN};
Inst func_5349869232_op6[2] = {func_5349874992, RETURN};
Inst func_5349869232_op7[2] = {func_5349875120, RETURN};
Inst func_5349869232_op8[2] = {func_5349875248, RETURN};
Inst func_5349869232_op9[2] = {func_5349874800, RETURN};
Inst func_5349868272_op0[2] = {func_5349874016, RETURN};
Inst func_5349868272_op1[2] = {func_5349871648, RETURN};
Inst func_5349868272_op2[2] = {func_5349871776, RETURN};
Inst func_5349868896_op0[2] = {func_5349868480, RETURN};
Inst func_5349868896_op1[2] = {func_5349869232, RETURN};
Inst func_5349869024_op0[2] = {func_5349873936, RETURN};
Inst exp_5349870272[4] = {func_5349857904, func_5349870656, func_5349868112, RETURN};
Inst exp_5349869520[4] = {func_5349857904, func_5349871008, func_5349868896, RETURN};
Inst exp_5349868336[4] = {func_5349868416, func_5349871200, func_5349868416, RETURN};
Inst exp_5349871328[4] = {func_5349868416, func_5349871456, func_5349868416, RETURN};
Inst exp_5349870784[3] = {func_5349868768, func_5349868480, RETURN};
Inst exp_5349869408[6] = {func_5349873616, func_5349868112, func_5349873744, func_5349868272, func_5349869024, RETURN};
Inst exp_5349873936[3] = {func_5349875760, func_5349868416, RETURN};
void func_5349857904(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        NEXT();
        return;
    }
    xor(4);
    store();
    switch (branch) {
        case 0:
            PC = func_5349857904_op0;
        break;
        case 1:
            PC = func_5349857904_op1;
        break;
        case 2:
            PC = func_5349857904_op2;
        break;
        case 3:
            PC = func_5349857904_op3;
        break;
    }
}
void func_5349868112(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5349868112_op0;
        break;
        case 1:
            PC = func_5349868112_op1;
        break;
    }
}
void func_5349868416(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5349868416_op0;
        break;
        case 1:
            PC = func_5349868416_op1;
        break;
        case 2:
            PC = func_5349868416_op2;
        break;
    }
}
void func_5349868768(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5349868768_op0;
        break;
        case 1:
            PC = func_5349868768_op1;
        break;
        case 2:
            PC = func_5349868768_op2;
        break;
        case 3:
            PC = func_5349868768_op3;
        break;
        case 4:
            PC = func_5349868768_op4;
        break;
        case 5:
            PC = func_5349868768_op5;
        break;
        case 6:
            PC = func_5349868768_op6;
        break;
        case 7:
            PC = func_5349868768_op7;
        break;
        case 8:
            PC = func_5349868768_op8;
        break;
        case 9:
            PC = func_5349868768_op9;
        break;
    }
}
void func_5349868480(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5349868480_op0;
        break;
        case 1:
            PC = func_5349868480_op1;
        break;
    }
}
void func_5349868032(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5349868032_op0;
        break;
    }
}
void func_5349867904(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5349867904_op0;
        break;
    }
}
void func_5349869232(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5349869232_op0;
        break;
        case 1:
            PC = func_5349869232_op1;
        break;
        case 2:
            PC = func_5349869232_op2;
        break;
        case 3:
            PC = func_5349869232_op3;
        break;
        case 4:
            PC = func_5349869232_op4;
        break;
        case 5:
            PC = func_5349869232_op5;
        break;
        case 6:
            PC = func_5349869232_op6;
        break;
        case 7:
            PC = func_5349869232_op7;
        break;
        case 8:
            PC = func_5349869232_op8;
        break;
        case 9:
            PC = func_5349869232_op9;
        break;
    }
}
void func_5349868272(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5349868272_op0;
        break;
        case 1:
            PC = func_5349868272_op1;
        break;
        case 2:
            PC = func_5349868272_op2;
        break;
    }
}
void func_5349868896(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5349868896_op0;
        break;
        case 1:
            PC = func_5349868896_op1;
        break;
    }
}
void func_5349869024(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5349869024_op0;
        break;
    }
}
void func_5349869152(void) {
    extend(105);
    extend(100);
    NEXT();
}
void func_5349869648(void) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
}
void func_5349869776(void) {
    extend(97);
    extend(103);
    extend(101);
    NEXT();
}
void func_5349869936(void) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
}
void func_5349870144(void) {
    extend(42);
    NEXT();
}
void func_5349870272(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(44);
        extend(42);
        NEXT();
        return;
    }
    store();
    PC = exp_5349870272;
}
void func_5349870656(void) {
    extend(44);
    NEXT();
}
void func_5349869520(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5349869520;
}
void func_5349871008(void) {
    extend(61);
    NEXT();
}
void func_5349868336(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(65);
        extend(78);
        extend(68);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5349868336;
}
void func_5349871200(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_5349871328(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(79);
        extend(82);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5349871328;
}
void func_5349871456(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_5349871920(void) {
    extend(48);
    NEXT();
}
void func_5349870064(void) {
    extend(49);
    NEXT();
}
void func_5349872112(void) {
    extend(50);
    NEXT();
}
void func_5349872272(void) {
    extend(51);
    NEXT();
}
void func_5349872400(void) {
    extend(52);
    NEXT();
}
void func_5349872592(void) {
    extend(53);
    NEXT();
}
void func_5349872720(void) {
    extend(54);
    NEXT();
}
void func_5349872848(void) {
    extend(55);
    NEXT();
}
void func_5349872976(void) {
    extend(56);
    NEXT();
}
void func_5349872528(void) {
    extend(57);
    NEXT();
}
void func_5349870784(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5349870784;
}
void func_5349869408(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5349869408;
}
void func_5349873616(void) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
}
void func_5349873744(void) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
}
void func_5349874128(void) {
    extend(97);
    NEXT();
}
void func_5349874256(void) {
    extend(98);
    NEXT();
}
void func_5349874384(void) {
    extend(99);
    NEXT();
}
void func_5349874544(void) {
    extend(100);
    NEXT();
}
void func_5349874672(void) {
    extend(101);
    NEXT();
}
void func_5349874864(void) {
    extend(102);
    NEXT();
}
void func_5349874992(void) {
    extend(103);
    NEXT();
}
void func_5349875120(void) {
    extend(104);
    NEXT();
}
void func_5349875248(void) {
    extend(105);
    NEXT();
}
void func_5349874800(void) {
    extend(106);
    NEXT();
}
void func_5349874016(void) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_5349871648(void) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_5349871776(void) {
    extend(112);
    extend(114);
    extend(111);
    extend(100);
    extend(117);
    extend(99);
    extend(116);
    extend(115);
    NEXT();
}
void func_5349873936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5349873936;
}
void func_5349875760(void) {
    extend(87);
    extend(72);
    extend(69);
    extend(82);
    extend(69);
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
    PC =func_5349867904_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 7;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
