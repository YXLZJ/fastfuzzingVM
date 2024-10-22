#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // buffer for storing text
#define MAX_DEPTH 40
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

void func_5408593440();
void func_5408593808();
void func_5408594224();
void func_5408594320();
void func_5408594096();
void func_5408594016();
void func_5408594720();
void func_5408593936();
void func_5408594448();
void func_5408594976();
void func_5408594640();
void func_5408594912();
void func_5408595328();
void func_5408595696();
void func_5408595536();
void func_5408595264();
void func_5408595456();
void func_5408594512();
void func_5408596560();
void func_5408596688();
void func_5408596816();
void func_5408596944();
void func_5408597072();
void func_5408597200();
void func_5408597584();
void func_5408595168();
void func_5408597776();
void func_5408597904();
void func_5408598032();
void func_5408598224();
void func_5408598352();
void func_5408598480();
void func_5408598608();
void func_5408598160();
void func_5408599184();
void func_5408599312();
void func_5408596352();
void func_5408596480();
void func_5408597488();
void func_5408599664();
void func_5408599792();
void func_5408597328();
void func_5408600560();
void func_5408600688();
void func_5408595824();
void func_5408600336();
void func_5408601008();
void func_5408601136();
void func_5408601264();
void func_5408601392();
void func_5408601584();
void func_5408601712();
void func_5408601840();
void func_5408601968();
void func_5408601520();
void func_5408602736();
void func_5408599984();
void func_5408602560();
void func_5408600160();
void func_5408602224();
void func_5408602352();
void func_5408602864();
void func_5408603712();
void func_5408603840();
void func_5408602992();
void func_5408598672();
void func_5408603648();
void func_5408599040();
void __attribute__((noinline)) func_5408593440() {
    asm goto (
        "cmp x1, #40\n\t"
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
            CALL(func_5408595264);
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
void __attribute__((noinline)) func_5408593808() {
    asm goto (
        "cmp x1, #40\n\t"
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
            CALL(func_5408596560);
            break;
        case 1:
            CALL(func_5408596816);
            break;
        case 2:
            CALL(func_5408597072);
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
void __attribute__((noinline)) func_5408594224() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408594320() {
    asm goto (
        "cmp x1, #40\n\t"
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
            CALL(func_5408599184);
            break;
        case 1:
            CALL(func_5408596352);
            break;
        case 2:
            CALL(func_5408595696);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5408594096() {
    asm goto (
        "cmp x1, #40\n\t"
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
            CALL(func_5408597488);
            break;
        case 1:
            CALL(func_5408594448);
            break;
        case 2:
            CALL(func_5408594720);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5408594016() {
    asm goto (
        "cmp x1, #40\n\t"
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
            CALL(func_5408597328);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5408594720() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408593936() {
    asm goto (
        "cmp x1, #40\n\t"
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
            CALL(func_5408601520);
            break;
        case 1:
            CALL(func_5408599984);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5408594448() {
    asm goto (
        "cmp x1, #40\n\t"
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
            CALL(func_5408594224);
            break;
        case 1:
            CALL(func_5408600160);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5408594976() {
    asm goto (
        "cmp x1, #40\n\t"
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
            CALL(func_5408602224);
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
void __attribute__((noinline)) func_5408594640() {
    asm goto (
        "cmp x1, #40\n\t"
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
            CALL(func_5408602864);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5408594912() {
    asm goto (
        "cmp x1, #40\n\t"
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
            CALL(func_5408594640);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5408595328() {
    asm goto (
        "cmp x1, #40\n\t"
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
            CALL(func_5408593936);
            break;
        case 1:
            CALL(func_5408595536);
            break;
        case 2:
            CALL(func_5408594016);
            break;
        case 3:
            CALL(func_5408593440);
            break;
        case 4:
            CALL(func_5408594976);
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
void __attribute__((noinline)) func_5408595696() {
    asm goto (
        "cmp x1, #40\n\t"
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
            CALL(func_5408603712);
            break;
        case 1:
            CALL(func_5408602992);
            break;
        case 2:
            CALL(func_5408594096);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5408595536() {
    asm goto (
        "cmp x1, #40\n\t"
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
            CALL(func_5408603648);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5408595264() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5408594720);
    extend(61);
    CALL(func_5408594320);
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
void __attribute__((noinline)) func_5408595456() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408594512() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408596560() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5408594320);
    extend(62);
    CALL(func_5408594320);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(62);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5408596688() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408596816() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5408594320);
    extend(60);
    CALL(func_5408594320);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(60);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5408596944() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408597072() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5408594320);
    extend(61);
    extend(61);
    CALL(func_5408594320);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(61);
    extend(61);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5408597200() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408597584() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408595168() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408597776() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408597904() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408598032() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408598224() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408598352() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408598480() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408598608() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408598160() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408599184() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5408594320);
    extend(43);
    CALL(func_5408595696);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(43);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5408599312() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408596352() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5408594320);
    extend(45);
    CALL(func_5408595696);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(45);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5408596480() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408597488() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(40);
    CALL(func_5408594320);
    extend(41);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(40);
    extend(99);
    extend(41);
    RETURN();
}
void __attribute__((noinline)) func_5408599664() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408599792() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408597328() {
    asm goto (
        "cmp x1, #40\n\t"
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
    CALL(func_5408593440);
    extend(59);
    CALL(func_5408593808);
    extend(59);
    CALL(func_5408593440);
    extend(41);
    extend(123);
    CALL(func_5408594640);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5408600560() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408600688() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408595824() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408600336() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408601008() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408601136() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408601264() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408601392() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408601584() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408601712() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408601840() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408601968() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408601520() {
    asm goto (
        "cmp x1, #40\n\t"
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
    CALL(func_5408593808);
    extend(41);
    extend(123);
    CALL(func_5408594640);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5408602736() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408599984() {
    asm goto (
        "cmp x1, #40\n\t"
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
    CALL(func_5408593808);
    extend(41);
    extend(123);
    CALL(func_5408594640);
    extend(125);
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    extend(123);
    CALL(func_5408594640);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5408602560() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408600160() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5408594224);
    CALL(func_5408594448);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5408602224() {
    asm goto (
        "cmp x1, #40\n\t"
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
    CALL(func_5408594320);
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
void __attribute__((noinline)) func_5408602352() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408602864() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5408595328);
    CALL(func_5408594640);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5408603712() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5408595696);
    extend(42);
    CALL(func_5408594096);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(42);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5408603840() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408602992() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5408595696);
    extend(47);
    CALL(func_5408594096);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(47);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5408598672() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_5408603648() {
    asm goto (
        "cmp x1, #40\n\t"
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
    CALL(func_5408593808);
    extend(41);
    extend(123);
    CALL(func_5408594640);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5408599040() {
    asm goto (
        "cmp x1, #40\n\t"
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
    CALL(func_5408594912);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
