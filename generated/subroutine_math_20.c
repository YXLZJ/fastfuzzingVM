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

void func_5182092032(unsigned depth);
void func_5182092160(unsigned depth);
void func_5182091584(unsigned depth);
void func_5182091856(unsigned depth);
void func_5182091712(unsigned depth);
void func_5182091648(unsigned depth);
void func_5182093024(unsigned depth);
void func_5182092352(unsigned depth);
void func_5182093216(unsigned depth);
void func_5182093440(unsigned depth);
void func_5182093568(unsigned depth);
void func_5182093760(unsigned depth);
void func_5182093888(unsigned depth);
void func_5182094016(unsigned depth);
void func_5182094144(unsigned depth);
void func_5182093696(unsigned depth);
void func_5182094544(unsigned depth);
void func_5182092720(unsigned depth);
void func_5182093280(unsigned depth);
void func_5182094864(unsigned depth);
void func_5182092416(unsigned depth);
void func_5182094992(unsigned depth);
void func_5182095120(unsigned depth);
void func_5182095280(unsigned depth);
void func_5182095568(unsigned depth);
void func_5182095696(unsigned depth);
void func_5182095824(unsigned depth);
void func_5182095952(unsigned depth);
void func_5182092032(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5182093024(depth+1);
        break;
        case 1:
            func_5182092352(depth+1);
        break;
        case 2:
            func_5182093216(depth+1);
        break;
        case 3:
            func_5182093440(depth+1);
        break;
        case 4:
            func_5182093568(depth+1);
        break;
        case 5:
            func_5182093760(depth+1);
        break;
        case 6:
            func_5182093888(depth+1);
        break;
        case 7:
            func_5182094016(depth+1);
        break;
        case 8:
            func_5182094144(depth+1);
        break;
        case 9:
            func_5182093696(depth+1);
        break;
    }
    return;
}
void func_5182092160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5182094544(depth+1);
        break;
        case 1:
            func_5182093280(depth+1);
        break;
        case 2:
            func_5182091648(depth+1);
        break;
    }
    return;
}
void func_5182091584(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5182092416(depth+1);
        break;
        case 1:
            func_5182091856(depth+1);
        break;
    }
    return;
}
void func_5182091856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5182095280(depth+1);
        break;
        case 1:
            func_5182092032(depth+1);
        break;
    }
    return;
}
void func_5182091712(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5182092160(depth+1);
        break;
    }
    return;
}
void func_5182091648(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5182095568(depth+1);
        break;
        case 1:
            func_5182095824(depth+1);
        break;
        case 2:
            func_5182091584(depth+1);
        break;
    }
    return;
}
void func_5182093024(unsigned depth) {
    extend(48);
    return;
}
void func_5182092352(unsigned depth) {
    extend(49);
    return;
}
void func_5182093216(unsigned depth) {
    extend(50);
    return;
}
void func_5182093440(unsigned depth) {
    extend(51);
    return;
}
void func_5182093568(unsigned depth) {
    extend(52);
    return;
}
void func_5182093760(unsigned depth) {
    extend(53);
    return;
}
void func_5182093888(unsigned depth) {
    extend(54);
    return;
}
void func_5182094016(unsigned depth) {
    extend(55);
    return;
}
void func_5182094144(unsigned depth) {
    extend(56);
    return;
}
void func_5182093696(unsigned depth) {
    extend(57);
    return;
}
void func_5182094544(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_5182091648(depth+1);
    func_5182092720(depth+1);
    func_5182092160(depth+1);
    return;
}
void func_5182092720(unsigned depth) {
    extend(43);
    return;
}
void func_5182093280(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_5182091648(depth+1);
    func_5182094864(depth+1);
    func_5182092160(depth+1);
    return;
}
void func_5182094864(unsigned depth) {
    extend(45);
    return;
}
void func_5182092416(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_5182094992(depth+1);
    func_5182092160(depth+1);
    func_5182095120(depth+1);
    return;
}
void func_5182094992(unsigned depth) {
    extend(40);
    return;
}
void func_5182095120(unsigned depth) {
    extend(41);
    return;
}
void func_5182095280(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5182092032(depth+1);
    func_5182091856(depth+1);
    return;
}
void func_5182095568(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_5182091584(depth+1);
    func_5182095696(depth+1);
    func_5182091648(depth+1);
    return;
}
void func_5182095696(unsigned depth) {
    extend(42);
    return;
}
void func_5182095824(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_5182091584(depth+1);
    func_5182095952(depth+1);
    func_5182091648(depth+1);
    return;
}
void func_5182095952(unsigned depth) {
    extend(47);
    return;
}
int main(void) {
    static unsigned count = 6;
    seed = time(NULL);
    func_5182091712(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
