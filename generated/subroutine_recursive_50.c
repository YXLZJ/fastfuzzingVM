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

void func_5752512736(unsigned depth);
void func_5752514192(unsigned depth);
void func_5752514032(unsigned depth);
void func_5752514400(unsigned depth);
void func_5752514528(unsigned depth);
void func_5752514720(unsigned depth);
void func_5752514336(unsigned depth);
void func_5752515184(unsigned depth);
void func_5752515312(unsigned depth);
void func_5752515536(unsigned depth);
void func_5752515744(unsigned depth);
void func_5752515872(unsigned depth);
void func_5752515024(unsigned depth);
void func_5752516064(unsigned depth);
void func_5752516192(unsigned depth);
void func_5752512736(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5752514400(depth+1);
        break;
        case 1:
            func_5752514528(depth+1);
        break;
        case 2:
            func_5752514720(depth+1);
        break;
    }
    return;
}
void func_5752514192(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5752514336(depth+1);
        break;
        case 1:
            func_5752515744(depth+1);
        break;
        case 2:
            func_5752516064(depth+1);
        break;
    }
    return;
}
void func_5752514032(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5752514192(depth+1);
        break;
    }
    return;
}
void func_5752514400(unsigned depth) {
    extend(48);
    extend(100);
    return;
}
void func_5752514528(unsigned depth) {
    extend(49);
    return;
}
void func_5752514720(unsigned depth) {
    extend(50);
    return;
}
void func_5752514336(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        return;
    }
    func_5752512736(depth+1);
    func_5752515184(depth+1);
    func_5752515312(depth+1);
    func_5752515536(depth+1);
    return;
}
void func_5752515184(unsigned depth) {
    extend(51);
    return;
}
void func_5752515312(unsigned depth) {
    extend(52);
    return;
}
void func_5752515536(unsigned depth) {
    extend(53);
    return;
}
void func_5752515744(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    func_5752512736(depth+1);
    func_5752515872(depth+1);
    func_5752515024(depth+1);
    return;
}
void func_5752515872(unsigned depth) {
    extend(42);
    return;
}
void func_5752515024(unsigned depth) {
    extend(116);
    return;
}
void func_5752516064(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(43);
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    func_5752512736(depth+1);
    func_5752516192(depth+1);
    func_5752514192(depth+1);
    return;
}
void func_5752516192(unsigned depth) {
    extend(43);
    return;
}
int main(void) {
    static unsigned count = 3;
    seed = time(NULL);
    func_5752514032(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
