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
void func_5299535072(void);
void func_5299535632(void);
void func_5299535440(void);
void func_5299535200(void);
void func_5299535376(void);
void func_5299535856(void);
void func_5299535984(void);
void func_5299535776(void);
void func_5299536336(void);
void func_5299536768(void);
void func_5299536704(void);
void func_5299536960(void);
void func_5299536528(void);
void func_5299537088(void);
void func_5299537552(void);
void func_5299537680(void);
void func_5299537808(void);
void func_5299536400(void);
void func_5299538192(void);
void func_5299538384(void);
void func_5299538512(void);
void func_5299538640(void);
void func_5299538768(void);
void func_5299538320(void);
void func_5299536256(void);
void func_5299539152(void);
void func_5299537296(void);
void func_5299537424(void);
void func_5299539360(void);
void func_5299539488(void);
void func_5299539616(void);
void func_5299539792(void);
void func_5299539936(void);
void func_5299537936(void);
void func_5299539280(void);
void func_5299540704(void);
void func_5299540832(void);
void func_5299540992(void);
void func_5299541120(void);
void func_5299540544(void);
void func_5299541648(void);
void func_5299541776(void);
void HALT(void);
void RETURN(void);
Inst func_5299535072_op0[2] = {func_5299536704, RETURN};
Inst func_5299535072_op1[2] = {func_5299537088, RETURN};
Inst func_5299535632_op0[2] = {func_5299537552, RETURN};
Inst func_5299535632_op1[2] = {func_5299537680, RETURN};
Inst func_5299535632_op2[2] = {func_5299537808, RETURN};
Inst func_5299535632_op3[2] = {func_5299536400, RETURN};
Inst func_5299535632_op4[2] = {func_5299538192, RETURN};
Inst func_5299535632_op5[2] = {func_5299538384, RETURN};
Inst func_5299535632_op6[2] = {func_5299538512, RETURN};
Inst func_5299535632_op7[2] = {func_5299538640, RETURN};
Inst func_5299535632_op8[2] = {func_5299538768, RETURN};
Inst func_5299535632_op9[2] = {func_5299538320, RETURN};
Inst func_5299535440_op0[2] = {func_5299536256, RETURN};
Inst func_5299535440_op1[2] = {func_5299536768, RETURN};
Inst func_5299535200_op0[2] = {func_5299537296, RETURN};
Inst func_5299535200_op1[2] = {func_5299535984, RETURN};
Inst func_5299535376_op0[2] = {func_5299535632, RETURN};
Inst func_5299535376_op1[2] = {func_5299537424, RETURN};
Inst func_5299535856_op0[2] = {func_5299539360, RETURN};
Inst func_5299535856_op1[2] = {func_5299539792, RETURN};
Inst func_5299535984_op0[2] = {func_5299539936, RETURN};
Inst func_5299535776_op0[2] = {func_5299536768, HALT};
Inst func_5299536336_op0[2] = {func_5299539280, RETURN};
Inst func_5299536336_op1[2] = {func_5299540704, RETURN};
Inst func_5299536336_op2[2] = {func_5299540832, RETURN};
Inst func_5299536336_op3[2] = {func_5299540992, RETURN};
Inst func_5299536336_op4[2] = {func_5299541120, RETURN};
Inst func_5299536768_op0[2] = {func_5299535856, RETURN};
Inst func_5299536768_op1[2] = {func_5299535072, RETURN};
Inst func_5299536768_op2[2] = {func_5299536336, RETURN};
Inst func_5299536768_op3[2] = {func_5299535376, RETURN};
Inst func_5299536768_op4[2] = {func_5299540544, RETURN};
Inst func_5299536768_op5[2] = {func_5299541648, RETURN};
Inst func_5299536768_op6[2] = {func_5299541776, RETURN};
Inst exp_5299536704[4] = {func_5299536960, func_5299535440, func_5299536528, RETURN};
Inst exp_5299537088[3] = {func_5299536960, func_5299536528, RETURN};
Inst exp_5299536256[4] = {func_5299536768, func_5299539152, func_5299535440, RETURN};
Inst exp_5299537296[4] = {func_5299535984, func_5299539152, func_5299535200, RETURN};
Inst exp_5299537424[3] = {func_5299535632, func_5299535376, RETURN};
Inst exp_5299539360[4] = {func_5299539488, func_5299535200, func_5299539616, RETURN};
Inst exp_5299539792[3] = {func_5299539488, func_5299539616, RETURN};
Inst exp_5299539936[4] = {func_5299536336, func_5299537936, func_5299536768, RETURN};
void func_5299535072(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5299535072_op0;
        break;
        case 1:
            PC = func_5299535072_op1;
        break;
    }
}
void func_5299535632(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5299535632_op0;
        break;
        case 1:
            PC = func_5299535632_op1;
        break;
        case 2:
            PC = func_5299535632_op2;
        break;
        case 3:
            PC = func_5299535632_op3;
        break;
        case 4:
            PC = func_5299535632_op4;
        break;
        case 5:
            PC = func_5299535632_op5;
        break;
        case 6:
            PC = func_5299535632_op6;
        break;
        case 7:
            PC = func_5299535632_op7;
        break;
        case 8:
            PC = func_5299535632_op8;
        break;
        case 9:
            PC = func_5299535632_op9;
        break;
    }
}
void func_5299535440(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5299535440_op0;
        break;
        case 1:
            PC = func_5299535440_op1;
        break;
    }
}
void func_5299535200(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5299535200_op0;
        break;
        case 1:
            PC = func_5299535200_op1;
        break;
    }
}
void func_5299535376(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5299535376_op0;
        break;
        case 1:
            PC = func_5299535376_op1;
        break;
    }
}
void func_5299535856(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5299535856_op0;
        break;
        case 1:
            PC = func_5299535856_op1;
        break;
    }
}
void func_5299535984(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5299535984_op0;
        break;
    }
}
void func_5299535776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5299535776_op0;
        break;
    }
}
void func_5299536336(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5299536336_op0;
        break;
        case 1:
            PC = func_5299536336_op1;
        break;
        case 2:
            PC = func_5299536336_op2;
        break;
        case 3:
            PC = func_5299536336_op3;
        break;
        case 4:
            PC = func_5299536336_op4;
        break;
    }
}
void func_5299536768(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(7);
    store();
    switch (branch) {
        case 0:
            PC = func_5299536768_op0;
        break;
        case 1:
            PC = func_5299536768_op1;
        break;
        case 2:
            PC = func_5299536768_op2;
        break;
        case 3:
            PC = func_5299536768_op3;
        break;
        case 4:
            PC = func_5299536768_op4;
        break;
        case 5:
            PC = func_5299536768_op5;
        break;
        case 6:
            PC = func_5299536768_op6;
        break;
    }
}
void func_5299536704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5299536704;
}
void func_5299536960(void) {
    extend(91);
    NEXT();
}
void func_5299536528(void) {
    extend(93);
    NEXT();
}
void func_5299537088(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5299537088;
}
void func_5299537552(void) {
    extend(48);
    NEXT();
}
void func_5299537680(void) {
    extend(49);
    NEXT();
}
void func_5299537808(void) {
    extend(50);
    NEXT();
}
void func_5299536400(void) {
    extend(51);
    NEXT();
}
void func_5299538192(void) {
    extend(52);
    NEXT();
}
void func_5299538384(void) {
    extend(53);
    NEXT();
}
void func_5299538512(void) {
    extend(54);
    NEXT();
}
void func_5299538640(void) {
    extend(55);
    NEXT();
}
void func_5299538768(void) {
    extend(56);
    NEXT();
}
void func_5299538320(void) {
    extend(57);
    NEXT();
}
void func_5299536256(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    store();
    PC = exp_5299536256;
}
void func_5299539152(void) {
    extend(44);
    NEXT();
}
void func_5299537296(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    store();
    PC = exp_5299537296;
}
void func_5299537424(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5299537424;
}
void func_5299539360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5299539360;
}
void func_5299539488(void) {
    extend(123);
    NEXT();
}
void func_5299539616(void) {
    extend(125);
    NEXT();
}
void func_5299539792(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5299539792;
}
void func_5299539936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    store();
    PC = exp_5299539936;
}
void func_5299537936(void) {
    extend(58);
    NEXT();
}
void func_5299539280(void) {
    extend(34);
    extend(97);
    extend(34);
    NEXT();
}
void func_5299540704(void) {
    extend(34);
    extend(98);
    extend(34);
    NEXT();
}
void func_5299540832(void) {
    extend(34);
    extend(99);
    extend(34);
    NEXT();
}
void func_5299540992(void) {
    extend(34);
    extend(100);
    extend(34);
    NEXT();
}
void func_5299541120(void) {
    extend(34);
    extend(101);
    extend(34);
    NEXT();
}
void func_5299540544(void) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
}
void func_5299541648(void) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5299541776(void) {
    extend(110);
    extend(117);
    extend(108);
    extend(108);
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
    PC =func_5299535776_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 8;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
