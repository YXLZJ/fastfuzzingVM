#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // buffer for storing text
#define MAX_DEPTH 25
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

void func_5098201312();
void func_5098202768();
void func_5098202608();
void func_5098202976();
void func_5098203104();
void func_5098203296();
void func_5098202912();
void func_5098203760();
void func_5098203888();
void func_5098204112();
void func_5098204320();
void func_5098204448();
void func_5098203600();
void func_5098204640();
void func_5098204768();
void __attribute__((noinline)) func_5098201312() {
    asm goto (
        "cmp x1, #25\n\t"
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
            extend(48);
            extend(100);
            break;
        case 1:
            extend(49);
            break;
        case 2:
            extend(50);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(50);
    RETURN();
}
void __attribute__((noinline)) func_5098202768() {
    asm goto (
        "cmp x1, #25\n\t"
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
            CALL(func_5098202912);
            break;
        case 1:
            CALL(func_5098204320);
            break;
        case 2:
            CALL(func_5098204640);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(50);
    extend(42);
    extend(116);
    RETURN();
}
void __attribute__((noinline)) func_5098202608() {
    asm goto (
        "cmp x1, #25\n\t"
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
            CALL(func_5098202768);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(50);
    extend(42);
    extend(116);
    RETURN();
}
void __attribute__((noinline)) func_5098202976() {
    asm goto (
        "cmp x1, #25\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(48);
    extend(100);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(48);
    extend(100);
    RETURN();
}
void __attribute__((noinline)) func_5098203104() {
    asm goto (
        "cmp x1, #25\n\t"
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
void __attribute__((noinline)) func_5098203296() {
    asm goto (
        "cmp x1, #25\n\t"
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
void __attribute__((noinline)) func_5098202912() {
    asm goto (
        "cmp x1, #25\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5098201312);
    extend(51);
    extend(52);
    extend(53);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(50);
    extend(51);
    extend(52);
    extend(53);
    RETURN();
}
void __attribute__((noinline)) func_5098203760() {
    asm goto (
        "cmp x1, #25\n\t"
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
void __attribute__((noinline)) func_5098203888() {
    asm goto (
        "cmp x1, #25\n\t"
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
void __attribute__((noinline)) func_5098204112() {
    asm goto (
        "cmp x1, #25\n\t"
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
void __attribute__((noinline)) func_5098204320() {
    asm goto (
        "cmp x1, #25\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5098201312);
    extend(42);
    extend(116);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(50);
    extend(42);
    extend(116);
    RETURN();
}
void __attribute__((noinline)) func_5098204448() {
    asm goto (
        "cmp x1, #25\n\t"
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
void __attribute__((noinline)) func_5098203600() {
    asm goto (
        "cmp x1, #25\n\t"
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
void __attribute__((noinline)) func_5098204640() {
    asm goto (
        "cmp x1, #25\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5098201312);
    extend(43);
    CALL(func_5098202768);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(50);
    extend(43);
    extend(50);
    extend(42);
    extend(116);
    RETURN();
}
void __attribute__((noinline)) func_5098204768() {
    asm goto (
        "cmp x1, #25\n\t"
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
int main(void) {
    seed = time(NULL);
    INIT_DEPTH();
    CALL(func_5098202608);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
