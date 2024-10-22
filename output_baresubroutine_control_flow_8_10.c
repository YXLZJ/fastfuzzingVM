#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // buffer for storing text
#define MAX_DEPTH 8
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

void func_4821390992();
void func_4821391360();
void func_4821391776();
void func_4821391872();
void func_4821391648();
void func_4821391568();
void func_4821392272();
void func_4821391488();
void func_4821392000();
void func_4821392528();
void func_4821392192();
void func_4821392464();
void func_4821392880();
void func_4821393248();
void func_4821393088();
void func_4821392816();
void func_4821393008();
void func_4821392064();
void func_4821394112();
void func_4821394240();
void func_4821394368();
void func_4821394496();
void func_4821394624();
void func_4821394752();
void func_4821395136();
void func_4821392720();
void func_4821395328();
void func_4821395456();
void func_4821395584();
void func_4821395776();
void func_4821395904();
void func_4821396032();
void func_4821396160();
void func_4821395712();
void func_4821396736();
void func_4821396864();
void func_4821393904();
void func_4821394032();
void func_4821395040();
void func_4821397216();
void func_4821397344();
void func_4821394880();
void func_4821398112();
void func_4821398240();
void func_4821393376();
void func_4821397888();
void func_4821398560();
void func_4821398688();
void func_4821398816();
void func_4821398944();
void func_4821399136();
void func_4821399264();
void func_4821399392();
void func_4821399520();
void func_4821399072();
void func_4821400288();
void func_4821397536();
void func_4821400112();
void func_4821397712();
void func_4821399776();
void func_4821399904();
void func_4821400416();
void func_4821401264();
void func_4821401392();
void func_4821400544();
void func_4821396224();
void func_4821401200();
void func_4821396592();
void __attribute__((noinline)) func_4821390992() {
    asm goto (
        "cmp x1, #8\n\t"
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
            CALL(func_4821392816);
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
void __attribute__((noinline)) func_4821391360() {
    asm goto (
        "cmp x1, #8\n\t"
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
            CALL(func_4821394112);
            break;
        case 1:
            CALL(func_4821394368);
            break;
        case 2:
            CALL(func_4821394624);
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
void __attribute__((noinline)) func_4821391776() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821391872() {
    asm goto (
        "cmp x1, #8\n\t"
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
            CALL(func_4821396736);
            break;
        case 1:
            CALL(func_4821393904);
            break;
        case 2:
            CALL(func_4821393248);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4821391648() {
    asm goto (
        "cmp x1, #8\n\t"
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
            CALL(func_4821395040);
            break;
        case 1:
            CALL(func_4821392000);
            break;
        case 2:
            CALL(func_4821392272);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4821391568() {
    asm goto (
        "cmp x1, #8\n\t"
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
            CALL(func_4821394880);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4821392272() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821391488() {
    asm goto (
        "cmp x1, #8\n\t"
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
            CALL(func_4821399072);
            break;
        case 1:
            CALL(func_4821397536);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4821392000() {
    asm goto (
        "cmp x1, #8\n\t"
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
            CALL(func_4821391776);
            break;
        case 1:
            CALL(func_4821397712);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_4821392528() {
    asm goto (
        "cmp x1, #8\n\t"
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
            CALL(func_4821399776);
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
void __attribute__((noinline)) func_4821392192() {
    asm goto (
        "cmp x1, #8\n\t"
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
            CALL(func_4821400416);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4821392464() {
    asm goto (
        "cmp x1, #8\n\t"
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
            CALL(func_4821392192);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4821392880() {
    asm goto (
        "cmp x1, #8\n\t"
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
            CALL(func_4821391488);
            break;
        case 1:
            CALL(func_4821393088);
            break;
        case 2:
            CALL(func_4821391568);
            break;
        case 3:
            CALL(func_4821390992);
            break;
        case 4:
            CALL(func_4821392528);
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
void __attribute__((noinline)) func_4821393248() {
    asm goto (
        "cmp x1, #8\n\t"
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
            CALL(func_4821401264);
            break;
        case 1:
            CALL(func_4821400544);
            break;
        case 2:
            CALL(func_4821391648);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4821393088() {
    asm goto (
        "cmp x1, #8\n\t"
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
            CALL(func_4821401200);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4821392816() {
    asm goto (
        "cmp x1, #8\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4821392272);
    extend(61);
    CALL(func_4821391872);
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
void __attribute__((noinline)) func_4821393008() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821392064() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821394112() {
    asm goto (
        "cmp x1, #8\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4821391872);
    extend(62);
    CALL(func_4821391872);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(62);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4821394240() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821394368() {
    asm goto (
        "cmp x1, #8\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4821391872);
    extend(60);
    CALL(func_4821391872);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(60);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4821394496() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821394624() {
    asm goto (
        "cmp x1, #8\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4821391872);
    extend(61);
    extend(61);
    CALL(func_4821391872);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(61);
    extend(61);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4821394752() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821395136() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821392720() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821395328() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821395456() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821395584() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821395776() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821395904() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821396032() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821396160() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821395712() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821396736() {
    asm goto (
        "cmp x1, #8\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4821391872);
    extend(43);
    CALL(func_4821393248);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(43);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4821396864() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821393904() {
    asm goto (
        "cmp x1, #8\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4821391872);
    extend(45);
    CALL(func_4821393248);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(45);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4821394032() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821395040() {
    asm goto (
        "cmp x1, #8\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(40);
    CALL(func_4821391872);
    extend(41);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(40);
    extend(99);
    extend(41);
    RETURN();
}
void __attribute__((noinline)) func_4821397216() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821397344() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821394880() {
    asm goto (
        "cmp x1, #8\n\t"
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
    CALL(func_4821390992);
    extend(59);
    CALL(func_4821391360);
    extend(59);
    CALL(func_4821390992);
    extend(41);
    extend(123);
    CALL(func_4821392192);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4821398112() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821398240() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821393376() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821397888() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821398560() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821398688() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821398816() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821398944() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821399136() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821399264() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821399392() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821399520() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821399072() {
    asm goto (
        "cmp x1, #8\n\t"
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
    CALL(func_4821391360);
    extend(41);
    extend(123);
    CALL(func_4821392192);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4821400288() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821397536() {
    asm goto (
        "cmp x1, #8\n\t"
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
    CALL(func_4821391360);
    extend(41);
    extend(123);
    CALL(func_4821392192);
    extend(125);
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    extend(123);
    CALL(func_4821392192);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4821400112() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821397712() {
    asm goto (
        "cmp x1, #8\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4821391776);
    CALL(func_4821392000);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_4821399776() {
    asm goto (
        "cmp x1, #8\n\t"
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
    CALL(func_4821391872);
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
void __attribute__((noinline)) func_4821399904() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821400416() {
    asm goto (
        "cmp x1, #8\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4821392880);
    CALL(func_4821392192);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4821401264() {
    asm goto (
        "cmp x1, #8\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4821393248);
    extend(42);
    CALL(func_4821391648);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(42);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4821401392() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821400544() {
    asm goto (
        "cmp x1, #8\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4821393248);
    extend(47);
    CALL(func_4821391648);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(47);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_4821396224() {
    asm goto (
        "cmp x1, #8\n\t"
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
void __attribute__((noinline)) func_4821401200() {
    asm goto (
        "cmp x1, #8\n\t"
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
    CALL(func_4821391360);
    extend(41);
    extend(123);
    CALL(func_4821392192);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_4821396592() {
    asm goto (
        "cmp x1, #8\n\t"
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
    CALL(func_4821392464);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
