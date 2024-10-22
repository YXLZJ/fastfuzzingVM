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

void func_5802849360();
void func_5802865872();
void func_5802866080();
void func_5802866288();
void func_5802865744();
void func_5802866944();
void func_5802867072();
void func_5802866848();
void func_5802866624();
void func_5802868640();
void func_5802867760();
void func_5802867200();
void func_5802867328();
void func_5802867456();
void func_5802867584();
void func_5802867888();
void func_5802866544();
void func_5802866688();
void func_5802868336();
void func_5802868464();
void func_5802868768();
void func_5802868896();
void func_5802869424();
void func_5802869104();
void func_5802869024();
void func_5802869296();
void func_5802869616();
void func_5802869744();
void func_5802870240();
void func_5802870368();
void func_5802870496();
void func_5802870656();
void func_5802870784();
void func_5802868144();
void func_5802871360();
void func_5802871488();
void func_5802871616();
void func_5802868080();
void func_5802869936();
void func_5802871936();
void func_5802872064();
void func_5802872192();
void func_5802873664();
void func_5802873792();
void func_5802873920();
void func_5802874080();
void func_5802874208();
void func_5802874400();
void func_5802874528();
void func_5802874656();
void func_5802874784();
void func_5802874336();
void func_5802875104();
void func_5802875232();
void func_5802875360();
void func_5802875488();
void func_5802875616();
void func_5802875744();
void func_5802875872();
void func_5802874912();
void func_5802876256();
void func_5802876384();
void func_5802876512();
void func_5802876640();
void func_5802876768();
void func_5802870912();
void func_5802871040();
void func_5802871168();
void func_5802871296();
void func_5802876896();
void func_5802877024();
void func_5802877152();
void func_5802877280();
void func_5802877408();
void func_5802877536();
void func_5802876000();
void func_5802876128();
void func_5802878176();
void func_5802878304();
void func_5802878432();
void func_5802878560();
void func_5802878688();
void func_5802878816();
void func_5802878944();
void func_5802879072();
void func_5802879200();
void func_5802879328();
void func_5802879456();
void func_5802879584();
void func_5802879712();
void func_5802879840();
void func_5802879968();
void func_5802880096();
void func_5802880224();
void func_5802872752();
void func_5802872912();
void func_5802873040();
void func_5802873232();
void func_5802873360();
void func_5802873168();
void func_5802880416();
void func_5802880544();
void func_5802880672();
void func_5802872320();
void func_5802872448();
void func_5802870144();
void func_5802880800();
void func_5802880928();
void func_5802881056();
void func_5802870064();
void func_5802881184();
void func_5802881840();
void func_5802881984();
void func_5802882144();
void func_5802882272();
void func_5802882464();
void func_5802882592();
void func_5802882720();
void func_5802882848();
void func_5802882400();
void func_5802883168();
void func_5802881472();
void __attribute__((noinline)) func_5802849360() {
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
            CALL(func_5802869104);
            break;
        case 1:
            CALL(func_5802868464);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5802865872() {
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
            extend(46);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5802866080() {
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
            CALL(func_5802868768);
            break;
        case 1:
            CALL(func_5802867456);
            break;
        case 2:
            CALL(func_5802867072);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5802866288() {
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
            CALL(func_5802867328);
            break;
        case 1:
            CALL(func_5802869296);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(92);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5802865744() {
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
            CALL(func_5802869744);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5802866944() {
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
void __attribute__((noinline)) func_5802867072() {
    asm goto (
        "cmp x1, #20\n\t"
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
            CALL(func_5802866624);
            break;
        case 1:
            CALL(func_5802865872);
            break;
        case 2:
            CALL(func_5802866848);
            break;
        case 3:
            CALL(func_5802866288);
            break;
        case 4:
            CALL(func_5802868336);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5802866848() {
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
            extend(36);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(36);
    RETURN();
}
void __attribute__((noinline)) func_5802866624() {
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
            CALL(func_5802871936);
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
void __attribute__((noinline)) func_5802868640() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802867760() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802867200() {
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
            CALL(func_5802872320);
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
void __attribute__((noinline)) func_5802867328() {
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
            CALL(func_5802868640);
            break;
        case 1:
            CALL(func_5802866944);
            break;
        case 2:
            CALL(func_5802869424);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5802867456() {
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
            CALL(func_5802870144);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    extend(43);
    RETURN();
}
void __attribute__((noinline)) func_5802867584() {
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
            CALL(func_5802880800);
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
void __attribute__((noinline)) func_5802867888() {
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
            CALL(func_5802880928);
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
void __attribute__((noinline)) func_5802866544() {
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
            CALL(func_5802867888);
            break;
        case 1:
            CALL(func_5802866288);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(92);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5802866688() {
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
            CALL(func_5802866544);
            break;
        case 1:
            CALL(func_5802870064);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(92);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5802868336() {
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
            CALL(func_5802867584);
            break;
        case 1:
            CALL(func_5802867200);
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
void __attribute__((noinline)) func_5802868464() {
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
            CALL(func_5802865744);
            break;
        case 1:
            CALL(func_5802866080);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5802868768() {
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
            CALL(func_5802881184);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    extend(42);
    RETURN();
}
void __attribute__((noinline)) func_5802868896() {
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
            CALL(func_5802849360);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5802869424() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802869104() {
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
            CALL(func_5802881472);
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
void __attribute__((noinline)) func_5802869024() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802869296() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(92);
    CALL(func_5802867760);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(92);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5802869616() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802869744() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5802868464);
    CALL(func_5802866080);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    extend(46);
    RETURN();
}
void __attribute__((noinline)) func_5802870240() {
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
void __attribute__((noinline)) func_5802870368() {
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
void __attribute__((noinline)) func_5802870496() {
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
void __attribute__((noinline)) func_5802870656() {
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
void __attribute__((noinline)) func_5802870784() {
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
void __attribute__((noinline)) func_5802868144() {
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
void __attribute__((noinline)) func_5802871360() {
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
void __attribute__((noinline)) func_5802871488() {
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
void __attribute__((noinline)) func_5802871616() {
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
void __attribute__((noinline)) func_5802868080() {
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
void __attribute__((noinline)) func_5802869936() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802871936() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(40);
    CALL(func_5802849360);
    extend(41);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(40);
    extend(46);
    extend(41);
    RETURN();
}
void __attribute__((noinline)) func_5802872064() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802872192() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802873664() {
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
void __attribute__((noinline)) func_5802873792() {
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
void __attribute__((noinline)) func_5802873920() {
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
void __attribute__((noinline)) func_5802874080() {
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
void __attribute__((noinline)) func_5802874208() {
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
void __attribute__((noinline)) func_5802874400() {
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
void __attribute__((noinline)) func_5802874528() {
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
void __attribute__((noinline)) func_5802874656() {
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
void __attribute__((noinline)) func_5802874784() {
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
void __attribute__((noinline)) func_5802874336() {
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
void __attribute__((noinline)) func_5802875104() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802875232() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802875360() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802875488() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802875616() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802875744() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802875872() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802874912() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802876256() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802876384() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802876512() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802876640() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802876768() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802870912() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802871040() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802871168() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802871296() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802876896() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802877024() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802877152() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802877280() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802877408() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802877536() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802876000() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802876128() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802878176() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802878304() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802878432() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802878560() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802878688() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802878816() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802878944() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802879072() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802879200() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802879328() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802879456() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802879584() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802879712() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802879840() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802879968() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802880096() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802880224() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802872752() {
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
void __attribute__((noinline)) func_5802872912() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802873040() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802873232() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802873360() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802873168() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802880416() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802880544() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802880672() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802872320() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(91);
    extend(94);
    CALL(func_5802866688);
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
void __attribute__((noinline)) func_5802872448() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802870144() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5802867072);
    extend(43);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    extend(43);
    RETURN();
}
void __attribute__((noinline)) func_5802880800() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(91);
    CALL(func_5802866688);
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
void __attribute__((noinline)) func_5802880928() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5802866288);
    extend(45);
    CALL(func_5802866288);
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
void __attribute__((noinline)) func_5802881056() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802870064() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5802866544);
    CALL(func_5802866688);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(92);
    extend(125);
    extend(92);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5802881184() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5802867072);
    extend(42);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(46);
    extend(42);
    RETURN();
}
void __attribute__((noinline)) func_5802881840() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802881984() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802882144() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802882272() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802882464() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802882592() {
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
void __attribute__((noinline)) func_5802882720() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802882848() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802882400() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802883168() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5802881472() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5802849360);
    extend(124);
    CALL(func_5802868464);
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
    CALL(func_5802868896);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
