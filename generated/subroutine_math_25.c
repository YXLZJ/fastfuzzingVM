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

void func_5467304704(unsigned depth);
void func_5467304832(unsigned depth);
void func_5467304256(unsigned depth);
void func_5467304528(unsigned depth);
void func_5467304384(unsigned depth);
void func_5467304320(unsigned depth);
void func_5467305696(unsigned depth);
void func_5467305024(unsigned depth);
void func_5467305888(unsigned depth);
void func_5467306112(unsigned depth);
void func_5467306240(unsigned depth);
void func_5467306432(unsigned depth);
void func_5467306560(unsigned depth);
void func_5467306688(unsigned depth);
void func_5467306816(unsigned depth);
void func_5467306368(unsigned depth);
void func_5467307216(unsigned depth);
void func_5467305392(unsigned depth);
void func_5467305952(unsigned depth);
void func_5467307536(unsigned depth);
void func_5467305088(unsigned depth);
void func_5467307664(unsigned depth);
void func_5467307792(unsigned depth);
void func_5467307952(unsigned depth);
void func_5467308240(unsigned depth);
void func_5467308368(unsigned depth);
void func_5467308496(unsigned depth);
void func_5467308624(unsigned depth);
void func_5467304704(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5467305696(depth+1);
        break;
        case 1:
            func_5467305024(depth+1);
        break;
        case 2:
            func_5467305888(depth+1);
        break;
        case 3:
            func_5467306112(depth+1);
        break;
        case 4:
            func_5467306240(depth+1);
        break;
        case 5:
            func_5467306432(depth+1);
        break;
        case 6:
            func_5467306560(depth+1);
        break;
        case 7:
            func_5467306688(depth+1);
        break;
        case 8:
            func_5467306816(depth+1);
        break;
        case 9:
            func_5467306368(depth+1);
        break;
    }
    return;
}
void func_5467304832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5467307216(depth+1);
        break;
        case 1:
            func_5467305952(depth+1);
        break;
        case 2:
            func_5467304320(depth+1);
        break;
    }
    return;
}
void func_5467304256(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5467305088(depth+1);
        break;
        case 1:
            func_5467304528(depth+1);
        break;
    }
    return;
}
void func_5467304528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5467307952(depth+1);
        break;
        case 1:
            func_5467304704(depth+1);
        break;
    }
    return;
}
void func_5467304384(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5467304832(depth+1);
        break;
    }
    return;
}
void func_5467304320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5467308240(depth+1);
        break;
        case 1:
            func_5467308496(depth+1);
        break;
        case 2:
            func_5467304256(depth+1);
        break;
    }
    return;
}
void func_5467305696(unsigned depth) {
    extend(48);
    return;
}
void func_5467305024(unsigned depth) {
    extend(49);
    return;
}
void func_5467305888(unsigned depth) {
    extend(50);
    return;
}
void func_5467306112(unsigned depth) {
    extend(51);
    return;
}
void func_5467306240(unsigned depth) {
    extend(52);
    return;
}
void func_5467306432(unsigned depth) {
    extend(53);
    return;
}
void func_5467306560(unsigned depth) {
    extend(54);
    return;
}
void func_5467306688(unsigned depth) {
    extend(55);
    return;
}
void func_5467306816(unsigned depth) {
    extend(56);
    return;
}
void func_5467306368(unsigned depth) {
    extend(57);
    return;
}
void func_5467307216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_5467304320(depth+1);
    func_5467305392(depth+1);
    func_5467304832(depth+1);
    return;
}
void func_5467305392(unsigned depth) {
    extend(43);
    return;
}
void func_5467305952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_5467304320(depth+1);
    func_5467307536(depth+1);
    func_5467304832(depth+1);
    return;
}
void func_5467307536(unsigned depth) {
    extend(45);
    return;
}
void func_5467305088(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_5467307664(depth+1);
    func_5467304832(depth+1);
    func_5467307792(depth+1);
    return;
}
void func_5467307664(unsigned depth) {
    extend(40);
    return;
}
void func_5467307792(unsigned depth) {
    extend(41);
    return;
}
void func_5467307952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5467304704(depth+1);
    func_5467304528(depth+1);
    return;
}
void func_5467308240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_5467304256(depth+1);
    func_5467308368(depth+1);
    func_5467304320(depth+1);
    return;
}
void func_5467308368(unsigned depth) {
    extend(42);
    return;
}
void func_5467308496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_5467304256(depth+1);
    func_5467308624(depth+1);
    func_5467304320(depth+1);
    return;
}
void func_5467308624(unsigned depth) {
    extend(47);
    return;
}
int main(void) {
    static unsigned count = 6;
    seed = time(NULL);
    func_5467304384(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
