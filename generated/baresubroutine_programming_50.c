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

void func_5064666512();
void func_5064667264();
void func_5064667424();
void func_5064667136();
void func_5064666784();
void func_5064666384();
void func_5064667024();
void func_5064667552();
void func_5064669184();
void func_5064666704();
void func_5064667744();
void func_5064667952();
void func_5064667872();
void func_5064668384();
void func_5064668672();
void func_5064668224();
void func_5064668144();
void func_5064668608();
void func_5064668928();
void func_5064669056();
void func_5064670208();
void func_5064670336();
void func_5064670464();
void func_5064670592();
void func_5064670720();
void func_5064670848();
void func_5064671008();
void func_5064671136();
void func_5064671296();
void func_5064671424();
void func_5064671648();
void func_5064671776();
void func_5064671952();
void func_5064669440();
void func_5064670080();
void func_5064669632();
void func_5064672528();
void func_5064672656();
void func_5064672784();
void func_5064672976();
void func_5064673104();
void func_5064673232();
void func_5064673360();
void func_5064672912();
void func_5064669568();
void func_5064673904();
void func_5064669760();
void func_5064669888();
void func_5064673760();
void func_5064674128();
void func_5064674256();
void func_5064668512();
void func_5064674864();
void func_5064669248();
void func_5064675120();
void func_5064674464();
void func_5064675424();
void func_5064675552();
void func_5064676896();
void func_5064677024();
void func_5064677152();
void func_5064677312();
void func_5064677440();
void func_5064677632();
void func_5064677760();
void func_5064672080();
void func_5064672208();
void func_5064677568();
void func_5064677824();
void func_5064677952();
void func_5064678080();
void func_5064678208();
void func_5064678336();
void func_5064678464();
void func_5064678592();
void func_5064672336();
void func_5064678976();
void func_5064679104();
void func_5064679232();
void func_5064679360();
void func_5064679488();
void func_5064679616();
void func_5064679744();
void func_5064679872();
void func_5064680000();
void func_5064680128();
void func_5064680256();
void func_5064680384();
void func_5064680512();
void func_5064680640();
void func_5064680768();
void func_5064678720();
void func_5064678848();
void func_5064681408();
void func_5064681536();
void func_5064681664();
void func_5064681792();
void func_5064681920();
void func_5064682048();
void func_5064682176();
void func_5064682304();
void func_5064682432();
void func_5064682560();
void func_5064682688();
void func_5064682816();
void func_5064682944();
void func_5064683072();
void func_5064683200();
void func_5064683328();
void func_5064683456();
void func_5064675248();
void func_5064674592();
void func_5064675824();
void func_5064675952();
void func_5064676448();
void func_5064676576();
void func_5064676080();
void func_5064676704();
void func_5064683664();
void func_5064683792();
void func_5064683920();
void func_5064684048();
void func_5064684176();
void func_5064684304();
void func_5064684432();
void func_5064683584();
void func_5064676352();
void __attribute__((noinline)) func_5064666512() {
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
            CALL(func_5064668608);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(90);
    extend(61);
    extend(57);
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5064667264() {
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
            CALL(func_5064670208);
            break;
        case 1:
            CALL(func_5064670464);
            break;
        case 2:
            CALL(func_5064670720);
            break;
        case 3:
            CALL(func_5064671008);
            break;
        case 4:
            CALL(func_5064671296);
            break;
        case 5:
            CALL(func_5064671648);
            break;
        case 6:
            CALL(func_5064671952);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(60);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064667424() {
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
void __attribute__((noinline)) func_5064667136() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5064669568);
            break;
        case 1:
            CALL(func_5064669760);
            break;
        case 2:
            CALL(func_5064668672);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064666784() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5064673760);
            break;
        case 1:
            CALL(func_5064666704);
            break;
        case 2:
            CALL(func_5064667024);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064666384() {
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
            CALL(func_5064668512);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(102);
    extend(117);
    extend(110);
    extend(99);
    extend(116);
    extend(105);
    extend(111);
    extend(110);
    extend(90);
    extend(40);
    extend(41);
    extend(123);
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    extend(57);
    extend(59);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5064667024() {
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
            CALL(func_5064674464);
            break;
        case 1:
            CALL(func_5064669184);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(90);
    RETURN();
}
void __attribute__((noinline)) func_5064667552() {
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
            CALL(func_5064675424);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    extend(40);
    extend(57);
    extend(60);
    extend(57);
    extend(41);
    extend(123);
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    extend(57);
    extend(59);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5064669184() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    xor(52);
    switch (branch) {
        case 0:
            extend(97);
            break;
        case 1:
            extend(98);
            break;
        case 2:
            extend(99);
            break;
        case 3:
            extend(100);
            break;
        case 4:
            extend(101);
            break;
        case 5:
            extend(102);
            break;
        case 6:
            extend(103);
            break;
        case 7:
            extend(104);
            break;
        case 8:
            extend(105);
            break;
        case 9:
            extend(106);
            break;
        case 10:
            extend(107);
            break;
        case 11:
            extend(108);
            break;
        case 12:
            extend(109);
            break;
        case 13:
            extend(110);
            break;
        case 14:
            extend(111);
            break;
        case 15:
            extend(112);
            break;
        case 16:
            extend(113);
            break;
        case 17:
            extend(114);
            break;
        case 18:
            extend(115);
            break;
        case 19:
            extend(116);
            break;
        case 20:
            extend(117);
            break;
        case 21:
            extend(118);
            break;
        case 22:
            extend(119);
            break;
        case 23:
            extend(120);
            break;
        case 24:
            extend(121);
            break;
        case 25:
            extend(122);
            break;
        case 26:
            extend(65);
            break;
        case 27:
            extend(66);
            break;
        case 28:
            extend(67);
            break;
        case 29:
            extend(68);
            break;
        case 30:
            extend(69);
            break;
        case 31:
            extend(70);
            break;
        case 32:
            extend(71);
            break;
        case 33:
            extend(72);
            break;
        case 34:
            extend(73);
            break;
        case 35:
            extend(74);
            break;
        case 36:
            extend(75);
            break;
        case 37:
            extend(76);
            break;
        case 38:
            extend(77);
            break;
        case 39:
            extend(78);
            break;
        case 40:
            extend(79);
            break;
        case 41:
            extend(80);
            break;
        case 42:
            extend(81);
            break;
        case 43:
            extend(82);
            break;
        case 44:
            extend(83);
            break;
        case 45:
            extend(84);
            break;
        case 46:
            extend(85);
            break;
        case 47:
            extend(86);
            break;
        case 48:
            extend(87);
            break;
        case 49:
            extend(88);
            break;
        case 50:
            extend(89);
            break;
        case 51:
            extend(90);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(90);
    RETURN();
}
void __attribute__((noinline)) func_5064666704() {
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
            CALL(func_5064675248);
            break;
        case 1:
            CALL(func_5064667424);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064667744() {
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
            CALL(func_5064674592);
            break;
        case 1:
            CALL(func_5064668384);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    extend(57);
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5064667952() {
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
            CALL(func_5064675824);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    extend(57);
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5064667872() {
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
            CALL(func_5064667744);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    extend(57);
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5064668384() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5064668224);
            break;
        case 1:
            CALL(func_5064666512);
            break;
        case 2:
            CALL(func_5064667552);
            break;
        case 3:
            CALL(func_5064668144);
            break;
        case 4:
            CALL(func_5064666384);
            break;
        case 5:
            CALL(func_5064667952);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    extend(57);
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5064668672() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5064676448);
            break;
        case 1:
            CALL(func_5064676080);
            break;
        case 2:
            CALL(func_5064666784);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064668224() {
    asm goto (
        "cmp x1, #50\n\t"
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
            CALL(func_5064683664);
            break;
        case 1:
            CALL(func_5064684048);
            break;
        case 2:
            CALL(func_5064684304);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    extend(90);
    extend(32);
    extend(59);
    extend(32);
    RETURN();
}
void __attribute__((noinline)) func_5064668144() {
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
            CALL(func_5064683584);
            break;
    }
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
    extend(40);
    extend(57);
    extend(60);
    extend(57);
    extend(41);
    extend(123);
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    extend(57);
    extend(59);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5064668608() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5064667024);
    extend(61);
    CALL(func_5064667136);
    extend(59);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(90);
    extend(61);
    extend(57);
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5064668928() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064669056() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064670208() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5064667136);
    extend(61);
    extend(61);
    CALL(func_5064667136);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(61);
    extend(61);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064670336() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064670464() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5064667136);
    extend(33);
    extend(61);
    CALL(func_5064667136);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(33);
    extend(61);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064670592() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(33);
    extend(61);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(33);
    extend(61);
    RETURN();
}
void __attribute__((noinline)) func_5064670720() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5064667136);
    extend(62);
    CALL(func_5064667136);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(62);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064670848() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064671008() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5064667136);
    extend(60);
    CALL(func_5064667136);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(60);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064671136() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064671296() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5064667264);
    extend(65);
    extend(78);
    extend(68);
    CALL(func_5064667264);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(60);
    extend(57);
    extend(65);
    extend(78);
    extend(68);
    extend(57);
    extend(60);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064671424() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(65);
    extend(78);
    extend(68);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(65);
    extend(78);
    extend(68);
    RETURN();
}
void __attribute__((noinline)) func_5064671648() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5064667264);
    extend(79);
    extend(82);
    CALL(func_5064667264);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(60);
    extend(57);
    extend(79);
    extend(82);
    extend(57);
    extend(60);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064671776() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(79);
    extend(82);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(79);
    extend(82);
    RETURN();
}
void __attribute__((noinline)) func_5064671952() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(78);
    extend(79);
    extend(84);
    CALL(func_5064667264);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(78);
    extend(79);
    extend(84);
    extend(57);
    extend(60);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064669440() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(78);
    extend(79);
    extend(84);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(78);
    extend(79);
    extend(84);
    RETURN();
}
void __attribute__((noinline)) func_5064670080() {
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
void __attribute__((noinline)) func_5064669632() {
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
void __attribute__((noinline)) func_5064672528() {
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
void __attribute__((noinline)) func_5064672656() {
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
void __attribute__((noinline)) func_5064672784() {
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
void __attribute__((noinline)) func_5064672976() {
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
void __attribute__((noinline)) func_5064673104() {
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
void __attribute__((noinline)) func_5064673232() {
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
void __attribute__((noinline)) func_5064673360() {
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
void __attribute__((noinline)) func_5064672912() {
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
void __attribute__((noinline)) func_5064669568() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5064667136);
    extend(43);
    CALL(func_5064668672);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(43);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064673904() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064669760() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5064667136);
    extend(45);
    CALL(func_5064668672);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(45);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064669888() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064673760() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(40);
    CALL(func_5064667136);
    extend(41);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(40);
    extend(57);
    extend(41);
    RETURN();
}
void __attribute__((noinline)) func_5064674128() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064674256() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064668512() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(102);
    extend(117);
    extend(110);
    extend(99);
    extend(116);
    extend(105);
    extend(111);
    extend(110);
    CALL(func_5064667024);
    extend(40);
    extend(41);
    extend(123);
    CALL(func_5064667744);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(102);
    extend(117);
    extend(110);
    extend(99);
    extend(116);
    extend(105);
    extend(111);
    extend(110);
    extend(90);
    extend(40);
    extend(41);
    extend(123);
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    extend(57);
    extend(59);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5064674864() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(102);
    extend(117);
    extend(110);
    extend(99);
    extend(116);
    extend(105);
    extend(111);
    extend(110);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(102);
    extend(117);
    extend(110);
    extend(99);
    extend(116);
    extend(105);
    extend(111);
    extend(110);
    RETURN();
}
void __attribute__((noinline)) func_5064669248() {
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
void __attribute__((noinline)) func_5064675120() {
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
void __attribute__((noinline)) func_5064674464() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5064669184);
    CALL(func_5064667024);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(90);
    extend(90);
    RETURN();
}
void __attribute__((noinline)) func_5064675424() {
    asm goto (
        "cmp x1, #50\n\t"
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
    CALL(func_5064667264);
    extend(41);
    extend(123);
    CALL(func_5064667744);
    extend(125);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    extend(40);
    extend(57);
    extend(60);
    extend(57);
    extend(41);
    extend(123);
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    extend(57);
    extend(59);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5064675552() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064676896() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064677024() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064677152() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064677312() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(100);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(100);
    RETURN();
}
void __attribute__((noinline)) func_5064677440() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(101);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(101);
    RETURN();
}
void __attribute__((noinline)) func_5064677632() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(102);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(102);
    RETURN();
}
void __attribute__((noinline)) func_5064677760() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(103);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(103);
    RETURN();
}
void __attribute__((noinline)) func_5064672080() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(104);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(104);
    RETURN();
}
void __attribute__((noinline)) func_5064672208() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064677568() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064677824() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064677952() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(108);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(108);
    RETURN();
}
void __attribute__((noinline)) func_5064678080() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(109);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(109);
    RETURN();
}
void __attribute__((noinline)) func_5064678208() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(110);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(110);
    RETURN();
}
void __attribute__((noinline)) func_5064678336() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(111);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(111);
    RETURN();
}
void __attribute__((noinline)) func_5064678464() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(112);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(112);
    RETURN();
}
void __attribute__((noinline)) func_5064678592() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(113);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(113);
    RETURN();
}
void __attribute__((noinline)) func_5064672336() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(114);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(114);
    RETURN();
}
void __attribute__((noinline)) func_5064678976() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(115);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(115);
    RETURN();
}
void __attribute__((noinline)) func_5064679104() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064679232() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(117);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(117);
    RETURN();
}
void __attribute__((noinline)) func_5064679360() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(118);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(118);
    RETURN();
}
void __attribute__((noinline)) func_5064679488() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(119);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(119);
    RETURN();
}
void __attribute__((noinline)) func_5064679616() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064679744() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064679872() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064680000() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(65);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(65);
    RETURN();
}
void __attribute__((noinline)) func_5064680128() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(66);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(66);
    RETURN();
}
void __attribute__((noinline)) func_5064680256() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(67);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(67);
    RETURN();
}
void __attribute__((noinline)) func_5064680384() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(68);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(68);
    RETURN();
}
void __attribute__((noinline)) func_5064680512() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(69);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(69);
    RETURN();
}
void __attribute__((noinline)) func_5064680640() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(70);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(70);
    RETURN();
}
void __attribute__((noinline)) func_5064680768() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(71);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(71);
    RETURN();
}
void __attribute__((noinline)) func_5064678720() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(72);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(72);
    RETURN();
}
void __attribute__((noinline)) func_5064678848() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(73);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(73);
    RETURN();
}
void __attribute__((noinline)) func_5064681408() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(74);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(74);
    RETURN();
}
void __attribute__((noinline)) func_5064681536() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(75);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(75);
    RETURN();
}
void __attribute__((noinline)) func_5064681664() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(76);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(76);
    RETURN();
}
void __attribute__((noinline)) func_5064681792() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(77);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(77);
    RETURN();
}
void __attribute__((noinline)) func_5064681920() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(78);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(78);
    RETURN();
}
void __attribute__((noinline)) func_5064682048() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(79);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(79);
    RETURN();
}
void __attribute__((noinline)) func_5064682176() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(80);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(80);
    RETURN();
}
void __attribute__((noinline)) func_5064682304() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(81);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(81);
    RETURN();
}
void __attribute__((noinline)) func_5064682432() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(82);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(82);
    RETURN();
}
void __attribute__((noinline)) func_5064682560() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(83);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(83);
    RETURN();
}
void __attribute__((noinline)) func_5064682688() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(84);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(84);
    RETURN();
}
void __attribute__((noinline)) func_5064682816() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(85);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(85);
    RETURN();
}
void __attribute__((noinline)) func_5064682944() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(86);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(86);
    RETURN();
}
void __attribute__((noinline)) func_5064683072() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(87);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(87);
    RETURN();
}
void __attribute__((noinline)) func_5064683200() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(88);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(88);
    RETURN();
}
void __attribute__((noinline)) func_5064683328() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(89);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(89);
    RETURN();
}
void __attribute__((noinline)) func_5064683456() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(90);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(90);
    RETURN();
}
void __attribute__((noinline)) func_5064675248() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5064667424);
    CALL(func_5064666704);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064674592() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5064667744);
    CALL(func_5064668384);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    extend(57);
    extend(59);
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    extend(57);
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5064675824() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    CALL(func_5064667136);
    extend(59);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    extend(57);
    extend(59);
    RETURN();
}
void __attribute__((noinline)) func_5064675952() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    RETURN();
}
void __attribute__((noinline)) func_5064676448() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5064668672);
    extend(42);
    CALL(func_5064666784);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(42);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064676576() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064676080() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5064668672);
    extend(47);
    CALL(func_5064666784);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(47);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5064676704() {
    asm goto (
        "cmp x1, #50\n\t"
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
void __attribute__((noinline)) func_5064683664() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    CALL(func_5064667024);
    extend(32);
    extend(59);
    extend(32);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    extend(90);
    extend(32);
    extend(59);
    extend(32);
    RETURN();
}
void __attribute__((noinline)) func_5064683792() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    RETURN();
}
void __attribute__((noinline)) func_5064683920() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(32);
    extend(59);
    extend(32);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(32);
    extend(59);
    extend(32);
    RETURN();
}
void __attribute__((noinline)) func_5064684048() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    CALL(func_5064667024);
    extend(32);
    extend(59);
    extend(32);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    extend(90);
    extend(32);
    extend(59);
    extend(32);
    RETURN();
}
void __attribute__((noinline)) func_5064684176() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    RETURN();
}
void __attribute__((noinline)) func_5064684304() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    CALL(func_5064667024);
    extend(32);
    extend(59);
    extend(32);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    extend(90);
    extend(32);
    extend(59);
    extend(32);
    RETURN();
}
void __attribute__((noinline)) func_5064684432() {
    asm goto (
        "cmp x1, #50\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    RETURN();
}
void __attribute__((noinline)) func_5064683584() {
    asm goto (
        "cmp x1, #50\n\t"
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
    CALL(func_5064667264);
    extend(41);
    extend(123);
    CALL(func_5064667744);
    extend(125);
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
    extend(40);
    extend(57);
    extend(60);
    extend(57);
    extend(41);
    extend(123);
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    extend(57);
    extend(59);
    extend(125);
    RETURN();
}
void __attribute__((noinline)) func_5064676352() {
    asm goto (
        "cmp x1, #50\n\t"
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
    CALL(func_5064667872);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
