#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 60
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

void func_4963988224(unsigned depth);
void func_4963988352(unsigned depth);
void func_4963987776(unsigned depth);
void func_4963988048(unsigned depth);
void func_4963987904(unsigned depth);
void func_4963987840(unsigned depth);
void func_4963989216(unsigned depth);
void func_4963988544(unsigned depth);
void func_4963989408(unsigned depth);
void func_4963989632(unsigned depth);
void func_4963989760(unsigned depth);
void func_4963989952(unsigned depth);
void func_4963990080(unsigned depth);
void func_4963990208(unsigned depth);
void func_4963990336(unsigned depth);
void func_4963989888(unsigned depth);
void func_4963990736(unsigned depth);
void func_4963988912(unsigned depth);
void func_4963989472(unsigned depth);
void func_4963991056(unsigned depth);
void func_4963988608(unsigned depth);
void func_4963991184(unsigned depth);
void func_4963991312(unsigned depth);
void func_4963991472(unsigned depth);
void func_4963991760(unsigned depth);
void func_4963991888(unsigned depth);
void func_4963992016(unsigned depth);
void func_4963992144(unsigned depth);
void func_4963988224(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4963989216(depth+1);
        break;
        case 1:
            func_4963988544(depth+1);
        break;
        case 2:
            func_4963989408(depth+1);
        break;
        case 3:
            func_4963989632(depth+1);
        break;
        case 4:
            func_4963989760(depth+1);
        break;
        case 5:
            func_4963989952(depth+1);
        break;
        case 6:
            func_4963990080(depth+1);
        break;
        case 7:
            func_4963990208(depth+1);
        break;
        case 8:
            func_4963990336(depth+1);
        break;
        case 9:
            func_4963989888(depth+1);
        break;
    }
    return;
}
void func_4963988352(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4963990736(depth+1);
        break;
        case 1:
            func_4963989472(depth+1);
        break;
        case 2:
            func_4963987840(depth+1);
        break;
    }
    return;
}
void func_4963987776(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4963988608(depth+1);
        break;
        case 1:
            func_4963988048(depth+1);
        break;
    }
    return;
}
void func_4963988048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4963991472(depth+1);
        break;
        case 1:
            func_4963988224(depth+1);
        break;
    }
    return;
}
void func_4963987904(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4963988352(depth+1);
        break;
    }
    return;
}
void func_4963987840(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4963991760(depth+1);
        break;
        case 1:
            func_4963992016(depth+1);
        break;
        case 2:
            func_4963987776(depth+1);
        break;
    }
    return;
}
void func_4963989216(unsigned depth) {
    extend(48);
    return;
}
void func_4963988544(unsigned depth) {
    extend(49);
    return;
}
void func_4963989408(unsigned depth) {
    extend(50);
    return;
}
void func_4963989632(unsigned depth) {
    extend(51);
    return;
}
void func_4963989760(unsigned depth) {
    extend(52);
    return;
}
void func_4963989952(unsigned depth) {
    extend(53);
    return;
}
void func_4963990080(unsigned depth) {
    extend(54);
    return;
}
void func_4963990208(unsigned depth) {
    extend(55);
    return;
}
void func_4963990336(unsigned depth) {
    extend(56);
    return;
}
void func_4963989888(unsigned depth) {
    extend(57);
    return;
}
void func_4963990736(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_4963987840(depth+1);
    func_4963988912(depth+1);
    func_4963988352(depth+1);
    return;
}
void func_4963988912(unsigned depth) {
    extend(43);
    return;
}
void func_4963989472(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_4963987840(depth+1);
    func_4963991056(depth+1);
    func_4963988352(depth+1);
    return;
}
void func_4963991056(unsigned depth) {
    extend(45);
    return;
}
void func_4963988608(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_4963991184(depth+1);
    func_4963988352(depth+1);
    func_4963991312(depth+1);
    return;
}
void func_4963991184(unsigned depth) {
    extend(40);
    return;
}
void func_4963991312(unsigned depth) {
    extend(41);
    return;
}
void func_4963991472(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4963988224(depth+1);
    func_4963988048(depth+1);
    return;
}
void func_4963991760(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_4963987776(depth+1);
    func_4963991888(depth+1);
    func_4963987840(depth+1);
    return;
}
void func_4963991888(unsigned depth) {
    extend(42);
    return;
}
void func_4963992016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_4963987776(depth+1);
    func_4963992144(depth+1);
    func_4963987840(depth+1);
    return;
}
void func_4963992144(unsigned depth) {
    extend(47);
    return;
}
int main(void) {
    static unsigned count = 6;
    seed = time(NULL);
    func_4963987904(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
