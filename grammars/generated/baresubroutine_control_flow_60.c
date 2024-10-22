#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // buffer for storing text
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

void func_4880111136();
void func_4880111504();
void func_4880111920();
void func_4880112016();
void func_4880111792();
void func_4880111712();
void func_4880112416();
void func_4880111632();
void func_4880112144();
void func_4880112672();
void func_4880112336();
void func_4880112608();
void func_4880113024();
void func_4880113392();
void func_4880113232();
void func_4880112960();
void func_4880113152();
void func_4880112208();
void func_4880114256();
void func_4880114384();
void func_4880114512();
void func_4880114640();
void func_4880114768();
void func_4880114896();
void func_4880115280();
void func_4880112864();
void func_4880115472();
void func_4880115600();
void func_4880115728();
void func_4880115920();
void func_4880116048();
void func_4880116176();
void func_4880116304();
void func_4880115856();
void func_4880116880();
void func_4880117008();
void func_4880114048();
void func_4880114176();
void func_4880115184();
void func_4880117360();
void func_4880117488();
void func_4880115024();
void func_4880118256();
void func_4880118384();
void func_4880113520();
void func_4880118032();
void func_4880118704();
void func_4880118832();
void func_4880118960();
void func_4880119088();
void func_4880119280();
void func_4880119408();
void func_4880119536();
void func_4880119664();
void func_4880119216();
void func_4880120432();
void func_4880117680();
void func_4880120256();
void func_4880117856();
void func_4880119920();
void func_4880120048();
void func_4880120560();
void func_4880121408();
void func_4880121536();
void func_4880120688();
void func_4880116368();
void func_4880121344();
void func_4880116736();
void __attribute__((noinline)) func_4880111136() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_4880112960);
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
void __attribute__((noinline)) func_4880111504() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_4880114256);
            break;
        case 1:
            CALL(func_4880114512);
            break;
        case 2:
            CALL(func_4880114768);
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
void __attribute__((noinline)) func_4880111920() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880112016() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_4880116880);
            break;
        case 1:
            CALL(func_4880114048);
            break;
        case 2:
            CALL(func_4880113392);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4880111792() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_4880115184);
            break;
        case 1:
            CALL(func_4880112144);
            break;
        case 2:
            CALL(func_4880112416);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4880111712() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_4880115024);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4880112416() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(9);
    switch (branch) {
        case 0:
            extend(105);
            break;
        case 1:
            extend(106);
            break;
        case 2:
            extend(107);
            break;
        case 3:
            extend(120);
            break;
        case 4:
            extend(121);
            break;
        case 5:
            extend(122);
            break;
        case 6:
            extend(97);
            break;
        case 7:
            extend(98);
            break;
        case 8:
            extend(99);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4880111632() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_4880119216);
            break;
        case 1:
            CALL(func_4880117680);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4880112144() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_4880111920);
            break;
        case 1:
            CALL(func_4880117856);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_4880112672() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_4880119920);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
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
    RETURN();
}
void __attribute__((noinline)) func_4880112336() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_4880120560);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4880112608() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_4880112336);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4880113024() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(5);
    switch (branch) {
        case 0:
            CALL(func_4880111632);
            break;
        case 1:
            CALL(func_4880113232);
            break;
        case 2:
            CALL(func_4880111712);
            break;
        case 3:
            CALL(func_4880111136);
            break;
        case 4:
            CALL(func_4880112672);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
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
    RETURN();
}
void __attribute__((noinline)) func_4880113392() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_4880121408);
            break;
        case 1:
            CALL(func_4880120688);
            break;
        case 2:
            CALL(func_4880111792);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4880113232() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_4880121344);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4880112960() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4880112416);
    extend(61);
    CALL(func_4880112016);
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
void __attribute__((noinline)) func_4880113152() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880112208() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880114256() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4880112016);
    extend(62);
    CALL(func_4880112016);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(62);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4880114384() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880114512() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4880112016);
    extend(60);
    CALL(func_4880112016);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(60);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4880114640() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880114768() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4880112016);
    extend(61);
    extend(61);
    CALL(func_4880112016);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(61);
    extend(61);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4880114896() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880115280() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880112864() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880115472() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880115600() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880115728() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880115920() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880116048() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880116176() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880116304() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880115856() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880116880() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4880112016);
    extend(43);
    CALL(func_4880113392);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(43);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4880117008() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880114048() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4880112016);
    extend(45);
    CALL(func_4880113392);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(45);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4880114176() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880115184() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(40);
    CALL(func_4880112016);
    extend(41);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(40);
    extend(99);
    extend(41);
    RETURN();
}
void __attribute__((noinline)) func_4880117360() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880117488() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880115024() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    extend(40);
    CALL(func_4880111136);
    extend(59);
    CALL(func_4880111504);
    extend(59);
    CALL(func_4880111136);
    extend(41);
    extend(123);
    CALL(func_4880112336);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4880118256() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    RETURN();
}
void __attribute__((noinline)) func_4880118384() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880113520() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880118032() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(105);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(105);
    RETURN();
}
void __attribute__((noinline)) func_4880118704() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(106);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(106);
    RETURN();
}
void __attribute__((noinline)) func_4880118832() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(107);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(107);
    RETURN();
}
void __attribute__((noinline)) func_4880118960() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880119088() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880119280() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880119408() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880119536() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880119664() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880119216() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    extend(40);
    CALL(func_4880111504);
    extend(41);
    extend(123);
    CALL(func_4880112336);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4880120432() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    RETURN();
}
void __attribute__((noinline)) func_4880117680() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    extend(40);
    CALL(func_4880111504);
    extend(41);
    extend(123);
    CALL(func_4880112336);
    extend(125);
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    extend(123);
    CALL(func_4880112336);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4880120256() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880117856() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4880111920);
    CALL(func_4880112144);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_4880119920() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    extend(40);
    CALL(func_4880112016);
    extend(41);
    extend(59);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
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
    RETURN();
}
void __attribute__((noinline)) func_4880120048() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    RETURN();
}
void __attribute__((noinline)) func_4880120560() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4880113024);
    CALL(func_4880112336);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4880121408() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4880113392);
    extend(42);
    CALL(func_4880111792);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(42);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4880121536() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_4880120688() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4880113392);
    extend(47);
    CALL(func_4880111792);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(47);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4880116368() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(47);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(47);
    RETURN();
}
void __attribute__((noinline)) func_4880121344() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(32);
    extend(119);
    extend(104);
    extend(105);
    extend(108);
    extend(101);
    extend(32);
    extend(40);
    CALL(func_4880111504);
    extend(41);
    extend(123);
    CALL(func_4880112336);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4880116736() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(32);
    extend(119);
    extend(104);
    extend(105);
    extend(108);
    extend(101);
    extend(32);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(32);
    extend(119);
    extend(104);
    extend(105);
    extend(108);
    extend(101);
    extend(32);
    RETURN();
}
int main(void) {
    seed = time(NULL);
    INIT_DEPTH();
    CALL(func_4880112608);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
