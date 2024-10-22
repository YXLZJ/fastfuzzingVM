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

void func_5500861664(unsigned depth);
void func_5500862224(unsigned depth);
void func_5500862032(unsigned depth);
void func_5500861792(unsigned depth);
void func_5500861968(unsigned depth);
void func_5500862448(unsigned depth);
void func_5500862576(unsigned depth);
void func_5500862368(unsigned depth);
void func_5500862928(unsigned depth);
void func_5500863360(unsigned depth);
void func_5500863296(unsigned depth);
void func_5500863552(unsigned depth);
void func_5500863120(unsigned depth);
void func_5500863680(unsigned depth);
void func_5500864144(unsigned depth);
void func_5500864272(unsigned depth);
void func_5500864400(unsigned depth);
void func_5500862992(unsigned depth);
void func_5500864784(unsigned depth);
void func_5500864976(unsigned depth);
void func_5500865104(unsigned depth);
void func_5500865232(unsigned depth);
void func_5500865360(unsigned depth);
void func_5500864912(unsigned depth);
void func_5500862848(unsigned depth);
void func_5500865744(unsigned depth);
void func_5500863888(unsigned depth);
void func_5500864016(unsigned depth);
void func_5500865952(unsigned depth);
void func_5500866080(unsigned depth);
void func_5500866208(unsigned depth);
void func_5500866384(unsigned depth);
void func_5500866528(unsigned depth);
void func_5500864528(unsigned depth);
void func_5500865872(unsigned depth);
void func_5500867296(unsigned depth);
void func_5500867424(unsigned depth);
void func_5500867584(unsigned depth);
void func_5500867712(unsigned depth);
void func_5500867136(unsigned depth);
void func_5500868240(unsigned depth);
void func_5500868368(unsigned depth);
void func_5500861664(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5500863296(depth+1);
        break;
        case 1:
            func_5500863680(depth+1);
        break;
    }
    return;
}
void func_5500862224(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5500864144(depth+1);
        break;
        case 1:
            func_5500864272(depth+1);
        break;
        case 2:
            func_5500864400(depth+1);
        break;
        case 3:
            func_5500862992(depth+1);
        break;
        case 4:
            func_5500864784(depth+1);
        break;
        case 5:
            func_5500864976(depth+1);
        break;
        case 6:
            func_5500865104(depth+1);
        break;
        case 7:
            func_5500865232(depth+1);
        break;
        case 8:
            func_5500865360(depth+1);
        break;
        case 9:
            func_5500864912(depth+1);
        break;
    }
    return;
}
void func_5500862032(unsigned depth) {
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
            func_5500862848(depth+1);
        break;
        case 1:
            func_5500863360(depth+1);
        break;
    }
    return;
}
void func_5500861792(unsigned depth) {
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
            func_5500863888(depth+1);
        break;
        case 1:
            func_5500862576(depth+1);
        break;
    }
    return;
}
void func_5500861968(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5500862224(depth+1);
        break;
        case 1:
            func_5500864016(depth+1);
        break;
    }
    return;
}
void func_5500862448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5500865952(depth+1);
        break;
        case 1:
            func_5500866384(depth+1);
        break;
    }
    return;
}
void func_5500862576(unsigned depth) {
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
            func_5500866528(depth+1);
        break;
    }
    return;
}
void func_5500862368(unsigned depth) {
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
            func_5500863360(depth+1);
        break;
    }
    return;
}
void func_5500862928(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_5500865872(depth+1);
        break;
        case 1:
            func_5500867296(depth+1);
        break;
        case 2:
            func_5500867424(depth+1);
        break;
        case 3:
            func_5500867584(depth+1);
        break;
        case 4:
            func_5500867712(depth+1);
        break;
    }
    return;
}
void func_5500863360(unsigned depth) {
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
            func_5500862448(depth+1);
        break;
        case 1:
            func_5500861664(depth+1);
        break;
        case 2:
            func_5500862928(depth+1);
        break;
        case 3:
            func_5500861968(depth+1);
        break;
        case 4:
            func_5500867136(depth+1);
        break;
        case 5:
            func_5500868240(depth+1);
        break;
        case 6:
            func_5500868368(depth+1);
        break;
    }
    return;
}
void func_5500863296(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        return;
    }
    func_5500863552(depth+1);
    func_5500862032(depth+1);
    func_5500863120(depth+1);
    return;
}
void func_5500863552(unsigned depth) {
    extend(91);
    return;
}
void func_5500863120(unsigned depth) {
    extend(93);
    return;
}
void func_5500863680(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    func_5500863552(depth+1);
    func_5500863120(depth+1);
    return;
}
void func_5500864144(unsigned depth) {
    extend(48);
    return;
}
void func_5500864272(unsigned depth) {
    extend(49);
    return;
}
void func_5500864400(unsigned depth) {
    extend(50);
    return;
}
void func_5500862992(unsigned depth) {
    extend(51);
    return;
}
void func_5500864784(unsigned depth) {
    extend(52);
    return;
}
void func_5500864976(unsigned depth) {
    extend(53);
    return;
}
void func_5500865104(unsigned depth) {
    extend(54);
    return;
}
void func_5500865232(unsigned depth) {
    extend(55);
    return;
}
void func_5500865360(unsigned depth) {
    extend(56);
    return;
}
void func_5500864912(unsigned depth) {
    extend(57);
    return;
}
void func_5500862848(unsigned depth) {
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
    func_5500863360(depth+1);
    func_5500865744(depth+1);
    func_5500862032(depth+1);
    return;
}
void func_5500865744(unsigned depth) {
    extend(44);
    return;
}
void func_5500863888(unsigned depth) {
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
    func_5500862576(depth+1);
    func_5500865744(depth+1);
    func_5500861792(depth+1);
    return;
}
void func_5500864016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5500862224(depth+1);
    func_5500861968(depth+1);
    return;
}
void func_5500865952(unsigned depth) {
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
    func_5500866080(depth+1);
    func_5500861792(depth+1);
    func_5500866208(depth+1);
    return;
}
void func_5500866080(unsigned depth) {
    extend(123);
    return;
}
void func_5500866208(unsigned depth) {
    extend(125);
    return;
}
void func_5500866384(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    func_5500866080(depth+1);
    func_5500866208(depth+1);
    return;
}
void func_5500866528(unsigned depth) {
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
    func_5500862928(depth+1);
    func_5500864528(depth+1);
    func_5500863360(depth+1);
    return;
}
void func_5500864528(unsigned depth) {
    extend(58);
    return;
}
void func_5500865872(unsigned depth) {
    extend(34);
    extend(97);
    extend(34);
    return;
}
void func_5500867296(unsigned depth) {
    extend(34);
    extend(98);
    extend(34);
    return;
}
void func_5500867424(unsigned depth) {
    extend(34);
    extend(99);
    extend(34);
    return;
}
void func_5500867584(unsigned depth) {
    extend(34);
    extend(100);
    extend(34);
    return;
}
void func_5500867712(unsigned depth) {
    extend(34);
    extend(101);
    extend(34);
    return;
}
void func_5500867136(unsigned depth) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    return;
}
void func_5500868240(unsigned depth) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5500868368(unsigned depth) {
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    return;
}
int main(void) {
    static unsigned count = 8;
    seed = time(NULL);
    func_5500862368(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
