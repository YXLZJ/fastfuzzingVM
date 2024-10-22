#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // buffer for storing text
#define MAX_DEPTH 50
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

void func_5123374304();
void func_5123374864();
void func_5123374672();
void func_5123374432();
void func_5123374608();
void func_5123375088();
void func_5123375216();
void func_5123375008();
void func_5123375568();
void func_5123376000();
void func_5123375936();
void func_5123376192();
void func_5123375760();
void func_5123376320();
void func_5123376784();
void func_5123376912();
void func_5123377040();
void func_5123375632();
void func_5123377424();
void func_5123377616();
void func_5123377744();
void func_5123377872();
void func_5123378000();
void func_5123377552();
void func_5123375488();
void func_5123378384();
void func_5123376528();
void func_5123376656();
void func_5123378592();
void func_5123378720();
void func_5123378848();
void func_5123379024();
void func_5123379168();
void func_5123377168();
void func_5123378512();
void func_5123379936();
void func_5123380064();
void func_5123380224();
void func_5123380352();
void func_5123379776();
void func_5123380880();
void func_5123381008();
void __attribute__((noinline)) func_5123374304() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5123375936);
            break;
        case 1:
            CALL(func_5123376320);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    extend(93);
    RETURN();
}
void __attribute__((noinline)) func_5123374864() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123374672() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5123375488);
            break;
        case 1:
            CALL(func_5123376000);
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
void __attribute__((noinline)) func_5123374432() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5123376528);
            break;
        case 1:
            CALL(func_5123375216);
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
void __attribute__((noinline)) func_5123374608() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5123374864);
            break;
        case 1:
            CALL(func_5123376656);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5123375088() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5123378592);
            break;
        case 1:
            CALL(func_5123379024);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(123);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5123375216() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5123379168);
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
void __attribute__((noinline)) func_5123375008() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5123376000);
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
void __attribute__((noinline)) func_5123375568() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123376000() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5123375088);
            break;
        case 1:
            CALL(func_5123374304);
            break;
        case 2:
            CALL(func_5123375568);
            break;
        case 3:
            CALL(func_5123374608);
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
void __attribute__((noinline)) func_5123375936() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(91);
    CALL(func_5123374672);
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
void __attribute__((noinline)) func_5123376192() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123375760() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123376320() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123376784() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123376912() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123377040() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123375632() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123377424() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123377616() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123377744() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123377872() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123378000() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123377552() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123375488() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5123376000);
    extend(44);
    CALL(func_5123374672);
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
void __attribute__((noinline)) func_5123378384() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123376528() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5123375216);
    extend(44);
    CALL(func_5123374432);
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
void __attribute__((noinline)) func_5123376656() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5123374864);
    CALL(func_5123374608);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5123378592() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(123);
    CALL(func_5123374432);
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
void __attribute__((noinline)) func_5123378720() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123378848() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123379024() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123379168() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5123375568);
    extend(58);
    CALL(func_5123376000);
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
void __attribute__((noinline)) func_5123377168() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123378512() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123379936() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123380064() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123380224() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123380352() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123379776() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123380880() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5123381008() {
    asm goto (
        "cmp x1, #50\n\t"
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
    CALL(func_5123375008);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
