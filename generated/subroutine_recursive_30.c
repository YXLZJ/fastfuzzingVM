#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
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

void func_4913651936(unsigned depth);
void func_4913653392(unsigned depth);
void func_4913653232(unsigned depth);
void func_4913653600(unsigned depth);
void func_4913653728(unsigned depth);
void func_4913653920(unsigned depth);
void func_4913653536(unsigned depth);
void func_4913654384(unsigned depth);
void func_4913654512(unsigned depth);
void func_4913654736(unsigned depth);
void func_4913654944(unsigned depth);
void func_4913655072(unsigned depth);
void func_4913654224(unsigned depth);
void func_4913655264(unsigned depth);
void func_4913655392(unsigned depth);
void func_4913651936(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4913653600(depth+1);
        break;
        case 1:
            func_4913653728(depth+1);
        break;
        case 2:
            func_4913653920(depth+1);
        break;
    }
    return;
}
void func_4913653392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4913653536(depth+1);
        break;
        case 1:
            func_4913654944(depth+1);
        break;
        case 2:
            func_4913655264(depth+1);
        break;
    }
    return;
}
void func_4913653232(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4913653392(depth+1);
        break;
    }
    return;
}
void func_4913653600(unsigned depth) {
    extend(48);
    extend(100);
    return;
}
void func_4913653728(unsigned depth) {
    extend(49);
    return;
}
void func_4913653920(unsigned depth) {
    extend(50);
    return;
}
void func_4913653536(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        return;
    }
    func_4913651936(depth+1);
    func_4913654384(depth+1);
    func_4913654512(depth+1);
    func_4913654736(depth+1);
    return;
}
void func_4913654384(unsigned depth) {
    extend(51);
    return;
}
void func_4913654512(unsigned depth) {
    extend(52);
    return;
}
void func_4913654736(unsigned depth) {
    extend(53);
    return;
}
void func_4913654944(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    func_4913651936(depth+1);
    func_4913655072(depth+1);
    func_4913654224(depth+1);
    return;
}
void func_4913655072(unsigned depth) {
    extend(42);
    return;
}
void func_4913654224(unsigned depth) {
    extend(116);
    return;
}
void func_4913655264(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(43);
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    func_4913651936(depth+1);
    func_4913655392(depth+1);
    func_4913653392(depth+1);
    return;
}
void func_4913655392(unsigned depth) {
    extend(43);
    return;
}
int main(void) {
    static unsigned count = 3;
    seed = time(NULL);
    func_4913653232(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
