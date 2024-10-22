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

void func_4871716064();
void func_4871716624();
void func_4871716432();
void func_4871716192();
void func_4871716368();
void func_4871716848();
void func_4871716976();
void func_4871716768();
void func_4871717328();
void func_4871717760();
void func_4871717696();
void func_4871717952();
void func_4871717520();
void func_4871718080();
void func_4871718544();
void func_4871718672();
void func_4871718800();
void func_4871717392();
void func_4871719184();
void func_4871719376();
void func_4871719504();
void func_4871719632();
void func_4871719760();
void func_4871719312();
void func_4871717248();
void func_4871720144();
void func_4871718288();
void func_4871718416();
void func_4871720352();
void func_4871720480();
void func_4871720608();
void func_4871720784();
void func_4871720928();
void func_4871718928();
void func_4871720272();
void func_4871721696();
void func_4871721824();
void func_4871721984();
void func_4871722112();
void func_4871721536();
void func_4871722640();
void func_4871722768();
void __attribute__((noinline)) func_4871716064() {
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
            CALL(func_4871717696);
            break;
        case 1:
            CALL(func_4871718080);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    extend(93);
    RETURN();
}
void __attribute__((noinline)) func_4871716624() {
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
void __attribute__((noinline)) func_4871716432() {
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
            CALL(func_4871717248);
            break;
        case 1:
            CALL(func_4871717760);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    RETURN();
}
void __attribute__((noinline)) func_4871716192() {
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
            CALL(func_4871718288);
            break;
        case 1:
            CALL(func_4871716976);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(34);
    extend(101);
    extend(34);
    extend(58);
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    RETURN();
}
void __attribute__((noinline)) func_4871716368() {
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
            CALL(func_4871716624);
            break;
        case 1:
            CALL(func_4871718416);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_4871716848() {
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
            CALL(func_4871720352);
            break;
        case 1:
            CALL(func_4871720784);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(123);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_4871716976() {
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
            CALL(func_4871720928);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(34);
    extend(101);
    extend(34);
    extend(58);
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    RETURN();
}
void __attribute__((noinline)) func_4871716768() {
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
            CALL(func_4871717760);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    RETURN();
}
void __attribute__((noinline)) func_4871717328() {
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
            extend(34);
            extend(97);
            extend(34);
            break;
        case 1:
            extend(34);
            extend(98);
            extend(34);
            break;
        case 2:
            extend(34);
            extend(99);
            extend(34);
            break;
        case 3:
            extend(34);
            extend(100);
            extend(34);
            break;
        case 4:
            extend(34);
            extend(101);
            extend(34);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(34);
    extend(101);
    extend(34);
    RETURN();
}
void __attribute__((noinline)) func_4871717760() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(7);
    switch (branch) {
        case 0:
            CALL(func_4871716848);
            break;
        case 1:
            CALL(func_4871716064);
            break;
        case 2:
            CALL(func_4871717328);
            break;
        case 3:
            CALL(func_4871716368);
            break;
        case 4:
            extend(116);
            extend(114);
            extend(117);
            extend(101);
            break;
        case 5:
            extend(102);
            extend(97);
            extend(108);
            extend(115);
            extend(101);
            break;
        case 6:
            extend(110);
            extend(117);
            extend(108);
            extend(108);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    RETURN();
}
void __attribute__((noinline)) func_4871717696() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(91);
    CALL(func_4871716432);
    extend(93);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    extend(93);
    RETURN();
}
void __attribute__((noinline)) func_4871717952() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_4871717520() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_4871718080() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(91);
    extend(93);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    extend(93);
    RETURN();
}
void __attribute__((noinline)) func_4871718544() {
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
void __attribute__((noinline)) func_4871718672() {
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
void __attribute__((noinline)) func_4871718800() {
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
void __attribute__((noinline)) func_4871717392() {
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
void __attribute__((noinline)) func_4871719184() {
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
void __attribute__((noinline)) func_4871719376() {
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
void __attribute__((noinline)) func_4871719504() {
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
void __attribute__((noinline)) func_4871719632() {
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
void __attribute__((noinline)) func_4871719760() {
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
void __attribute__((noinline)) func_4871719312() {
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
void __attribute__((noinline)) func_4871717248() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4871717760);
    extend(44);
    CALL(func_4871716432);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    extend(44);
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    RETURN();
}
void __attribute__((noinline)) func_4871720144() {
    asm goto (
        "cmp x1, #40\n\t"
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
void __attribute__((noinline)) func_4871718288() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4871716976);
    extend(44);
    CALL(func_4871716192);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(34);
    extend(101);
    extend(34);
    extend(58);
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    extend(44);
    extend(34);
    extend(101);
    extend(34);
    extend(58);
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    RETURN();
}
void __attribute__((noinline)) func_4871718416() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4871716624);
    CALL(func_4871716368);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_4871720352() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(123);
    CALL(func_4871716192);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(123);
    extend(34);
    extend(101);
    extend(34);
    extend(58);
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_4871720480() {
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
void __attribute__((noinline)) func_4871720608() {
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
void __attribute__((noinline)) func_4871720784() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(123);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(123);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_4871720928() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4871717328);
    extend(58);
    CALL(func_4871717760);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(34);
    extend(101);
    extend(34);
    extend(58);
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    RETURN();
}
void __attribute__((noinline)) func_4871718928() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(58);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(58);
    RETURN();
}
void __attribute__((noinline)) func_4871720272() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(34);
    extend(97);
    extend(34);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(34);
    extend(97);
    extend(34);
    RETURN();
}
void __attribute__((noinline)) func_4871721696() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(34);
    extend(98);
    extend(34);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(34);
    extend(98);
    extend(34);
    RETURN();
}
void __attribute__((noinline)) func_4871721824() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(34);
    extend(99);
    extend(34);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(34);
    extend(99);
    extend(34);
    RETURN();
}
void __attribute__((noinline)) func_4871721984() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(34);
    extend(100);
    extend(34);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(34);
    extend(100);
    extend(34);
    RETURN();
}
void __attribute__((noinline)) func_4871722112() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(34);
    extend(101);
    extend(34);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(34);
    extend(101);
    extend(34);
    RETURN();
}
void __attribute__((noinline)) func_4871721536() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    RETURN();
}
void __attribute__((noinline)) func_4871722640() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    RETURN();
}
void __attribute__((noinline)) func_4871722768() {
    asm goto (
        "cmp x1, #40\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    RETURN();
}
int main(void) {
    seed = time(NULL);
    INIT_DEPTH();
    CALL(func_4871716768);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
