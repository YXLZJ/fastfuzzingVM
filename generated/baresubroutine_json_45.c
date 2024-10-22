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

void func_5282757856();
void func_5282758416();
void func_5282758224();
void func_5282757984();
void func_5282758160();
void func_5282758640();
void func_5282758768();
void func_5282758560();
void func_5282759120();
void func_5282759552();
void func_5282759488();
void func_5282759744();
void func_5282759312();
void func_5282759872();
void func_5282760336();
void func_5282760464();
void func_5282760592();
void func_5282759184();
void func_5282760976();
void func_5282761168();
void func_5282761296();
void func_5282761424();
void func_5282761552();
void func_5282761104();
void func_5282759040();
void func_5282761936();
void func_5282760080();
void func_5282760208();
void func_5282762144();
void func_5282762272();
void func_5282762400();
void func_5282762576();
void func_5282762720();
void func_5282760720();
void func_5282762064();
void func_5282763488();
void func_5282763616();
void func_5282763776();
void func_5282763904();
void func_5282763328();
void func_5282764432();
void func_5282764560();
void __attribute__((noinline)) func_5282757856() {
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
            CALL(func_5282759488);
            break;
        case 1:
            CALL(func_5282759872);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    extend(93);
    RETURN();
}
void __attribute__((noinline)) func_5282758416() {
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
void __attribute__((noinline)) func_5282758224() {
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
            CALL(func_5282759040);
            break;
        case 1:
            CALL(func_5282759552);
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
void __attribute__((noinline)) func_5282757984() {
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
            CALL(func_5282760080);
            break;
        case 1:
            CALL(func_5282758768);
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
void __attribute__((noinline)) func_5282758160() {
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
            CALL(func_5282758416);
            break;
        case 1:
            CALL(func_5282760208);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5282758640() {
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
            CALL(func_5282762144);
            break;
        case 1:
            CALL(func_5282762576);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(123);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5282758768() {
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
            CALL(func_5282762720);
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
void __attribute__((noinline)) func_5282758560() {
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
            CALL(func_5282759552);
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
void __attribute__((noinline)) func_5282759120() {
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
void __attribute__((noinline)) func_5282759552() {
    asm goto (
        "cmp x1, #45\n\t"
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
            CALL(func_5282758640);
            break;
        case 1:
            CALL(func_5282757856);
            break;
        case 2:
            CALL(func_5282759120);
            break;
        case 3:
            CALL(func_5282758160);
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
void __attribute__((noinline)) func_5282759488() {
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
    CALL(func_5282758224);
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
void __attribute__((noinline)) func_5282759744() {
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
void __attribute__((noinline)) func_5282759312() {
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
void __attribute__((noinline)) func_5282759872() {
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
    extend(93);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    extend(93);
    RETURN();
}
void __attribute__((noinline)) func_5282760336() {
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
void __attribute__((noinline)) func_5282760464() {
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
void __attribute__((noinline)) func_5282760592() {
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
void __attribute__((noinline)) func_5282759184() {
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
void __attribute__((noinline)) func_5282760976() {
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
void __attribute__((noinline)) func_5282761168() {
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
void __attribute__((noinline)) func_5282761296() {
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
void __attribute__((noinline)) func_5282761424() {
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
void __attribute__((noinline)) func_5282761552() {
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
void __attribute__((noinline)) func_5282761104() {
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
void __attribute__((noinline)) func_5282759040() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5282759552);
    extend(44);
    CALL(func_5282758224);
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
void __attribute__((noinline)) func_5282761936() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5282760080() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5282758768);
    extend(44);
    CALL(func_5282757984);
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
void __attribute__((noinline)) func_5282760208() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5282758416);
    CALL(func_5282758160);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5282762144() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(123);
    CALL(func_5282757984);
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
void __attribute__((noinline)) func_5282762272() {
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
void __attribute__((noinline)) func_5282762400() {
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
void __attribute__((noinline)) func_5282762576() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5282762720() {
    asm goto (
        "cmp x1, #45\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5282759120);
    extend(58);
    CALL(func_5282759552);
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
void __attribute__((noinline)) func_5282760720() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5282762064() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5282763488() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5282763616() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5282763776() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5282763904() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5282763328() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5282764432() {
    asm goto (
        "cmp x1, #45\n\t"
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
void __attribute__((noinline)) func_5282764560() {
    asm goto (
        "cmp x1, #45\n\t"
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
    CALL(func_5282758560);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
