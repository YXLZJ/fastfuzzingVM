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

void func_5467319696();
void func_5467320448();
void func_5467320608();
void func_5467320320();
void func_5467319968();
void func_5467319568();
void func_5467320208();
void func_5467320736();
void func_5467322368();
void func_5467319888();
void func_5467320928();
void func_5467321136();
void func_5467321056();
void func_5467321568();
void func_5467321856();
void func_5467321408();
void func_5467321328();
void func_5467321792();
void func_5467322112();
void func_5467322240();
void func_5467323392();
void func_5467323520();
void func_5467323648();
void func_5467323776();
void func_5467323904();
void func_5467324032();
void func_5467324192();
void func_5467324320();
void func_5467324480();
void func_5467324608();
void func_5467324832();
void func_5467324960();
void func_5467325136();
void func_5467322624();
void func_5467323264();
void func_5467322816();
void func_5467325712();
void func_5467325840();
void func_5467325968();
void func_5467326160();
void func_5467326288();
void func_5467326416();
void func_5467326544();
void func_5467326096();
void func_5467322752();
void func_5467327088();
void func_5467322944();
void func_5467323072();
void func_5467326944();
void func_5467327312();
void func_5467327440();
void func_5467321696();
void func_5467328048();
void func_5467322432();
void func_5467328304();
void func_5467327648();
void func_5467328608();
void func_5467328736();
void func_5467330080();
void func_5467330208();
void func_5467330336();
void func_5467330496();
void func_5467330624();
void func_5467330816();
void func_5467330944();
void func_5467325264();
void func_5467325392();
void func_5467330752();
void func_5467331008();
void func_5467331136();
void func_5467331264();
void func_5467331392();
void func_5467331520();
void func_5467331648();
void func_5467331776();
void func_5467325520();
void func_5467332160();
void func_5467332288();
void func_5467332416();
void func_5467332544();
void func_5467332672();
void func_5467332800();
void func_5467332928();
void func_5467333056();
void func_5467333184();
void func_5467333312();
void func_5467333440();
void func_5467333568();
void func_5467333696();
void func_5467333824();
void func_5467333952();
void func_5467331904();
void func_5467332032();
void func_5467334592();
void func_5467334720();
void func_5467334848();
void func_5467334976();
void func_5467335104();
void func_5467335232();
void func_5467335360();
void func_5467335488();
void func_5467335616();
void func_5467335744();
void func_5467335872();
void func_5467336000();
void func_5467336128();
void func_5467336256();
void func_5467336384();
void func_5467336512();
void func_5467336640();
void func_5467328432();
void func_5467327776();
void func_5467329008();
void func_5467329136();
void func_5467329632();
void func_5467329760();
void func_5467329264();
void func_5467329888();
void func_5467336848();
void func_5467336976();
void func_5467337104();
void func_5467337232();
void func_5467337360();
void func_5467337488();
void func_5467337616();
void func_5467336768();
void func_5467329536();
void __attribute__((noinline)) func_5467319696() {
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
            CALL(func_5467321792);
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
void __attribute__((noinline)) func_5467320448() {
    asm goto (
        "cmp x1, #30\n\t"
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
            CALL(func_5467323392);
            break;
        case 1:
            CALL(func_5467323648);
            break;
        case 2:
            CALL(func_5467323904);
            break;
        case 3:
            CALL(func_5467324192);
            break;
        case 4:
            CALL(func_5467324480);
            break;
        case 5:
            CALL(func_5467324832);
            break;
        case 6:
            CALL(func_5467325136);
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
void __attribute__((noinline)) func_5467320608() {
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
void __attribute__((noinline)) func_5467320320() {
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
            CALL(func_5467322752);
            break;
        case 1:
            CALL(func_5467322944);
            break;
        case 2:
            CALL(func_5467321856);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5467319968() {
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
            CALL(func_5467326944);
            break;
        case 1:
            CALL(func_5467319888);
            break;
        case 2:
            CALL(func_5467320208);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5467319568() {
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
            CALL(func_5467321696);
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
void __attribute__((noinline)) func_5467320208() {
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
            CALL(func_5467327648);
            break;
        case 1:
            CALL(func_5467322368);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(90);
    RETURN();
}
void __attribute__((noinline)) func_5467320736() {
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
            CALL(func_5467328608);
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
void __attribute__((noinline)) func_5467322368() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467319888() {
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
            CALL(func_5467328432);
            break;
        case 1:
            CALL(func_5467320608);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5467320928() {
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
            CALL(func_5467327776);
            break;
        case 1:
            CALL(func_5467321568);
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
void __attribute__((noinline)) func_5467321136() {
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
            CALL(func_5467329008);
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
void __attribute__((noinline)) func_5467321056() {
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
            CALL(func_5467320928);
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
void __attribute__((noinline)) func_5467321568() {
    asm goto (
        "cmp x1, #30\n\t"
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
            CALL(func_5467321408);
            break;
        case 1:
            CALL(func_5467319696);
            break;
        case 2:
            CALL(func_5467320736);
            break;
        case 3:
            CALL(func_5467321328);
            break;
        case 4:
            CALL(func_5467319568);
            break;
        case 5:
            CALL(func_5467321136);
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
void __attribute__((noinline)) func_5467321856() {
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
            CALL(func_5467329632);
            break;
        case 1:
            CALL(func_5467329264);
            break;
        case 2:
            CALL(func_5467319968);
            break;
    }
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5467321408() {
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
            CALL(func_5467336848);
            break;
        case 1:
            CALL(func_5467337232);
            break;
        case 2:
            CALL(func_5467337488);
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
void __attribute__((noinline)) func_5467321328() {
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
            CALL(func_5467336768);
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
void __attribute__((noinline)) func_5467321792() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5467320208);
    extend(61);
    CALL(func_5467320320);
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
void __attribute__((noinline)) func_5467322112() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467322240() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467323392() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5467320320);
    extend(61);
    extend(61);
    CALL(func_5467320320);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(61);
    extend(61);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5467323520() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467323648() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5467320320);
    extend(33);
    extend(61);
    CALL(func_5467320320);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(33);
    extend(61);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5467323776() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467323904() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5467320320);
    extend(62);
    CALL(func_5467320320);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(62);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5467324032() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467324192() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5467320320);
    extend(60);
    CALL(func_5467320320);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(60);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5467324320() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467324480() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5467320448);
    extend(65);
    extend(78);
    extend(68);
    CALL(func_5467320448);
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
void __attribute__((noinline)) func_5467324608() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467324832() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5467320448);
    extend(79);
    extend(82);
    CALL(func_5467320448);
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
void __attribute__((noinline)) func_5467324960() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467325136() {
    asm goto (
        "cmp x1, #30\n\t"
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
    CALL(func_5467320448);
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
void __attribute__((noinline)) func_5467322624() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467323264() {
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
void __attribute__((noinline)) func_5467322816() {
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
void __attribute__((noinline)) func_5467325712() {
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
void __attribute__((noinline)) func_5467325840() {
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
void __attribute__((noinline)) func_5467325968() {
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
void __attribute__((noinline)) func_5467326160() {
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
void __attribute__((noinline)) func_5467326288() {
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
void __attribute__((noinline)) func_5467326416() {
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
void __attribute__((noinline)) func_5467326544() {
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
void __attribute__((noinline)) func_5467326096() {
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
void __attribute__((noinline)) func_5467322752() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5467320320);
    extend(43);
    CALL(func_5467321856);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(43);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5467327088() {
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
void __attribute__((noinline)) func_5467322944() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5467320320);
    extend(45);
    CALL(func_5467321856);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(45);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5467323072() {
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
void __attribute__((noinline)) func_5467326944() {
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
    CALL(func_5467320320);
    extend(41);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(40);
    extend(57);
    extend(41);
    RETURN();
}
void __attribute__((noinline)) func_5467327312() {
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
void __attribute__((noinline)) func_5467327440() {
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
void __attribute__((noinline)) func_5467321696() {
    asm goto (
        "cmp x1, #30\n\t"
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
    CALL(func_5467320208);
    extend(40);
    extend(41);
    extend(123);
    CALL(func_5467320928);
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
void __attribute__((noinline)) func_5467328048() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467322432() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467328304() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467327648() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5467322368);
    CALL(func_5467320208);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(90);
    extend(90);
    RETURN();
}
void __attribute__((noinline)) func_5467328608() {
    asm goto (
        "cmp x1, #30\n\t"
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
    CALL(func_5467320448);
    extend(41);
    extend(123);
    CALL(func_5467320928);
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
void __attribute__((noinline)) func_5467328736() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467330080() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467330208() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467330336() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467330496() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467330624() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467330816() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467330944() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467325264() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467325392() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467330752() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467331008() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467331136() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467331264() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467331392() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467331520() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467331648() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467331776() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467325520() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467332160() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467332288() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467332416() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467332544() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467332672() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467332800() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467332928() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467333056() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467333184() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467333312() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467333440() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467333568() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467333696() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467333824() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467333952() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467331904() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467332032() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467334592() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467334720() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467334848() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467334976() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467335104() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467335232() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467335360() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467335488() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467335616() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467335744() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467335872() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467336000() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467336128() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467336256() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467336384() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467336512() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467336640() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467328432() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5467320608);
    CALL(func_5467319888);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5467327776() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5467320928);
    CALL(func_5467321568);
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
void __attribute__((noinline)) func_5467329008() {
    asm goto (
        "cmp x1, #30\n\t"
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
    CALL(func_5467320320);
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
void __attribute__((noinline)) func_5467329136() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467329632() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5467321856);
    extend(42);
    CALL(func_5467319968);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(42);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5467329760() {
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
void __attribute__((noinline)) func_5467329264() {
    asm goto (
        "cmp x1, #30\n\t"
        "bgt %l[depth_exceeded]\n\t"
        :
        :
        : "x1"
        : depth_exceeded
    );
    // Normal function code
    CALL(func_5467321856);
    extend(47);
    CALL(func_5467319968);
    RETURN();
depth_exceeded:
    // Handle depth exceeded
    extend(57);
    extend(47);
    extend(57);
    RETURN();
}
void __attribute__((noinline)) func_5467329888() {
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
void __attribute__((noinline)) func_5467336848() {
    asm goto (
        "cmp x1, #30\n\t"
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
    CALL(func_5467320208);
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
void __attribute__((noinline)) func_5467336976() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467337104() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467337232() {
    asm goto (
        "cmp x1, #30\n\t"
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
    CALL(func_5467320208);
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
void __attribute__((noinline)) func_5467337360() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467337488() {
    asm goto (
        "cmp x1, #30\n\t"
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
    CALL(func_5467320208);
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
void __attribute__((noinline)) func_5467337616() {
    asm goto (
        "cmp x1, #30\n\t"
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
void __attribute__((noinline)) func_5467336768() {
    asm goto (
        "cmp x1, #30\n\t"
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
    CALL(func_5467320448);
    extend(41);
    extend(123);
    CALL(func_5467320928);
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
void __attribute__((noinline)) func_5467329536() {
    asm goto (
        "cmp x1, #30\n\t"
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
    CALL(func_5467321056);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
