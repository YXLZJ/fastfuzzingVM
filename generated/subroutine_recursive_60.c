#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
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

void func_5274362080(unsigned depth);
void func_5274363536(unsigned depth);
void func_5274363376(unsigned depth);
void func_5274363744(unsigned depth);
void func_5274363872(unsigned depth);
void func_5274364064(unsigned depth);
void func_5274363680(unsigned depth);
void func_5274364528(unsigned depth);
void func_5274364656(unsigned depth);
void func_5274364880(unsigned depth);
void func_5274365088(unsigned depth);
void func_5274365216(unsigned depth);
void func_5274364368(unsigned depth);
void func_5274365408(unsigned depth);
void func_5274365536(unsigned depth);
void func_5274362080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5274363744(depth+1);
        break;
        case 1:
            func_5274363872(depth+1);
        break;
        case 2:
            func_5274364064(depth+1);
        break;
    }
    return;
}
void func_5274363536(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5274363680(depth+1);
        break;
        case 1:
            func_5274365088(depth+1);
        break;
        case 2:
            func_5274365408(depth+1);
        break;
    }
    return;
}
void func_5274363376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5274363536(depth+1);
        break;
    }
    return;
}
void func_5274363744(unsigned depth) {
    extend(48);
    extend(100);
    return;
}
void func_5274363872(unsigned depth) {
    extend(49);
    return;
}
void func_5274364064(unsigned depth) {
    extend(50);
    return;
}
void func_5274363680(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        return;
    }
    func_5274362080(depth+1);
    func_5274364528(depth+1);
    func_5274364656(depth+1);
    func_5274364880(depth+1);
    return;
}
void func_5274364528(unsigned depth) {
    extend(51);
    return;
}
void func_5274364656(unsigned depth) {
    extend(52);
    return;
}
void func_5274364880(unsigned depth) {
    extend(53);
    return;
}
void func_5274365088(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    func_5274362080(depth+1);
    func_5274365216(depth+1);
    func_5274364368(depth+1);
    return;
}
void func_5274365216(unsigned depth) {
    extend(42);
    return;
}
void func_5274364368(unsigned depth) {
    extend(116);
    return;
}
void func_5274365408(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(43);
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    func_5274362080(depth+1);
    func_5274365536(depth+1);
    func_5274363536(depth+1);
    return;
}
void func_5274365536(unsigned depth) {
    extend(43);
    return;
}
int main(void) {
    static unsigned count = 3;
    seed = time(NULL);
    func_5274363376(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
