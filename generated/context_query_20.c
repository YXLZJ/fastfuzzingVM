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
void func_5786065520(void);
void func_5786075728(void);
void func_5786076032(void);
void func_5786076384(void);
void func_5786076096(void);
void func_5786075648(void);
void func_5786075520(void);
void func_5786076848(void);
void func_5786075888(void);
void func_5786076512(void);
void func_5786076640(void);
void func_5786076768(void);
void func_5786077264(void);
void func_5786077392(void);
void func_5786077552(void);
void func_5786077760(void);
void func_5786077888(void);
void func_5786078272(void);
void func_5786077136(void);
void func_5786078624(void);
void func_5786075952(void);
void func_5786078816(void);
void func_5786078944(void);
void func_5786079072(void);
void func_5786079536(void);
void func_5786077680(void);
void func_5786079728(void);
void func_5786079888(void);
void func_5786080016(void);
void func_5786080208(void);
void func_5786080336(void);
void func_5786080464(void);
void func_5786080592(void);
void func_5786080144(void);
void func_5786078400(void);
void func_5786077024(void);
void func_5786081232(void);
void func_5786081360(void);
void func_5786081744(void);
void func_5786081872(void);
void func_5786082000(void);
void func_5786082160(void);
void func_5786082288(void);
void func_5786082480(void);
void func_5786082608(void);
void func_5786082736(void);
void func_5786082864(void);
void func_5786082416(void);
void func_5786081632(void);
void func_5786079264(void);
void func_5786079392(void);
void func_5786081552(void);
void func_5786083376(void);
void HALT(void);
void RETURN(void);
Inst func_5786065520_op0[2] = {func_5786076768, RETURN};
Inst func_5786065520_op1[2] = {func_5786077264, RETURN};
Inst func_5786065520_op2[2] = {func_5786077392, RETURN};
Inst func_5786065520_op3[2] = {func_5786077552, RETURN};
Inst func_5786075728_op0[2] = {func_5786077760, RETURN};
Inst func_5786075728_op1[2] = {func_5786077888, RETURN};
Inst func_5786076032_op0[2] = {func_5786077136, RETURN};
Inst func_5786076032_op1[2] = {func_5786075952, RETURN};
Inst func_5786076032_op2[2] = {func_5786078944, RETURN};
Inst func_5786076384_op0[2] = {func_5786079536, RETURN};
Inst func_5786076384_op1[2] = {func_5786077680, RETURN};
Inst func_5786076384_op2[2] = {func_5786079728, RETURN};
Inst func_5786076384_op3[2] = {func_5786079888, RETURN};
Inst func_5786076384_op4[2] = {func_5786080016, RETURN};
Inst func_5786076384_op5[2] = {func_5786080208, RETURN};
Inst func_5786076384_op6[2] = {func_5786080336, RETURN};
Inst func_5786076384_op7[2] = {func_5786080464, RETURN};
Inst func_5786076384_op8[2] = {func_5786080592, RETURN};
Inst func_5786076384_op9[2] = {func_5786080144, RETURN};
Inst func_5786076096_op0[2] = {func_5786076384, RETURN};
Inst func_5786076096_op1[2] = {func_5786078400, RETURN};
Inst func_5786075648_op0[2] = {func_5786077024, RETURN};
Inst func_5786075520_op0[2] = {func_5786075648, HALT};
Inst func_5786076848_op0[2] = {func_5786081744, RETURN};
Inst func_5786076848_op1[2] = {func_5786081872, RETURN};
Inst func_5786076848_op2[2] = {func_5786082000, RETURN};
Inst func_5786076848_op3[2] = {func_5786082160, RETURN};
Inst func_5786076848_op4[2] = {func_5786082288, RETURN};
Inst func_5786076848_op5[2] = {func_5786082480, RETURN};
Inst func_5786076848_op6[2] = {func_5786082608, RETURN};
Inst func_5786076848_op7[2] = {func_5786082736, RETURN};
Inst func_5786076848_op8[2] = {func_5786082864, RETURN};
Inst func_5786076848_op9[2] = {func_5786082416, RETURN};
Inst func_5786075888_op0[2] = {func_5786081632, RETURN};
Inst func_5786075888_op1[2] = {func_5786079264, RETURN};
Inst func_5786075888_op2[2] = {func_5786079392, RETURN};
Inst func_5786076512_op0[2] = {func_5786076096, RETURN};
Inst func_5786076512_op1[2] = {func_5786076848, RETURN};
Inst func_5786076640_op0[2] = {func_5786081552, RETURN};
Inst exp_5786077888[4] = {func_5786065520, func_5786078272, func_5786075728, RETURN};
Inst exp_5786077136[4] = {func_5786065520, func_5786078624, func_5786076512, RETURN};
Inst exp_5786075952[4] = {func_5786076032, func_5786078816, func_5786076032, RETURN};
Inst exp_5786078944[4] = {func_5786076032, func_5786079072, func_5786076032, RETURN};
Inst exp_5786078400[3] = {func_5786076384, func_5786076096, RETURN};
Inst exp_5786077024[6] = {func_5786081232, func_5786075728, func_5786081360, func_5786075888, func_5786076640, RETURN};
Inst exp_5786081552[3] = {func_5786083376, func_5786076032, RETURN};
void func_5786065520(void) {
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
            PC = func_5786065520_op0;
        break;
        case 1:
            PC = func_5786065520_op1;
        break;
        case 2:
            PC = func_5786065520_op2;
        break;
        case 3:
            PC = func_5786065520_op3;
        break;
    }
}
void func_5786075728(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5786075728_op0;
        break;
        case 1:
            PC = func_5786075728_op1;
        break;
    }
}
void func_5786076032(void) {
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
            PC = func_5786076032_op0;
        break;
        case 1:
            PC = func_5786076032_op1;
        break;
        case 2:
            PC = func_5786076032_op2;
        break;
    }
}
void func_5786076384(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5786076384_op0;
        break;
        case 1:
            PC = func_5786076384_op1;
        break;
        case 2:
            PC = func_5786076384_op2;
        break;
        case 3:
            PC = func_5786076384_op3;
        break;
        case 4:
            PC = func_5786076384_op4;
        break;
        case 5:
            PC = func_5786076384_op5;
        break;
        case 6:
            PC = func_5786076384_op6;
        break;
        case 7:
            PC = func_5786076384_op7;
        break;
        case 8:
            PC = func_5786076384_op8;
        break;
        case 9:
            PC = func_5786076384_op9;
        break;
    }
}
void func_5786076096(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5786076096_op0;
        break;
        case 1:
            PC = func_5786076096_op1;
        break;
    }
}
void func_5786075648(void) {
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
            PC = func_5786075648_op0;
        break;
    }
}
void func_5786075520(void) {
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
            PC = func_5786075520_op0;
        break;
    }
}
void func_5786076848(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5786076848_op0;
        break;
        case 1:
            PC = func_5786076848_op1;
        break;
        case 2:
            PC = func_5786076848_op2;
        break;
        case 3:
            PC = func_5786076848_op3;
        break;
        case 4:
            PC = func_5786076848_op4;
        break;
        case 5:
            PC = func_5786076848_op5;
        break;
        case 6:
            PC = func_5786076848_op6;
        break;
        case 7:
            PC = func_5786076848_op7;
        break;
        case 8:
            PC = func_5786076848_op8;
        break;
        case 9:
            PC = func_5786076848_op9;
        break;
    }
}
void func_5786075888(void) {
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
            PC = func_5786075888_op0;
        break;
        case 1:
            PC = func_5786075888_op1;
        break;
        case 2:
            PC = func_5786075888_op2;
        break;
    }
}
void func_5786076512(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5786076512_op0;
        break;
        case 1:
            PC = func_5786076512_op1;
        break;
    }
}
void func_5786076640(void) {
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
            PC = func_5786076640_op0;
        break;
    }
}
void func_5786076768(void) {
    extend(105);
    extend(100);
    NEXT();
}
void func_5786077264(void) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
}
void func_5786077392(void) {
    extend(97);
    extend(103);
    extend(101);
    NEXT();
}
void func_5786077552(void) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
}
void func_5786077760(void) {
    extend(42);
    NEXT();
}
void func_5786077888(void) {
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
    PC = exp_5786077888;
}
void func_5786078272(void) {
    extend(44);
    NEXT();
}
void func_5786077136(void) {
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
    PC = exp_5786077136;
}
void func_5786078624(void) {
    extend(61);
    NEXT();
}
void func_5786075952(void) {
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
    PC = exp_5786075952;
}
void func_5786078816(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_5786078944(void) {
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
    PC = exp_5786078944;
}
void func_5786079072(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_5786079536(void) {
    extend(48);
    NEXT();
}
void func_5786077680(void) {
    extend(49);
    NEXT();
}
void func_5786079728(void) {
    extend(50);
    NEXT();
}
void func_5786079888(void) {
    extend(51);
    NEXT();
}
void func_5786080016(void) {
    extend(52);
    NEXT();
}
void func_5786080208(void) {
    extend(53);
    NEXT();
}
void func_5786080336(void) {
    extend(54);
    NEXT();
}
void func_5786080464(void) {
    extend(55);
    NEXT();
}
void func_5786080592(void) {
    extend(56);
    NEXT();
}
void func_5786080144(void) {
    extend(57);
    NEXT();
}
void func_5786078400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5786078400;
}
void func_5786077024(void) {
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
    PC = exp_5786077024;
}
void func_5786081232(void) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
}
void func_5786081360(void) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
}
void func_5786081744(void) {
    extend(97);
    NEXT();
}
void func_5786081872(void) {
    extend(98);
    NEXT();
}
void func_5786082000(void) {
    extend(99);
    NEXT();
}
void func_5786082160(void) {
    extend(100);
    NEXT();
}
void func_5786082288(void) {
    extend(101);
    NEXT();
}
void func_5786082480(void) {
    extend(102);
    NEXT();
}
void func_5786082608(void) {
    extend(103);
    NEXT();
}
void func_5786082736(void) {
    extend(104);
    NEXT();
}
void func_5786082864(void) {
    extend(105);
    NEXT();
}
void func_5786082416(void) {
    extend(106);
    NEXT();
}
void func_5786081632(void) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_5786079264(void) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_5786079392(void) {
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
void func_5786081552(void) {
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
    PC = exp_5786081552;
}
void func_5786083376(void) {
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
    PC =func_5786075520_op0;
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
