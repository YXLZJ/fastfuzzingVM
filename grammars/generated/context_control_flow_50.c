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
void func_5333095968(void);
void func_5333096336(void);
void func_5333096752(void);
void func_5333096848(void);
void func_5333096624(void);
void func_5333096544(void);
void func_5333097248(void);
void func_5333096464(void);
void func_5333096976(void);
void func_5333097504(void);
void func_5333097168(void);
void func_5333097440(void);
void func_5333097856(void);
void func_5333098224(void);
void func_5333098064(void);
void func_5333097792(void);
void func_5333097984(void);
void func_5333097040(void);
void func_5333099088(void);
void func_5333099216(void);
void func_5333099344(void);
void func_5333099472(void);
void func_5333099600(void);
void func_5333099728(void);
void func_5333100112(void);
void func_5333097696(void);
void func_5333100304(void);
void func_5333100432(void);
void func_5333100560(void);
void func_5333100752(void);
void func_5333100880(void);
void func_5333101008(void);
void func_5333101136(void);
void func_5333100688(void);
void func_5333101712(void);
void func_5333101840(void);
void func_5333098880(void);
void func_5333099008(void);
void func_5333100016(void);
void func_5333102192(void);
void func_5333102320(void);
void func_5333099856(void);
void func_5333103088(void);
void func_5333103216(void);
void func_5333098352(void);
void func_5333102864(void);
void func_5333103536(void);
void func_5333103664(void);
void func_5333103792(void);
void func_5333103920(void);
void func_5333104112(void);
void func_5333104240(void);
void func_5333104368(void);
void func_5333104496(void);
void func_5333104048(void);
void func_5333105264(void);
void func_5333102512(void);
void func_5333105088(void);
void func_5333102688(void);
void func_5333104752(void);
void func_5333104880(void);
void func_5333105392(void);
void func_5333106240(void);
void func_5333106368(void);
void func_5333105520(void);
void func_5333101200(void);
void func_5333106176(void);
void func_5333101568(void);
void HALT(void);
void RETURN(void);
Inst func_5333095968_op0[2] = {func_5333097792, RETURN};
Inst func_5333096336_op0[2] = {func_5333099088, RETURN};
Inst func_5333096336_op1[2] = {func_5333099344, RETURN};
Inst func_5333096336_op2[2] = {func_5333099600, RETURN};
Inst func_5333096752_op0[2] = {func_5333100112, RETURN};
Inst func_5333096752_op1[2] = {func_5333097696, RETURN};
Inst func_5333096752_op2[2] = {func_5333100304, RETURN};
Inst func_5333096752_op3[2] = {func_5333100432, RETURN};
Inst func_5333096752_op4[2] = {func_5333100560, RETURN};
Inst func_5333096752_op5[2] = {func_5333100752, RETURN};
Inst func_5333096752_op6[2] = {func_5333100880, RETURN};
Inst func_5333096752_op7[2] = {func_5333101008, RETURN};
Inst func_5333096752_op8[2] = {func_5333101136, RETURN};
Inst func_5333096752_op9[2] = {func_5333100688, RETURN};
Inst func_5333096848_op0[2] = {func_5333101712, RETURN};
Inst func_5333096848_op1[2] = {func_5333098880, RETURN};
Inst func_5333096848_op2[2] = {func_5333098224, RETURN};
Inst func_5333096624_op0[2] = {func_5333100016, RETURN};
Inst func_5333096624_op1[2] = {func_5333096976, RETURN};
Inst func_5333096624_op2[2] = {func_5333097248, RETURN};
Inst func_5333096544_op0[2] = {func_5333099856, RETURN};
Inst func_5333097248_op0[2] = {func_5333102864, RETURN};
Inst func_5333097248_op1[2] = {func_5333103536, RETURN};
Inst func_5333097248_op2[2] = {func_5333103664, RETURN};
Inst func_5333097248_op3[2] = {func_5333103792, RETURN};
Inst func_5333097248_op4[2] = {func_5333103920, RETURN};
Inst func_5333097248_op5[2] = {func_5333104112, RETURN};
Inst func_5333097248_op6[2] = {func_5333104240, RETURN};
Inst func_5333097248_op7[2] = {func_5333104368, RETURN};
Inst func_5333097248_op8[2] = {func_5333104496, RETURN};
Inst func_5333096464_op0[2] = {func_5333104048, RETURN};
Inst func_5333096464_op1[2] = {func_5333102512, RETURN};
Inst func_5333096976_op0[2] = {func_5333096752, RETURN};
Inst func_5333096976_op1[2] = {func_5333102688, RETURN};
Inst func_5333097504_op0[2] = {func_5333104752, RETURN};
Inst func_5333097168_op0[2] = {func_5333105392, RETURN};
Inst func_5333097440_op0[2] = {func_5333097168, HALT};
Inst func_5333097856_op0[2] = {func_5333096464, RETURN};
Inst func_5333097856_op1[2] = {func_5333098064, RETURN};
Inst func_5333097856_op2[2] = {func_5333096544, RETURN};
Inst func_5333097856_op3[2] = {func_5333095968, RETURN};
Inst func_5333097856_op4[2] = {func_5333097504, RETURN};
Inst func_5333098224_op0[2] = {func_5333106240, RETURN};
Inst func_5333098224_op1[2] = {func_5333105520, RETURN};
Inst func_5333098224_op2[2] = {func_5333096624, RETURN};
Inst func_5333098064_op0[2] = {func_5333106176, RETURN};
Inst exp_5333097792[5] = {func_5333097248, func_5333097984, func_5333096848, func_5333097040, RETURN};
Inst exp_5333099088[4] = {func_5333096848, func_5333099216, func_5333096848, RETURN};
Inst exp_5333099344[4] = {func_5333096848, func_5333099472, func_5333096848, RETURN};
Inst exp_5333099600[4] = {func_5333096848, func_5333099728, func_5333096848, RETURN};
Inst exp_5333101712[4] = {func_5333096848, func_5333101840, func_5333098224, RETURN};
Inst exp_5333098880[4] = {func_5333096848, func_5333099008, func_5333098224, RETURN};
Inst exp_5333100016[4] = {func_5333102192, func_5333096848, func_5333102320, RETURN};
Inst exp_5333099856[12] = {func_5333103088, func_5333102192, func_5333095968, func_5333097040, func_5333096336, func_5333097040, func_5333095968, func_5333102320, func_5333103216, func_5333097168, func_5333098352, RETURN};
Inst exp_5333104048[8] = {func_5333105264, func_5333102192, func_5333096336, func_5333102320, func_5333103216, func_5333097168, func_5333098352, RETURN};
Inst exp_5333102512[12] = {func_5333105264, func_5333102192, func_5333096336, func_5333102320, func_5333103216, func_5333097168, func_5333098352, func_5333105088, func_5333103216, func_5333097168, func_5333098352, RETURN};
Inst exp_5333102688[3] = {func_5333096752, func_5333096976, RETURN};
Inst exp_5333104752[6] = {func_5333104880, func_5333102192, func_5333096848, func_5333102320, func_5333097040, RETURN};
Inst exp_5333105392[3] = {func_5333097856, func_5333097168, RETURN};
Inst exp_5333106240[4] = {func_5333098224, func_5333106368, func_5333096624, RETURN};
Inst exp_5333105520[4] = {func_5333098224, func_5333101200, func_5333096624, RETURN};
Inst exp_5333106176[8] = {func_5333101568, func_5333102192, func_5333096336, func_5333102320, func_5333103216, func_5333097168, func_5333098352, RETURN};
void func_5333095968(void) {
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
            PC = func_5333095968_op0;
        break;
    }
}
void func_5333096336(void) {
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
            PC = func_5333096336_op0;
        break;
        case 1:
            PC = func_5333096336_op1;
        break;
        case 2:
            PC = func_5333096336_op2;
        break;
    }
}
void func_5333096752(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5333096752_op0;
        break;
        case 1:
            PC = func_5333096752_op1;
        break;
        case 2:
            PC = func_5333096752_op2;
        break;
        case 3:
            PC = func_5333096752_op3;
        break;
        case 4:
            PC = func_5333096752_op4;
        break;
        case 5:
            PC = func_5333096752_op5;
        break;
        case 6:
            PC = func_5333096752_op6;
        break;
        case 7:
            PC = func_5333096752_op7;
        break;
        case 8:
            PC = func_5333096752_op8;
        break;
        case 9:
            PC = func_5333096752_op9;
        break;
    }
}
void func_5333096848(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5333096848_op0;
        break;
        case 1:
            PC = func_5333096848_op1;
        break;
        case 2:
            PC = func_5333096848_op2;
        break;
    }
}
void func_5333096624(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5333096624_op0;
        break;
        case 1:
            PC = func_5333096624_op1;
        break;
        case 2:
            PC = func_5333096624_op2;
        break;
    }
}
void func_5333096544(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5333096544_op0;
        break;
    }
}
void func_5333097248(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5333097248_op0;
        break;
        case 1:
            PC = func_5333097248_op1;
        break;
        case 2:
            PC = func_5333097248_op2;
        break;
        case 3:
            PC = func_5333097248_op3;
        break;
        case 4:
            PC = func_5333097248_op4;
        break;
        case 5:
            PC = func_5333097248_op5;
        break;
        case 6:
            PC = func_5333097248_op6;
        break;
        case 7:
            PC = func_5333097248_op7;
        break;
        case 8:
            PC = func_5333097248_op8;
        break;
    }
}
void func_5333096464(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5333096464_op0;
        break;
        case 1:
            PC = func_5333096464_op1;
        break;
    }
}
void func_5333096976(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5333096976_op0;
        break;
        case 1:
            PC = func_5333096976_op1;
        break;
    }
}
void func_5333097504(void) {
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
            PC = func_5333097504_op0;
        break;
    }
}
void func_5333097168(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5333097168_op0;
        break;
    }
}
void func_5333097440(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5333097440_op0;
        break;
    }
}
void func_5333097856(void) {
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
            PC = func_5333097856_op0;
        break;
        case 1:
            PC = func_5333097856_op1;
        break;
        case 2:
            PC = func_5333097856_op2;
        break;
        case 3:
            PC = func_5333097856_op3;
        break;
        case 4:
            PC = func_5333097856_op4;
        break;
    }
}
void func_5333098224(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5333098224_op0;
        break;
        case 1:
            PC = func_5333098224_op1;
        break;
        case 2:
            PC = func_5333098224_op2;
        break;
    }
}
void func_5333098064(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5333098064_op0;
        break;
    }
}
void func_5333097792(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5333097792;
}
void func_5333097984(void) {
    extend(61);
    NEXT();
}
void func_5333097040(void) {
    extend(59);
    NEXT();
}
void func_5333099088(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5333099088;
}
void func_5333099216(void) {
    extend(62);
    NEXT();
}
void func_5333099344(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5333099344;
}
void func_5333099472(void) {
    extend(60);
    NEXT();
}
void func_5333099600(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5333099600;
}
void func_5333099728(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5333100112(void) {
    extend(48);
    NEXT();
}
void func_5333097696(void) {
    extend(49);
    NEXT();
}
void func_5333100304(void) {
    extend(50);
    NEXT();
}
void func_5333100432(void) {
    extend(51);
    NEXT();
}
void func_5333100560(void) {
    extend(52);
    NEXT();
}
void func_5333100752(void) {
    extend(53);
    NEXT();
}
void func_5333100880(void) {
    extend(54);
    NEXT();
}
void func_5333101008(void) {
    extend(55);
    NEXT();
}
void func_5333101136(void) {
    extend(56);
    NEXT();
}
void func_5333100688(void) {
    extend(57);
    NEXT();
}
void func_5333101712(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5333101712;
}
void func_5333101840(void) {
    extend(43);
    NEXT();
}
void func_5333098880(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5333098880;
}
void func_5333099008(void) {
    extend(45);
    NEXT();
}
void func_5333100016(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5333100016;
}
void func_5333102192(void) {
    extend(40);
    NEXT();
}
void func_5333102320(void) {
    extend(41);
    NEXT();
}
void func_5333099856(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5333099856;
}
void func_5333103088(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_5333103216(void) {
    extend(123);
    NEXT();
}
void func_5333098352(void) {
    extend(125);
    NEXT();
}
void func_5333102864(void) {
    extend(105);
    NEXT();
}
void func_5333103536(void) {
    extend(106);
    NEXT();
}
void func_5333103664(void) {
    extend(107);
    NEXT();
}
void func_5333103792(void) {
    extend(120);
    NEXT();
}
void func_5333103920(void) {
    extend(121);
    NEXT();
}
void func_5333104112(void) {
    extend(122);
    NEXT();
}
void func_5333104240(void) {
    extend(97);
    NEXT();
}
void func_5333104368(void) {
    extend(98);
    NEXT();
}
void func_5333104496(void) {
    extend(99);
    NEXT();
}
void func_5333104048(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5333104048;
}
void func_5333105264(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5333102512(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5333102512;
}
void func_5333105088(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5333102688(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5333102688;
}
void func_5333104752(void) {
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
    PC = exp_5333104752;
}
void func_5333104880(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5333105392(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5333105392;
}
void func_5333106240(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5333106240;
}
void func_5333106368(void) {
    extend(42);
    NEXT();
}
void func_5333105520(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5333105520;
}
void func_5333101200(void) {
    extend(47);
    NEXT();
}
void func_5333106176(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5333106176;
}
void func_5333101568(void) {
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
    PC =func_5333097440_op0;
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
