#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 35
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

void func_5282757856(unsigned depth);
void func_5282758416(unsigned depth);
void func_5282758224(unsigned depth);
void func_5282757984(unsigned depth);
void func_5282758160(unsigned depth);
void func_5282758640(unsigned depth);
void func_5282758768(unsigned depth);
void func_5282758560(unsigned depth);
void func_5282759120(unsigned depth);
void func_5282759552(unsigned depth);
void func_5282759488(unsigned depth);
void func_5282759744(unsigned depth);
void func_5282759312(unsigned depth);
void func_5282759872(unsigned depth);
void func_5282760336(unsigned depth);
void func_5282760464(unsigned depth);
void func_5282760592(unsigned depth);
void func_5282759184(unsigned depth);
void func_5282760976(unsigned depth);
void func_5282761168(unsigned depth);
void func_5282761296(unsigned depth);
void func_5282761424(unsigned depth);
void func_5282761552(unsigned depth);
void func_5282761104(unsigned depth);
void func_5282759040(unsigned depth);
void func_5282761936(unsigned depth);
void func_5282760080(unsigned depth);
void func_5282760208(unsigned depth);
void func_5282762144(unsigned depth);
void func_5282762272(unsigned depth);
void func_5282762400(unsigned depth);
void func_5282762576(unsigned depth);
void func_5282762720(unsigned depth);
void func_5282760720(unsigned depth);
void func_5282762064(unsigned depth);
void func_5282763488(unsigned depth);
void func_5282763616(unsigned depth);
void func_5282763776(unsigned depth);
void func_5282763904(unsigned depth);
void func_5282763328(unsigned depth);
void func_5282764432(unsigned depth);
void func_5282764560(unsigned depth);
void func_5282757856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5282759488(depth+1);
        break;
        case 1:
            func_5282759872(depth+1);
        break;
    }
    return;
}
void func_5282758416(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5282760336(depth+1);
        break;
        case 1:
            func_5282760464(depth+1);
        break;
        case 2:
            func_5282760592(depth+1);
        break;
        case 3:
            func_5282759184(depth+1);
        break;
        case 4:
            func_5282760976(depth+1);
        break;
        case 5:
            func_5282761168(depth+1);
        break;
        case 6:
            func_5282761296(depth+1);
        break;
        case 7:
            func_5282761424(depth+1);
        break;
        case 8:
            func_5282761552(depth+1);
        break;
        case 9:
            func_5282761104(depth+1);
        break;
    }
    return;
}
void func_5282758224(unsigned depth) {
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
            func_5282759040(depth+1);
        break;
        case 1:
            func_5282759552(depth+1);
        break;
    }
    return;
}
void func_5282757984(unsigned depth) {
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
            func_5282760080(depth+1);
        break;
        case 1:
            func_5282758768(depth+1);
        break;
    }
    return;
}
void func_5282758160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5282758416(depth+1);
        break;
        case 1:
            func_5282760208(depth+1);
        break;
    }
    return;
}
void func_5282758640(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5282762144(depth+1);
        break;
        case 1:
            func_5282762576(depth+1);
        break;
    }
    return;
}
void func_5282758768(unsigned depth) {
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
            func_5282762720(depth+1);
        break;
    }
    return;
}
void func_5282758560(unsigned depth) {
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
            func_5282759552(depth+1);
        break;
    }
    return;
}
void func_5282759120(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_5282762064(depth+1);
        break;
        case 1:
            func_5282763488(depth+1);
        break;
        case 2:
            func_5282763616(depth+1);
        break;
        case 3:
            func_5282763776(depth+1);
        break;
        case 4:
            func_5282763904(depth+1);
        break;
    }
    return;
}
void func_5282759552(unsigned depth) {
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
            func_5282758640(depth+1);
        break;
        case 1:
            func_5282757856(depth+1);
        break;
        case 2:
            func_5282759120(depth+1);
        break;
        case 3:
            func_5282758160(depth+1);
        break;
        case 4:
            func_5282763328(depth+1);
        break;
        case 5:
            func_5282764432(depth+1);
        break;
        case 6:
            func_5282764560(depth+1);
        break;
    }
    return;
}
void func_5282759488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        return;
    }
    func_5282759744(depth+1);
    func_5282758224(depth+1);
    func_5282759312(depth+1);
    return;
}
void func_5282759744(unsigned depth) {
    extend(91);
    return;
}
void func_5282759312(unsigned depth) {
    extend(93);
    return;
}
void func_5282759872(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    func_5282759744(depth+1);
    func_5282759312(depth+1);
    return;
}
void func_5282760336(unsigned depth) {
    extend(48);
    return;
}
void func_5282760464(unsigned depth) {
    extend(49);
    return;
}
void func_5282760592(unsigned depth) {
    extend(50);
    return;
}
void func_5282759184(unsigned depth) {
    extend(51);
    return;
}
void func_5282760976(unsigned depth) {
    extend(52);
    return;
}
void func_5282761168(unsigned depth) {
    extend(53);
    return;
}
void func_5282761296(unsigned depth) {
    extend(54);
    return;
}
void func_5282761424(unsigned depth) {
    extend(55);
    return;
}
void func_5282761552(unsigned depth) {
    extend(56);
    return;
}
void func_5282761104(unsigned depth) {
    extend(57);
    return;
}
void func_5282759040(unsigned depth) {
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
    func_5282759552(depth+1);
    func_5282761936(depth+1);
    func_5282758224(depth+1);
    return;
}
void func_5282761936(unsigned depth) {
    extend(44);
    return;
}
void func_5282760080(unsigned depth) {
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
    func_5282758768(depth+1);
    func_5282761936(depth+1);
    func_5282757984(depth+1);
    return;
}
void func_5282760208(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5282758416(depth+1);
    func_5282758160(depth+1);
    return;
}
void func_5282762144(unsigned depth) {
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
    func_5282762272(depth+1);
    func_5282757984(depth+1);
    func_5282762400(depth+1);
    return;
}
void func_5282762272(unsigned depth) {
    extend(123);
    return;
}
void func_5282762400(unsigned depth) {
    extend(125);
    return;
}
void func_5282762576(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    func_5282762272(depth+1);
    func_5282762400(depth+1);
    return;
}
void func_5282762720(unsigned depth) {
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
    func_5282759120(depth+1);
    func_5282760720(depth+1);
    func_5282759552(depth+1);
    return;
}
void func_5282760720(unsigned depth) {
    extend(58);
    return;
}
void func_5282762064(unsigned depth) {
    extend(34);
    extend(97);
    extend(34);
    return;
}
void func_5282763488(unsigned depth) {
    extend(34);
    extend(98);
    extend(34);
    return;
}
void func_5282763616(unsigned depth) {
    extend(34);
    extend(99);
    extend(34);
    return;
}
void func_5282763776(unsigned depth) {
    extend(34);
    extend(100);
    extend(34);
    return;
}
void func_5282763904(unsigned depth) {
    extend(34);
    extend(101);
    extend(34);
    return;
}
void func_5282763328(unsigned depth) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    return;
}
void func_5282764432(unsigned depth) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5282764560(unsigned depth) {
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    return;
}
int main(void) {
    static unsigned count = 8;
    seed = time(NULL);
    func_5282758560(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
