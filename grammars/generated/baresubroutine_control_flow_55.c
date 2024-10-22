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

void func_5073049120();
void func_5073049488();
void func_5073049904();
void func_5073050000();
void func_5073049776();
void func_5073049696();
void func_5073050400();
void func_5073049616();
void func_5073050128();
void func_5073050656();
void func_5073050320();
void func_5073050592();
void func_5073051008();
void func_5073051376();
void func_5073051216();
void func_5073050944();
void func_5073051136();
void func_5073050192();
void func_5073052240();
void func_5073052368();
void func_5073052496();
void func_5073052624();
void func_5073052752();
void func_5073052880();
void func_5073053264();
void func_5073050848();
void func_5073053456();
void func_5073053584();
void func_5073053712();
void func_5073053904();
void func_5073054032();
void func_5073054160();
void func_5073054288();
void func_5073053840();
void func_5073054864();
void func_5073054992();
void func_5073052032();
void func_5073052160();
void func_5073053168();
void func_5073055344();
void func_5073055472();
void func_5073053008();
void func_5073056240();
void func_5073056368();
void func_5073051504();
void func_5073056016();
void func_5073056688();
void func_5073056816();
void func_5073056944();
void func_5073057072();
void func_5073057264();
void func_5073057392();
void func_5073057520();
void func_5073057648();
void func_5073057200();
void func_5073058416();
void func_5073055664();
void func_5073058240();
void func_5073055840();
void func_5073057904();
void func_5073058032();
void func_5073058544();
void func_5073059392();
void func_5073059520();
void func_5073058672();
void func_5073054352();
void func_5073059328();
void func_5073054720();
void __attribute__((noinline)) func_5073049120() {
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
            CALL(func_5073050944);
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
void __attribute__((noinline)) func_5073049488() {
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
            CALL(func_5073052240);
            break;
        case 1:
            CALL(func_5073052496);
            break;
        case 2:
            CALL(func_5073052752);
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
void __attribute__((noinline)) func_5073049904() {
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
void __attribute__((noinline)) func_5073050000() {
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
            CALL(func_5073054864);
            break;
        case 1:
            CALL(func_5073052032);
            break;
        case 2:
            CALL(func_5073051376);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5073049776() {
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
            CALL(func_5073053168);
            break;
        case 1:
            CALL(func_5073050128);
            break;
        case 2:
            CALL(func_5073050400);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5073049696() {
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
            CALL(func_5073053008);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5073050400() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5073049616() {
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
            CALL(func_5073057200);
            break;
        case 1:
            CALL(func_5073055664);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5073050128() {
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
            CALL(func_5073049904);
            break;
        case 1:
            CALL(func_5073055840);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5073050656() {
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
            CALL(func_5073057904);
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
void __attribute__((noinline)) func_5073050320() {
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
            CALL(func_5073058544);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5073050592() {
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
            CALL(func_5073050320);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5073051008() {
    asm goto (
        "cmp x1, #55\n\t"
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
            CALL(func_5073049616);
            break;
        case 1:
            CALL(func_5073051216);
            break;
        case 2:
            CALL(func_5073049696);
            break;
        case 3:
            CALL(func_5073049120);
            break;
        case 4:
            CALL(func_5073050656);
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
void __attribute__((noinline)) func_5073051376() {
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
            CALL(func_5073059392);
            break;
        case 1:
            CALL(func_5073058672);
            break;
        case 2:
            CALL(func_5073049776);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5073051216() {
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
            CALL(func_5073059328);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5073050944() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5073050400);
    extend(61);
    CALL(func_5073050000);
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
void __attribute__((noinline)) func_5073051136() {
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
void __attribute__((noinline)) func_5073050192() {
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
void __attribute__((noinline)) func_5073052240() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5073050000);
    extend(62);
    CALL(func_5073050000);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(62);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5073052368() {
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
void __attribute__((noinline)) func_5073052496() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5073050000);
    extend(60);
    CALL(func_5073050000);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(60);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5073052624() {
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
void __attribute__((noinline)) func_5073052752() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5073050000);
    extend(61);
    extend(61);
    CALL(func_5073050000);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(61);
    extend(61);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5073052880() {
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
void __attribute__((noinline)) func_5073053264() {
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
void __attribute__((noinline)) func_5073050848() {
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
void __attribute__((noinline)) func_5073053456() {
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
void __attribute__((noinline)) func_5073053584() {
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
void __attribute__((noinline)) func_5073053712() {
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
void __attribute__((noinline)) func_5073053904() {
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
void __attribute__((noinline)) func_5073054032() {
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
void __attribute__((noinline)) func_5073054160() {
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
void __attribute__((noinline)) func_5073054288() {
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
void __attribute__((noinline)) func_5073053840() {
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
void __attribute__((noinline)) func_5073054864() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5073050000);
    extend(43);
    CALL(func_5073051376);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(43);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5073054992() {
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
void __attribute__((noinline)) func_5073052032() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5073050000);
    extend(45);
    CALL(func_5073051376);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(45);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5073052160() {
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
void __attribute__((noinline)) func_5073053168() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(40);
    CALL(func_5073050000);
    extend(41);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(40);
    extend(99);
    extend(41);
    RETURN();
}
void __attribute__((noinline)) func_5073055344() {
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
void __attribute__((noinline)) func_5073055472() {
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
void __attribute__((noinline)) func_5073053008() {
    asm goto (
        "cmp x1, #55\n\t"
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
    CALL(func_5073049120);
    extend(59);
    CALL(func_5073049488);
    extend(59);
    CALL(func_5073049120);
    extend(41);
    extend(123);
    CALL(func_5073050320);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5073056240() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5073056368() {
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
void __attribute__((noinline)) func_5073051504() {
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
void __attribute__((noinline)) func_5073056016() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5073056688() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5073056816() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5073056944() {
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
void __attribute__((noinline)) func_5073057072() {
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
void __attribute__((noinline)) func_5073057264() {
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
void __attribute__((noinline)) func_5073057392() {
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
void __attribute__((noinline)) func_5073057520() {
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
void __attribute__((noinline)) func_5073057648() {
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
void __attribute__((noinline)) func_5073057200() {
    asm goto (
        "cmp x1, #55\n\t"
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
    CALL(func_5073049488);
    extend(41);
    extend(123);
    CALL(func_5073050320);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5073058416() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5073055664() {
    asm goto (
        "cmp x1, #55\n\t"
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
    CALL(func_5073049488);
    extend(41);
    extend(123);
    CALL(func_5073050320);
    extend(125);
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    extend(123);
    CALL(func_5073050320);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5073058240() {
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
void __attribute__((noinline)) func_5073055840() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5073049904);
    CALL(func_5073050128);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5073057904() {
    asm goto (
        "cmp x1, #55\n\t"
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
    CALL(func_5073050000);
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
void __attribute__((noinline)) func_5073058032() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5073058544() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5073051008);
    CALL(func_5073050320);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5073059392() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5073051376);
    extend(42);
    CALL(func_5073049776);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(42);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5073059520() {
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
void __attribute__((noinline)) func_5073058672() {
    asm goto (
        "cmp x1, #55\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5073051376);
    extend(47);
    CALL(func_5073049776);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(47);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5073054352() {
    asm goto (
        "cmp x1, #55\n\t"
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
void __attribute__((noinline)) func_5073059328() {
    asm goto (
        "cmp x1, #55\n\t"
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
    CALL(func_5073049488);
    extend(41);
    extend(123);
    CALL(func_5073050320);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5073054720() {
    asm goto (
        "cmp x1, #55\n\t"
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
    CALL(func_5073050592);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
