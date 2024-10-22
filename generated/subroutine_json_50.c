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

void func_5081431264(unsigned depth);
void func_5081431824(unsigned depth);
void func_5081431632(unsigned depth);
void func_5081431392(unsigned depth);
void func_5081431568(unsigned depth);
void func_5081432048(unsigned depth);
void func_5081432176(unsigned depth);
void func_5081431968(unsigned depth);
void func_5081432528(unsigned depth);
void func_5081432960(unsigned depth);
void func_5081432896(unsigned depth);
void func_5081433152(unsigned depth);
void func_5081432720(unsigned depth);
void func_5081433280(unsigned depth);
void func_5081433744(unsigned depth);
void func_5081433872(unsigned depth);
void func_5081434000(unsigned depth);
void func_5081432592(unsigned depth);
void func_5081434384(unsigned depth);
void func_5081434576(unsigned depth);
void func_5081434704(unsigned depth);
void func_5081434832(unsigned depth);
void func_5081434960(unsigned depth);
void func_5081434512(unsigned depth);
void func_5081432448(unsigned depth);
void func_5081435344(unsigned depth);
void func_5081433488(unsigned depth);
void func_5081433616(unsigned depth);
void func_5081435552(unsigned depth);
void func_5081435680(unsigned depth);
void func_5081435808(unsigned depth);
void func_5081435984(unsigned depth);
void func_5081436128(unsigned depth);
void func_5081434128(unsigned depth);
void func_5081435472(unsigned depth);
void func_5081436896(unsigned depth);
void func_5081437024(unsigned depth);
void func_5081437184(unsigned depth);
void func_5081437312(unsigned depth);
void func_5081436736(unsigned depth);
void func_5081437840(unsigned depth);
void func_5081437968(unsigned depth);
void func_5081431264(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5081432896(depth+1);
        break;
        case 1:
            func_5081433280(depth+1);
        break;
    }
    return;
}
void func_5081431824(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5081433744(depth+1);
        break;
        case 1:
            func_5081433872(depth+1);
        break;
        case 2:
            func_5081434000(depth+1);
        break;
        case 3:
            func_5081432592(depth+1);
        break;
        case 4:
            func_5081434384(depth+1);
        break;
        case 5:
            func_5081434576(depth+1);
        break;
        case 6:
            func_5081434704(depth+1);
        break;
        case 7:
            func_5081434832(depth+1);
        break;
        case 8:
            func_5081434960(depth+1);
        break;
        case 9:
            func_5081434512(depth+1);
        break;
    }
    return;
}
void func_5081431632(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5081432448(depth+1);
        break;
        case 1:
            func_5081432960(depth+1);
        break;
    }
    return;
}
void func_5081431392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5081433488(depth+1);
        break;
        case 1:
            func_5081432176(depth+1);
        break;
    }
    return;
}
void func_5081431568(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5081431824(depth+1);
        break;
        case 1:
            func_5081433616(depth+1);
        break;
    }
    return;
}
void func_5081432048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5081435552(depth+1);
        break;
        case 1:
            func_5081435984(depth+1);
        break;
    }
    return;
}
void func_5081432176(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5081436128(depth+1);
        break;
    }
    return;
}
void func_5081431968(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5081432960(depth+1);
        break;
    }
    return;
}
void func_5081432528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_5081435472(depth+1);
        break;
        case 1:
            func_5081436896(depth+1);
        break;
        case 2:
            func_5081437024(depth+1);
        break;
        case 3:
            func_5081437184(depth+1);
        break;
        case 4:
            func_5081437312(depth+1);
        break;
    }
    return;
}
void func_5081432960(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(7);
    switch (branch) {
        case 0:
            func_5081432048(depth+1);
        break;
        case 1:
            func_5081431264(depth+1);
        break;
        case 2:
            func_5081432528(depth+1);
        break;
        case 3:
            func_5081431568(depth+1);
        break;
        case 4:
            func_5081436736(depth+1);
        break;
        case 5:
            func_5081437840(depth+1);
        break;
        case 6:
            func_5081437968(depth+1);
        break;
    }
    return;
}
void func_5081432896(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        return;
    }
    func_5081433152(depth+1);
    func_5081431632(depth+1);
    func_5081432720(depth+1);
    return;
}
void func_5081433152(unsigned depth) {
    extend(91);
    return;
}
void func_5081432720(unsigned depth) {
    extend(93);
    return;
}
void func_5081433280(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    func_5081433152(depth+1);
    func_5081432720(depth+1);
    return;
}
void func_5081433744(unsigned depth) {
    extend(48);
    return;
}
void func_5081433872(unsigned depth) {
    extend(49);
    return;
}
void func_5081434000(unsigned depth) {
    extend(50);
    return;
}
void func_5081432592(unsigned depth) {
    extend(51);
    return;
}
void func_5081434384(unsigned depth) {
    extend(52);
    return;
}
void func_5081434576(unsigned depth) {
    extend(53);
    return;
}
void func_5081434704(unsigned depth) {
    extend(54);
    return;
}
void func_5081434832(unsigned depth) {
    extend(55);
    return;
}
void func_5081434960(unsigned depth) {
    extend(56);
    return;
}
void func_5081434512(unsigned depth) {
    extend(57);
    return;
}
void func_5081432448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    func_5081432960(depth+1);
    func_5081435344(depth+1);
    func_5081431632(depth+1);
    return;
}
void func_5081435344(unsigned depth) {
    extend(44);
    return;
}
void func_5081433488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    func_5081432176(depth+1);
    func_5081435344(depth+1);
    func_5081431392(depth+1);
    return;
}
void func_5081433616(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5081431824(depth+1);
    func_5081431568(depth+1);
    return;
}
void func_5081435552(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(125);
        return;
    }
    func_5081435680(depth+1);
    func_5081431392(depth+1);
    func_5081435808(depth+1);
    return;
}
void func_5081435680(unsigned depth) {
    extend(123);
    return;
}
void func_5081435808(unsigned depth) {
    extend(125);
    return;
}
void func_5081435984(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    func_5081435680(depth+1);
    func_5081435808(depth+1);
    return;
}
void func_5081436128(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    func_5081432528(depth+1);
    func_5081434128(depth+1);
    func_5081432960(depth+1);
    return;
}
void func_5081434128(unsigned depth) {
    extend(58);
    return;
}
void func_5081435472(unsigned depth) {
    extend(34);
    extend(97);
    extend(34);
    return;
}
void func_5081436896(unsigned depth) {
    extend(34);
    extend(98);
    extend(34);
    return;
}
void func_5081437024(unsigned depth) {
    extend(34);
    extend(99);
    extend(34);
    return;
}
void func_5081437184(unsigned depth) {
    extend(34);
    extend(100);
    extend(34);
    return;
}
void func_5081437312(unsigned depth) {
    extend(34);
    extend(101);
    extend(34);
    return;
}
void func_5081436736(unsigned depth) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    return;
}
void func_5081437840(unsigned depth) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5081437968(unsigned depth) {
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    return;
}
int main(void) {
    static unsigned count = 8;
    seed = time(NULL);
    func_5081431968(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
