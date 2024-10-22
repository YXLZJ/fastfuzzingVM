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

void func_4913652448(unsigned depth);
void func_4913661888(unsigned depth);
void func_4913661808(unsigned depth);
void func_4913661728(unsigned depth);
void func_4913662352(unsigned depth);
void func_4913661456(unsigned depth);
void func_4913662880(unsigned depth);
void func_4913661648(unsigned depth);
void func_4913662176(unsigned depth);
void func_4913662240(unsigned depth);
void func_4913663120(unsigned depth);
void func_4913663248(unsigned depth);
void func_4913663472(unsigned depth);
void func_4913663600(unsigned depth);
void func_4913663728(unsigned depth);
void func_4913664096(unsigned depth);
void func_4913664224(unsigned depth);
void func_4913662544(unsigned depth);
void func_4913664608(unsigned depth);
void func_4913664736(unsigned depth);
void func_4913664864(unsigned depth);
void func_4913664992(unsigned depth);
void func_4913665120(unsigned depth);
void func_4913665280(unsigned depth);
void func_4913665408(unsigned depth);
void func_4913665632(unsigned depth);
void func_4913665760(unsigned depth);
void func_4913665888(unsigned depth);
void func_4913666016(unsigned depth);
void func_4913666144(unsigned depth);
void func_4913666336(unsigned depth);
void func_4913665568(unsigned depth);
void func_4913663376(unsigned depth);
void func_4913664352(unsigned depth);
void func_4913664480(unsigned depth);
void func_4913663920(unsigned depth);
void func_4913667824(unsigned depth);
void func_4913667952(unsigned depth);
void func_4913667760(unsigned depth);
void func_4913666992(unsigned depth);
void func_4913663984(unsigned depth);
void func_4913668400(unsigned depth);
void func_4913668528(unsigned depth);
void func_4913668656(unsigned depth);
void func_4913668848(unsigned depth);
void func_4913668976(unsigned depth);
void func_4913669104(unsigned depth);
void func_4913669232(unsigned depth);
void func_4913668784(unsigned depth);
void func_4913669552(unsigned depth);
void func_4913669680(unsigned depth);
void func_4913666816(unsigned depth);
void func_4913666528(unsigned depth);
void func_4913669952(unsigned depth);
void func_4913670080(unsigned depth);
void func_4913652448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4913663472(depth+1);
        break;
    }
    return;
}
void func_4913661888(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4913664096(depth+1);
        break;
        case 1:
            func_4913662544(depth+1);
        break;
        case 2:
            func_4913664736(depth+1);
        break;
    }
    return;
}
void func_4913661808(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4913664992(depth+1);
        break;
        case 1:
            func_4913663248(depth+1);
        break;
        case 2:
            func_4913665280(depth+1);
        break;
    }
    return;
}
void func_4913661728(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4913662880(depth+1);
        break;
        case 1:
            func_4913662352(depth+1);
        break;
    }
    return;
}
void func_4913662352(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(6);
    switch (branch) {
        case 0:
            func_4913665632(depth+1);
        break;
        case 1:
            func_4913665760(depth+1);
        break;
        case 2:
            func_4913665888(depth+1);
        break;
        case 3:
            func_4913666016(depth+1);
        break;
        case 4:
            func_4913666144(depth+1);
        break;
        case 5:
            func_4913666336(depth+1);
        break;
    }
    return;
}
void func_4913661456(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4913665568(depth+1);
        break;
        case 1:
            func_4913667760(depth+1);
        break;
    }
    return;
}
void func_4913662880(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4913666992(depth+1);
        break;
        case 1:
            func_4913663984(depth+1);
        break;
        case 2:
            func_4913668400(depth+1);
        break;
        case 3:
            func_4913668528(depth+1);
        break;
        case 4:
            func_4913668656(depth+1);
        break;
        case 5:
            func_4913668848(depth+1);
        break;
        case 6:
            func_4913668976(depth+1);
        break;
        case 7:
            func_4913669104(depth+1);
        break;
        case 8:
            func_4913669232(depth+1);
        break;
        case 9:
            func_4913668784(depth+1);
        break;
    }
    return;
}
void func_4913661648(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4913669552(depth+1);
        break;
    }
    return;
}
void func_4913662176(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4913661456(depth+1);
        break;
    }
    return;
}
void func_4913662240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4913661456(depth+1);
        break;
        case 1:
            func_4913652448(depth+1);
        break;
        case 2:
            func_4913661648(depth+1);
        break;
    }
    return;
}
void func_4913663120(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4913666816(depth+1);
        break;
        case 1:
            func_4913666528(depth+1);
        break;
    }
    return;
}
void func_4913663248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4913661728(depth+1);
        break;
        case 1:
            func_4913669952(depth+1);
        break;
    }
    return;
}
void func_4913663472(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_4913662352(depth+1);
    func_4913663600(depth+1);
    func_4913661808(depth+1);
    func_4913663728(depth+1);
    return;
}
void func_4913663600(unsigned depth) {
    extend(61);
    return;
}
void func_4913663728(unsigned depth) {
    extend(59);
    return;
}
void func_4913664096(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_4913661808(depth+1);
    func_4913664224(depth+1);
    func_4913661808(depth+1);
    return;
}
void func_4913664224(unsigned depth) {
    extend(62);
    return;
}
void func_4913662544(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_4913661808(depth+1);
    func_4913664608(depth+1);
    func_4913661808(depth+1);
    return;
}
void func_4913664608(unsigned depth) {
    extend(60);
    return;
}
void func_4913664736(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_4913661808(depth+1);
    func_4913664864(depth+1);
    func_4913661808(depth+1);
    return;
}
void func_4913664864(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_4913664992(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_4913663248(depth+1);
    func_4913665120(depth+1);
    func_4913661808(depth+1);
    return;
}
void func_4913665120(unsigned depth) {
    extend(43);
    return;
}
void func_4913665280(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_4913663248(depth+1);
    func_4913665408(depth+1);
    func_4913661808(depth+1);
    return;
}
void func_4913665408(unsigned depth) {
    extend(45);
    return;
}
void func_4913665632(unsigned depth) {
    extend(120);
    return;
}
void func_4913665760(unsigned depth) {
    extend(121);
    return;
}
void func_4913665888(unsigned depth) {
    extend(122);
    return;
}
void func_4913666016(unsigned depth) {
    extend(97);
    return;
}
void func_4913666144(unsigned depth) {
    extend(98);
    return;
}
void func_4913666336(unsigned depth) {
    extend(99);
    return;
}
void func_4913665568(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        extend(101);
        extend(108);
        extend(115);
        extend(101);
        extend(123);
        extend(125);
        return;
    }
    func_4913663376(depth+1);
    func_4913664352(depth+1);
    func_4913661888(depth+1);
    func_4913664480(depth+1);
    func_4913663920(depth+1);
    func_4913663120(depth+1);
    func_4913667824(depth+1);
    func_4913667952(depth+1);
    func_4913663920(depth+1);
    func_4913663120(depth+1);
    func_4913667824(depth+1);
    return;
}
void func_4913663376(unsigned depth) {
    extend(105);
    extend(102);
    return;
}
void func_4913664352(unsigned depth) {
    extend(40);
    return;
}
void func_4913664480(unsigned depth) {
    extend(41);
    return;
}
void func_4913663920(unsigned depth) {
    extend(123);
    return;
}
void func_4913667824(unsigned depth) {
    extend(125);
    return;
}
void func_4913667952(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_4913667760(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        return;
    }
    func_4913663376(depth+1);
    func_4913664352(depth+1);
    func_4913661888(depth+1);
    func_4913664480(depth+1);
    func_4913663920(depth+1);
    func_4913663120(depth+1);
    func_4913667824(depth+1);
    return;
}
void func_4913666992(unsigned depth) {
    extend(48);
    return;
}
void func_4913663984(unsigned depth) {
    extend(49);
    return;
}
void func_4913668400(unsigned depth) {
    extend(50);
    return;
}
void func_4913668528(unsigned depth) {
    extend(51);
    return;
}
void func_4913668656(unsigned depth) {
    extend(52);
    return;
}
void func_4913668848(unsigned depth) {
    extend(53);
    return;
}
void func_4913668976(unsigned depth) {
    extend(54);
    return;
}
void func_4913669104(unsigned depth) {
    extend(55);
    return;
}
void func_4913669232(unsigned depth) {
    extend(56);
    return;
}
void func_4913668784(unsigned depth) {
    extend(57);
    return;
}
void func_4913669552(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    func_4913669680(depth+1);
    func_4913664352(depth+1);
    func_4913661808(depth+1);
    func_4913664480(depth+1);
    func_4913663728(depth+1);
    return;
}
void func_4913669680(unsigned depth) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    return;
}
void func_4913666816(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    func_4913662240(depth+1);
    func_4913663120(depth+1);
    return;
}
void func_4913666528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    return;
}
void func_4913669952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_4913661728(depth+1);
    func_4913670080(depth+1);
    func_4913663248(depth+1);
    return;
}
void func_4913670080(unsigned depth) {
    extend(42);
    return;
}
int main(void) {
    static unsigned count = 12;
    seed = time(NULL);
    func_4913662176(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
