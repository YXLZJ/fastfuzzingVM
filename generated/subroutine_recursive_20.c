#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 20
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

void func_4846543072(unsigned depth);
void func_4846544528(unsigned depth);
void func_4846544368(unsigned depth);
void func_4846544736(unsigned depth);
void func_4846544864(unsigned depth);
void func_4846545056(unsigned depth);
void func_4846544672(unsigned depth);
void func_4846545520(unsigned depth);
void func_4846545648(unsigned depth);
void func_4846545872(unsigned depth);
void func_4846546080(unsigned depth);
void func_4846546208(unsigned depth);
void func_4846545360(unsigned depth);
void func_4846546400(unsigned depth);
void func_4846546528(unsigned depth);
void func_4846543072(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4846544736(depth+1);
        break;
        case 1:
            func_4846544864(depth+1);
        break;
        case 2:
            func_4846545056(depth+1);
        break;
    }
    return;
}
void func_4846544528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4846544672(depth+1);
        break;
        case 1:
            func_4846546080(depth+1);
        break;
        case 2:
            func_4846546400(depth+1);
        break;
    }
    return;
}
void func_4846544368(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4846544528(depth+1);
        break;
    }
    return;
}
void func_4846544736(unsigned depth) {
    extend(48);
    extend(100);
    return;
}
void func_4846544864(unsigned depth) {
    extend(49);
    return;
}
void func_4846545056(unsigned depth) {
    extend(50);
    return;
}
void func_4846544672(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        return;
    }
    func_4846543072(depth+1);
    func_4846545520(depth+1);
    func_4846545648(depth+1);
    func_4846545872(depth+1);
    return;
}
void func_4846545520(unsigned depth) {
    extend(51);
    return;
}
void func_4846545648(unsigned depth) {
    extend(52);
    return;
}
void func_4846545872(unsigned depth) {
    extend(53);
    return;
}
void func_4846546080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    func_4846543072(depth+1);
    func_4846546208(depth+1);
    func_4846545360(depth+1);
    return;
}
void func_4846546208(unsigned depth) {
    extend(42);
    return;
}
void func_4846545360(unsigned depth) {
    extend(116);
    return;
}
void func_4846546400(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(43);
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    func_4846543072(depth+1);
    func_4846546528(depth+1);
    func_4846544528(depth+1);
    return;
}
void func_4846546528(unsigned depth) {
    extend(43);
    return;
}
int main(void) {
    static unsigned count = 3;
    seed = time(NULL);
    func_4846544368(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
