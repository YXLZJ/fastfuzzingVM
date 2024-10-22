#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
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

void func_4771065232(unsigned depth);
void func_4771065984(unsigned depth);
void func_4771066144(unsigned depth);
void func_4771065856(unsigned depth);
void func_4771065504(unsigned depth);
void func_4771065104(unsigned depth);
void func_4771065744(unsigned depth);
void func_4771066272(unsigned depth);
void func_4771067904(unsigned depth);
void func_4771065424(unsigned depth);
void func_4771066464(unsigned depth);
void func_4771066672(unsigned depth);
void func_4771066592(unsigned depth);
void func_4771067104(unsigned depth);
void func_4771067392(unsigned depth);
void func_4771066944(unsigned depth);
void func_4771066864(unsigned depth);
void func_4771067328(unsigned depth);
void func_4771067648(unsigned depth);
void func_4771067776(unsigned depth);
void func_4771068928(unsigned depth);
void func_4771069056(unsigned depth);
void func_4771069184(unsigned depth);
void func_4771069312(unsigned depth);
void func_4771069440(unsigned depth);
void func_4771069568(unsigned depth);
void func_4771069728(unsigned depth);
void func_4771069856(unsigned depth);
void func_4771070016(unsigned depth);
void func_4771070144(unsigned depth);
void func_4771070368(unsigned depth);
void func_4771070496(unsigned depth);
void func_4771070672(unsigned depth);
void func_4771068160(unsigned depth);
void func_4771068800(unsigned depth);
void func_4771068352(unsigned depth);
void func_4771071248(unsigned depth);
void func_4771071376(unsigned depth);
void func_4771071504(unsigned depth);
void func_4771071696(unsigned depth);
void func_4771071824(unsigned depth);
void func_4771071952(unsigned depth);
void func_4771072080(unsigned depth);
void func_4771071632(unsigned depth);
void func_4771068288(unsigned depth);
void func_4771072624(unsigned depth);
void func_4771068480(unsigned depth);
void func_4771068608(unsigned depth);
void func_4771072480(unsigned depth);
void func_4771072848(unsigned depth);
void func_4771072976(unsigned depth);
void func_4771067232(unsigned depth);
void func_4771073584(unsigned depth);
void func_4771067968(unsigned depth);
void func_4771073840(unsigned depth);
void func_4771073184(unsigned depth);
void func_4771074144(unsigned depth);
void func_4771074272(unsigned depth);
void func_4771075616(unsigned depth);
void func_4771075744(unsigned depth);
void func_4771075872(unsigned depth);
void func_4771076032(unsigned depth);
void func_4771076160(unsigned depth);
void func_4771076352(unsigned depth);
void func_4771076480(unsigned depth);
void func_4771070800(unsigned depth);
void func_4771070928(unsigned depth);
void func_4771076288(unsigned depth);
void func_4771076544(unsigned depth);
void func_4771076672(unsigned depth);
void func_4771076800(unsigned depth);
void func_4771076928(unsigned depth);
void func_4771077056(unsigned depth);
void func_4771077184(unsigned depth);
void func_4771077312(unsigned depth);
void func_4771071056(unsigned depth);
void func_4771077696(unsigned depth);
void func_4771077824(unsigned depth);
void func_4771077952(unsigned depth);
void func_4771078080(unsigned depth);
void func_4771078208(unsigned depth);
void func_4771078336(unsigned depth);
void func_4771078464(unsigned depth);
void func_4771078592(unsigned depth);
void func_4771078720(unsigned depth);
void func_4771078848(unsigned depth);
void func_4771078976(unsigned depth);
void func_4771079104(unsigned depth);
void func_4771079232(unsigned depth);
void func_4771079360(unsigned depth);
void func_4771079488(unsigned depth);
void func_4771077440(unsigned depth);
void func_4771077568(unsigned depth);
void func_4771080128(unsigned depth);
void func_4771080256(unsigned depth);
void func_4771080384(unsigned depth);
void func_4771080512(unsigned depth);
void func_4771080640(unsigned depth);
void func_4771080768(unsigned depth);
void func_4771080896(unsigned depth);
void func_4771081024(unsigned depth);
void func_4771081152(unsigned depth);
void func_4771081280(unsigned depth);
void func_4771081408(unsigned depth);
void func_4771081536(unsigned depth);
void func_4771081664(unsigned depth);
void func_4771081792(unsigned depth);
void func_4771081920(unsigned depth);
void func_4771082048(unsigned depth);
void func_4771082176(unsigned depth);
void func_4771073968(unsigned depth);
void func_4771073312(unsigned depth);
void func_4771074544(unsigned depth);
void func_4771074672(unsigned depth);
void func_4771075168(unsigned depth);
void func_4771075296(unsigned depth);
void func_4771074800(unsigned depth);
void func_4771075424(unsigned depth);
void func_4771082384(unsigned depth);
void func_4771082512(unsigned depth);
void func_4771082640(unsigned depth);
void func_4771082768(unsigned depth);
void func_4771082896(unsigned depth);
void func_4771083024(unsigned depth);
void func_4771083152(unsigned depth);
void func_4771082304(unsigned depth);
void func_4771075072(unsigned depth);
void func_4771065232(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4771067328(depth+1);
        break;
    }
    return;
}
void func_4771065984(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    xor(7);
    switch (branch) {
        case 0:
            func_4771068928(depth+1);
        break;
        case 1:
            func_4771069184(depth+1);
        break;
        case 2:
            func_4771069440(depth+1);
        break;
        case 3:
            func_4771069728(depth+1);
        break;
        case 4:
            func_4771070016(depth+1);
        break;
        case 5:
            func_4771070368(depth+1);
        break;
        case 6:
            func_4771070672(depth+1);
        break;
    }
    return;
}
void func_4771066144(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4771068800(depth+1);
        break;
        case 1:
            func_4771068352(depth+1);
        break;
        case 2:
            func_4771071248(depth+1);
        break;
        case 3:
            func_4771071376(depth+1);
        break;
        case 4:
            func_4771071504(depth+1);
        break;
        case 5:
            func_4771071696(depth+1);
        break;
        case 6:
            func_4771071824(depth+1);
        break;
        case 7:
            func_4771071952(depth+1);
        break;
        case 8:
            func_4771072080(depth+1);
        break;
        case 9:
            func_4771071632(depth+1);
        break;
    }
    return;
}
void func_4771065856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4771068288(depth+1);
        break;
        case 1:
            func_4771068480(depth+1);
        break;
        case 2:
            func_4771067392(depth+1);
        break;
    }
    return;
}
void func_4771065504(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4771072480(depth+1);
        break;
        case 1:
            func_4771065424(depth+1);
        break;
        case 2:
            func_4771065744(depth+1);
        break;
    }
    return;
}
void func_4771065104(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4771067232(depth+1);
        break;
    }
    return;
}
void func_4771065744(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4771073184(depth+1);
        break;
        case 1:
            func_4771067904(depth+1);
        break;
    }
    return;
}
void func_4771066272(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4771074144(depth+1);
        break;
    }
    return;
}
void func_4771067904(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_4771075616(depth+1);
        break;
        case 1:
            func_4771075744(depth+1);
        break;
        case 2:
            func_4771075872(depth+1);
        break;
        case 3:
            func_4771076032(depth+1);
        break;
        case 4:
            func_4771076160(depth+1);
        break;
        case 5:
            func_4771076352(depth+1);
        break;
        case 6:
            func_4771076480(depth+1);
        break;
        case 7:
            func_4771070800(depth+1);
        break;
        case 8:
            func_4771070928(depth+1);
        break;
        case 9:
            func_4771076288(depth+1);
        break;
        case 10:
            func_4771076544(depth+1);
        break;
        case 11:
            func_4771076672(depth+1);
        break;
        case 12:
            func_4771076800(depth+1);
        break;
        case 13:
            func_4771076928(depth+1);
        break;
        case 14:
            func_4771077056(depth+1);
        break;
        case 15:
            func_4771077184(depth+1);
        break;
        case 16:
            func_4771077312(depth+1);
        break;
        case 17:
            func_4771071056(depth+1);
        break;
        case 18:
            func_4771077696(depth+1);
        break;
        case 19:
            func_4771077824(depth+1);
        break;
        case 20:
            func_4771077952(depth+1);
        break;
        case 21:
            func_4771078080(depth+1);
        break;
        case 22:
            func_4771078208(depth+1);
        break;
        case 23:
            func_4771078336(depth+1);
        break;
        case 24:
            func_4771078464(depth+1);
        break;
        case 25:
            func_4771078592(depth+1);
        break;
        case 26:
            func_4771078720(depth+1);
        break;
        case 27:
            func_4771078848(depth+1);
        break;
        case 28:
            func_4771078976(depth+1);
        break;
        case 29:
            func_4771079104(depth+1);
        break;
        case 30:
            func_4771079232(depth+1);
        break;
        case 31:
            func_4771079360(depth+1);
        break;
        case 32:
            func_4771079488(depth+1);
        break;
        case 33:
            func_4771077440(depth+1);
        break;
        case 34:
            func_4771077568(depth+1);
        break;
        case 35:
            func_4771080128(depth+1);
        break;
        case 36:
            func_4771080256(depth+1);
        break;
        case 37:
            func_4771080384(depth+1);
        break;
        case 38:
            func_4771080512(depth+1);
        break;
        case 39:
            func_4771080640(depth+1);
        break;
        case 40:
            func_4771080768(depth+1);
        break;
        case 41:
            func_4771080896(depth+1);
        break;
        case 42:
            func_4771081024(depth+1);
        break;
        case 43:
            func_4771081152(depth+1);
        break;
        case 44:
            func_4771081280(depth+1);
        break;
        case 45:
            func_4771081408(depth+1);
        break;
        case 46:
            func_4771081536(depth+1);
        break;
        case 47:
            func_4771081664(depth+1);
        break;
        case 48:
            func_4771081792(depth+1);
        break;
        case 49:
            func_4771081920(depth+1);
        break;
        case 50:
            func_4771082048(depth+1);
        break;
        case 51:
            func_4771082176(depth+1);
        break;
    }
    return;
}
void func_4771065424(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4771073968(depth+1);
        break;
        case 1:
            func_4771066144(depth+1);
        break;
    }
    return;
}
void func_4771066464(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4771073312(depth+1);
        break;
        case 1:
            func_4771067104(depth+1);
        break;
    }
    return;
}
void func_4771066672(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4771074544(depth+1);
        break;
    }
    return;
}
void func_4771066592(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4771066464(depth+1);
        break;
    }
    return;
}
void func_4771067104(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    xor(6);
    switch (branch) {
        case 0:
            func_4771066944(depth+1);
        break;
        case 1:
            func_4771065232(depth+1);
        break;
        case 2:
            func_4771066272(depth+1);
        break;
        case 3:
            func_4771066864(depth+1);
        break;
        case 4:
            func_4771065104(depth+1);
        break;
        case 5:
            func_4771066672(depth+1);
        break;
    }
    return;
}
void func_4771067392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4771075168(depth+1);
        break;
        case 1:
            func_4771074800(depth+1);
        break;
        case 2:
            func_4771065504(depth+1);
        break;
    }
    return;
}
void func_4771066944(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4771082384(depth+1);
        break;
        case 1:
            func_4771082768(depth+1);
        break;
        case 2:
            func_4771083024(depth+1);
        break;
    }
    return;
}
void func_4771066864(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4771082304(depth+1);
        break;
    }
    return;
}
void func_4771067328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        return;
    }
    func_4771065744(depth+1);
    func_4771067648(depth+1);
    func_4771065856(depth+1);
    func_4771067776(depth+1);
    return;
}
void func_4771067648(unsigned depth) {
    extend(61);
    return;
}
void func_4771067776(unsigned depth) {
    extend(59);
    return;
}
void func_4771068928(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        return;
    }
    func_4771065856(depth+1);
    func_4771069056(depth+1);
    func_4771065856(depth+1);
    return;
}
void func_4771069056(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_4771069184(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        return;
    }
    func_4771065856(depth+1);
    func_4771069312(depth+1);
    func_4771065856(depth+1);
    return;
}
void func_4771069312(unsigned depth) {
    extend(33);
    extend(61);
    return;
}
void func_4771069440(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        return;
    }
    func_4771065856(depth+1);
    func_4771069568(depth+1);
    func_4771065856(depth+1);
    return;
}
void func_4771069568(unsigned depth) {
    extend(62);
    return;
}
void func_4771069728(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_4771065856(depth+1);
    func_4771069856(depth+1);
    func_4771065856(depth+1);
    return;
}
void func_4771069856(unsigned depth) {
    extend(60);
    return;
}
void func_4771070016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(65);
        extend(78);
        extend(68);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_4771065984(depth+1);
    func_4771070144(depth+1);
    func_4771065984(depth+1);
    return;
}
void func_4771070144(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_4771070368(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(79);
        extend(82);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_4771065984(depth+1);
    func_4771070496(depth+1);
    func_4771065984(depth+1);
    return;
}
void func_4771070496(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_4771070672(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(78);
        extend(79);
        extend(84);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_4771068160(depth+1);
    func_4771065984(depth+1);
    return;
}
void func_4771068160(unsigned depth) {
    extend(78);
    extend(79);
    extend(84);
    return;
}
void func_4771068800(unsigned depth) {
    extend(48);
    return;
}
void func_4771068352(unsigned depth) {
    extend(49);
    return;
}
void func_4771071248(unsigned depth) {
    extend(50);
    return;
}
void func_4771071376(unsigned depth) {
    extend(51);
    return;
}
void func_4771071504(unsigned depth) {
    extend(52);
    return;
}
void func_4771071696(unsigned depth) {
    extend(53);
    return;
}
void func_4771071824(unsigned depth) {
    extend(54);
    return;
}
void func_4771071952(unsigned depth) {
    extend(55);
    return;
}
void func_4771072080(unsigned depth) {
    extend(56);
    return;
}
void func_4771071632(unsigned depth) {
    extend(57);
    return;
}
void func_4771068288(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_4771065856(depth+1);
    func_4771072624(depth+1);
    func_4771067392(depth+1);
    return;
}
void func_4771072624(unsigned depth) {
    extend(43);
    return;
}
void func_4771068480(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_4771065856(depth+1);
    func_4771068608(depth+1);
    func_4771067392(depth+1);
    return;
}
void func_4771068608(unsigned depth) {
    extend(45);
    return;
}
void func_4771072480(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_4771072848(depth+1);
    func_4771065856(depth+1);
    func_4771072976(depth+1);
    return;
}
void func_4771072848(unsigned depth) {
    extend(40);
    return;
}
void func_4771072976(unsigned depth) {
    extend(41);
    return;
}
void func_4771067232(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    func_4771073584(depth+1);
    func_4771065744(depth+1);
    func_4771072848(depth+1);
    func_4771072976(depth+1);
    func_4771067968(depth+1);
    func_4771066464(depth+1);
    func_4771073840(depth+1);
    return;
}
void func_4771073584(unsigned depth) {
    extend(102);
    extend(117);
    extend(110);
    extend(99);
    extend(116);
    extend(105);
    extend(111);
    extend(110);
    return;
}
void func_4771067968(unsigned depth) {
    extend(123);
    return;
}
void func_4771073840(unsigned depth) {
    extend(125);
    return;
}
void func_4771073184(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(90);
        return;
    }
    func_4771067904(depth+1);
    func_4771065744(depth+1);
    return;
}
void func_4771074144(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    func_4771074272(depth+1);
    func_4771072848(depth+1);
    func_4771065984(depth+1);
    func_4771072976(depth+1);
    func_4771067968(depth+1);
    func_4771066464(depth+1);
    func_4771073840(depth+1);
    return;
}
void func_4771074272(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_4771075616(unsigned depth) {
    extend(97);
    return;
}
void func_4771075744(unsigned depth) {
    extend(98);
    return;
}
void func_4771075872(unsigned depth) {
    extend(99);
    return;
}
void func_4771076032(unsigned depth) {
    extend(100);
    return;
}
void func_4771076160(unsigned depth) {
    extend(101);
    return;
}
void func_4771076352(unsigned depth) {
    extend(102);
    return;
}
void func_4771076480(unsigned depth) {
    extend(103);
    return;
}
void func_4771070800(unsigned depth) {
    extend(104);
    return;
}
void func_4771070928(unsigned depth) {
    extend(105);
    return;
}
void func_4771076288(unsigned depth) {
    extend(106);
    return;
}
void func_4771076544(unsigned depth) {
    extend(107);
    return;
}
void func_4771076672(unsigned depth) {
    extend(108);
    return;
}
void func_4771076800(unsigned depth) {
    extend(109);
    return;
}
void func_4771076928(unsigned depth) {
    extend(110);
    return;
}
void func_4771077056(unsigned depth) {
    extend(111);
    return;
}
void func_4771077184(unsigned depth) {
    extend(112);
    return;
}
void func_4771077312(unsigned depth) {
    extend(113);
    return;
}
void func_4771071056(unsigned depth) {
    extend(114);
    return;
}
void func_4771077696(unsigned depth) {
    extend(115);
    return;
}
void func_4771077824(unsigned depth) {
    extend(116);
    return;
}
void func_4771077952(unsigned depth) {
    extend(117);
    return;
}
void func_4771078080(unsigned depth) {
    extend(118);
    return;
}
void func_4771078208(unsigned depth) {
    extend(119);
    return;
}
void func_4771078336(unsigned depth) {
    extend(120);
    return;
}
void func_4771078464(unsigned depth) {
    extend(121);
    return;
}
void func_4771078592(unsigned depth) {
    extend(122);
    return;
}
void func_4771078720(unsigned depth) {
    extend(65);
    return;
}
void func_4771078848(unsigned depth) {
    extend(66);
    return;
}
void func_4771078976(unsigned depth) {
    extend(67);
    return;
}
void func_4771079104(unsigned depth) {
    extend(68);
    return;
}
void func_4771079232(unsigned depth) {
    extend(69);
    return;
}
void func_4771079360(unsigned depth) {
    extend(70);
    return;
}
void func_4771079488(unsigned depth) {
    extend(71);
    return;
}
void func_4771077440(unsigned depth) {
    extend(72);
    return;
}
void func_4771077568(unsigned depth) {
    extend(73);
    return;
}
void func_4771080128(unsigned depth) {
    extend(74);
    return;
}
void func_4771080256(unsigned depth) {
    extend(75);
    return;
}
void func_4771080384(unsigned depth) {
    extend(76);
    return;
}
void func_4771080512(unsigned depth) {
    extend(77);
    return;
}
void func_4771080640(unsigned depth) {
    extend(78);
    return;
}
void func_4771080768(unsigned depth) {
    extend(79);
    return;
}
void func_4771080896(unsigned depth) {
    extend(80);
    return;
}
void func_4771081024(unsigned depth) {
    extend(81);
    return;
}
void func_4771081152(unsigned depth) {
    extend(82);
    return;
}
void func_4771081280(unsigned depth) {
    extend(83);
    return;
}
void func_4771081408(unsigned depth) {
    extend(84);
    return;
}
void func_4771081536(unsigned depth) {
    extend(85);
    return;
}
void func_4771081664(unsigned depth) {
    extend(86);
    return;
}
void func_4771081792(unsigned depth) {
    extend(87);
    return;
}
void func_4771081920(unsigned depth) {
    extend(88);
    return;
}
void func_4771082048(unsigned depth) {
    extend(89);
    return;
}
void func_4771082176(unsigned depth) {
    extend(90);
    return;
}
void func_4771073968(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4771066144(depth+1);
    func_4771065424(depth+1);
    return;
}
void func_4771073312(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    func_4771066464(depth+1);
    func_4771067104(depth+1);
    return;
}
void func_4771074544(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    func_4771074672(depth+1);
    func_4771065856(depth+1);
    func_4771067776(depth+1);
    return;
}
void func_4771074672(unsigned depth) {
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    return;
}
void func_4771075168(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_4771067392(depth+1);
    func_4771075296(depth+1);
    func_4771065504(depth+1);
    return;
}
void func_4771075296(unsigned depth) {
    extend(42);
    return;
}
void func_4771074800(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_4771067392(depth+1);
    func_4771075424(depth+1);
    func_4771065504(depth+1);
    return;
}
void func_4771075424(unsigned depth) {
    extend(47);
    return;
}
void func_4771082384(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        return;
    }
    func_4771082512(depth+1);
    func_4771065744(depth+1);
    func_4771082640(depth+1);
    return;
}
void func_4771082512(unsigned depth) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_4771082640(unsigned depth) {
    extend(32);
    extend(59);
    extend(32);
    return;
}
void func_4771082768(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    func_4771082896(depth+1);
    func_4771065744(depth+1);
    func_4771082640(depth+1);
    return;
}
void func_4771082896(unsigned depth) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    return;
}
void func_4771083024(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    func_4771083152(depth+1);
    func_4771065744(depth+1);
    func_4771082640(depth+1);
    return;
}
void func_4771083152(unsigned depth) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    return;
}
void func_4771082304(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    func_4771075072(depth+1);
    func_4771072848(depth+1);
    func_4771065984(depth+1);
    func_4771072976(depth+1);
    func_4771067968(depth+1);
    func_4771066464(depth+1);
    func_4771073840(depth+1);
    return;
}
void func_4771075072(unsigned depth) {
    extend(32);
    extend(119);
    extend(104);
    extend(105);
    extend(108);
    extend(101);
    extend(32);
    return;
}
int main(void) {
    static unsigned count = 23;
    seed = time(NULL);
    func_4771066592(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
