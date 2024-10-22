#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // buffer for storing text
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

// Remove depth variable, we will use x1 instead
// int depth = 0;

// Initialize x1 to 0
#define INIT_DEPTH() \
    __asm__ volatile ( \
        "mov x1, #0\n\t" \
        : \
        : \
        : "x1" \
    )

// Modify CALL macro to operate on x1
#define CALL(func) \
    __asm__ volatile (  \
        "add x1, x1, #1\n\t"  /* depth++ */ \
        "bl _" #func "\n\t" \
        : \
        : \
        : "x1", "x30", "memory" \
    )

// Modify RETURN macro to operate on x1
#define RETURN() \
    __asm__ volatile ( \
        "sub x1, x1, #1\n\t"  /* depth-- */ \
        : \
        : \
        : "x1" \
    ); \
    return;

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

bool endless = false;

void func_5760901856();
void func_5760911296();
void func_5760911216();
void func_5760911136();
void func_5760911760();
void func_5760910864();
void func_5760912288();
void func_5760911056();
void func_5760911584();
void func_5760911648();
void func_5760912528();
void func_5760912656();
void func_5760912880();
void func_5760913008();
void func_5760913136();
void func_5760913504();
void func_5760913632();
void func_5760911952();
void func_5760914016();
void func_5760914144();
void func_5760914272();
void func_5760914400();
void func_5760914528();
void func_5760914688();
void func_5760914816();
void func_5760915040();
void func_5760915168();
void func_5760915296();
void func_5760915424();
void func_5760915552();
void func_5760915744();
void func_5760914976();
void func_5760912784();
void func_5760913760();
void func_5760913888();
void func_5760913328();
void func_5760917232();
void func_5760917360();
void func_5760917168();
void func_5760916400();
void func_5760913392();
void func_5760917808();
void func_5760917936();
void func_5760918064();
void func_5760918256();
void func_5760918384();
void func_5760918512();
void func_5760918640();
void func_5760918192();
void func_5760918960();
void func_5760919088();
void func_5760916224();
void func_5760915936();
void func_5760919360();
void func_5760919488();
void __attribute__((noinline)) func_5760901856() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(1);
    switch (branch) {
        case 0:
            CALL(func_5760912880);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(61);
    extend(99);
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5760911296() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(3);
    switch (branch) {
        case 0:
            CALL(func_5760913504);
            break;
        case 1:
            CALL(func_5760911952);
            break;
        case 2:
            CALL(func_5760914144);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(61);
    extend(61);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5760911216() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(3);
    switch (branch) {
        case 0:
            CALL(func_5760914400);
            break;
        case 1:
            CALL(func_5760912656);
            break;
        case 2:
            CALL(func_5760914688);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5760911136() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(2);
    switch (branch) {
        case 0:
            CALL(func_5760912288);
            break;
        case 1:
            CALL(func_5760911760);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5760911760() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(6);
    switch (branch) {
        case 0:
            extend(120);
            break;
        case 1:
            extend(121);
            break;
        case 2:
            extend(122);
            break;
        case 3:
            extend(97);
            break;
        case 4:
            extend(98);
            break;
        case 5:
            extend(99);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5760910864() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(2);
    switch (branch) {
        case 0:
            CALL(func_5760914976);
            break;
        case 1:
            CALL(func_5760917168);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
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
    RETURN();
}
void __attribute__((noinline)) func_5760912288() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(10);
    switch (branch) {
        case 0:
            extend(48);
            break;
        case 1:
            extend(49);
            break;
        case 2:
            extend(50);
            break;
        case 3:
            extend(51);
            break;
        case 4:
            extend(52);
            break;
        case 5:
            extend(53);
            break;
        case 6:
            extend(54);
            break;
        case 7:
            extend(55);
            break;
        case 8:
            extend(56);
            break;
        case 9:
            extend(57);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5760911056() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(1);
    switch (branch) {
        case 0:
            CALL(func_5760918960);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(40);
    extend(99);
    extend(41);
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5760911584() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(1);
    switch (branch) {
        case 0:
            CALL(func_5760910864);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
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
    RETURN();
}
void __attribute__((noinline)) func_5760911648() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(3);
    switch (branch) {
        case 0:
            CALL(func_5760910864);
            break;
        case 1:
            CALL(func_5760901856);
            break;
        case 2:
            CALL(func_5760911056);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(40);
    extend(99);
    extend(41);
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5760912528() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(2);
    switch (branch) {
        case 0:
            CALL(func_5760916224);
            break;
        case 1:
            CALL(func_5760915936);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5760912656() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(2);
    switch (branch) {
        case 0:
            CALL(func_5760911136);
            break;
        case 1:
            CALL(func_5760919360);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5760912880() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5760911760);
    extend(61);
    CALL(func_5760911216);
    extend(59);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(61);
    extend(99);
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5760913008() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(61);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(61);
    RETURN();
}
void __attribute__((noinline)) func_5760913136() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(59);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5760913504() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5760911216);
    extend(62);
    CALL(func_5760911216);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(62);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5760913632() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(62);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(62);
    RETURN();
}
void __attribute__((noinline)) func_5760911952() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5760911216);
    extend(60);
    CALL(func_5760911216);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(60);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5760914016() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(60);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(60);
    RETURN();
}
void __attribute__((noinline)) func_5760914144() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5760911216);
    extend(61);
    extend(61);
    CALL(func_5760911216);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(61);
    extend(61);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5760914272() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(61);
    extend(61);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(61);
    extend(61);
    RETURN();
}
void __attribute__((noinline)) func_5760914400() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5760912656);
    extend(43);
    CALL(func_5760911216);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(43);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5760914528() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(43);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(43);
    RETURN();
}
void __attribute__((noinline)) func_5760914688() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5760912656);
    extend(45);
    CALL(func_5760911216);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(45);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5760914816() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(45);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(45);
    RETURN();
}
void __attribute__((noinline)) func_5760915040() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(120);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(120);
    RETURN();
}
void __attribute__((noinline)) func_5760915168() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(121);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(121);
    RETURN();
}
void __attribute__((noinline)) func_5760915296() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(122);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(122);
    RETURN();
}
void __attribute__((noinline)) func_5760915424() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(97);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(97);
    RETURN();
}
void __attribute__((noinline)) func_5760915552() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(98);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(98);
    RETURN();
}
void __attribute__((noinline)) func_5760915744() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(99);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5760914976() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(105);
    extend(102);
    extend(40);
    CALL(func_5760911296);
    extend(41);
    extend(123);
    CALL(func_5760912528);
    extend(125);
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    extend(123);
    CALL(func_5760912528);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
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
    RETURN();
}
void __attribute__((noinline)) func_5760912784() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(105);
    extend(102);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(105);
    extend(102);
    RETURN();
}
void __attribute__((noinline)) func_5760913760() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(40);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(40);
    RETURN();
}
void __attribute__((noinline)) func_5760913888() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(41);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(41);
    RETURN();
}
void __attribute__((noinline)) func_5760913328() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(123);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(123);
    RETURN();
}
void __attribute__((noinline)) func_5760917232() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5760917360() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    RETURN();
}
void __attribute__((noinline)) func_5760917168() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(105);
    extend(102);
    extend(40);
    CALL(func_5760911296);
    extend(41);
    extend(123);
    CALL(func_5760912528);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
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
    RETURN();
}
void __attribute__((noinline)) func_5760916400() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(48);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(48);
    RETURN();
}
void __attribute__((noinline)) func_5760913392() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(49);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(49);
    RETURN();
}
void __attribute__((noinline)) func_5760917808() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(50);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(50);
    RETURN();
}
void __attribute__((noinline)) func_5760917936() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(51);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(51);
    RETURN();
}
void __attribute__((noinline)) func_5760918064() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(52);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(52);
    RETURN();
}
void __attribute__((noinline)) func_5760918256() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(53);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(53);
    RETURN();
}
void __attribute__((noinline)) func_5760918384() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(54);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(54);
    RETURN();
}
void __attribute__((noinline)) func_5760918512() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(55);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(55);
    RETURN();
}
void __attribute__((noinline)) func_5760918640() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(56);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(56);
    RETURN();
}
void __attribute__((noinline)) func_5760918192() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(57);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5760918960() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(40);
    CALL(func_5760911216);
    extend(41);
    extend(59);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(40);
    extend(99);
    extend(41);
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5760919088() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    RETURN();
}
void __attribute__((noinline)) func_5760916224() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5760911648);
    CALL(func_5760912528);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(40);
    extend(99);
    extend(41);
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5760915936() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5760919360() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5760911136);
    extend(42);
    CALL(func_5760912656);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(42);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5760919488() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(42);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(42);
    RETURN();
}
int main(void) {
    seed = time(NULL);
    INIT_DEPTH();
    CALL(func_5760911584);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
