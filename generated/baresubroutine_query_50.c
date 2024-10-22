#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // buffer for storing text
#define MAX_DEPTH 50
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

void func_5559573104();
void func_5559583312();
void func_5559583616();
void func_5559583968();
void func_5559583680();
void func_5559583232();
void func_5559583104();
void func_5559584432();
void func_5559583472();
void func_5559584096();
void func_5559584224();
void func_5559584352();
void func_5559584848();
void func_5559584976();
void func_5559585136();
void func_5559585344();
void func_5559585472();
void func_5559585856();
void func_5559584720();
void func_5559586208();
void func_5559583536();
void func_5559586400();
void func_5559586528();
void func_5559586656();
void func_5559587120();
void func_5559585264();
void func_5559587312();
void func_5559587472();
void func_5559587600();
void func_5559587792();
void func_5559587920();
void func_5559588048();
void func_5559588176();
void func_5559587728();
void func_5559585984();
void func_5559584608();
void func_5559588816();
void func_5559588944();
void func_5559589328();
void func_5559589456();
void func_5559589584();
void func_5559589744();
void func_5559589872();
void func_5559590064();
void func_5559590192();
void func_5559590320();
void func_5559590448();
void func_5559590000();
void func_5559589216();
void func_5559586848();
void func_5559586976();
void func_5559589136();
void func_5559590960();
void __attribute__((noinline)) func_5559573104() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559583312() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5559585472);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(42);
    RETURN();
}
void __attribute__((noinline)) func_5559583616() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5559584720);
            break;
        case 1:
            CALL(func_5559583536);
            break;
        case 2:
            CALL(func_5559586528);
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
void __attribute__((noinline)) func_5559583968() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559583680() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5559583968);
            break;
        case 1:
            CALL(func_5559585984);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5559583232() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5559584608);
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
void __attribute__((noinline)) func_5559583104() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5559583232);
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
void __attribute__((noinline)) func_5559584432() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559583472() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559584096() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5559583680);
            break;
        case 1:
            CALL(func_5559584432);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(106);
    RETURN();
}
void __attribute__((noinline)) func_5559584224() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5559589136);
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
void __attribute__((noinline)) func_5559584352() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559584848() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559584976() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559585136() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559585344() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559585472() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5559573104);
    extend(44);
    CALL(func_5559583312);
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
void __attribute__((noinline)) func_5559585856() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559584720() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5559573104);
    extend(61);
    CALL(func_5559584096);
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
void __attribute__((noinline)) func_5559586208() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559583536() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5559583616);
    extend(65);
    extend(78);
    extend(68);
    CALL(func_5559583616);
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
void __attribute__((noinline)) func_5559586400() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559586528() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5559583616);
    extend(79);
    extend(82);
    CALL(func_5559583616);
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
void __attribute__((noinline)) func_5559586656() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559587120() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559585264() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559587312() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559587472() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559587600() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559587792() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559587920() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559588048() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559588176() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559587728() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559585984() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5559583968);
    CALL(func_5559583680);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5559584608() {
    asm goto (
        "cmp x1, #50\n\t"
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
    CALL(func_5559583312);
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    CALL(func_5559583472);
    CALL(func_5559584224);
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
void __attribute__((noinline)) func_5559588816() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559588944() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559589328() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559589456() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559589584() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559589744() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559589872() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559590064() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559590192() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559590320() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559590448() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559590000() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559589216() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559586848() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559586976() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5559589136() {
    asm goto (
        "cmp x1, #50\n\t"
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
    CALL(func_5559583616);
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
void __attribute__((noinline)) func_5559590960() {
    asm goto (
        "cmp x1, #50\n\t"
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
    CALL(func_5559583104);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
