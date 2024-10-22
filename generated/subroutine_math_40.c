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

void func_5534413568(unsigned depth);
void func_5534413696(unsigned depth);
void func_5534413120(unsigned depth);
void func_5534413392(unsigned depth);
void func_5534413248(unsigned depth);
void func_5534413184(unsigned depth);
void func_5534414560(unsigned depth);
void func_5534413888(unsigned depth);
void func_5534414752(unsigned depth);
void func_5534414976(unsigned depth);
void func_5534415104(unsigned depth);
void func_5534415296(unsigned depth);
void func_5534415424(unsigned depth);
void func_5534415552(unsigned depth);
void func_5534415680(unsigned depth);
void func_5534415232(unsigned depth);
void func_5534416080(unsigned depth);
void func_5534414256(unsigned depth);
void func_5534414816(unsigned depth);
void func_5534416400(unsigned depth);
void func_5534413952(unsigned depth);
void func_5534416528(unsigned depth);
void func_5534416656(unsigned depth);
void func_5534416816(unsigned depth);
void func_5534417104(unsigned depth);
void func_5534417232(unsigned depth);
void func_5534417360(unsigned depth);
void func_5534417488(unsigned depth);
void func_5534413568(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5534414560(depth+1);
        break;
        case 1:
            func_5534413888(depth+1);
        break;
        case 2:
            func_5534414752(depth+1);
        break;
        case 3:
            func_5534414976(depth+1);
        break;
        case 4:
            func_5534415104(depth+1);
        break;
        case 5:
            func_5534415296(depth+1);
        break;
        case 6:
            func_5534415424(depth+1);
        break;
        case 7:
            func_5534415552(depth+1);
        break;
        case 8:
            func_5534415680(depth+1);
        break;
        case 9:
            func_5534415232(depth+1);
        break;
    }
    return;
}
void func_5534413696(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5534416080(depth+1);
        break;
        case 1:
            func_5534414816(depth+1);
        break;
        case 2:
            func_5534413184(depth+1);
        break;
    }
    return;
}
void func_5534413120(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5534413952(depth+1);
        break;
        case 1:
            func_5534413392(depth+1);
        break;
    }
    return;
}
void func_5534413392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5534416816(depth+1);
        break;
        case 1:
            func_5534413568(depth+1);
        break;
    }
    return;
}
void func_5534413248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5534413696(depth+1);
        break;
    }
    return;
}
void func_5534413184(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5534417104(depth+1);
        break;
        case 1:
            func_5534417360(depth+1);
        break;
        case 2:
            func_5534413120(depth+1);
        break;
    }
    return;
}
void func_5534414560(unsigned depth) {
    extend(48);
    return;
}
void func_5534413888(unsigned depth) {
    extend(49);
    return;
}
void func_5534414752(unsigned depth) {
    extend(50);
    return;
}
void func_5534414976(unsigned depth) {
    extend(51);
    return;
}
void func_5534415104(unsigned depth) {
    extend(52);
    return;
}
void func_5534415296(unsigned depth) {
    extend(53);
    return;
}
void func_5534415424(unsigned depth) {
    extend(54);
    return;
}
void func_5534415552(unsigned depth) {
    extend(55);
    return;
}
void func_5534415680(unsigned depth) {
    extend(56);
    return;
}
void func_5534415232(unsigned depth) {
    extend(57);
    return;
}
void func_5534416080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_5534413184(depth+1);
    func_5534414256(depth+1);
    func_5534413696(depth+1);
    return;
}
void func_5534414256(unsigned depth) {
    extend(43);
    return;
}
void func_5534414816(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_5534413184(depth+1);
    func_5534416400(depth+1);
    func_5534413696(depth+1);
    return;
}
void func_5534416400(unsigned depth) {
    extend(45);
    return;
}
void func_5534413952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_5534416528(depth+1);
    func_5534413696(depth+1);
    func_5534416656(depth+1);
    return;
}
void func_5534416528(unsigned depth) {
    extend(40);
    return;
}
void func_5534416656(unsigned depth) {
    extend(41);
    return;
}
void func_5534416816(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5534413568(depth+1);
    func_5534413392(depth+1);
    return;
}
void func_5534417104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_5534413120(depth+1);
    func_5534417232(depth+1);
    func_5534413184(depth+1);
    return;
}
void func_5534417232(unsigned depth) {
    extend(42);
    return;
}
void func_5534417360(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_5534413120(depth+1);
    func_5534417488(depth+1);
    func_5534413184(depth+1);
    return;
}
void func_5534417488(unsigned depth) {
    extend(47);
    return;
}
int main(void) {
    static unsigned count = 6;
    seed = time(NULL);
    func_5534413248(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
