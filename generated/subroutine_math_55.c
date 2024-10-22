#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 55
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

void func_5307921152(unsigned depth);
void func_5307921280(unsigned depth);
void func_5307920704(unsigned depth);
void func_5307920976(unsigned depth);
void func_5307920832(unsigned depth);
void func_5307920768(unsigned depth);
void func_5307922144(unsigned depth);
void func_5307921472(unsigned depth);
void func_5307922336(unsigned depth);
void func_5307922560(unsigned depth);
void func_5307922688(unsigned depth);
void func_5307922880(unsigned depth);
void func_5307923008(unsigned depth);
void func_5307923136(unsigned depth);
void func_5307923264(unsigned depth);
void func_5307922816(unsigned depth);
void func_5307923664(unsigned depth);
void func_5307921840(unsigned depth);
void func_5307922400(unsigned depth);
void func_5307923984(unsigned depth);
void func_5307921536(unsigned depth);
void func_5307924112(unsigned depth);
void func_5307924240(unsigned depth);
void func_5307924400(unsigned depth);
void func_5307924688(unsigned depth);
void func_5307924816(unsigned depth);
void func_5307924944(unsigned depth);
void func_5307925072(unsigned depth);
void func_5307921152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5307922144(depth+1);
        break;
        case 1:
            func_5307921472(depth+1);
        break;
        case 2:
            func_5307922336(depth+1);
        break;
        case 3:
            func_5307922560(depth+1);
        break;
        case 4:
            func_5307922688(depth+1);
        break;
        case 5:
            func_5307922880(depth+1);
        break;
        case 6:
            func_5307923008(depth+1);
        break;
        case 7:
            func_5307923136(depth+1);
        break;
        case 8:
            func_5307923264(depth+1);
        break;
        case 9:
            func_5307922816(depth+1);
        break;
    }
    return;
}
void func_5307921280(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5307923664(depth+1);
        break;
        case 1:
            func_5307922400(depth+1);
        break;
        case 2:
            func_5307920768(depth+1);
        break;
    }
    return;
}
void func_5307920704(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5307921536(depth+1);
        break;
        case 1:
            func_5307920976(depth+1);
        break;
    }
    return;
}
void func_5307920976(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5307924400(depth+1);
        break;
        case 1:
            func_5307921152(depth+1);
        break;
    }
    return;
}
void func_5307920832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5307921280(depth+1);
        break;
    }
    return;
}
void func_5307920768(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5307924688(depth+1);
        break;
        case 1:
            func_5307924944(depth+1);
        break;
        case 2:
            func_5307920704(depth+1);
        break;
    }
    return;
}
void func_5307922144(unsigned depth) {
    extend(48);
    return;
}
void func_5307921472(unsigned depth) {
    extend(49);
    return;
}
void func_5307922336(unsigned depth) {
    extend(50);
    return;
}
void func_5307922560(unsigned depth) {
    extend(51);
    return;
}
void func_5307922688(unsigned depth) {
    extend(52);
    return;
}
void func_5307922880(unsigned depth) {
    extend(53);
    return;
}
void func_5307923008(unsigned depth) {
    extend(54);
    return;
}
void func_5307923136(unsigned depth) {
    extend(55);
    return;
}
void func_5307923264(unsigned depth) {
    extend(56);
    return;
}
void func_5307922816(unsigned depth) {
    extend(57);
    return;
}
void func_5307923664(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_5307920768(depth+1);
    func_5307921840(depth+1);
    func_5307921280(depth+1);
    return;
}
void func_5307921840(unsigned depth) {
    extend(43);
    return;
}
void func_5307922400(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_5307920768(depth+1);
    func_5307923984(depth+1);
    func_5307921280(depth+1);
    return;
}
void func_5307923984(unsigned depth) {
    extend(45);
    return;
}
void func_5307921536(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_5307924112(depth+1);
    func_5307921280(depth+1);
    func_5307924240(depth+1);
    return;
}
void func_5307924112(unsigned depth) {
    extend(40);
    return;
}
void func_5307924240(unsigned depth) {
    extend(41);
    return;
}
void func_5307924400(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5307921152(depth+1);
    func_5307920976(depth+1);
    return;
}
void func_5307924688(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_5307920704(depth+1);
    func_5307924816(depth+1);
    func_5307920768(depth+1);
    return;
}
void func_5307924816(unsigned depth) {
    extend(42);
    return;
}
void func_5307924944(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_5307920704(depth+1);
    func_5307925072(depth+1);
    func_5307920768(depth+1);
    return;
}
void func_5307925072(unsigned depth) {
    extend(47);
    return;
}
int main(void) {
    static unsigned count = 6;
    seed = time(NULL);
    func_5307920832(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
