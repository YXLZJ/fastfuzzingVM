#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 40
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

void func_4880097504(unsigned depth);
void func_4880098960(unsigned depth);
void func_4880098800(unsigned depth);
void func_4880099168(unsigned depth);
void func_4880099296(unsigned depth);
void func_4880099488(unsigned depth);
void func_4880099104(unsigned depth);
void func_4880099952(unsigned depth);
void func_4880100080(unsigned depth);
void func_4880100304(unsigned depth);
void func_4880100512(unsigned depth);
void func_4880100640(unsigned depth);
void func_4880099792(unsigned depth);
void func_4880100832(unsigned depth);
void func_4880100960(unsigned depth);
void func_4880097504(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4880099168(depth+1);
        break;
        case 1:
            func_4880099296(depth+1);
        break;
        case 2:
            func_4880099488(depth+1);
        break;
    }
    return;
}
void func_4880098960(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4880099104(depth+1);
        break;
        case 1:
            func_4880100512(depth+1);
        break;
        case 2:
            func_4880100832(depth+1);
        break;
    }
    return;
}
void func_4880098800(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4880098960(depth+1);
        break;
    }
    return;
}
void func_4880099168(unsigned depth) {
    extend(48);
    extend(100);
    return;
}
void func_4880099296(unsigned depth) {
    extend(49);
    return;
}
void func_4880099488(unsigned depth) {
    extend(50);
    return;
}
void func_4880099104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        return;
    }
    func_4880097504(depth+1);
    func_4880099952(depth+1);
    func_4880100080(depth+1);
    func_4880100304(depth+1);
    return;
}
void func_4880099952(unsigned depth) {
    extend(51);
    return;
}
void func_4880100080(unsigned depth) {
    extend(52);
    return;
}
void func_4880100304(unsigned depth) {
    extend(53);
    return;
}
void func_4880100512(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    func_4880097504(depth+1);
    func_4880100640(depth+1);
    func_4880099792(depth+1);
    return;
}
void func_4880100640(unsigned depth) {
    extend(42);
    return;
}
void func_4880099792(unsigned depth) {
    extend(116);
    return;
}
void func_4880100832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(43);
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    func_4880097504(depth+1);
    func_4880100960(depth+1);
    func_4880098960(depth+1);
    return;
}
void func_4880100960(unsigned depth) {
    extend(43);
    return;
}
int main(void) {
    static unsigned count = 3;
    seed = time(NULL);
    func_4880098800(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
