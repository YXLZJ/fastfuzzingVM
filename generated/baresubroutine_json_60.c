#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // buffer for storing text
#define MAX_DEPTH 60
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

void func_5098208480();
void func_5098209040();
void func_5098208848();
void func_5098208608();
void func_5098208784();
void func_5098209264();
void func_5098209392();
void func_5098209184();
void func_5098209744();
void func_5098210176();
void func_5098210112();
void func_5098210368();
void func_5098209936();
void func_5098210496();
void func_5098210960();
void func_5098211088();
void func_5098211216();
void func_5098209808();
void func_5098211600();
void func_5098211792();
void func_5098211920();
void func_5098212048();
void func_5098212176();
void func_5098211728();
void func_5098209664();
void func_5098212560();
void func_5098210704();
void func_5098210832();
void func_5098212768();
void func_5098212896();
void func_5098213024();
void func_5098213200();
void func_5098213344();
void func_5098211344();
void func_5098212688();
void func_5098214112();
void func_5098214240();
void func_5098214400();
void func_5098214528();
void func_5098213952();
void func_5098215056();
void func_5098215184();
void __attribute__((noinline)) func_5098208480() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_5098210112);
            break;
        case 1:
            CALL(func_5098210496);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(91);
    extend(93);
    RETURN();
}
void __attribute__((noinline)) func_5098209040() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098208848() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_5098209664);
            break;
        case 1:
            CALL(func_5098210176);
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
void __attribute__((noinline)) func_5098208608() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_5098210704);
            break;
        case 1:
            CALL(func_5098209392);
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
void __attribute__((noinline)) func_5098208784() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_5098209040);
            break;
        case 1:
            CALL(func_5098210832);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5098209264() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_5098212768);
            break;
        case 1:
            CALL(func_5098213200);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(123);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5098209392() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_5098213344);
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
void __attribute__((noinline)) func_5098209184() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_5098210176);
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
void __attribute__((noinline)) func_5098209744() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098210176() {
    asm goto (
        "cmp x1, #60\n\t"
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
            CALL(func_5098209264);
            break;
        case 1:
            CALL(func_5098208480);
            break;
        case 2:
            CALL(func_5098209744);
            break;
        case 3:
            CALL(func_5098208784);
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
void __attribute__((noinline)) func_5098210112() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(91);
    CALL(func_5098208848);
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
void __attribute__((noinline)) func_5098210368() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098209936() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098210496() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098210960() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098211088() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098211216() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098209808() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098211600() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098211792() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098211920() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098212048() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098212176() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098211728() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098209664() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5098210176);
    extend(44);
    CALL(func_5098208848);
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
void __attribute__((noinline)) func_5098212560() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098210704() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5098209392);
    extend(44);
    CALL(func_5098208608);
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
void __attribute__((noinline)) func_5098210832() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5098209040);
    CALL(func_5098208784);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5098212768() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(123);
    CALL(func_5098208608);
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
void __attribute__((noinline)) func_5098212896() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098213024() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098213200() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098213344() {
    asm goto (
        "cmp x1, #60\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5098209744);
    extend(58);
    CALL(func_5098210176);
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
void __attribute__((noinline)) func_5098211344() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098212688() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098214112() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098214240() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098214400() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098214528() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098213952() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098215056() {
    asm goto (
        "cmp x1, #60\n\t"
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
void __attribute__((noinline)) func_5098215184() {
    asm goto (
        "cmp x1, #60\n\t"
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
    CALL(func_5098209184);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
