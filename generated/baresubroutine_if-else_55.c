#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // buffer for storing text
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

void func_5299528416();
void func_5299537856();
void func_5299537776();
void func_5299537696();
void func_5299538320();
void func_5299537424();
void func_5299538848();
void func_5299537616();
void func_5299538144();
void func_5299538208();
void func_5299539088();
void func_5299539216();
void func_5299539440();
void func_5299539568();
void func_5299539696();
void func_5299540064();
void func_5299540192();
void func_5299538512();
void func_5299540576();
void func_5299540704();
void func_5299540832();
void func_5299540960();
void func_5299541088();
void func_5299541248();
void func_5299541376();
void func_5299541600();
void func_5299541728();
void func_5299541856();
void func_5299541984();
void func_5299542112();
void func_5299542304();
void func_5299541536();
void func_5299539344();
void func_5299540320();
void func_5299540448();
void func_5299539888();
void func_5299543792();
void func_5299543920();
void func_5299543728();
void func_5299542960();
void func_5299539952();
void func_5299544368();
void func_5299544496();
void func_5299544624();
void func_5299544816();
void func_5299544944();
void func_5299545072();
void func_5299545200();
void func_5299544752();
void func_5299545520();
void func_5299545648();
void func_5299542784();
void func_5299542496();
void func_5299545920();
void func_5299546048();
void __attribute__((noinline)) func_5299528416() {
    asm goto (
        "cmp x1, #55\n\t"
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
            CALL(func_5299539440);
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
void __attribute__((noinline)) func_5299537856() {
    asm goto (
        "cmp x1, #55\n\t"
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
            CALL(func_5299540064);
            break;
        case 1:
            CALL(func_5299538512);
            break;
        case 2:
            CALL(func_5299540704);
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
void __attribute__((noinline)) func_5299537776() {
    asm goto (
        "cmp x1, #55\n\t"
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
            CALL(func_5299540960);
            break;
        case 1:
            CALL(func_5299539216);
            break;
        case 2:
            CALL(func_5299541248);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5299537696() {
    asm goto (
        "cmp x1, #55\n\t"
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
            CALL(func_5299538848);
            break;
        case 1:
            CALL(func_5299538320);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5299538320() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299537424() {
    asm goto (
        "cmp x1, #55\n\t"
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
            CALL(func_5299541536);
            break;
        case 1:
            CALL(func_5299543728);
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
void __attribute__((noinline)) func_5299538848() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299537616() {
    asm goto (
        "cmp x1, #55\n\t"
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
            CALL(func_5299545520);
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
void __attribute__((noinline)) func_5299538144() {
    asm goto (
        "cmp x1, #55\n\t"
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
            CALL(func_5299537424);
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
void __attribute__((noinline)) func_5299538208() {
    asm goto (
        "cmp x1, #55\n\t"
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
            CALL(func_5299537424);
            break;
        case 1:
            CALL(func_5299528416);
            break;
        case 2:
            CALL(func_5299537616);
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
void __attribute__((noinline)) func_5299539088() {
    asm goto (
        "cmp x1, #55\n\t"
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
            CALL(func_5299542784);
            break;
        case 1:
            CALL(func_5299542496);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5299539216() {
    asm goto (
        "cmp x1, #55\n\t"
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
            CALL(func_5299537696);
            break;
        case 1:
            CALL(func_5299545920);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5299539440() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5299538320);
    extend(61);
    CALL(func_5299537776);
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
void __attribute__((noinline)) func_5299539568() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299539696() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299540064() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5299537776);
    extend(62);
    CALL(func_5299537776);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(62);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5299540192() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299538512() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5299537776);
    extend(60);
    CALL(func_5299537776);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(60);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5299540576() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299540704() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5299537776);
    extend(61);
    extend(61);
    CALL(func_5299537776);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(61);
    extend(61);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5299540832() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299540960() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5299539216);
    extend(43);
    CALL(func_5299537776);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(43);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5299541088() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299541248() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5299539216);
    extend(45);
    CALL(func_5299537776);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(45);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5299541376() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299541600() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299541728() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299541856() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299541984() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299542112() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299542304() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299541536() {
    asm goto (
        "cmp x1, #55\n\t"
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
    CALL(func_5299537856);
    extend(41);
    extend(123);
    CALL(func_5299539088);
    extend(125);
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    extend(123);
    CALL(func_5299539088);
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
void __attribute__((noinline)) func_5299539344() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299540320() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299540448() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299539888() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299543792() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299543920() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299543728() {
    asm goto (
        "cmp x1, #55\n\t"
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
    CALL(func_5299537856);
    extend(41);
    extend(123);
    CALL(func_5299539088);
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
void __attribute__((noinline)) func_5299542960() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299539952() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299544368() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299544496() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299544624() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299544816() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299544944() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299545072() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299545200() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299544752() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299545520() {
    asm goto (
        "cmp x1, #55\n\t"
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
    CALL(func_5299537776);
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
void __attribute__((noinline)) func_5299545648() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299542784() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5299538208);
    CALL(func_5299539088);
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
void __attribute__((noinline)) func_5299542496() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5299545920() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5299537696);
    extend(42);
    CALL(func_5299539216);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(42);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5299546048() {
    asm goto (
        "cmp x1, #55\n\t"
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
    CALL(func_5299538144);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
