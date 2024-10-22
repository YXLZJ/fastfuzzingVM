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

void func_5282764320(unsigned depth);
void func_5282764688(unsigned depth);
void func_5282765104(unsigned depth);
void func_5282765200(unsigned depth);
void func_5282764976(unsigned depth);
void func_5282764896(unsigned depth);
void func_5282765600(unsigned depth);
void func_5282764816(unsigned depth);
void func_5282765328(unsigned depth);
void func_5282765856(unsigned depth);
void func_5282765520(unsigned depth);
void func_5282765792(unsigned depth);
void func_5282766208(unsigned depth);
void func_5282766576(unsigned depth);
void func_5282766416(unsigned depth);
void func_5282766144(unsigned depth);
void func_5282766336(unsigned depth);
void func_5282765392(unsigned depth);
void func_5282767440(unsigned depth);
void func_5282767568(unsigned depth);
void func_5282767696(unsigned depth);
void func_5282767824(unsigned depth);
void func_5282767952(unsigned depth);
void func_5282768080(unsigned depth);
void func_5282768464(unsigned depth);
void func_5282766048(unsigned depth);
void func_5282768656(unsigned depth);
void func_5282768784(unsigned depth);
void func_5282768912(unsigned depth);
void func_5282769104(unsigned depth);
void func_5282769232(unsigned depth);
void func_5282769360(unsigned depth);
void func_5282769488(unsigned depth);
void func_5282769040(unsigned depth);
void func_5282770064(unsigned depth);
void func_5282770192(unsigned depth);
void func_5282767232(unsigned depth);
void func_5282767360(unsigned depth);
void func_5282768368(unsigned depth);
void func_5282770544(unsigned depth);
void func_5282770672(unsigned depth);
void func_5282768208(unsigned depth);
void func_5282771440(unsigned depth);
void func_5282771568(unsigned depth);
void func_5282766704(unsigned depth);
void func_5282771216(unsigned depth);
void func_5282771888(unsigned depth);
void func_5282772016(unsigned depth);
void func_5282772144(unsigned depth);
void func_5282772272(unsigned depth);
void func_5282772464(unsigned depth);
void func_5282772592(unsigned depth);
void func_5282772720(unsigned depth);
void func_5282772848(unsigned depth);
void func_5282772400(unsigned depth);
void func_5282773616(unsigned depth);
void func_5282770864(unsigned depth);
void func_5282773440(unsigned depth);
void func_5282771040(unsigned depth);
void func_5282773104(unsigned depth);
void func_5282773232(unsigned depth);
void func_5282773744(unsigned depth);
void func_5282774592(unsigned depth);
void func_5282774720(unsigned depth);
void func_5282773872(unsigned depth);
void func_5282769552(unsigned depth);
void func_5282774528(unsigned depth);
void func_5282769920(unsigned depth);
void func_5282764320(unsigned depth) {
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
            func_5282766144(depth+1);
        break;
    }
    return;
}
void func_5282764688(unsigned depth) {
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
            func_5282767440(depth+1);
        break;
        case 1:
            func_5282767696(depth+1);
        break;
        case 2:
            func_5282767952(depth+1);
        break;
    }
    return;
}
void func_5282765104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5282768464(depth+1);
        break;
        case 1:
            func_5282766048(depth+1);
        break;
        case 2:
            func_5282768656(depth+1);
        break;
        case 3:
            func_5282768784(depth+1);
        break;
        case 4:
            func_5282768912(depth+1);
        break;
        case 5:
            func_5282769104(depth+1);
        break;
        case 6:
            func_5282769232(depth+1);
        break;
        case 7:
            func_5282769360(depth+1);
        break;
        case 8:
            func_5282769488(depth+1);
        break;
        case 9:
            func_5282769040(depth+1);
        break;
    }
    return;
}
void func_5282765200(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5282770064(depth+1);
        break;
        case 1:
            func_5282767232(depth+1);
        break;
        case 2:
            func_5282766576(depth+1);
        break;
    }
    return;
}
void func_5282764976(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5282768368(depth+1);
        break;
        case 1:
            func_5282765328(depth+1);
        break;
        case 2:
            func_5282765600(depth+1);
        break;
    }
    return;
}
void func_5282764896(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5282768208(depth+1);
        break;
    }
    return;
}
void func_5282765600(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_5282771216(depth+1);
        break;
        case 1:
            func_5282771888(depth+1);
        break;
        case 2:
            func_5282772016(depth+1);
        break;
        case 3:
            func_5282772144(depth+1);
        break;
        case 4:
            func_5282772272(depth+1);
        break;
        case 5:
            func_5282772464(depth+1);
        break;
        case 6:
            func_5282772592(depth+1);
        break;
        case 7:
            func_5282772720(depth+1);
        break;
        case 8:
            func_5282772848(depth+1);
        break;
    }
    return;
}
void func_5282764816(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5282772400(depth+1);
        break;
        case 1:
            func_5282770864(depth+1);
        break;
    }
    return;
}
void func_5282765328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5282765104(depth+1);
        break;
        case 1:
            func_5282771040(depth+1);
        break;
    }
    return;
}
void func_5282765856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5282773104(depth+1);
        break;
    }
    return;
}
void func_5282765520(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5282773744(depth+1);
        break;
    }
    return;
}
void func_5282765792(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5282765520(depth+1);
        break;
    }
    return;
}
void func_5282766208(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_5282764816(depth+1);
        break;
        case 1:
            func_5282766416(depth+1);
        break;
        case 2:
            func_5282764896(depth+1);
        break;
        case 3:
            func_5282764320(depth+1);
        break;
        case 4:
            func_5282765856(depth+1);
        break;
    }
    return;
}
void func_5282766576(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5282774592(depth+1);
        break;
        case 1:
            func_5282773872(depth+1);
        break;
        case 2:
            func_5282764976(depth+1);
        break;
    }
    return;
}
void func_5282766416(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5282774528(depth+1);
        break;
    }
    return;
}
void func_5282766144(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5282765600(depth+1);
    func_5282766336(depth+1);
    func_5282765200(depth+1);
    func_5282765392(depth+1);
    return;
}
void func_5282766336(unsigned depth) {
    extend(61);
    return;
}
void func_5282765392(unsigned depth) {
    extend(59);
    return;
}
void func_5282767440(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5282765200(depth+1);
    func_5282767568(depth+1);
    func_5282765200(depth+1);
    return;
}
void func_5282767568(unsigned depth) {
    extend(62);
    return;
}
void func_5282767696(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5282765200(depth+1);
    func_5282767824(depth+1);
    func_5282765200(depth+1);
    return;
}
void func_5282767824(unsigned depth) {
    extend(60);
    return;
}
void func_5282767952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5282765200(depth+1);
    func_5282768080(depth+1);
    func_5282765200(depth+1);
    return;
}
void func_5282768080(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5282768464(unsigned depth) {
    extend(48);
    return;
}
void func_5282766048(unsigned depth) {
    extend(49);
    return;
}
void func_5282768656(unsigned depth) {
    extend(50);
    return;
}
void func_5282768784(unsigned depth) {
    extend(51);
    return;
}
void func_5282768912(unsigned depth) {
    extend(52);
    return;
}
void func_5282769104(unsigned depth) {
    extend(53);
    return;
}
void func_5282769232(unsigned depth) {
    extend(54);
    return;
}
void func_5282769360(unsigned depth) {
    extend(55);
    return;
}
void func_5282769488(unsigned depth) {
    extend(56);
    return;
}
void func_5282769040(unsigned depth) {
    extend(57);
    return;
}
void func_5282770064(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5282765200(depth+1);
    func_5282770192(depth+1);
    func_5282766576(depth+1);
    return;
}
void func_5282770192(unsigned depth) {
    extend(43);
    return;
}
void func_5282767232(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5282765200(depth+1);
    func_5282767360(depth+1);
    func_5282766576(depth+1);
    return;
}
void func_5282767360(unsigned depth) {
    extend(45);
    return;
}
void func_5282768368(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_5282770544(depth+1);
    func_5282765200(depth+1);
    func_5282770672(depth+1);
    return;
}
void func_5282770544(unsigned depth) {
    extend(40);
    return;
}
void func_5282770672(unsigned depth) {
    extend(41);
    return;
}
void func_5282768208(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5282771440(depth+1);
    func_5282770544(depth+1);
    func_5282764320(depth+1);
    func_5282765392(depth+1);
    func_5282764688(depth+1);
    func_5282765392(depth+1);
    func_5282764320(depth+1);
    func_5282770672(depth+1);
    func_5282771568(depth+1);
    func_5282765520(depth+1);
    func_5282766704(depth+1);
    return;
}
void func_5282771440(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_5282771568(unsigned depth) {
    extend(123);
    return;
}
void func_5282766704(unsigned depth) {
    extend(125);
    return;
}
void func_5282771216(unsigned depth) {
    extend(105);
    return;
}
void func_5282771888(unsigned depth) {
    extend(106);
    return;
}
void func_5282772016(unsigned depth) {
    extend(107);
    return;
}
void func_5282772144(unsigned depth) {
    extend(120);
    return;
}
void func_5282772272(unsigned depth) {
    extend(121);
    return;
}
void func_5282772464(unsigned depth) {
    extend(122);
    return;
}
void func_5282772592(unsigned depth) {
    extend(97);
    return;
}
void func_5282772720(unsigned depth) {
    extend(98);
    return;
}
void func_5282772848(unsigned depth) {
    extend(99);
    return;
}
void func_5282772400(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5282773616(depth+1);
    func_5282770544(depth+1);
    func_5282764688(depth+1);
    func_5282770672(depth+1);
    func_5282771568(depth+1);
    func_5282765520(depth+1);
    func_5282766704(depth+1);
    return;
}
void func_5282773616(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5282770864(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5282773616(depth+1);
    func_5282770544(depth+1);
    func_5282764688(depth+1);
    func_5282770672(depth+1);
    func_5282771568(depth+1);
    func_5282765520(depth+1);
    func_5282766704(depth+1);
    func_5282773440(depth+1);
    func_5282771568(depth+1);
    func_5282765520(depth+1);
    func_5282766704(depth+1);
    return;
}
void func_5282773440(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5282771040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5282765104(depth+1);
    func_5282765328(depth+1);
    return;
}
void func_5282773104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    func_5282773232(depth+1);
    func_5282770544(depth+1);
    func_5282765200(depth+1);
    func_5282770672(depth+1);
    func_5282765392(depth+1);
    return;
}
void func_5282773232(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5282773744(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5282766208(depth+1);
    func_5282765520(depth+1);
    return;
}
void func_5282774592(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5282766576(depth+1);
    func_5282774720(depth+1);
    func_5282764976(depth+1);
    return;
}
void func_5282774720(unsigned depth) {
    extend(42);
    return;
}
void func_5282773872(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_5282766576(depth+1);
    func_5282769552(depth+1);
    func_5282764976(depth+1);
    return;
}
void func_5282769552(unsigned depth) {
    extend(47);
    return;
}
void func_5282774528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5282769920(depth+1);
    func_5282770544(depth+1);
    func_5282764688(depth+1);
    func_5282770672(depth+1);
    func_5282771568(depth+1);
    func_5282765520(depth+1);
    func_5282766704(depth+1);
    return;
}
void func_5282769920(unsigned depth) {
    extend(32);
    extend(119);
    extend(104);
    extend(105);
    extend(108);
    extend(101);
    extend(32);
    return;
}
int main(void) {
    static unsigned count = 16;
    seed = time(NULL);
    func_5282765792(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
