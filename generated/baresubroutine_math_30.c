#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // buffer for storing text
#define MAX_DEPTH 30
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

void func_5257589504();
void func_5257589632();
void func_5257589056();
void func_5257589328();
void func_5257589184();
void func_5257589120();
void func_5257590496();
void func_5257589824();
void func_5257590688();
void func_5257590912();
void func_5257591040();
void func_5257591232();
void func_5257591360();
void func_5257591488();
void func_5257591616();
void func_5257591168();
void func_5257592016();
void func_5257590192();
void func_5257590752();
void func_5257592336();
void func_5257589888();
void func_5257592464();
void func_5257592592();
void func_5257592752();
void func_5257593040();
void func_5257593168();
void func_5257593296();
void func_5257593424();
void __attribute__((noinline)) func_5257589504() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257589632() {
    asm goto (
        "cmp x1, #30\n\t"
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
            CALL(func_5257592016);
            break;
        case 1:
            CALL(func_5257590752);
            break;
        case 2:
            CALL(func_5257589120);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5257589056() {
    asm goto (
        "cmp x1, #30\n\t"
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
            CALL(func_5257589888);
            break;
        case 1:
            CALL(func_5257589328);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5257589328() {
    asm goto (
        "cmp x1, #30\n\t"
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
            CALL(func_5257592752);
            break;
        case 1:
            CALL(func_5257589504);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5257589184() {
    asm goto (
        "cmp x1, #30\n\t"
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
            CALL(func_5257589632);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5257589120() {
    asm goto (
        "cmp x1, #30\n\t"
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
            CALL(func_5257593040);
            break;
        case 1:
            CALL(func_5257593296);
            break;
        case 2:
            CALL(func_5257589056);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5257590496() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257589824() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257590688() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257590912() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257591040() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257591232() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257591360() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257591488() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257591616() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257591168() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257592016() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5257589120);
    extend(43);
    CALL(func_5257589632);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(43);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5257590192() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257590752() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5257589120);
    extend(45);
    CALL(func_5257589632);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(45);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5257592336() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257589888() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(40);
    CALL(func_5257589632);
    extend(41);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(40);
    extend(57);
    extend(41);
    RETURN();
}
void __attribute__((noinline)) func_5257592464() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257592592() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257592752() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5257589504);
    CALL(func_5257589328);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5257593040() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5257589056);
    extend(42);
    CALL(func_5257589120);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(42);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5257593168() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5257593296() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5257589056);
    extend(47);
    CALL(func_5257589120);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(47);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5257593424() {
    asm goto (
        "cmp x1, #30\n\t"
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
int main(void) {
    seed = time(NULL);
    INIT_DEPTH();
    CALL(func_5257589184);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
