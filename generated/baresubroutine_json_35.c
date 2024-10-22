#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // buffer for storing text
#define MAX_DEPTH 35
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

void func_4804607200();
void func_4804607760();
void func_4804607568();
void func_4804607328();
void func_4804607504();
void func_4804607984();
void func_4804608112();
void func_4804607904();
void func_4804608464();
void func_4804608896();
void func_4804608832();
void func_4804609088();
void func_4804608656();
void func_4804609216();
void func_4804609680();
void func_4804609808();
void func_4804609936();
void func_4804608528();
void func_4804610320();
void func_4804610512();
void func_4804610640();
void func_4804610768();
void func_4804610896();
void func_4804610448();
void func_4804608384();
void func_4804611280();
void func_4804609424();
void func_4804609552();
void func_4804611488();
void func_4804611616();
void func_4804611744();
void func_4804611920();
void func_4804612064();
void func_4804610064();
void func_4804611408();
void func_4804612832();
void func_4804612960();
void func_4804613120();
void func_4804613248();
void func_4804612672();
void func_4804613776();
void func_4804613904();
void __attribute__((noinline)) func_4804607200() {
    asm goto (
        "cmp x1, #35\n\t"
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
            CALL(func_4804608832);
            break;
        case 1:
            CALL(func_4804609216);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    extend(93);
    RETURN();
}
void __attribute__((noinline)) func_4804607760() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804607568() {
    asm goto (
        "cmp x1, #35\n\t"
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
            CALL(func_4804608384);
            break;
        case 1:
            CALL(func_4804608896);
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
void __attribute__((noinline)) func_4804607328() {
    asm goto (
        "cmp x1, #35\n\t"
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
            CALL(func_4804609424);
            break;
        case 1:
            CALL(func_4804608112);
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
void __attribute__((noinline)) func_4804607504() {
    asm goto (
        "cmp x1, #35\n\t"
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
            CALL(func_4804607760);
            break;
        case 1:
            CALL(func_4804609552);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_4804607984() {
    asm goto (
        "cmp x1, #35\n\t"
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
            CALL(func_4804611488);
            break;
        case 1:
            CALL(func_4804611920);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(123);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_4804608112() {
    asm goto (
        "cmp x1, #35\n\t"
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
            CALL(func_4804612064);
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
void __attribute__((noinline)) func_4804607904() {
    asm goto (
        "cmp x1, #35\n\t"
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
            CALL(func_4804608896);
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
void __attribute__((noinline)) func_4804608464() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804608896() {
    asm goto (
        "cmp x1, #35\n\t"
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
            CALL(func_4804607984);
            break;
        case 1:
            CALL(func_4804607200);
            break;
        case 2:
            CALL(func_4804608464);
            break;
        case 3:
            CALL(func_4804607504);
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
void __attribute__((noinline)) func_4804608832() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(91);
    CALL(func_4804607568);
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
void __attribute__((noinline)) func_4804609088() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804608656() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804609216() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804609680() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804609808() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804609936() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804608528() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804610320() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804610512() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804610640() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804610768() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804610896() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804610448() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804608384() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4804608896);
    extend(44);
    CALL(func_4804607568);
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
void __attribute__((noinline)) func_4804611280() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804609424() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4804608112);
    extend(44);
    CALL(func_4804607328);
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
void __attribute__((noinline)) func_4804609552() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4804607760);
    CALL(func_4804607504);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_4804611488() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(123);
    CALL(func_4804607328);
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
void __attribute__((noinline)) func_4804611616() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804611744() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804611920() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804612064() {
    asm goto (
        "cmp x1, #35\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_4804608464);
    extend(58);
    CALL(func_4804608896);
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
void __attribute__((noinline)) func_4804610064() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804611408() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804612832() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804612960() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804613120() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804613248() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804612672() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804613776() {
    asm goto (
        "cmp x1, #35\n\t"
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
void __attribute__((noinline)) func_4804613904() {
    asm goto (
        "cmp x1, #35\n\t"
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
    CALL(func_4804607904);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
