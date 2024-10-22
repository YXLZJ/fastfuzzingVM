#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 50
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

void func_5224035072(unsigned depth);
void func_5224035200(unsigned depth);
void func_5224034624(unsigned depth);
void func_5224034896(unsigned depth);
void func_5224034752(unsigned depth);
void func_5224034688(unsigned depth);
void func_5224036064(unsigned depth);
void func_5224035392(unsigned depth);
void func_5224036256(unsigned depth);
void func_5224036480(unsigned depth);
void func_5224036608(unsigned depth);
void func_5224036800(unsigned depth);
void func_5224036928(unsigned depth);
void func_5224037056(unsigned depth);
void func_5224037184(unsigned depth);
void func_5224036736(unsigned depth);
void func_5224037584(unsigned depth);
void func_5224035760(unsigned depth);
void func_5224036320(unsigned depth);
void func_5224037904(unsigned depth);
void func_5224035456(unsigned depth);
void func_5224038032(unsigned depth);
void func_5224038160(unsigned depth);
void func_5224038320(unsigned depth);
void func_5224038608(unsigned depth);
void func_5224038736(unsigned depth);
void func_5224038864(unsigned depth);
void func_5224038992(unsigned depth);
void func_5224035072(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5224036064(depth+1);
        break;
        case 1:
            func_5224035392(depth+1);
        break;
        case 2:
            func_5224036256(depth+1);
        break;
        case 3:
            func_5224036480(depth+1);
        break;
        case 4:
            func_5224036608(depth+1);
        break;
        case 5:
            func_5224036800(depth+1);
        break;
        case 6:
            func_5224036928(depth+1);
        break;
        case 7:
            func_5224037056(depth+1);
        break;
        case 8:
            func_5224037184(depth+1);
        break;
        case 9:
            func_5224036736(depth+1);
        break;
    }
    return;
}
void func_5224035200(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5224037584(depth+1);
        break;
        case 1:
            func_5224036320(depth+1);
        break;
        case 2:
            func_5224034688(depth+1);
        break;
    }
    return;
}
void func_5224034624(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5224035456(depth+1);
        break;
        case 1:
            func_5224034896(depth+1);
        break;
    }
    return;
}
void func_5224034896(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5224038320(depth+1);
        break;
        case 1:
            func_5224035072(depth+1);
        break;
    }
    return;
}
void func_5224034752(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5224035200(depth+1);
        break;
    }
    return;
}
void func_5224034688(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5224038608(depth+1);
        break;
        case 1:
            func_5224038864(depth+1);
        break;
        case 2:
            func_5224034624(depth+1);
        break;
    }
    return;
}
void func_5224036064(unsigned depth) {
    extend(48);
    return;
}
void func_5224035392(unsigned depth) {
    extend(49);
    return;
}
void func_5224036256(unsigned depth) {
    extend(50);
    return;
}
void func_5224036480(unsigned depth) {
    extend(51);
    return;
}
void func_5224036608(unsigned depth) {
    extend(52);
    return;
}
void func_5224036800(unsigned depth) {
    extend(53);
    return;
}
void func_5224036928(unsigned depth) {
    extend(54);
    return;
}
void func_5224037056(unsigned depth) {
    extend(55);
    return;
}
void func_5224037184(unsigned depth) {
    extend(56);
    return;
}
void func_5224036736(unsigned depth) {
    extend(57);
    return;
}
void func_5224037584(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_5224034688(depth+1);
    func_5224035760(depth+1);
    func_5224035200(depth+1);
    return;
}
void func_5224035760(unsigned depth) {
    extend(43);
    return;
}
void func_5224036320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_5224034688(depth+1);
    func_5224037904(depth+1);
    func_5224035200(depth+1);
    return;
}
void func_5224037904(unsigned depth) {
    extend(45);
    return;
}
void func_5224035456(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_5224038032(depth+1);
    func_5224035200(depth+1);
    func_5224038160(depth+1);
    return;
}
void func_5224038032(unsigned depth) {
    extend(40);
    return;
}
void func_5224038160(unsigned depth) {
    extend(41);
    return;
}
void func_5224038320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5224035072(depth+1);
    func_5224034896(depth+1);
    return;
}
void func_5224038608(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_5224034624(depth+1);
    func_5224038736(depth+1);
    func_5224034688(depth+1);
    return;
}
void func_5224038736(unsigned depth) {
    extend(42);
    return;
}
void func_5224038864(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_5224034624(depth+1);
    func_5224038992(depth+1);
    func_5224034688(depth+1);
    return;
}
void func_5224038992(unsigned depth) {
    extend(47);
    return;
}
int main(void) {
    static unsigned count = 6;
    seed = time(NULL);
    func_5224034752(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
