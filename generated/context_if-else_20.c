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
void func_5056258784(void);
void func_5056268224(void);
void func_5056268144(void);
void func_5056268064(void);
void func_5056268688(void);
void func_5056267792(void);
void func_5056269216(void);
void func_5056267984(void);
void func_5056268512(void);
void func_5056268576(void);
void func_5056269456(void);
void func_5056269584(void);
void func_5056269808(void);
void func_5056269936(void);
void func_5056270064(void);
void func_5056270432(void);
void func_5056270560(void);
void func_5056268880(void);
void func_5056270944(void);
void func_5056271072(void);
void func_5056271200(void);
void func_5056271328(void);
void func_5056271456(void);
void func_5056271616(void);
void func_5056271744(void);
void func_5056271968(void);
void func_5056272096(void);
void func_5056272224(void);
void func_5056272352(void);
void func_5056272480(void);
void func_5056272672(void);
void func_5056271904(void);
void func_5056269712(void);
void func_5056270688(void);
void func_5056270816(void);
void func_5056270256(void);
void func_5056274160(void);
void func_5056274288(void);
void func_5056274096(void);
void func_5056273328(void);
void func_5056270320(void);
void func_5056274736(void);
void func_5056274864(void);
void func_5056274992(void);
void func_5056275184(void);
void func_5056275312(void);
void func_5056275440(void);
void func_5056275568(void);
void func_5056275120(void);
void func_5056275888(void);
void func_5056276016(void);
void func_5056273152(void);
void func_5056272864(void);
void func_5056276288(void);
void func_5056276416(void);
void HALT(void);
void RETURN(void);
Inst func_5056258784_op0[2] = {func_5056269808, RETURN};
Inst func_5056268224_op0[2] = {func_5056270432, RETURN};
Inst func_5056268224_op1[2] = {func_5056268880, RETURN};
Inst func_5056268224_op2[2] = {func_5056271072, RETURN};
Inst func_5056268144_op0[2] = {func_5056271328, RETURN};
Inst func_5056268144_op1[2] = {func_5056269584, RETURN};
Inst func_5056268144_op2[2] = {func_5056271616, RETURN};
Inst func_5056268064_op0[2] = {func_5056269216, RETURN};
Inst func_5056268064_op1[2] = {func_5056268688, RETURN};
Inst func_5056268688_op0[2] = {func_5056271968, RETURN};
Inst func_5056268688_op1[2] = {func_5056272096, RETURN};
Inst func_5056268688_op2[2] = {func_5056272224, RETURN};
Inst func_5056268688_op3[2] = {func_5056272352, RETURN};
Inst func_5056268688_op4[2] = {func_5056272480, RETURN};
Inst func_5056268688_op5[2] = {func_5056272672, RETURN};
Inst func_5056267792_op0[2] = {func_5056271904, RETURN};
Inst func_5056267792_op1[2] = {func_5056274096, RETURN};
Inst func_5056269216_op0[2] = {func_5056273328, RETURN};
Inst func_5056269216_op1[2] = {func_5056270320, RETURN};
Inst func_5056269216_op2[2] = {func_5056274736, RETURN};
Inst func_5056269216_op3[2] = {func_5056274864, RETURN};
Inst func_5056269216_op4[2] = {func_5056274992, RETURN};
Inst func_5056269216_op5[2] = {func_5056275184, RETURN};
Inst func_5056269216_op6[2] = {func_5056275312, RETURN};
Inst func_5056269216_op7[2] = {func_5056275440, RETURN};
Inst func_5056269216_op8[2] = {func_5056275568, RETURN};
Inst func_5056269216_op9[2] = {func_5056275120, RETURN};
Inst func_5056267984_op0[2] = {func_5056275888, RETURN};
Inst func_5056268512_op0[2] = {func_5056267792, HALT};
Inst func_5056268576_op0[2] = {func_5056267792, RETURN};
Inst func_5056268576_op1[2] = {func_5056258784, RETURN};
Inst func_5056268576_op2[2] = {func_5056267984, RETURN};
Inst func_5056269456_op0[2] = {func_5056273152, RETURN};
Inst func_5056269456_op1[2] = {func_5056272864, RETURN};
Inst func_5056269584_op0[2] = {func_5056268064, RETURN};
Inst func_5056269584_op1[2] = {func_5056276288, RETURN};
Inst exp_5056269808[5] = {func_5056268688, func_5056269936, func_5056268144, func_5056270064, RETURN};
Inst exp_5056270432[4] = {func_5056268144, func_5056270560, func_5056268144, RETURN};
Inst exp_5056268880[4] = {func_5056268144, func_5056270944, func_5056268144, RETURN};
Inst exp_5056271072[4] = {func_5056268144, func_5056271200, func_5056268144, RETURN};
Inst exp_5056271328[4] = {func_5056269584, func_5056271456, func_5056268144, RETURN};
Inst exp_5056271616[4] = {func_5056269584, func_5056271744, func_5056268144, RETURN};
Inst exp_5056271904[12] = {func_5056269712, func_5056270688, func_5056268224, func_5056270816, func_5056270256, func_5056269456, func_5056274160, func_5056274288, func_5056270256, func_5056269456, func_5056274160, RETURN};
Inst exp_5056274096[8] = {func_5056269712, func_5056270688, func_5056268224, func_5056270816, func_5056270256, func_5056269456, func_5056274160, RETURN};
Inst exp_5056275888[6] = {func_5056276016, func_5056270688, func_5056268144, func_5056270816, func_5056270064, RETURN};
Inst exp_5056273152[3] = {func_5056268576, func_5056269456, RETURN};
Inst exp_5056272864[1] = {RETURN};
Inst exp_5056276288[4] = {func_5056268064, func_5056276416, func_5056269584, RETURN};
void func_5056258784(void) {
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
            PC = func_5056258784_op0;
        break;
    }
}
void func_5056268224(void) {
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
            PC = func_5056268224_op0;
        break;
        case 1:
            PC = func_5056268224_op1;
        break;
        case 2:
            PC = func_5056268224_op2;
        break;
    }
}
void func_5056268144(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5056268144_op0;
        break;
        case 1:
            PC = func_5056268144_op1;
        break;
        case 2:
            PC = func_5056268144_op2;
        break;
    }
}
void func_5056268064(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5056268064_op0;
        break;
        case 1:
            PC = func_5056268064_op1;
        break;
    }
}
void func_5056268688(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5056268688_op0;
        break;
        case 1:
            PC = func_5056268688_op1;
        break;
        case 2:
            PC = func_5056268688_op2;
        break;
        case 3:
            PC = func_5056268688_op3;
        break;
        case 4:
            PC = func_5056268688_op4;
        break;
        case 5:
            PC = func_5056268688_op5;
        break;
    }
}
void func_5056267792(void) {
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
            PC = func_5056267792_op0;
        break;
        case 1:
            PC = func_5056267792_op1;
        break;
    }
}
void func_5056269216(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5056269216_op0;
        break;
        case 1:
            PC = func_5056269216_op1;
        break;
        case 2:
            PC = func_5056269216_op2;
        break;
        case 3:
            PC = func_5056269216_op3;
        break;
        case 4:
            PC = func_5056269216_op4;
        break;
        case 5:
            PC = func_5056269216_op5;
        break;
        case 6:
            PC = func_5056269216_op6;
        break;
        case 7:
            PC = func_5056269216_op7;
        break;
        case 8:
            PC = func_5056269216_op8;
        break;
        case 9:
            PC = func_5056269216_op9;
        break;
    }
}
void func_5056267984(void) {
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
            PC = func_5056267984_op0;
        break;
    }
}
void func_5056268512(void) {
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
            PC = func_5056268512_op0;
        break;
    }
}
void func_5056268576(void) {
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
            PC = func_5056268576_op0;
        break;
        case 1:
            PC = func_5056268576_op1;
        break;
        case 2:
            PC = func_5056268576_op2;
        break;
    }
}
void func_5056269456(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5056269456_op0;
        break;
        case 1:
            PC = func_5056269456_op1;
        break;
    }
}
void func_5056269584(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5056269584_op0;
        break;
        case 1:
            PC = func_5056269584_op1;
        break;
    }
}
void func_5056269808(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5056269808;
}
void func_5056269936(void) {
    extend(61);
    NEXT();
}
void func_5056270064(void) {
    extend(59);
    NEXT();
}
void func_5056270432(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5056270432;
}
void func_5056270560(void) {
    extend(62);
    NEXT();
}
void func_5056268880(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5056268880;
}
void func_5056270944(void) {
    extend(60);
    NEXT();
}
void func_5056271072(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5056271072;
}
void func_5056271200(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5056271328(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5056271328;
}
void func_5056271456(void) {
    extend(43);
    NEXT();
}
void func_5056271616(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5056271616;
}
void func_5056271744(void) {
    extend(45);
    NEXT();
}
void func_5056271968(void) {
    extend(120);
    NEXT();
}
void func_5056272096(void) {
    extend(121);
    NEXT();
}
void func_5056272224(void) {
    extend(122);
    NEXT();
}
void func_5056272352(void) {
    extend(97);
    NEXT();
}
void func_5056272480(void) {
    extend(98);
    NEXT();
}
void func_5056272672(void) {
    extend(99);
    NEXT();
}
void func_5056271904(void) {
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
    PC = exp_5056271904;
}
void func_5056269712(void) {
    extend(105);
    extend(102);
    NEXT();
}
void func_5056270688(void) {
    extend(40);
    NEXT();
}
void func_5056270816(void) {
    extend(41);
    NEXT();
}
void func_5056270256(void) {
    extend(123);
    NEXT();
}
void func_5056274160(void) {
    extend(125);
    NEXT();
}
void func_5056274288(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5056274096(void) {
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
    PC = exp_5056274096;
}
void func_5056273328(void) {
    extend(48);
    NEXT();
}
void func_5056270320(void) {
    extend(49);
    NEXT();
}
void func_5056274736(void) {
    extend(50);
    NEXT();
}
void func_5056274864(void) {
    extend(51);
    NEXT();
}
void func_5056274992(void) {
    extend(52);
    NEXT();
}
void func_5056275184(void) {
    extend(53);
    NEXT();
}
void func_5056275312(void) {
    extend(54);
    NEXT();
}
void func_5056275440(void) {
    extend(55);
    NEXT();
}
void func_5056275568(void) {
    extend(56);
    NEXT();
}
void func_5056275120(void) {
    extend(57);
    NEXT();
}
void func_5056275888(void) {
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
    PC = exp_5056275888;
}
void func_5056276016(void) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
}
void func_5056273152(void) {
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
    PC = exp_5056273152;
}
void func_5056272864(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5056272864;
}
void func_5056276288(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5056276288;
}
void func_5056276416(void) {
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
    PC =func_5056268512_op0;
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
