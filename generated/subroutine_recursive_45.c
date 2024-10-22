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

void func_5232419040(unsigned depth);
void func_5232420496(unsigned depth);
void func_5232420336(unsigned depth);
void func_5232420704(unsigned depth);
void func_5232420832(unsigned depth);
void func_5232421024(unsigned depth);
void func_5232420640(unsigned depth);
void func_5232421488(unsigned depth);
void func_5232421616(unsigned depth);
void func_5232421840(unsigned depth);
void func_5232422048(unsigned depth);
void func_5232422176(unsigned depth);
void func_5232421328(unsigned depth);
void func_5232422368(unsigned depth);
void func_5232422496(unsigned depth);
void func_5232419040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5232420704(depth+1);
        break;
        case 1:
            func_5232420832(depth+1);
        break;
        case 2:
            func_5232421024(depth+1);
        break;
    }
    return;
}
void func_5232420496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5232420640(depth+1);
        break;
        case 1:
            func_5232422048(depth+1);
        break;
        case 2:
            func_5232422368(depth+1);
        break;
    }
    return;
}
void func_5232420336(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5232420496(depth+1);
        break;
    }
    return;
}
void func_5232420704(unsigned depth) {
    extend(48);
    extend(100);
    return;
}
void func_5232420832(unsigned depth) {
    extend(49);
    return;
}
void func_5232421024(unsigned depth) {
    extend(50);
    return;
}
void func_5232420640(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        return;
    }
    func_5232419040(depth+1);
    func_5232421488(depth+1);
    func_5232421616(depth+1);
    func_5232421840(depth+1);
    return;
}
void func_5232421488(unsigned depth) {
    extend(51);
    return;
}
void func_5232421616(unsigned depth) {
    extend(52);
    return;
}
void func_5232421840(unsigned depth) {
    extend(53);
    return;
}
void func_5232422048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    func_5232419040(depth+1);
    func_5232422176(depth+1);
    func_5232421328(depth+1);
    return;
}
void func_5232422176(unsigned depth) {
    extend(42);
    return;
}
void func_5232421328(unsigned depth) {
    extend(116);
    return;
}
void func_5232422368(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(43);
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    func_5232419040(depth+1);
    func_5232422496(depth+1);
    func_5232420496(depth+1);
    return;
}
void func_5232422496(unsigned depth) {
    extend(43);
    return;
}
int main(void) {
    static unsigned count = 3;
    seed = time(NULL);
    func_5232420336(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
