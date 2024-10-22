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

void func_5500854496(unsigned depth);
void func_5500855952(unsigned depth);
void func_5500855792(unsigned depth);
void func_5500856160(unsigned depth);
void func_5500856288(unsigned depth);
void func_5500856480(unsigned depth);
void func_5500856096(unsigned depth);
void func_5500856944(unsigned depth);
void func_5500857072(unsigned depth);
void func_5500857296(unsigned depth);
void func_5500857504(unsigned depth);
void func_5500857632(unsigned depth);
void func_5500856784(unsigned depth);
void func_5500857824(unsigned depth);
void func_5500857952(unsigned depth);
void func_5500854496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5500856160(depth+1);
        break;
        case 1:
            func_5500856288(depth+1);
        break;
        case 2:
            func_5500856480(depth+1);
        break;
    }
    return;
}
void func_5500855952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5500856096(depth+1);
        break;
        case 1:
            func_5500857504(depth+1);
        break;
        case 2:
            func_5500857824(depth+1);
        break;
    }
    return;
}
void func_5500855792(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5500855952(depth+1);
        break;
    }
    return;
}
void func_5500856160(unsigned depth) {
    extend(48);
    extend(100);
    return;
}
void func_5500856288(unsigned depth) {
    extend(49);
    return;
}
void func_5500856480(unsigned depth) {
    extend(50);
    return;
}
void func_5500856096(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        return;
    }
    func_5500854496(depth+1);
    func_5500856944(depth+1);
    func_5500857072(depth+1);
    func_5500857296(depth+1);
    return;
}
void func_5500856944(unsigned depth) {
    extend(51);
    return;
}
void func_5500857072(unsigned depth) {
    extend(52);
    return;
}
void func_5500857296(unsigned depth) {
    extend(53);
    return;
}
void func_5500857504(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    func_5500854496(depth+1);
    func_5500857632(depth+1);
    func_5500856784(depth+1);
    return;
}
void func_5500857632(unsigned depth) {
    extend(42);
    return;
}
void func_5500856784(unsigned depth) {
    extend(116);
    return;
}
void func_5500857824(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(50);
        extend(43);
        extend(50);
        extend(42);
        extend(116);
        return;
    }
    func_5500854496(depth+1);
    func_5500857952(depth+1);
    func_5500855952(depth+1);
    return;
}
void func_5500857952(unsigned depth) {
    extend(43);
    return;
}
int main(void) {
    static unsigned count = 3;
    seed = time(NULL);
    func_5500855792(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
