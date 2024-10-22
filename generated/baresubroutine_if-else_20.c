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

void func_5811233504();
void func_5811242944();
void func_5811242864();
void func_5811242784();
void func_5811243408();
void func_5811242512();
void func_5811243936();
void func_5811242704();
void func_5811243232();
void func_5811243296();
void func_5811244176();
void func_5811244304();
void func_5811244528();
void func_5811244656();
void func_5811244784();
void func_5811245152();
void func_5811245280();
void func_5811243600();
void func_5811245664();
void func_5811245792();
void func_5811245920();
void func_5811246048();
void func_5811246176();
void func_5811246336();
void func_5811246464();
void func_5811246688();
void func_5811246816();
void func_5811246944();
void func_5811247072();
void func_5811247200();
void func_5811247392();
void func_5811246624();
void func_5811244432();
void func_5811245408();
void func_5811245536();
void func_5811244976();
void func_5811248880();
void func_5811249008();
void func_5811248816();
void func_5811248048();
void func_5811245040();
void func_5811249456();
void func_5811249584();
void func_5811249712();
void func_5811249904();
void func_5811250032();
void func_5811250160();
void func_5811250288();
void func_5811249840();
void func_5811250608();
void func_5811250736();
void func_5811247872();
void func_5811247584();
void func_5811251008();
void func_5811251136();
void __attribute__((noinline)) func_5811233504() {
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
            CALL(func_5811244528);
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
void __attribute__((noinline)) func_5811242944() {
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
            CALL(func_5811245152);
            break;
        case 1:
            CALL(func_5811243600);
            break;
        case 2:
            CALL(func_5811245792);
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
void __attribute__((noinline)) func_5811242864() {
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
            CALL(func_5811246048);
            break;
        case 1:
            CALL(func_5811244304);
            break;
        case 2:
            CALL(func_5811246336);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5811242784() {
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
            CALL(func_5811243936);
            break;
        case 1:
            CALL(func_5811243408);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5811243408() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5811242512() {
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
            CALL(func_5811246624);
            break;
        case 1:
            CALL(func_5811248816);
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
void __attribute__((noinline)) func_5811243936() {
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
void __attribute__((noinline)) func_5811242704() {
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
            CALL(func_5811250608);
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
void __attribute__((noinline)) func_5811243232() {
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
            CALL(func_5811242512);
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
void __attribute__((noinline)) func_5811243296() {
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
            CALL(func_5811242512);
            break;
        case 1:
            CALL(func_5811233504);
            break;
        case 2:
            CALL(func_5811242704);
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
void __attribute__((noinline)) func_5811244176() {
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
            CALL(func_5811247872);
            break;
        case 1:
            CALL(func_5811247584);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    RETURN();
}
void __attribute__((noinline)) func_5811244304() {
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
            CALL(func_5811242784);
            break;
        case 1:
            CALL(func_5811251008);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5811244528() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5811243408);
    extend(61);
    CALL(func_5811242864);
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
void __attribute__((noinline)) func_5811244656() {
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
void __attribute__((noinline)) func_5811244784() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5811245152() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5811242864);
    extend(62);
    CALL(func_5811242864);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(62);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5811245280() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5811243600() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5811242864);
    extend(60);
    CALL(func_5811242864);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(60);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5811245664() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5811245792() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5811242864);
    extend(61);
    extend(61);
    CALL(func_5811242864);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(61);
    extend(61);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5811245920() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5811246048() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5811244304);
    extend(43);
    CALL(func_5811242864);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(43);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5811246176() {
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
void __attribute__((noinline)) func_5811246336() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5811244304);
    extend(45);
    CALL(func_5811242864);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(45);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5811246464() {
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
void __attribute__((noinline)) func_5811246688() {
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
void __attribute__((noinline)) func_5811246816() {
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
void __attribute__((noinline)) func_5811246944() {
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
void __attribute__((noinline)) func_5811247072() {
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
void __attribute__((noinline)) func_5811247200() {
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
void __attribute__((noinline)) func_5811247392() {
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
void __attribute__((noinline)) func_5811246624() {
    asm goto (
        "cmp x1, #20\n\t"
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
    CALL(func_5811242944);
    extend(41);
    extend(123);
    CALL(func_5811244176);
    extend(125);
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    extend(123);
    CALL(func_5811244176);
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
void __attribute__((noinline)) func_5811244432() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5811245408() {
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
void __attribute__((noinline)) func_5811245536() {
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
void __attribute__((noinline)) func_5811244976() {
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
void __attribute__((noinline)) func_5811248880() {
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
void __attribute__((noinline)) func_5811249008() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5811248816() {
    asm goto (
        "cmp x1, #20\n\t"
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
    CALL(func_5811242944);
    extend(41);
    extend(123);
    CALL(func_5811244176);
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
void __attribute__((noinline)) func_5811248048() {
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
void __attribute__((noinline)) func_5811245040() {
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
void __attribute__((noinline)) func_5811249456() {
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
void __attribute__((noinline)) func_5811249584() {
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
void __attribute__((noinline)) func_5811249712() {
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
void __attribute__((noinline)) func_5811249904() {
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
void __attribute__((noinline)) func_5811250032() {
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
void __attribute__((noinline)) func_5811250160() {
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
void __attribute__((noinline)) func_5811250288() {
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
void __attribute__((noinline)) func_5811249840() {
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
void __attribute__((noinline)) func_5811250608() {
    asm goto (
        "cmp x1, #20\n\t"
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
    CALL(func_5811242864);
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
void __attribute__((noinline)) func_5811250736() {
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
void __attribute__((noinline)) func_5811247872() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5811243296);
    CALL(func_5811244176);
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
void __attribute__((noinline)) func_5811247584() {
    asm goto (
        "cmp x1, #20\n\t"
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
void __attribute__((noinline)) func_5811251008() {
    asm goto (
        "cmp x1, #20\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5811242784);
    extend(42);
    CALL(func_5811244304);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(99);
    extend(42);
    extend(99);
    RETURN();
}
void __attribute__((noinline)) func_5811251136() {
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
int main(void) {
    seed = time(NULL);
    INIT_DEPTH();
    CALL(func_5811243232);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
