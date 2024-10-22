#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
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

void func_4980767968(unsigned depth);
void func_4980768528(unsigned depth);
void func_4980768336(unsigned depth);
void func_4980768096(unsigned depth);
void func_4980768272(unsigned depth);
void func_4980768752(unsigned depth);
void func_4980768880(unsigned depth);
void func_4980768672(unsigned depth);
void func_4980769232(unsigned depth);
void func_4980769664(unsigned depth);
void func_4980769600(unsigned depth);
void func_4980769856(unsigned depth);
void func_4980769424(unsigned depth);
void func_4980769984(unsigned depth);
void func_4980770448(unsigned depth);
void func_4980770576(unsigned depth);
void func_4980770704(unsigned depth);
void func_4980769296(unsigned depth);
void func_4980771088(unsigned depth);
void func_4980771280(unsigned depth);
void func_4980771408(unsigned depth);
void func_4980771536(unsigned depth);
void func_4980771664(unsigned depth);
void func_4980771216(unsigned depth);
void func_4980769152(unsigned depth);
void func_4980772048(unsigned depth);
void func_4980770192(unsigned depth);
void func_4980770320(unsigned depth);
void func_4980772256(unsigned depth);
void func_4980772384(unsigned depth);
void func_4980772512(unsigned depth);
void func_4980772688(unsigned depth);
void func_4980772832(unsigned depth);
void func_4980770832(unsigned depth);
void func_4980772176(unsigned depth);
void func_4980773600(unsigned depth);
void func_4980773728(unsigned depth);
void func_4980773888(unsigned depth);
void func_4980774016(unsigned depth);
void func_4980773440(unsigned depth);
void func_4980774544(unsigned depth);
void func_4980774672(unsigned depth);
void func_4980767968(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4980769600(depth+1);
        break;
        case 1:
            func_4980769984(depth+1);
        break;
    }
    return;
}
void func_4980768528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4980770448(depth+1);
        break;
        case 1:
            func_4980770576(depth+1);
        break;
        case 2:
            func_4980770704(depth+1);
        break;
        case 3:
            func_4980769296(depth+1);
        break;
        case 4:
            func_4980771088(depth+1);
        break;
        case 5:
            func_4980771280(depth+1);
        break;
        case 6:
            func_4980771408(depth+1);
        break;
        case 7:
            func_4980771536(depth+1);
        break;
        case 8:
            func_4980771664(depth+1);
        break;
        case 9:
            func_4980771216(depth+1);
        break;
    }
    return;
}
void func_4980768336(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4980769152(depth+1);
        break;
        case 1:
            func_4980769664(depth+1);
        break;
    }
    return;
}
void func_4980768096(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4980770192(depth+1);
        break;
        case 1:
            func_4980768880(depth+1);
        break;
    }
    return;
}
void func_4980768272(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4980768528(depth+1);
        break;
        case 1:
            func_4980770320(depth+1);
        break;
    }
    return;
}
void func_4980768752(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4980772256(depth+1);
        break;
        case 1:
            func_4980772688(depth+1);
        break;
    }
    return;
}
void func_4980768880(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4980772832(depth+1);
        break;
    }
    return;
}
void func_4980768672(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4980769664(depth+1);
        break;
    }
    return;
}
void func_4980769232(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_4980772176(depth+1);
        break;
        case 1:
            func_4980773600(depth+1);
        break;
        case 2:
            func_4980773728(depth+1);
        break;
        case 3:
            func_4980773888(depth+1);
        break;
        case 4:
            func_4980774016(depth+1);
        break;
    }
    return;
}
void func_4980769664(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(7);
    switch (branch) {
        case 0:
            func_4980768752(depth+1);
        break;
        case 1:
            func_4980767968(depth+1);
        break;
        case 2:
            func_4980769232(depth+1);
        break;
        case 3:
            func_4980768272(depth+1);
        break;
        case 4:
            func_4980773440(depth+1);
        break;
        case 5:
            func_4980774544(depth+1);
        break;
        case 6:
            func_4980774672(depth+1);
        break;
    }
    return;
}
void func_4980769600(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        return;
    }
    func_4980769856(depth+1);
    func_4980768336(depth+1);
    func_4980769424(depth+1);
    return;
}
void func_4980769856(unsigned depth) {
    extend(91);
    return;
}
void func_4980769424(unsigned depth) {
    extend(93);
    return;
}
void func_4980769984(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    func_4980769856(depth+1);
    func_4980769424(depth+1);
    return;
}
void func_4980770448(unsigned depth) {
    extend(48);
    return;
}
void func_4980770576(unsigned depth) {
    extend(49);
    return;
}
void func_4980770704(unsigned depth) {
    extend(50);
    return;
}
void func_4980769296(unsigned depth) {
    extend(51);
    return;
}
void func_4980771088(unsigned depth) {
    extend(52);
    return;
}
void func_4980771280(unsigned depth) {
    extend(53);
    return;
}
void func_4980771408(unsigned depth) {
    extend(54);
    return;
}
void func_4980771536(unsigned depth) {
    extend(55);
    return;
}
void func_4980771664(unsigned depth) {
    extend(56);
    return;
}
void func_4980771216(unsigned depth) {
    extend(57);
    return;
}
void func_4980769152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    func_4980769664(depth+1);
    func_4980772048(depth+1);
    func_4980768336(depth+1);
    return;
}
void func_4980772048(unsigned depth) {
    extend(44);
    return;
}
void func_4980770192(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    func_4980768880(depth+1);
    func_4980772048(depth+1);
    func_4980768096(depth+1);
    return;
}
void func_4980770320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4980768528(depth+1);
    func_4980768272(depth+1);
    return;
}
void func_4980772256(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    func_4980772384(depth+1);
    func_4980768096(depth+1);
    func_4980772512(depth+1);
    return;
}
void func_4980772384(unsigned depth) {
    extend(123);
    return;
}
void func_4980772512(unsigned depth) {
    extend(125);
    return;
}
void func_4980772688(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    func_4980772384(depth+1);
    func_4980772512(depth+1);
    return;
}
void func_4980772832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    func_4980769232(depth+1);
    func_4980770832(depth+1);
    func_4980769664(depth+1);
    return;
}
void func_4980770832(unsigned depth) {
    extend(58);
    return;
}
void func_4980772176(unsigned depth) {
    extend(34);
    extend(97);
    extend(34);
    return;
}
void func_4980773600(unsigned depth) {
    extend(34);
    extend(98);
    extend(34);
    return;
}
void func_4980773728(unsigned depth) {
    extend(34);
    extend(99);
    extend(34);
    return;
}
void func_4980773888(unsigned depth) {
    extend(34);
    extend(100);
    extend(34);
    return;
}
void func_4980774016(unsigned depth) {
    extend(34);
    extend(101);
    extend(34);
    return;
}
void func_4980773440(unsigned depth) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    return;
}
void func_4980774544(unsigned depth) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_4980774672(unsigned depth) {
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    return;
}
int main(void) {
    static unsigned count = 8;
    seed = time(NULL);
    func_4980768672(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
