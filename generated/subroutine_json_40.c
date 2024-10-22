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

void func_5643468000(unsigned depth);
void func_5643468560(unsigned depth);
void func_5643468368(unsigned depth);
void func_5643468128(unsigned depth);
void func_5643468304(unsigned depth);
void func_5643468784(unsigned depth);
void func_5643468912(unsigned depth);
void func_5643468704(unsigned depth);
void func_5643469264(unsigned depth);
void func_5643469696(unsigned depth);
void func_5643469632(unsigned depth);
void func_5643469888(unsigned depth);
void func_5643469456(unsigned depth);
void func_5643470016(unsigned depth);
void func_5643470480(unsigned depth);
void func_5643470608(unsigned depth);
void func_5643470736(unsigned depth);
void func_5643469328(unsigned depth);
void func_5643471120(unsigned depth);
void func_5643471312(unsigned depth);
void func_5643471440(unsigned depth);
void func_5643471568(unsigned depth);
void func_5643471696(unsigned depth);
void func_5643471248(unsigned depth);
void func_5643469184(unsigned depth);
void func_5643472080(unsigned depth);
void func_5643470224(unsigned depth);
void func_5643470352(unsigned depth);
void func_5643472288(unsigned depth);
void func_5643472416(unsigned depth);
void func_5643472544(unsigned depth);
void func_5643472720(unsigned depth);
void func_5643472864(unsigned depth);
void func_5643470864(unsigned depth);
void func_5643472208(unsigned depth);
void func_5643473632(unsigned depth);
void func_5643473760(unsigned depth);
void func_5643473920(unsigned depth);
void func_5643474048(unsigned depth);
void func_5643473472(unsigned depth);
void func_5643474576(unsigned depth);
void func_5643474704(unsigned depth);
void func_5643468000(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5643469632(depth+1);
        break;
        case 1:
            func_5643470016(depth+1);
        break;
    }
    return;
}
void func_5643468560(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5643470480(depth+1);
        break;
        case 1:
            func_5643470608(depth+1);
        break;
        case 2:
            func_5643470736(depth+1);
        break;
        case 3:
            func_5643469328(depth+1);
        break;
        case 4:
            func_5643471120(depth+1);
        break;
        case 5:
            func_5643471312(depth+1);
        break;
        case 6:
            func_5643471440(depth+1);
        break;
        case 7:
            func_5643471568(depth+1);
        break;
        case 8:
            func_5643471696(depth+1);
        break;
        case 9:
            func_5643471248(depth+1);
        break;
    }
    return;
}
void func_5643468368(unsigned depth) {
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
            func_5643469184(depth+1);
        break;
        case 1:
            func_5643469696(depth+1);
        break;
    }
    return;
}
void func_5643468128(unsigned depth) {
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
            func_5643470224(depth+1);
        break;
        case 1:
            func_5643468912(depth+1);
        break;
    }
    return;
}
void func_5643468304(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5643468560(depth+1);
        break;
        case 1:
            func_5643470352(depth+1);
        break;
    }
    return;
}
void func_5643468784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5643472288(depth+1);
        break;
        case 1:
            func_5643472720(depth+1);
        break;
    }
    return;
}
void func_5643468912(unsigned depth) {
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
            func_5643472864(depth+1);
        break;
    }
    return;
}
void func_5643468704(unsigned depth) {
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
            func_5643469696(depth+1);
        break;
    }
    return;
}
void func_5643469264(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_5643472208(depth+1);
        break;
        case 1:
            func_5643473632(depth+1);
        break;
        case 2:
            func_5643473760(depth+1);
        break;
        case 3:
            func_5643473920(depth+1);
        break;
        case 4:
            func_5643474048(depth+1);
        break;
    }
    return;
}
void func_5643469696(unsigned depth) {
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
            func_5643468784(depth+1);
        break;
        case 1:
            func_5643468000(depth+1);
        break;
        case 2:
            func_5643469264(depth+1);
        break;
        case 3:
            func_5643468304(depth+1);
        break;
        case 4:
            func_5643473472(depth+1);
        break;
        case 5:
            func_5643474576(depth+1);
        break;
        case 6:
            func_5643474704(depth+1);
        break;
    }
    return;
}
void func_5643469632(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        return;
    }
    func_5643469888(depth+1);
    func_5643468368(depth+1);
    func_5643469456(depth+1);
    return;
}
void func_5643469888(unsigned depth) {
    extend(91);
    return;
}
void func_5643469456(unsigned depth) {
    extend(93);
    return;
}
void func_5643470016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    func_5643469888(depth+1);
    func_5643469456(depth+1);
    return;
}
void func_5643470480(unsigned depth) {
    extend(48);
    return;
}
void func_5643470608(unsigned depth) {
    extend(49);
    return;
}
void func_5643470736(unsigned depth) {
    extend(50);
    return;
}
void func_5643469328(unsigned depth) {
    extend(51);
    return;
}
void func_5643471120(unsigned depth) {
    extend(52);
    return;
}
void func_5643471312(unsigned depth) {
    extend(53);
    return;
}
void func_5643471440(unsigned depth) {
    extend(54);
    return;
}
void func_5643471568(unsigned depth) {
    extend(55);
    return;
}
void func_5643471696(unsigned depth) {
    extend(56);
    return;
}
void func_5643471248(unsigned depth) {
    extend(57);
    return;
}
void func_5643469184(unsigned depth) {
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
    func_5643469696(depth+1);
    func_5643472080(depth+1);
    func_5643468368(depth+1);
    return;
}
void func_5643472080(unsigned depth) {
    extend(44);
    return;
}
void func_5643470224(unsigned depth) {
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
    func_5643468912(depth+1);
    func_5643472080(depth+1);
    func_5643468128(depth+1);
    return;
}
void func_5643470352(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5643468560(depth+1);
    func_5643468304(depth+1);
    return;
}
void func_5643472288(unsigned depth) {
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
    func_5643472416(depth+1);
    func_5643468128(depth+1);
    func_5643472544(depth+1);
    return;
}
void func_5643472416(unsigned depth) {
    extend(123);
    return;
}
void func_5643472544(unsigned depth) {
    extend(125);
    return;
}
void func_5643472720(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    func_5643472416(depth+1);
    func_5643472544(depth+1);
    return;
}
void func_5643472864(unsigned depth) {
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
    func_5643469264(depth+1);
    func_5643470864(depth+1);
    func_5643469696(depth+1);
    return;
}
void func_5643470864(unsigned depth) {
    extend(58);
    return;
}
void func_5643472208(unsigned depth) {
    extend(34);
    extend(97);
    extend(34);
    return;
}
void func_5643473632(unsigned depth) {
    extend(34);
    extend(98);
    extend(34);
    return;
}
void func_5643473760(unsigned depth) {
    extend(34);
    extend(99);
    extend(34);
    return;
}
void func_5643473920(unsigned depth) {
    extend(34);
    extend(100);
    extend(34);
    return;
}
void func_5643474048(unsigned depth) {
    extend(34);
    extend(101);
    extend(34);
    return;
}
void func_5643473472(unsigned depth) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    return;
}
void func_5643474576(unsigned depth) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5643474704(unsigned depth) {
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    return;
}
int main(void) {
    static unsigned count = 8;
    seed = time(NULL);
    func_5643468704(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
