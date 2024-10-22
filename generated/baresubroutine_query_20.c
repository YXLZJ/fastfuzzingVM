#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // buffer for storing text
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

void func_5265971824();
void func_5265982032();
void func_5265982336();
void func_5265982688();
void func_5265982400();
void func_5265981952();
void func_5265981824();
void func_5265983152();
void func_5265982192();
void func_5265982816();
void func_5265982944();
void func_5265983072();
void func_5265983568();
void func_5265983696();
void func_5265983856();
void func_5265984064();
void func_5265984192();
void func_5265984576();
void func_5265983440();
void func_5265984928();
void func_5265982256();
void func_5265985120();
void func_5265985248();
void func_5265985376();
void func_5265985840();
void func_5265983984();
void func_5265986032();
void func_5265986192();
void func_5265986320();
void func_5265986512();
void func_5265986640();
void func_5265986768();
void func_5265986896();
void func_5265986448();
void func_5265984704();
void func_5265983328();
void func_5265987536();
void func_5265987664();
void func_5265988048();
void func_5265988176();
void func_5265988304();
void func_5265988464();
void func_5265988592();
void func_5265988784();
void func_5265988912();
void func_5265989040();
void func_5265989168();
void func_5265988720();
void func_5265987936();
void func_5265985568();
void func_5265985696();
void func_5265987856();
void func_5265989680();
void __attribute__((noinline)) func_5265971824() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(4);
    switch (branch) {
        case 0:
            extend(105);
            extend(100);
            break;
        case 1:
            extend(110);
            extend(97);
            extend(109);
            extend(101);
            break;
        case 2:
            extend(97);
            extend(103);
            extend(101);
            break;
        case 3:
            extend(101);
            extend(109);
            extend(97);
            extend(105);
            extend(108);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    RETURN();
}
void __attribute__((noinline)) func_5265982032() {
    asm goto (
        "cmp x1, #20\n\t"
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
            extend(42);
            break;
        case 1:
            CALL(func_5265984192);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(42);
    RETURN();
}
void __attribute__((noinline)) func_5265982336() {
    asm goto (
        "cmp x1, #20\n\t"
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
            CALL(func_5265983440);
            break;
        case 1:
            CALL(func_5265982256);
            break;
        case 2:
            CALL(func_5265985248);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    extend(61);
    extend(106);
    RETURN();
}
void __attribute__((noinline)) func_5265982688() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265982400() {
    asm goto (
        "cmp x1, #20\n\t"
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
            CALL(func_5265982688);
            break;
        case 1:
            CALL(func_5265984704);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5265981952() {
    asm goto (
        "cmp x1, #20\n\t"
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
            CALL(func_5265983328);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
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
    RETURN();
}
void __attribute__((noinline)) func_5265981824() {
    asm goto (
        "cmp x1, #20\n\t"
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
            CALL(func_5265981952);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
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
    RETURN();
}
void __attribute__((noinline)) func_5265983152() {
    asm goto (
        "cmp x1, #20\n\t"
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
            extend(97);
            break;
        case 1:
            extend(98);
            break;
        case 2:
            extend(99);
            break;
        case 3:
            extend(100);
            break;
        case 4:
            extend(101);
            break;
        case 5:
            extend(102);
            break;
        case 6:
            extend(103);
            break;
        case 7:
            extend(104);
            break;
        case 8:
            extend(105);
            break;
        case 9:
            extend(106);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(106);
    RETURN();
}
void __attribute__((noinline)) func_5265982192() {
    asm goto (
        "cmp x1, #20\n\t"
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
            extend(117);
            extend(115);
            extend(101);
            extend(114);
            extend(115);
            break;
        case 1:
            extend(111);
            extend(114);
            extend(100);
            extend(101);
            extend(114);
            extend(115);
            break;
        case 2:
            extend(112);
            extend(114);
            extend(111);
            extend(100);
            extend(117);
            extend(99);
            extend(116);
            extend(115);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(112);
    extend(114);
    extend(111);
    extend(100);
    extend(117);
    extend(99);
    extend(116);
    extend(115);
    RETURN();
}
void __attribute__((noinline)) func_5265982816() {
    asm goto (
        "cmp x1, #20\n\t"
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
            CALL(func_5265982400);
            break;
        case 1:
            CALL(func_5265983152);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(106);
    RETURN();
}
void __attribute__((noinline)) func_5265982944() {
    asm goto (
        "cmp x1, #20\n\t"
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
            CALL(func_5265987856);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
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
    RETURN();
}
void __attribute__((noinline)) func_5265983072() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(105);
    extend(100);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(105);
    extend(100);
    RETURN();
}
void __attribute__((noinline)) func_5265983568() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    RETURN();
}
void __attribute__((noinline)) func_5265983696() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(97);
    extend(103);
    extend(101);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(97);
    extend(103);
    extend(101);
    RETURN();
}
void __attribute__((noinline)) func_5265983856() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    RETURN();
}
void __attribute__((noinline)) func_5265984064() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265984192() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5265971824);
    extend(44);
    CALL(func_5265982032);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    extend(44);
    extend(42);
    RETURN();
}
void __attribute__((noinline)) func_5265984576() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(44);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(44);
    RETURN();
}
void __attribute__((noinline)) func_5265983440() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5265971824);
    extend(61);
    CALL(func_5265982816);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    extend(61);
    extend(106);
    RETURN();
}
void __attribute__((noinline)) func_5265984928() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265982256() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5265982336);
    extend(65);
    extend(78);
    extend(68);
    CALL(func_5265982336);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
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
    RETURN();
}
void __attribute__((noinline)) func_5265985120() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(65);
    extend(78);
    extend(68);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(65);
    extend(78);
    extend(68);
    RETURN();
}
void __attribute__((noinline)) func_5265985248() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5265982336);
    extend(79);
    extend(82);
    CALL(func_5265982336);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
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
    RETURN();
}
void __attribute__((noinline)) func_5265985376() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(79);
    extend(82);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(79);
    extend(82);
    RETURN();
}
void __attribute__((noinline)) func_5265985840() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265983984() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265986032() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265986192() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265986320() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265986512() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265986640() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265986768() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265986896() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265986448() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265984704() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5265982688);
    CALL(func_5265982400);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5265983328() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    CALL(func_5265982032);
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    CALL(func_5265982192);
    CALL(func_5265982944);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
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
    RETURN();
}
void __attribute__((noinline)) func_5265987536() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    RETURN();
}
void __attribute__((noinline)) func_5265987664() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    RETURN();
}
void __attribute__((noinline)) func_5265988048() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265988176() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265988304() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265988464() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(100);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(100);
    RETURN();
}
void __attribute__((noinline)) func_5265988592() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(101);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(101);
    RETURN();
}
void __attribute__((noinline)) func_5265988784() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(102);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(102);
    RETURN();
}
void __attribute__((noinline)) func_5265988912() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(103);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(103);
    RETURN();
}
void __attribute__((noinline)) func_5265989040() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(104);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(104);
    RETURN();
}
void __attribute__((noinline)) func_5265989168() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265988720() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5265987936() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    RETURN();
}
void __attribute__((noinline)) func_5265985568() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    RETURN();
}
void __attribute__((noinline)) func_5265985696() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(112);
    extend(114);
    extend(111);
    extend(100);
    extend(117);
    extend(99);
    extend(116);
    extend(115);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(112);
    extend(114);
    extend(111);
    extend(100);
    extend(117);
    extend(99);
    extend(116);
    extend(115);
    RETURN();
}
void __attribute__((noinline)) func_5265987856() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(87);
    extend(72);
    extend(69);
    extend(82);
    extend(69);
    CALL(func_5265982336);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
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
    RETURN();
}
void __attribute__((noinline)) func_5265989680() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(87);
    extend(72);
    extend(69);
    extend(82);
    extend(69);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(87);
    extend(72);
    extend(69);
    extend(82);
    extend(69);
    RETURN();
}
int main(void) {
    seed = time(NULL);
    INIT_DEPTH();
    CALL(func_5265981824);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
