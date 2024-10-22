#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 55
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
void func_5601518304(void);
void func_5601527744(void);
void func_5601527664(void);
void func_5601527584(void);
void func_5601528208(void);
void func_5601527312(void);
void func_5601528736(void);
void func_5601527504(void);
void func_5601528032(void);
void func_5601528096(void);
void func_5601528976(void);
void func_5601529104(void);
void func_5601529328(void);
void func_5601529456(void);
void func_5601529584(void);
void func_5601529952(void);
void func_5601530080(void);
void func_5601528400(void);
void func_5601530464(void);
void func_5601530592(void);
void func_5601530720(void);
void func_5601530848(void);
void func_5601530976(void);
void func_5601531136(void);
void func_5601531264(void);
void func_5601531488(void);
void func_5601531616(void);
void func_5601531744(void);
void func_5601531872(void);
void func_5601532000(void);
void func_5601532192(void);
void func_5601531424(void);
void func_5601529232(void);
void func_5601530208(void);
void func_5601530336(void);
void func_5601529776(void);
void func_5601533680(void);
void func_5601533808(void);
void func_5601533616(void);
void func_5601532848(void);
void func_5601529840(void);
void func_5601534256(void);
void func_5601534384(void);
void func_5601534512(void);
void func_5601534704(void);
void func_5601534832(void);
void func_5601534960(void);
void func_5601535088(void);
void func_5601534640(void);
void func_5601535408(void);
void func_5601535536(void);
void func_5601532672(void);
void func_5601532384(void);
void func_5601535808(void);
void func_5601535936(void);
void HALT(void);
void RETURN(void);
Inst func_5601518304_op0[2] = {func_5601529328, RETURN};
Inst func_5601527744_op0[2] = {func_5601529952, RETURN};
Inst func_5601527744_op1[2] = {func_5601528400, RETURN};
Inst func_5601527744_op2[2] = {func_5601530592, RETURN};
Inst func_5601527664_op0[2] = {func_5601530848, RETURN};
Inst func_5601527664_op1[2] = {func_5601529104, RETURN};
Inst func_5601527664_op2[2] = {func_5601531136, RETURN};
Inst func_5601527584_op0[2] = {func_5601528736, RETURN};
Inst func_5601527584_op1[2] = {func_5601528208, RETURN};
Inst func_5601528208_op0[2] = {func_5601531488, RETURN};
Inst func_5601528208_op1[2] = {func_5601531616, RETURN};
Inst func_5601528208_op2[2] = {func_5601531744, RETURN};
Inst func_5601528208_op3[2] = {func_5601531872, RETURN};
Inst func_5601528208_op4[2] = {func_5601532000, RETURN};
Inst func_5601528208_op5[2] = {func_5601532192, RETURN};
Inst func_5601527312_op0[2] = {func_5601531424, RETURN};
Inst func_5601527312_op1[2] = {func_5601533616, RETURN};
Inst func_5601528736_op0[2] = {func_5601532848, RETURN};
Inst func_5601528736_op1[2] = {func_5601529840, RETURN};
Inst func_5601528736_op2[2] = {func_5601534256, RETURN};
Inst func_5601528736_op3[2] = {func_5601534384, RETURN};
Inst func_5601528736_op4[2] = {func_5601534512, RETURN};
Inst func_5601528736_op5[2] = {func_5601534704, RETURN};
Inst func_5601528736_op6[2] = {func_5601534832, RETURN};
Inst func_5601528736_op7[2] = {func_5601534960, RETURN};
Inst func_5601528736_op8[2] = {func_5601535088, RETURN};
Inst func_5601528736_op9[2] = {func_5601534640, RETURN};
Inst func_5601527504_op0[2] = {func_5601535408, RETURN};
Inst func_5601528032_op0[2] = {func_5601527312, HALT};
Inst func_5601528096_op0[2] = {func_5601527312, RETURN};
Inst func_5601528096_op1[2] = {func_5601518304, RETURN};
Inst func_5601528096_op2[2] = {func_5601527504, RETURN};
Inst func_5601528976_op0[2] = {func_5601532672, RETURN};
Inst func_5601528976_op1[2] = {func_5601532384, RETURN};
Inst func_5601529104_op0[2] = {func_5601527584, RETURN};
Inst func_5601529104_op1[2] = {func_5601535808, RETURN};
Inst exp_5601529328[5] = {func_5601528208, func_5601529456, func_5601527664, func_5601529584, RETURN};
Inst exp_5601529952[4] = {func_5601527664, func_5601530080, func_5601527664, RETURN};
Inst exp_5601528400[4] = {func_5601527664, func_5601530464, func_5601527664, RETURN};
Inst exp_5601530592[4] = {func_5601527664, func_5601530720, func_5601527664, RETURN};
Inst exp_5601530848[4] = {func_5601529104, func_5601530976, func_5601527664, RETURN};
Inst exp_5601531136[4] = {func_5601529104, func_5601531264, func_5601527664, RETURN};
Inst exp_5601531424[12] = {func_5601529232, func_5601530208, func_5601527744, func_5601530336, func_5601529776, func_5601528976, func_5601533680, func_5601533808, func_5601529776, func_5601528976, func_5601533680, RETURN};
Inst exp_5601533616[8] = {func_5601529232, func_5601530208, func_5601527744, func_5601530336, func_5601529776, func_5601528976, func_5601533680, RETURN};
Inst exp_5601535408[6] = {func_5601535536, func_5601530208, func_5601527664, func_5601530336, func_5601529584, RETURN};
Inst exp_5601532672[3] = {func_5601528096, func_5601528976, RETURN};
Inst exp_5601532384[1] = {RETURN};
Inst exp_5601535808[4] = {func_5601527584, func_5601535936, func_5601529104, RETURN};
void func_5601518304(void) {
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
            PC = func_5601518304_op0;
        break;
    }
}
void func_5601527744(void) {
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
            PC = func_5601527744_op0;
        break;
        case 1:
            PC = func_5601527744_op1;
        break;
        case 2:
            PC = func_5601527744_op2;
        break;
    }
}
void func_5601527664(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5601527664_op0;
        break;
        case 1:
            PC = func_5601527664_op1;
        break;
        case 2:
            PC = func_5601527664_op2;
        break;
    }
}
void func_5601527584(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5601527584_op0;
        break;
        case 1:
            PC = func_5601527584_op1;
        break;
    }
}
void func_5601528208(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5601528208_op0;
        break;
        case 1:
            PC = func_5601528208_op1;
        break;
        case 2:
            PC = func_5601528208_op2;
        break;
        case 3:
            PC = func_5601528208_op3;
        break;
        case 4:
            PC = func_5601528208_op4;
        break;
        case 5:
            PC = func_5601528208_op5;
        break;
    }
}
void func_5601527312(void) {
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
            PC = func_5601527312_op0;
        break;
        case 1:
            PC = func_5601527312_op1;
        break;
    }
}
void func_5601528736(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5601528736_op0;
        break;
        case 1:
            PC = func_5601528736_op1;
        break;
        case 2:
            PC = func_5601528736_op2;
        break;
        case 3:
            PC = func_5601528736_op3;
        break;
        case 4:
            PC = func_5601528736_op4;
        break;
        case 5:
            PC = func_5601528736_op5;
        break;
        case 6:
            PC = func_5601528736_op6;
        break;
        case 7:
            PC = func_5601528736_op7;
        break;
        case 8:
            PC = func_5601528736_op8;
        break;
        case 9:
            PC = func_5601528736_op9;
        break;
    }
}
void func_5601527504(void) {
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
            PC = func_5601527504_op0;
        break;
    }
}
void func_5601528032(void) {
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
            PC = func_5601528032_op0;
        break;
    }
}
void func_5601528096(void) {
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
            PC = func_5601528096_op0;
        break;
        case 1:
            PC = func_5601528096_op1;
        break;
        case 2:
            PC = func_5601528096_op2;
        break;
    }
}
void func_5601528976(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5601528976_op0;
        break;
        case 1:
            PC = func_5601528976_op1;
        break;
    }
}
void func_5601529104(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5601529104_op0;
        break;
        case 1:
            PC = func_5601529104_op1;
        break;
    }
}
void func_5601529328(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5601529328;
}
void func_5601529456(void) {
    extend(61);
    NEXT();
}
void func_5601529584(void) {
    extend(59);
    NEXT();
}
void func_5601529952(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5601529952;
}
void func_5601530080(void) {
    extend(62);
    NEXT();
}
void func_5601528400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5601528400;
}
void func_5601530464(void) {
    extend(60);
    NEXT();
}
void func_5601530592(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5601530592;
}
void func_5601530720(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5601530848(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5601530848;
}
void func_5601530976(void) {
    extend(43);
    NEXT();
}
void func_5601531136(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5601531136;
}
void func_5601531264(void) {
    extend(45);
    NEXT();
}
void func_5601531488(void) {
    extend(120);
    NEXT();
}
void func_5601531616(void) {
    extend(121);
    NEXT();
}
void func_5601531744(void) {
    extend(122);
    NEXT();
}
void func_5601531872(void) {
    extend(97);
    NEXT();
}
void func_5601532000(void) {
    extend(98);
    NEXT();
}
void func_5601532192(void) {
    extend(99);
    NEXT();
}
void func_5601531424(void) {
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
    PC = exp_5601531424;
}
void func_5601529232(void) {
    extend(105);
    extend(102);
    NEXT();
}
void func_5601530208(void) {
    extend(40);
    NEXT();
}
void func_5601530336(void) {
    extend(41);
    NEXT();
}
void func_5601529776(void) {
    extend(123);
    NEXT();
}
void func_5601533680(void) {
    extend(125);
    NEXT();
}
void func_5601533808(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5601533616(void) {
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
    PC = exp_5601533616;
}
void func_5601532848(void) {
    extend(48);
    NEXT();
}
void func_5601529840(void) {
    extend(49);
    NEXT();
}
void func_5601534256(void) {
    extend(50);
    NEXT();
}
void func_5601534384(void) {
    extend(51);
    NEXT();
}
void func_5601534512(void) {
    extend(52);
    NEXT();
}
void func_5601534704(void) {
    extend(53);
    NEXT();
}
void func_5601534832(void) {
    extend(54);
    NEXT();
}
void func_5601534960(void) {
    extend(55);
    NEXT();
}
void func_5601535088(void) {
    extend(56);
    NEXT();
}
void func_5601534640(void) {
    extend(57);
    NEXT();
}
void func_5601535408(void) {
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
    PC = exp_5601535408;
}
void func_5601535536(void) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
}
void func_5601532672(void) {
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
    PC = exp_5601532672;
}
void func_5601532384(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5601532384;
}
void func_5601535808(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5601535808;
}
void func_5601535936(void) {
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
    PC =func_5601528032_op0;
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
