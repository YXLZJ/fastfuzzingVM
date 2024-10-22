#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 45
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
void func_5408580320(void);
void func_5408589760(void);
void func_5408589680(void);
void func_5408589600(void);
void func_5408590224(void);
void func_5408589328(void);
void func_5408590752(void);
void func_5408589520(void);
void func_5408590048(void);
void func_5408590112(void);
void func_5408590992(void);
void func_5408591120(void);
void func_5408591344(void);
void func_5408591472(void);
void func_5408591600(void);
void func_5408591968(void);
void func_5408592096(void);
void func_5408590416(void);
void func_5408592480(void);
void func_5408592608(void);
void func_5408592736(void);
void func_5408592864(void);
void func_5408592992(void);
void func_5408593152(void);
void func_5408593280(void);
void func_5408593504(void);
void func_5408593632(void);
void func_5408593760(void);
void func_5408593888(void);
void func_5408594016(void);
void func_5408594208(void);
void func_5408593440(void);
void func_5408591248(void);
void func_5408592224(void);
void func_5408592352(void);
void func_5408591792(void);
void func_5408595696(void);
void func_5408595824(void);
void func_5408595632(void);
void func_5408594864(void);
void func_5408591856(void);
void func_5408596272(void);
void func_5408596400(void);
void func_5408596528(void);
void func_5408596720(void);
void func_5408596848(void);
void func_5408596976(void);
void func_5408597104(void);
void func_5408596656(void);
void func_5408597424(void);
void func_5408597552(void);
void func_5408594688(void);
void func_5408594400(void);
void func_5408597824(void);
void func_5408597952(void);
void HALT(void);
void RETURN(void);
Inst func_5408580320_op0[2] = {func_5408591344, RETURN};
Inst func_5408589760_op0[2] = {func_5408591968, RETURN};
Inst func_5408589760_op1[2] = {func_5408590416, RETURN};
Inst func_5408589760_op2[2] = {func_5408592608, RETURN};
Inst func_5408589680_op0[2] = {func_5408592864, RETURN};
Inst func_5408589680_op1[2] = {func_5408591120, RETURN};
Inst func_5408589680_op2[2] = {func_5408593152, RETURN};
Inst func_5408589600_op0[2] = {func_5408590752, RETURN};
Inst func_5408589600_op1[2] = {func_5408590224, RETURN};
Inst func_5408590224_op0[2] = {func_5408593504, RETURN};
Inst func_5408590224_op1[2] = {func_5408593632, RETURN};
Inst func_5408590224_op2[2] = {func_5408593760, RETURN};
Inst func_5408590224_op3[2] = {func_5408593888, RETURN};
Inst func_5408590224_op4[2] = {func_5408594016, RETURN};
Inst func_5408590224_op5[2] = {func_5408594208, RETURN};
Inst func_5408589328_op0[2] = {func_5408593440, RETURN};
Inst func_5408589328_op1[2] = {func_5408595632, RETURN};
Inst func_5408590752_op0[2] = {func_5408594864, RETURN};
Inst func_5408590752_op1[2] = {func_5408591856, RETURN};
Inst func_5408590752_op2[2] = {func_5408596272, RETURN};
Inst func_5408590752_op3[2] = {func_5408596400, RETURN};
Inst func_5408590752_op4[2] = {func_5408596528, RETURN};
Inst func_5408590752_op5[2] = {func_5408596720, RETURN};
Inst func_5408590752_op6[2] = {func_5408596848, RETURN};
Inst func_5408590752_op7[2] = {func_5408596976, RETURN};
Inst func_5408590752_op8[2] = {func_5408597104, RETURN};
Inst func_5408590752_op9[2] = {func_5408596656, RETURN};
Inst func_5408589520_op0[2] = {func_5408597424, RETURN};
Inst func_5408590048_op0[2] = {func_5408589328, HALT};
Inst func_5408590112_op0[2] = {func_5408589328, RETURN};
Inst func_5408590112_op1[2] = {func_5408580320, RETURN};
Inst func_5408590112_op2[2] = {func_5408589520, RETURN};
Inst func_5408590992_op0[2] = {func_5408594688, RETURN};
Inst func_5408590992_op1[2] = {func_5408594400, RETURN};
Inst func_5408591120_op0[2] = {func_5408589600, RETURN};
Inst func_5408591120_op1[2] = {func_5408597824, RETURN};
Inst exp_5408591344[5] = {func_5408590224, func_5408591472, func_5408589680, func_5408591600, RETURN};
Inst exp_5408591968[4] = {func_5408589680, func_5408592096, func_5408589680, RETURN};
Inst exp_5408590416[4] = {func_5408589680, func_5408592480, func_5408589680, RETURN};
Inst exp_5408592608[4] = {func_5408589680, func_5408592736, func_5408589680, RETURN};
Inst exp_5408592864[4] = {func_5408591120, func_5408592992, func_5408589680, RETURN};
Inst exp_5408593152[4] = {func_5408591120, func_5408593280, func_5408589680, RETURN};
Inst exp_5408593440[12] = {func_5408591248, func_5408592224, func_5408589760, func_5408592352, func_5408591792, func_5408590992, func_5408595696, func_5408595824, func_5408591792, func_5408590992, func_5408595696, RETURN};
Inst exp_5408595632[8] = {func_5408591248, func_5408592224, func_5408589760, func_5408592352, func_5408591792, func_5408590992, func_5408595696, RETURN};
Inst exp_5408597424[6] = {func_5408597552, func_5408592224, func_5408589680, func_5408592352, func_5408591600, RETURN};
Inst exp_5408594688[3] = {func_5408590112, func_5408590992, RETURN};
Inst exp_5408594400[1] = {RETURN};
Inst exp_5408597824[4] = {func_5408589600, func_5408597952, func_5408591120, RETURN};
void func_5408580320(void) {
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
            PC = func_5408580320_op0;
        break;
    }
}
void func_5408589760(void) {
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
            PC = func_5408589760_op0;
        break;
        case 1:
            PC = func_5408589760_op1;
        break;
        case 2:
            PC = func_5408589760_op2;
        break;
    }
}
void func_5408589680(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5408589680_op0;
        break;
        case 1:
            PC = func_5408589680_op1;
        break;
        case 2:
            PC = func_5408589680_op2;
        break;
    }
}
void func_5408589600(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5408589600_op0;
        break;
        case 1:
            PC = func_5408589600_op1;
        break;
    }
}
void func_5408590224(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5408590224_op0;
        break;
        case 1:
            PC = func_5408590224_op1;
        break;
        case 2:
            PC = func_5408590224_op2;
        break;
        case 3:
            PC = func_5408590224_op3;
        break;
        case 4:
            PC = func_5408590224_op4;
        break;
        case 5:
            PC = func_5408590224_op5;
        break;
    }
}
void func_5408589328(void) {
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
            PC = func_5408589328_op0;
        break;
        case 1:
            PC = func_5408589328_op1;
        break;
    }
}
void func_5408590752(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5408590752_op0;
        break;
        case 1:
            PC = func_5408590752_op1;
        break;
        case 2:
            PC = func_5408590752_op2;
        break;
        case 3:
            PC = func_5408590752_op3;
        break;
        case 4:
            PC = func_5408590752_op4;
        break;
        case 5:
            PC = func_5408590752_op5;
        break;
        case 6:
            PC = func_5408590752_op6;
        break;
        case 7:
            PC = func_5408590752_op7;
        break;
        case 8:
            PC = func_5408590752_op8;
        break;
        case 9:
            PC = func_5408590752_op9;
        break;
    }
}
void func_5408589520(void) {
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
            PC = func_5408589520_op0;
        break;
    }
}
void func_5408590048(void) {
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
            PC = func_5408590048_op0;
        break;
    }
}
void func_5408590112(void) {
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
            PC = func_5408590112_op0;
        break;
        case 1:
            PC = func_5408590112_op1;
        break;
        case 2:
            PC = func_5408590112_op2;
        break;
    }
}
void func_5408590992(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5408590992_op0;
        break;
        case 1:
            PC = func_5408590992_op1;
        break;
    }
}
void func_5408591120(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5408591120_op0;
        break;
        case 1:
            PC = func_5408591120_op1;
        break;
    }
}
void func_5408591344(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5408591344;
}
void func_5408591472(void) {
    extend(61);
    NEXT();
}
void func_5408591600(void) {
    extend(59);
    NEXT();
}
void func_5408591968(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5408591968;
}
void func_5408592096(void) {
    extend(62);
    NEXT();
}
void func_5408590416(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5408590416;
}
void func_5408592480(void) {
    extend(60);
    NEXT();
}
void func_5408592608(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5408592608;
}
void func_5408592736(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5408592864(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5408592864;
}
void func_5408592992(void) {
    extend(43);
    NEXT();
}
void func_5408593152(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5408593152;
}
void func_5408593280(void) {
    extend(45);
    NEXT();
}
void func_5408593504(void) {
    extend(120);
    NEXT();
}
void func_5408593632(void) {
    extend(121);
    NEXT();
}
void func_5408593760(void) {
    extend(122);
    NEXT();
}
void func_5408593888(void) {
    extend(97);
    NEXT();
}
void func_5408594016(void) {
    extend(98);
    NEXT();
}
void func_5408594208(void) {
    extend(99);
    NEXT();
}
void func_5408593440(void) {
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
    PC = exp_5408593440;
}
void func_5408591248(void) {
    extend(105);
    extend(102);
    NEXT();
}
void func_5408592224(void) {
    extend(40);
    NEXT();
}
void func_5408592352(void) {
    extend(41);
    NEXT();
}
void func_5408591792(void) {
    extend(123);
    NEXT();
}
void func_5408595696(void) {
    extend(125);
    NEXT();
}
void func_5408595824(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5408595632(void) {
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
    PC = exp_5408595632;
}
void func_5408594864(void) {
    extend(48);
    NEXT();
}
void func_5408591856(void) {
    extend(49);
    NEXT();
}
void func_5408596272(void) {
    extend(50);
    NEXT();
}
void func_5408596400(void) {
    extend(51);
    NEXT();
}
void func_5408596528(void) {
    extend(52);
    NEXT();
}
void func_5408596720(void) {
    extend(53);
    NEXT();
}
void func_5408596848(void) {
    extend(54);
    NEXT();
}
void func_5408596976(void) {
    extend(55);
    NEXT();
}
void func_5408597104(void) {
    extend(56);
    NEXT();
}
void func_5408596656(void) {
    extend(57);
    NEXT();
}
void func_5408597424(void) {
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
    PC = exp_5408597424;
}
void func_5408597552(void) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
}
void func_5408594688(void) {
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
    PC = exp_5408594688;
}
void func_5408594400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5408594400;
}
void func_5408597824(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5408597824;
}
void func_5408597952(void) {
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
    PC =func_5408590048_op0;
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
