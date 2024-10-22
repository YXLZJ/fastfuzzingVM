#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
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

void func_5131756256(unsigned depth);
void func_5131765696(unsigned depth);
void func_5131765616(unsigned depth);
void func_5131765536(unsigned depth);
void func_5131766160(unsigned depth);
void func_5131765264(unsigned depth);
void func_5131766688(unsigned depth);
void func_5131765456(unsigned depth);
void func_5131765984(unsigned depth);
void func_5131766048(unsigned depth);
void func_5131766928(unsigned depth);
void func_5131767056(unsigned depth);
void func_5131767280(unsigned depth);
void func_5131767408(unsigned depth);
void func_5131767536(unsigned depth);
void func_5131767904(unsigned depth);
void func_5131768032(unsigned depth);
void func_5131766352(unsigned depth);
void func_5131768416(unsigned depth);
void func_5131768544(unsigned depth);
void func_5131768672(unsigned depth);
void func_5131768800(unsigned depth);
void func_5131768928(unsigned depth);
void func_5131769088(unsigned depth);
void func_5131769216(unsigned depth);
void func_5131769440(unsigned depth);
void func_5131769568(unsigned depth);
void func_5131769696(unsigned depth);
void func_5131769824(unsigned depth);
void func_5131769952(unsigned depth);
void func_5131770144(unsigned depth);
void func_5131769376(unsigned depth);
void func_5131767184(unsigned depth);
void func_5131768160(unsigned depth);
void func_5131768288(unsigned depth);
void func_5131767728(unsigned depth);
void func_5131771632(unsigned depth);
void func_5131771760(unsigned depth);
void func_5131771568(unsigned depth);
void func_5131770800(unsigned depth);
void func_5131767792(unsigned depth);
void func_5131772208(unsigned depth);
void func_5131772336(unsigned depth);
void func_5131772464(unsigned depth);
void func_5131772656(unsigned depth);
void func_5131772784(unsigned depth);
void func_5131772912(unsigned depth);
void func_5131773040(unsigned depth);
void func_5131772592(unsigned depth);
void func_5131773360(unsigned depth);
void func_5131773488(unsigned depth);
void func_5131770624(unsigned depth);
void func_5131770336(unsigned depth);
void func_5131773760(unsigned depth);
void func_5131773888(unsigned depth);
void func_5131756256(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5131767280(depth+1);
        break;
    }
    return;
}
void func_5131765696(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5131767904(depth+1);
        break;
        case 1:
            func_5131766352(depth+1);
        break;
        case 2:
            func_5131768544(depth+1);
        break;
    }
    return;
}
void func_5131765616(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5131768800(depth+1);
        break;
        case 1:
            func_5131767056(depth+1);
        break;
        case 2:
            func_5131769088(depth+1);
        break;
    }
    return;
}
void func_5131765536(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5131766688(depth+1);
        break;
        case 1:
            func_5131766160(depth+1);
        break;
    }
    return;
}
void func_5131766160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(6);
    switch (branch) {
        case 0:
            func_5131769440(depth+1);
        break;
        case 1:
            func_5131769568(depth+1);
        break;
        case 2:
            func_5131769696(depth+1);
        break;
        case 3:
            func_5131769824(depth+1);
        break;
        case 4:
            func_5131769952(depth+1);
        break;
        case 5:
            func_5131770144(depth+1);
        break;
    }
    return;
}
void func_5131765264(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5131769376(depth+1);
        break;
        case 1:
            func_5131771568(depth+1);
        break;
    }
    return;
}
void func_5131766688(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5131770800(depth+1);
        break;
        case 1:
            func_5131767792(depth+1);
        break;
        case 2:
            func_5131772208(depth+1);
        break;
        case 3:
            func_5131772336(depth+1);
        break;
        case 4:
            func_5131772464(depth+1);
        break;
        case 5:
            func_5131772656(depth+1);
        break;
        case 6:
            func_5131772784(depth+1);
        break;
        case 7:
            func_5131772912(depth+1);
        break;
        case 8:
            func_5131773040(depth+1);
        break;
        case 9:
            func_5131772592(depth+1);
        break;
    }
    return;
}
void func_5131765456(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5131773360(depth+1);
        break;
    }
    return;
}
void func_5131765984(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5131765264(depth+1);
        break;
    }
    return;
}
void func_5131766048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5131765264(depth+1);
        break;
        case 1:
            func_5131756256(depth+1);
        break;
        case 2:
            func_5131765456(depth+1);
        break;
    }
    return;
}
void func_5131766928(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5131770624(depth+1);
        break;
        case 1:
            func_5131770336(depth+1);
        break;
    }
    return;
}
void func_5131767056(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5131765536(depth+1);
        break;
        case 1:
            func_5131773760(depth+1);
        break;
    }
    return;
}
void func_5131767280(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5131766160(depth+1);
    func_5131767408(depth+1);
    func_5131765616(depth+1);
    func_5131767536(depth+1);
    return;
}
void func_5131767408(unsigned depth) {
    extend(61);
    return;
}
void func_5131767536(unsigned depth) {
    extend(59);
    return;
}
void func_5131767904(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5131765616(depth+1);
    func_5131768032(depth+1);
    func_5131765616(depth+1);
    return;
}
void func_5131768032(unsigned depth) {
    extend(62);
    return;
}
void func_5131766352(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5131765616(depth+1);
    func_5131768416(depth+1);
    func_5131765616(depth+1);
    return;
}
void func_5131768416(unsigned depth) {
    extend(60);
    return;
}
void func_5131768544(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5131765616(depth+1);
    func_5131768672(depth+1);
    func_5131765616(depth+1);
    return;
}
void func_5131768672(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5131768800(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5131767056(depth+1);
    func_5131768928(depth+1);
    func_5131765616(depth+1);
    return;
}
void func_5131768928(unsigned depth) {
    extend(43);
    return;
}
void func_5131769088(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5131767056(depth+1);
    func_5131769216(depth+1);
    func_5131765616(depth+1);
    return;
}
void func_5131769216(unsigned depth) {
    extend(45);
    return;
}
void func_5131769440(unsigned depth) {
    extend(120);
    return;
}
void func_5131769568(unsigned depth) {
    extend(121);
    return;
}
void func_5131769696(unsigned depth) {
    extend(122);
    return;
}
void func_5131769824(unsigned depth) {
    extend(97);
    return;
}
void func_5131769952(unsigned depth) {
    extend(98);
    return;
}
void func_5131770144(unsigned depth) {
    extend(99);
    return;
}
void func_5131769376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        extend(101);
        extend(108);
        extend(115);
        extend(101);
        extend(123);
        extend(125);
        return;
    }
    func_5131767184(depth+1);
    func_5131768160(depth+1);
    func_5131765696(depth+1);
    func_5131768288(depth+1);
    func_5131767728(depth+1);
    func_5131766928(depth+1);
    func_5131771632(depth+1);
    func_5131771760(depth+1);
    func_5131767728(depth+1);
    func_5131766928(depth+1);
    func_5131771632(depth+1);
    return;
}
void func_5131767184(unsigned depth) {
    extend(105);
    extend(102);
    return;
}
void func_5131768160(unsigned depth) {
    extend(40);
    return;
}
void func_5131768288(unsigned depth) {
    extend(41);
    return;
}
void func_5131767728(unsigned depth) {
    extend(123);
    return;
}
void func_5131771632(unsigned depth) {
    extend(125);
    return;
}
void func_5131771760(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5131771568(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        return;
    }
    func_5131767184(depth+1);
    func_5131768160(depth+1);
    func_5131765696(depth+1);
    func_5131768288(depth+1);
    func_5131767728(depth+1);
    func_5131766928(depth+1);
    func_5131771632(depth+1);
    return;
}
void func_5131770800(unsigned depth) {
    extend(48);
    return;
}
void func_5131767792(unsigned depth) {
    extend(49);
    return;
}
void func_5131772208(unsigned depth) {
    extend(50);
    return;
}
void func_5131772336(unsigned depth) {
    extend(51);
    return;
}
void func_5131772464(unsigned depth) {
    extend(52);
    return;
}
void func_5131772656(unsigned depth) {
    extend(53);
    return;
}
void func_5131772784(unsigned depth) {
    extend(54);
    return;
}
void func_5131772912(unsigned depth) {
    extend(55);
    return;
}
void func_5131773040(unsigned depth) {
    extend(56);
    return;
}
void func_5131772592(unsigned depth) {
    extend(57);
    return;
}
void func_5131773360(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    func_5131773488(depth+1);
    func_5131768160(depth+1);
    func_5131765616(depth+1);
    func_5131768288(depth+1);
    func_5131767536(depth+1);
    return;
}
void func_5131773488(unsigned depth) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    return;
}
void func_5131770624(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    func_5131766048(depth+1);
    func_5131766928(depth+1);
    return;
}
void func_5131770336(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    return;
}
void func_5131773760(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5131765536(depth+1);
    func_5131773888(depth+1);
    func_5131767056(depth+1);
    return;
}
void func_5131773888(unsigned depth) {
    extend(42);
    return;
}
int main(void) {
    static unsigned count = 12;
    seed = time(NULL);
    func_5131765984(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
