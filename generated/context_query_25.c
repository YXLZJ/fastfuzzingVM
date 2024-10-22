#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 25
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
void func_5425355376(void);
void func_5425365584(void);
void func_5425365888(void);
void func_5425366240(void);
void func_5425365952(void);
void func_5425365504(void);
void func_5425365376(void);
void func_5425366704(void);
void func_5425365744(void);
void func_5425366368(void);
void func_5425366496(void);
void func_5425366624(void);
void func_5425367120(void);
void func_5425367248(void);
void func_5425367408(void);
void func_5425367616(void);
void func_5425367744(void);
void func_5425368128(void);
void func_5425366992(void);
void func_5425368480(void);
void func_5425365808(void);
void func_5425368672(void);
void func_5425368800(void);
void func_5425368928(void);
void func_5425369392(void);
void func_5425367536(void);
void func_5425369584(void);
void func_5425369744(void);
void func_5425369872(void);
void func_5425370064(void);
void func_5425370192(void);
void func_5425370320(void);
void func_5425370448(void);
void func_5425370000(void);
void func_5425368256(void);
void func_5425366880(void);
void func_5425371088(void);
void func_5425371216(void);
void func_5425371600(void);
void func_5425371728(void);
void func_5425371856(void);
void func_5425372016(void);
void func_5425372144(void);
void func_5425372336(void);
void func_5425372464(void);
void func_5425372592(void);
void func_5425372720(void);
void func_5425372272(void);
void func_5425371488(void);
void func_5425369120(void);
void func_5425369248(void);
void func_5425371408(void);
void func_5425373232(void);
void HALT(void);
void RETURN(void);
Inst func_5425355376_op0[2] = {func_5425366624, RETURN};
Inst func_5425355376_op1[2] = {func_5425367120, RETURN};
Inst func_5425355376_op2[2] = {func_5425367248, RETURN};
Inst func_5425355376_op3[2] = {func_5425367408, RETURN};
Inst func_5425365584_op0[2] = {func_5425367616, RETURN};
Inst func_5425365584_op1[2] = {func_5425367744, RETURN};
Inst func_5425365888_op0[2] = {func_5425366992, RETURN};
Inst func_5425365888_op1[2] = {func_5425365808, RETURN};
Inst func_5425365888_op2[2] = {func_5425368800, RETURN};
Inst func_5425366240_op0[2] = {func_5425369392, RETURN};
Inst func_5425366240_op1[2] = {func_5425367536, RETURN};
Inst func_5425366240_op2[2] = {func_5425369584, RETURN};
Inst func_5425366240_op3[2] = {func_5425369744, RETURN};
Inst func_5425366240_op4[2] = {func_5425369872, RETURN};
Inst func_5425366240_op5[2] = {func_5425370064, RETURN};
Inst func_5425366240_op6[2] = {func_5425370192, RETURN};
Inst func_5425366240_op7[2] = {func_5425370320, RETURN};
Inst func_5425366240_op8[2] = {func_5425370448, RETURN};
Inst func_5425366240_op9[2] = {func_5425370000, RETURN};
Inst func_5425365952_op0[2] = {func_5425366240, RETURN};
Inst func_5425365952_op1[2] = {func_5425368256, RETURN};
Inst func_5425365504_op0[2] = {func_5425366880, RETURN};
Inst func_5425365376_op0[2] = {func_5425365504, HALT};
Inst func_5425366704_op0[2] = {func_5425371600, RETURN};
Inst func_5425366704_op1[2] = {func_5425371728, RETURN};
Inst func_5425366704_op2[2] = {func_5425371856, RETURN};
Inst func_5425366704_op3[2] = {func_5425372016, RETURN};
Inst func_5425366704_op4[2] = {func_5425372144, RETURN};
Inst func_5425366704_op5[2] = {func_5425372336, RETURN};
Inst func_5425366704_op6[2] = {func_5425372464, RETURN};
Inst func_5425366704_op7[2] = {func_5425372592, RETURN};
Inst func_5425366704_op8[2] = {func_5425372720, RETURN};
Inst func_5425366704_op9[2] = {func_5425372272, RETURN};
Inst func_5425365744_op0[2] = {func_5425371488, RETURN};
Inst func_5425365744_op1[2] = {func_5425369120, RETURN};
Inst func_5425365744_op2[2] = {func_5425369248, RETURN};
Inst func_5425366368_op0[2] = {func_5425365952, RETURN};
Inst func_5425366368_op1[2] = {func_5425366704, RETURN};
Inst func_5425366496_op0[2] = {func_5425371408, RETURN};
Inst exp_5425367744[4] = {func_5425355376, func_5425368128, func_5425365584, RETURN};
Inst exp_5425366992[4] = {func_5425355376, func_5425368480, func_5425366368, RETURN};
Inst exp_5425365808[4] = {func_5425365888, func_5425368672, func_5425365888, RETURN};
Inst exp_5425368800[4] = {func_5425365888, func_5425368928, func_5425365888, RETURN};
Inst exp_5425368256[3] = {func_5425366240, func_5425365952, RETURN};
Inst exp_5425366880[6] = {func_5425371088, func_5425365584, func_5425371216, func_5425365744, func_5425366496, RETURN};
Inst exp_5425371408[3] = {func_5425373232, func_5425365888, RETURN};
void func_5425355376(void) {
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
            PC = func_5425355376_op0;
        break;
        case 1:
            PC = func_5425355376_op1;
        break;
        case 2:
            PC = func_5425355376_op2;
        break;
        case 3:
            PC = func_5425355376_op3;
        break;
    }
}
void func_5425365584(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5425365584_op0;
        break;
        case 1:
            PC = func_5425365584_op1;
        break;
    }
}
void func_5425365888(void) {
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
            PC = func_5425365888_op0;
        break;
        case 1:
            PC = func_5425365888_op1;
        break;
        case 2:
            PC = func_5425365888_op2;
        break;
    }
}
void func_5425366240(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5425366240_op0;
        break;
        case 1:
            PC = func_5425366240_op1;
        break;
        case 2:
            PC = func_5425366240_op2;
        break;
        case 3:
            PC = func_5425366240_op3;
        break;
        case 4:
            PC = func_5425366240_op4;
        break;
        case 5:
            PC = func_5425366240_op5;
        break;
        case 6:
            PC = func_5425366240_op6;
        break;
        case 7:
            PC = func_5425366240_op7;
        break;
        case 8:
            PC = func_5425366240_op8;
        break;
        case 9:
            PC = func_5425366240_op9;
        break;
    }
}
void func_5425365952(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5425365952_op0;
        break;
        case 1:
            PC = func_5425365952_op1;
        break;
    }
}
void func_5425365504(void) {
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
            PC = func_5425365504_op0;
        break;
    }
}
void func_5425365376(void) {
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
            PC = func_5425365376_op0;
        break;
    }
}
void func_5425366704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5425366704_op0;
        break;
        case 1:
            PC = func_5425366704_op1;
        break;
        case 2:
            PC = func_5425366704_op2;
        break;
        case 3:
            PC = func_5425366704_op3;
        break;
        case 4:
            PC = func_5425366704_op4;
        break;
        case 5:
            PC = func_5425366704_op5;
        break;
        case 6:
            PC = func_5425366704_op6;
        break;
        case 7:
            PC = func_5425366704_op7;
        break;
        case 8:
            PC = func_5425366704_op8;
        break;
        case 9:
            PC = func_5425366704_op9;
        break;
    }
}
void func_5425365744(void) {
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
            PC = func_5425365744_op0;
        break;
        case 1:
            PC = func_5425365744_op1;
        break;
        case 2:
            PC = func_5425365744_op2;
        break;
    }
}
void func_5425366368(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5425366368_op0;
        break;
        case 1:
            PC = func_5425366368_op1;
        break;
    }
}
void func_5425366496(void) {
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
            PC = func_5425366496_op0;
        break;
    }
}
void func_5425366624(void) {
    extend(105);
    extend(100);
    NEXT();
}
void func_5425367120(void) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
}
void func_5425367248(void) {
    extend(97);
    extend(103);
    extend(101);
    NEXT();
}
void func_5425367408(void) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
}
void func_5425367616(void) {
    extend(42);
    NEXT();
}
void func_5425367744(void) {
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
    PC = exp_5425367744;
}
void func_5425368128(void) {
    extend(44);
    NEXT();
}
void func_5425366992(void) {
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
    PC = exp_5425366992;
}
void func_5425368480(void) {
    extend(61);
    NEXT();
}
void func_5425365808(void) {
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
    PC = exp_5425365808;
}
void func_5425368672(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_5425368800(void) {
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
    PC = exp_5425368800;
}
void func_5425368928(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_5425369392(void) {
    extend(48);
    NEXT();
}
void func_5425367536(void) {
    extend(49);
    NEXT();
}
void func_5425369584(void) {
    extend(50);
    NEXT();
}
void func_5425369744(void) {
    extend(51);
    NEXT();
}
void func_5425369872(void) {
    extend(52);
    NEXT();
}
void func_5425370064(void) {
    extend(53);
    NEXT();
}
void func_5425370192(void) {
    extend(54);
    NEXT();
}
void func_5425370320(void) {
    extend(55);
    NEXT();
}
void func_5425370448(void) {
    extend(56);
    NEXT();
}
void func_5425370000(void) {
    extend(57);
    NEXT();
}
void func_5425368256(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5425368256;
}
void func_5425366880(void) {
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
    PC = exp_5425366880;
}
void func_5425371088(void) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
}
void func_5425371216(void) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
}
void func_5425371600(void) {
    extend(97);
    NEXT();
}
void func_5425371728(void) {
    extend(98);
    NEXT();
}
void func_5425371856(void) {
    extend(99);
    NEXT();
}
void func_5425372016(void) {
    extend(100);
    NEXT();
}
void func_5425372144(void) {
    extend(101);
    NEXT();
}
void func_5425372336(void) {
    extend(102);
    NEXT();
}
void func_5425372464(void) {
    extend(103);
    NEXT();
}
void func_5425372592(void) {
    extend(104);
    NEXT();
}
void func_5425372720(void) {
    extend(105);
    NEXT();
}
void func_5425372272(void) {
    extend(106);
    NEXT();
}
void func_5425371488(void) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_5425369120(void) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_5425369248(void) {
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
void func_5425371408(void) {
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
    PC = exp_5425371408;
}
void func_5425373232(void) {
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
    PC =func_5425365376_op0;
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
