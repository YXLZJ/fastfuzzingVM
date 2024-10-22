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

void func_5744128768(unsigned depth);
void func_5744128896(unsigned depth);
void func_5744128320(unsigned depth);
void func_5744128592(unsigned depth);
void func_5744128448(unsigned depth);
void func_5744128384(unsigned depth);
void func_5744129760(unsigned depth);
void func_5744129088(unsigned depth);
void func_5744129952(unsigned depth);
void func_5744130176(unsigned depth);
void func_5744130304(unsigned depth);
void func_5744130496(unsigned depth);
void func_5744130624(unsigned depth);
void func_5744130752(unsigned depth);
void func_5744130880(unsigned depth);
void func_5744130432(unsigned depth);
void func_5744131280(unsigned depth);
void func_5744129456(unsigned depth);
void func_5744130016(unsigned depth);
void func_5744131600(unsigned depth);
void func_5744129152(unsigned depth);
void func_5744131728(unsigned depth);
void func_5744131856(unsigned depth);
void func_5744132016(unsigned depth);
void func_5744132304(unsigned depth);
void func_5744132432(unsigned depth);
void func_5744132560(unsigned depth);
void func_5744132688(unsigned depth);
void func_5744128768(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5744129760(depth+1);
        break;
        case 1:
            func_5744129088(depth+1);
        break;
        case 2:
            func_5744129952(depth+1);
        break;
        case 3:
            func_5744130176(depth+1);
        break;
        case 4:
            func_5744130304(depth+1);
        break;
        case 5:
            func_5744130496(depth+1);
        break;
        case 6:
            func_5744130624(depth+1);
        break;
        case 7:
            func_5744130752(depth+1);
        break;
        case 8:
            func_5744130880(depth+1);
        break;
        case 9:
            func_5744130432(depth+1);
        break;
    }
    return;
}
void func_5744128896(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5744131280(depth+1);
        break;
        case 1:
            func_5744130016(depth+1);
        break;
        case 2:
            func_5744128384(depth+1);
        break;
    }
    return;
}
void func_5744128320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5744129152(depth+1);
        break;
        case 1:
            func_5744128592(depth+1);
        break;
    }
    return;
}
void func_5744128592(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5744132016(depth+1);
        break;
        case 1:
            func_5744128768(depth+1);
        break;
    }
    return;
}
void func_5744128448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5744128896(depth+1);
        break;
    }
    return;
}
void func_5744128384(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5744132304(depth+1);
        break;
        case 1:
            func_5744132560(depth+1);
        break;
        case 2:
            func_5744128320(depth+1);
        break;
    }
    return;
}
void func_5744129760(unsigned depth) {
    extend(48);
    return;
}
void func_5744129088(unsigned depth) {
    extend(49);
    return;
}
void func_5744129952(unsigned depth) {
    extend(50);
    return;
}
void func_5744130176(unsigned depth) {
    extend(51);
    return;
}
void func_5744130304(unsigned depth) {
    extend(52);
    return;
}
void func_5744130496(unsigned depth) {
    extend(53);
    return;
}
void func_5744130624(unsigned depth) {
    extend(54);
    return;
}
void func_5744130752(unsigned depth) {
    extend(55);
    return;
}
void func_5744130880(unsigned depth) {
    extend(56);
    return;
}
void func_5744130432(unsigned depth) {
    extend(57);
    return;
}
void func_5744131280(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_5744128384(depth+1);
    func_5744129456(depth+1);
    func_5744128896(depth+1);
    return;
}
void func_5744129456(unsigned depth) {
    extend(43);
    return;
}
void func_5744130016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_5744128384(depth+1);
    func_5744131600(depth+1);
    func_5744128896(depth+1);
    return;
}
void func_5744131600(unsigned depth) {
    extend(45);
    return;
}
void func_5744129152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_5744131728(depth+1);
    func_5744128896(depth+1);
    func_5744131856(depth+1);
    return;
}
void func_5744131728(unsigned depth) {
    extend(40);
    return;
}
void func_5744131856(unsigned depth) {
    extend(41);
    return;
}
void func_5744132016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5744128768(depth+1);
    func_5744128592(depth+1);
    return;
}
void func_5744132304(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_5744128320(depth+1);
    func_5744132432(depth+1);
    func_5744128384(depth+1);
    return;
}
void func_5744132432(unsigned depth) {
    extend(42);
    return;
}
void func_5744132560(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_5744128320(depth+1);
    func_5744132688(depth+1);
    func_5744128384(depth+1);
    return;
}
void func_5744132688(unsigned depth) {
    extend(47);
    return;
}
int main(void) {
    static unsigned count = 6;
    seed = time(NULL);
    func_5744128448(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
