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
void func_5828008560(void);
void func_5828018768(void);
void func_5828019072(void);
void func_5828019424(void);
void func_5828019136(void);
void func_5828018688(void);
void func_5828018560(void);
void func_5828019888(void);
void func_5828018928(void);
void func_5828019552(void);
void func_5828019680(void);
void func_5828019808(void);
void func_5828020304(void);
void func_5828020432(void);
void func_5828020592(void);
void func_5828020800(void);
void func_5828020928(void);
void func_5828021312(void);
void func_5828020176(void);
void func_5828021664(void);
void func_5828018992(void);
void func_5828021856(void);
void func_5828021984(void);
void func_5828022112(void);
void func_5828022576(void);
void func_5828020720(void);
void func_5828022768(void);
void func_5828022928(void);
void func_5828023056(void);
void func_5828023248(void);
void func_5828023376(void);
void func_5828023504(void);
void func_5828023632(void);
void func_5828023184(void);
void func_5828021440(void);
void func_5828020064(void);
void func_5828024272(void);
void func_5828024400(void);
void func_5828024784(void);
void func_5828024912(void);
void func_5828025040(void);
void func_5828025200(void);
void func_5828025328(void);
void func_5828025520(void);
void func_5828025648(void);
void func_5828025776(void);
void func_5828025904(void);
void func_5828025456(void);
void func_5828024672(void);
void func_5828022304(void);
void func_5828022432(void);
void func_5828024592(void);
void func_5828026416(void);
void HALT(void);
void RETURN(void);
Inst func_5828008560_op0[2] = {func_5828019808, RETURN};
Inst func_5828008560_op1[2] = {func_5828020304, RETURN};
Inst func_5828008560_op2[2] = {func_5828020432, RETURN};
Inst func_5828008560_op3[2] = {func_5828020592, RETURN};
Inst func_5828018768_op0[2] = {func_5828020800, RETURN};
Inst func_5828018768_op1[2] = {func_5828020928, RETURN};
Inst func_5828019072_op0[2] = {func_5828020176, RETURN};
Inst func_5828019072_op1[2] = {func_5828018992, RETURN};
Inst func_5828019072_op2[2] = {func_5828021984, RETURN};
Inst func_5828019424_op0[2] = {func_5828022576, RETURN};
Inst func_5828019424_op1[2] = {func_5828020720, RETURN};
Inst func_5828019424_op2[2] = {func_5828022768, RETURN};
Inst func_5828019424_op3[2] = {func_5828022928, RETURN};
Inst func_5828019424_op4[2] = {func_5828023056, RETURN};
Inst func_5828019424_op5[2] = {func_5828023248, RETURN};
Inst func_5828019424_op6[2] = {func_5828023376, RETURN};
Inst func_5828019424_op7[2] = {func_5828023504, RETURN};
Inst func_5828019424_op8[2] = {func_5828023632, RETURN};
Inst func_5828019424_op9[2] = {func_5828023184, RETURN};
Inst func_5828019136_op0[2] = {func_5828019424, RETURN};
Inst func_5828019136_op1[2] = {func_5828021440, RETURN};
Inst func_5828018688_op0[2] = {func_5828020064, RETURN};
Inst func_5828018560_op0[2] = {func_5828018688, HALT};
Inst func_5828019888_op0[2] = {func_5828024784, RETURN};
Inst func_5828019888_op1[2] = {func_5828024912, RETURN};
Inst func_5828019888_op2[2] = {func_5828025040, RETURN};
Inst func_5828019888_op3[2] = {func_5828025200, RETURN};
Inst func_5828019888_op4[2] = {func_5828025328, RETURN};
Inst func_5828019888_op5[2] = {func_5828025520, RETURN};
Inst func_5828019888_op6[2] = {func_5828025648, RETURN};
Inst func_5828019888_op7[2] = {func_5828025776, RETURN};
Inst func_5828019888_op8[2] = {func_5828025904, RETURN};
Inst func_5828019888_op9[2] = {func_5828025456, RETURN};
Inst func_5828018928_op0[2] = {func_5828024672, RETURN};
Inst func_5828018928_op1[2] = {func_5828022304, RETURN};
Inst func_5828018928_op2[2] = {func_5828022432, RETURN};
Inst func_5828019552_op0[2] = {func_5828019136, RETURN};
Inst func_5828019552_op1[2] = {func_5828019888, RETURN};
Inst func_5828019680_op0[2] = {func_5828024592, RETURN};
Inst exp_5828020928[4] = {func_5828008560, func_5828021312, func_5828018768, RETURN};
Inst exp_5828020176[4] = {func_5828008560, func_5828021664, func_5828019552, RETURN};
Inst exp_5828018992[4] = {func_5828019072, func_5828021856, func_5828019072, RETURN};
Inst exp_5828021984[4] = {func_5828019072, func_5828022112, func_5828019072, RETURN};
Inst exp_5828021440[3] = {func_5828019424, func_5828019136, RETURN};
Inst exp_5828020064[6] = {func_5828024272, func_5828018768, func_5828024400, func_5828018928, func_5828019680, RETURN};
Inst exp_5828024592[3] = {func_5828026416, func_5828019072, RETURN};
void func_5828008560(void) {
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
            PC = func_5828008560_op0;
        break;
        case 1:
            PC = func_5828008560_op1;
        break;
        case 2:
            PC = func_5828008560_op2;
        break;
        case 3:
            PC = func_5828008560_op3;
        break;
    }
}
void func_5828018768(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5828018768_op0;
        break;
        case 1:
            PC = func_5828018768_op1;
        break;
    }
}
void func_5828019072(void) {
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
            PC = func_5828019072_op0;
        break;
        case 1:
            PC = func_5828019072_op1;
        break;
        case 2:
            PC = func_5828019072_op2;
        break;
    }
}
void func_5828019424(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5828019424_op0;
        break;
        case 1:
            PC = func_5828019424_op1;
        break;
        case 2:
            PC = func_5828019424_op2;
        break;
        case 3:
            PC = func_5828019424_op3;
        break;
        case 4:
            PC = func_5828019424_op4;
        break;
        case 5:
            PC = func_5828019424_op5;
        break;
        case 6:
            PC = func_5828019424_op6;
        break;
        case 7:
            PC = func_5828019424_op7;
        break;
        case 8:
            PC = func_5828019424_op8;
        break;
        case 9:
            PC = func_5828019424_op9;
        break;
    }
}
void func_5828019136(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5828019136_op0;
        break;
        case 1:
            PC = func_5828019136_op1;
        break;
    }
}
void func_5828018688(void) {
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
            PC = func_5828018688_op0;
        break;
    }
}
void func_5828018560(void) {
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
            PC = func_5828018560_op0;
        break;
    }
}
void func_5828019888(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5828019888_op0;
        break;
        case 1:
            PC = func_5828019888_op1;
        break;
        case 2:
            PC = func_5828019888_op2;
        break;
        case 3:
            PC = func_5828019888_op3;
        break;
        case 4:
            PC = func_5828019888_op4;
        break;
        case 5:
            PC = func_5828019888_op5;
        break;
        case 6:
            PC = func_5828019888_op6;
        break;
        case 7:
            PC = func_5828019888_op7;
        break;
        case 8:
            PC = func_5828019888_op8;
        break;
        case 9:
            PC = func_5828019888_op9;
        break;
    }
}
void func_5828018928(void) {
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
            PC = func_5828018928_op0;
        break;
        case 1:
            PC = func_5828018928_op1;
        break;
        case 2:
            PC = func_5828018928_op2;
        break;
    }
}
void func_5828019552(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5828019552_op0;
        break;
        case 1:
            PC = func_5828019552_op1;
        break;
    }
}
void func_5828019680(void) {
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
            PC = func_5828019680_op0;
        break;
    }
}
void func_5828019808(void) {
    extend(105);
    extend(100);
    NEXT();
}
void func_5828020304(void) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
}
void func_5828020432(void) {
    extend(97);
    extend(103);
    extend(101);
    NEXT();
}
void func_5828020592(void) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
}
void func_5828020800(void) {
    extend(42);
    NEXT();
}
void func_5828020928(void) {
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
    PC = exp_5828020928;
}
void func_5828021312(void) {
    extend(44);
    NEXT();
}
void func_5828020176(void) {
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
    PC = exp_5828020176;
}
void func_5828021664(void) {
    extend(61);
    NEXT();
}
void func_5828018992(void) {
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
    PC = exp_5828018992;
}
void func_5828021856(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_5828021984(void) {
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
    PC = exp_5828021984;
}
void func_5828022112(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_5828022576(void) {
    extend(48);
    NEXT();
}
void func_5828020720(void) {
    extend(49);
    NEXT();
}
void func_5828022768(void) {
    extend(50);
    NEXT();
}
void func_5828022928(void) {
    extend(51);
    NEXT();
}
void func_5828023056(void) {
    extend(52);
    NEXT();
}
void func_5828023248(void) {
    extend(53);
    NEXT();
}
void func_5828023376(void) {
    extend(54);
    NEXT();
}
void func_5828023504(void) {
    extend(55);
    NEXT();
}
void func_5828023632(void) {
    extend(56);
    NEXT();
}
void func_5828023184(void) {
    extend(57);
    NEXT();
}
void func_5828021440(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5828021440;
}
void func_5828020064(void) {
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
    PC = exp_5828020064;
}
void func_5828024272(void) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
}
void func_5828024400(void) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
}
void func_5828024784(void) {
    extend(97);
    NEXT();
}
void func_5828024912(void) {
    extend(98);
    NEXT();
}
void func_5828025040(void) {
    extend(99);
    NEXT();
}
void func_5828025200(void) {
    extend(100);
    NEXT();
}
void func_5828025328(void) {
    extend(101);
    NEXT();
}
void func_5828025520(void) {
    extend(102);
    NEXT();
}
void func_5828025648(void) {
    extend(103);
    NEXT();
}
void func_5828025776(void) {
    extend(104);
    NEXT();
}
void func_5828025904(void) {
    extend(105);
    NEXT();
}
void func_5828025456(void) {
    extend(106);
    NEXT();
}
void func_5828024672(void) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_5828022304(void) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_5828022432(void) {
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
void func_5828024592(void) {
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
    PC = exp_5828024592;
}
void func_5828026416(void) {
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
    PC =func_5828018560_op0;
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
