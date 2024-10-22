#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // buffer for storing text
#define MAX_DEPTH 45
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

void func_5065693520();
void func_5065710032();
void func_5065710240();
void func_5065710448();
void func_5065709904();
void func_5065711104();
void func_5065711232();
void func_5065711008();
void func_5065710784();
void func_5065712800();
void func_5065711920();
void func_5065711360();
void func_5065711488();
void func_5065711616();
void func_5065711744();
void func_5065712048();
void func_5065710704();
void func_5065710848();
void func_5065712496();
void func_5065712624();
void func_5065712928();
void func_5065713056();
void func_5065713584();
void func_5065713264();
void func_5065713184();
void func_5065713456();
void func_5065713776();
void func_5065713904();
void func_5065714400();
void func_5065714528();
void func_5065714656();
void func_5065714816();
void func_5065714944();
void func_5065712304();
void func_5065715520();
void func_5065715648();
void func_5065715776();
void func_5065712240();
void func_5065714096();
void func_5065716096();
void func_5065716224();
void func_5065716352();
void func_5065717824();
void func_5065717952();
void func_5065718080();
void func_5065718240();
void func_5065718368();
void func_5065718560();
void func_5065718688();
void func_5065718816();
void func_5065718944();
void func_5065718496();
void func_5065719264();
void func_5065719392();
void func_5065719520();
void func_5065719648();
void func_5065719776();
void func_5065719904();
void func_5065720032();
void func_5065719072();
void func_5065720416();
void func_5065720544();
void func_5065720672();
void func_5065720800();
void func_5065720928();
void func_5065715072();
void func_5065715200();
void func_5065715328();
void func_5065715456();
void func_5065721056();
void func_5065721184();
void func_5065721312();
void func_5065721440();
void func_5065721568();
void func_5065721696();
void func_5065720160();
void func_5065720288();
void func_5065722336();
void func_5065722464();
void func_5065722592();
void func_5065722720();
void func_5065722848();
void func_5065722976();
void func_5065723104();
void func_5065723232();
void func_5065723360();
void func_5065723488();
void func_5065723616();
void func_5065723744();
void func_5065723872();
void func_5065724000();
void func_5065724128();
void func_5065724256();
void func_5065724384();
void func_5065716912();
void func_5065717072();
void func_5065717200();
void func_5065717392();
void func_5065717520();
void func_5065717328();
void func_5065724576();
void func_5065724704();
void func_5065724832();
void func_5065716480();
void func_5065716608();
void func_5065714304();
void func_5065724960();
void func_5065725088();
void func_5065725216();
void func_5065714224();
void func_5065725344();
void func_5065726000();
void func_5065726144();
void func_5065726304();
void func_5065726432();
void func_5065726624();
void func_5065726752();
void func_5065726880();
void func_5065727008();
void func_5065726560();
void func_5065727328();
void func_5065725632();
void __attribute__((noinline)) func_5065693520() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065713264);
            break;
        case 1:
            CALL(func_5065712624);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5065710032() {
    asm goto (
        "cmp x1, #45\n\t"
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
            extend(46);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5065710240() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065712928);
            break;
        case 1:
            CALL(func_5065711616);
            break;
        case 2:
            CALL(func_5065711232);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5065710448() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065711488);
            break;
        case 1:
            CALL(func_5065713456);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(92);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5065709904() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065713904);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5065711104() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065711232() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065710784);
            break;
        case 1:
            CALL(func_5065710032);
            break;
        case 2:
            CALL(func_5065711008);
            break;
        case 3:
            CALL(func_5065710448);
            break;
        case 4:
            CALL(func_5065712496);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5065711008() {
    asm goto (
        "cmp x1, #45\n\t"
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
            extend(36);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(36);
    RETURN();
}
void __attribute__((noinline)) func_5065710784() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065716096);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(40);
    extend(46);
    extend(41);
    RETURN();
}
void __attribute__((noinline)) func_5065712800() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(52);
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
        case 10:
            extend(107);
            break;
        case 11:
            extend(108);
            break;
        case 12:
            extend(109);
            break;
        case 13:
            extend(110);
            break;
        case 14:
            extend(111);
            break;
        case 15:
            extend(112);
            break;
        case 16:
            extend(113);
            break;
        case 17:
            extend(114);
            break;
        case 18:
            extend(115);
            break;
        case 19:
            extend(116);
            break;
        case 20:
            extend(117);
            break;
        case 21:
            extend(118);
            break;
        case 22:
            extend(119);
            break;
        case 23:
            extend(120);
            break;
        case 24:
            extend(121);
            break;
        case 25:
            extend(122);
            break;
        case 26:
            extend(65);
            break;
        case 27:
            extend(66);
            break;
        case 28:
            extend(67);
            break;
        case 29:
            extend(68);
            break;
        case 30:
            extend(69);
            break;
        case 31:
            extend(70);
            break;
        case 32:
            extend(71);
            break;
        case 33:
            extend(72);
            break;
        case 34:
            extend(73);
            break;
        case 35:
            extend(74);
            break;
        case 36:
            extend(75);
            break;
        case 37:
            extend(76);
            break;
        case 38:
            extend(77);
            break;
        case 39:
            extend(78);
            break;
        case 40:
            extend(79);
            break;
        case 41:
            extend(80);
            break;
        case 42:
            extend(81);
            break;
        case 43:
            extend(82);
            break;
        case 44:
            extend(83);
            break;
        case 45:
            extend(84);
            break;
        case 46:
            extend(85);
            break;
        case 47:
            extend(86);
            break;
        case 48:
            extend(87);
            break;
        case 49:
            extend(88);
            break;
        case 50:
            extend(89);
            break;
        case 51:
            extend(90);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(90);
    RETURN();
}
void __attribute__((noinline)) func_5065711920() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(14);
    switch (branch) {
        case 0:
            extend(92);
            break;
        case 1:
            extend(46);
            break;
        case 2:
            extend(42);
            break;
        case 3:
            extend(43);
            break;
        case 4:
            extend(63);
            break;
        case 5:
            extend(94);
            break;
        case 6:
            extend(36);
            break;
        case 7:
            extend(124);
            break;
        case 8:
            extend(40);
            break;
        case 9:
            extend(41);
            break;
        case 10:
            extend(91);
            break;
        case 11:
            extend(93);
            break;
        case 12:
            extend(123);
            break;
        case 13:
            extend(125);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5065711360() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065716480);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    extend(94);
    extend(92);
    extend(125);
    extend(93);
    RETURN();
}
void __attribute__((noinline)) func_5065711488() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065712800);
            break;
        case 1:
            CALL(func_5065711104);
            break;
        case 2:
            CALL(func_5065713584);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5065711616() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065714304);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    extend(43);
    RETURN();
}
void __attribute__((noinline)) func_5065711744() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065724960);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    extend(92);
    extend(125);
    extend(93);
    RETURN();
}
void __attribute__((noinline)) func_5065712048() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065725088);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(92);
    extend(125);
    extend(45);
    extend(92);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5065710704() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065712048);
            break;
        case 1:
            CALL(func_5065710448);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(92);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5065710848() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065710704);
            break;
        case 1:
            CALL(func_5065714224);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(92);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5065712496() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065711744);
            break;
        case 1:
            CALL(func_5065711360);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    extend(94);
    extend(92);
    extend(125);
    extend(93);
    RETURN();
}
void __attribute__((noinline)) func_5065712624() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065709904);
            break;
        case 1:
            CALL(func_5065710240);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5065712928() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065725344);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    extend(42);
    RETURN();
}
void __attribute__((noinline)) func_5065713056() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065693520);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5065713584() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(11);
    switch (branch) {
        case 0:
            extend(95);
            break;
        case 1:
            extend(45);
            break;
        case 2:
            extend(64);
            break;
        case 3:
            extend(35);
            break;
        case 4:
            extend(37);
            break;
        case 5:
            extend(38);
            break;
        case 6:
            extend(61);
            break;
        case 7:
            extend(126);
            break;
        case 8:
            extend(96);
            break;
        case 9:
            extend(39);
            break;
        case 10:
            extend(34);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(34);
    RETURN();
}
void __attribute__((noinline)) func_5065713264() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5065725632);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    extend(124);
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5065713184() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(46);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5065713456() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(92);
    CALL(func_5065711920);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(92);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5065713776() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(92);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(92);
    RETURN();
}
void __attribute__((noinline)) func_5065713904() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5065712624);
    CALL(func_5065710240);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5065714400() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065714528() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065714656() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065714816() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065714944() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065712304() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065715520() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065715648() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065715776() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065712240() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065714096() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(36);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(36);
    RETURN();
}
void __attribute__((noinline)) func_5065716096() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(40);
    CALL(func_5065693520);
    extend(41);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(40);
    extend(46);
    extend(41);
    RETURN();
}
void __attribute__((noinline)) func_5065716224() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065716352() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065717824() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065717952() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065718080() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065718240() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065718368() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065718560() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065718688() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065718816() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065718944() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065718496() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065719264() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065719392() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(108);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(108);
    RETURN();
}
void __attribute__((noinline)) func_5065719520() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(109);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(109);
    RETURN();
}
void __attribute__((noinline)) func_5065719648() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(110);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(110);
    RETURN();
}
void __attribute__((noinline)) func_5065719776() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(111);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(111);
    RETURN();
}
void __attribute__((noinline)) func_5065719904() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(112);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(112);
    RETURN();
}
void __attribute__((noinline)) func_5065720032() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(113);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(113);
    RETURN();
}
void __attribute__((noinline)) func_5065719072() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(114);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(114);
    RETURN();
}
void __attribute__((noinline)) func_5065720416() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(115);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(115);
    RETURN();
}
void __attribute__((noinline)) func_5065720544() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(116);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(116);
    RETURN();
}
void __attribute__((noinline)) func_5065720672() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(117);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(117);
    RETURN();
}
void __attribute__((noinline)) func_5065720800() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(118);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(118);
    RETURN();
}
void __attribute__((noinline)) func_5065720928() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(119);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(119);
    RETURN();
}
void __attribute__((noinline)) func_5065715072() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065715200() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065715328() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065715456() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(65);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(65);
    RETURN();
}
void __attribute__((noinline)) func_5065721056() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(66);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(66);
    RETURN();
}
void __attribute__((noinline)) func_5065721184() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(67);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(67);
    RETURN();
}
void __attribute__((noinline)) func_5065721312() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(68);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(68);
    RETURN();
}
void __attribute__((noinline)) func_5065721440() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(69);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(69);
    RETURN();
}
void __attribute__((noinline)) func_5065721568() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(70);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(70);
    RETURN();
}
void __attribute__((noinline)) func_5065721696() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(71);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(71);
    RETURN();
}
void __attribute__((noinline)) func_5065720160() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(72);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(72);
    RETURN();
}
void __attribute__((noinline)) func_5065720288() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(73);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(73);
    RETURN();
}
void __attribute__((noinline)) func_5065722336() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(74);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(74);
    RETURN();
}
void __attribute__((noinline)) func_5065722464() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(75);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(75);
    RETURN();
}
void __attribute__((noinline)) func_5065722592() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(76);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(76);
    RETURN();
}
void __attribute__((noinline)) func_5065722720() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(77);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(77);
    RETURN();
}
void __attribute__((noinline)) func_5065722848() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(78);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(78);
    RETURN();
}
void __attribute__((noinline)) func_5065722976() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(79);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(79);
    RETURN();
}
void __attribute__((noinline)) func_5065723104() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(80);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(80);
    RETURN();
}
void __attribute__((noinline)) func_5065723232() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(81);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(81);
    RETURN();
}
void __attribute__((noinline)) func_5065723360() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(82);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(82);
    RETURN();
}
void __attribute__((noinline)) func_5065723488() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(83);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(83);
    RETURN();
}
void __attribute__((noinline)) func_5065723616() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(84);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(84);
    RETURN();
}
void __attribute__((noinline)) func_5065723744() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(85);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(85);
    RETURN();
}
void __attribute__((noinline)) func_5065723872() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(86);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(86);
    RETURN();
}
void __attribute__((noinline)) func_5065724000() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(87);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(87);
    RETURN();
}
void __attribute__((noinline)) func_5065724128() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(88);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(88);
    RETURN();
}
void __attribute__((noinline)) func_5065724256() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(89);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(89);
    RETURN();
}
void __attribute__((noinline)) func_5065724384() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(90);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(90);
    RETURN();
}
void __attribute__((noinline)) func_5065716912() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065717072() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065717200() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(63);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(63);
    RETURN();
}
void __attribute__((noinline)) func_5065717392() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(94);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(94);
    RETURN();
}
void __attribute__((noinline)) func_5065717520() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(124);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(124);
    RETURN();
}
void __attribute__((noinline)) func_5065717328() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(91);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    RETURN();
}
void __attribute__((noinline)) func_5065724576() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(93);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(93);
    RETURN();
}
void __attribute__((noinline)) func_5065724704() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065724832() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065716480() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(91);
    extend(94);
    CALL(func_5065710848);
    extend(93);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    extend(94);
    extend(92);
    extend(125);
    extend(93);
    RETURN();
}
void __attribute__((noinline)) func_5065716608() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(91);
    extend(94);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    extend(94);
    RETURN();
}
void __attribute__((noinline)) func_5065714304() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5065711232);
    extend(43);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    extend(43);
    RETURN();
}
void __attribute__((noinline)) func_5065724960() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(91);
    CALL(func_5065710848);
    extend(93);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    extend(92);
    extend(125);
    extend(93);
    RETURN();
}
void __attribute__((noinline)) func_5065725088() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5065710448);
    extend(45);
    CALL(func_5065710448);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(92);
    extend(125);
    extend(45);
    extend(92);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5065725216() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065714224() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5065710704);
    CALL(func_5065710848);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(92);
    extend(125);
    extend(92);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5065725344() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5065711232);
    extend(42);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    extend(42);
    RETURN();
}
void __attribute__((noinline)) func_5065726000() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(95);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(95);
    RETURN();
}
void __attribute__((noinline)) func_5065726144() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(64);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(64);
    RETURN();
}
void __attribute__((noinline)) func_5065726304() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(35);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(35);
    RETURN();
}
void __attribute__((noinline)) func_5065726432() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(37);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(37);
    RETURN();
}
void __attribute__((noinline)) func_5065726624() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(38);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(38);
    RETURN();
}
void __attribute__((noinline)) func_5065726752() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5065726880() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(126);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(126);
    RETURN();
}
void __attribute__((noinline)) func_5065727008() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(96);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(96);
    RETURN();
}
void __attribute__((noinline)) func_5065726560() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(39);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(39);
    RETURN();
}
void __attribute__((noinline)) func_5065727328() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(34);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(34);
    RETURN();
}
void __attribute__((noinline)) func_5065725632() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5065693520);
    extend(124);
    CALL(func_5065712624);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    extend(124);
    extend(46);
    RETURN();
}
int main(void) {
    seed = time(NULL);
    INIT_DEPTH();
    CALL(func_5065713056);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
