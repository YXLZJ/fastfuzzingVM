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

void func_5802842736(unsigned depth);
void func_5802852944(unsigned depth);
void func_5802853248(unsigned depth);
void func_5802853600(unsigned depth);
void func_5802853312(unsigned depth);
void func_5802852864(unsigned depth);
void func_5802852736(unsigned depth);
void func_5802854064(unsigned depth);
void func_5802853104(unsigned depth);
void func_5802853728(unsigned depth);
void func_5802853856(unsigned depth);
void func_5802853984(unsigned depth);
void func_5802854480(unsigned depth);
void func_5802854608(unsigned depth);
void func_5802854768(unsigned depth);
void func_5802854976(unsigned depth);
void func_5802855104(unsigned depth);
void func_5802855488(unsigned depth);
void func_5802854352(unsigned depth);
void func_5802855840(unsigned depth);
void func_5802853168(unsigned depth);
void func_5802856032(unsigned depth);
void func_5802856160(unsigned depth);
void func_5802856288(unsigned depth);
void func_5802856752(unsigned depth);
void func_5802854896(unsigned depth);
void func_5802856944(unsigned depth);
void func_5802857104(unsigned depth);
void func_5802857232(unsigned depth);
void func_5802857424(unsigned depth);
void func_5802857552(unsigned depth);
void func_5802857680(unsigned depth);
void func_5802857808(unsigned depth);
void func_5802857360(unsigned depth);
void func_5802855616(unsigned depth);
void func_5802854240(unsigned depth);
void func_5802858448(unsigned depth);
void func_5802858576(unsigned depth);
void func_5802858960(unsigned depth);
void func_5802859088(unsigned depth);
void func_5802859216(unsigned depth);
void func_5802859376(unsigned depth);
void func_5802859504(unsigned depth);
void func_5802859696(unsigned depth);
void func_5802859824(unsigned depth);
void func_5802859952(unsigned depth);
void func_5802860080(unsigned depth);
void func_5802859632(unsigned depth);
void func_5802858848(unsigned depth);
void func_5802856480(unsigned depth);
void func_5802856608(unsigned depth);
void func_5802858768(unsigned depth);
void func_5802860592(unsigned depth);
void func_5802842736(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        return;
    }
    xor(4);
    switch (branch) {
        case 0:
            func_5802853984(depth+1);
        break;
        case 1:
            func_5802854480(depth+1);
        break;
        case 2:
            func_5802854608(depth+1);
        break;
        case 3:
            func_5802854768(depth+1);
        break;
    }
    return;
}
void func_5802852944(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(42);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5802854976(depth+1);
        break;
        case 1:
            func_5802855104(depth+1);
        break;
    }
    return;
}
void func_5802853248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5802854352(depth+1);
        break;
        case 1:
            func_5802853168(depth+1);
        break;
        case 2:
            func_5802856160(depth+1);
        break;
    }
    return;
}
void func_5802853600(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5802856752(depth+1);
        break;
        case 1:
            func_5802854896(depth+1);
        break;
        case 2:
            func_5802856944(depth+1);
        break;
        case 3:
            func_5802857104(depth+1);
        break;
        case 4:
            func_5802857232(depth+1);
        break;
        case 5:
            func_5802857424(depth+1);
        break;
        case 6:
            func_5802857552(depth+1);
        break;
        case 7:
            func_5802857680(depth+1);
        break;
        case 8:
            func_5802857808(depth+1);
        break;
        case 9:
            func_5802857360(depth+1);
        break;
    }
    return;
}
void func_5802853312(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5802853600(depth+1);
        break;
        case 1:
            func_5802855616(depth+1);
        break;
    }
    return;
}
void func_5802852864(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5802854240(depth+1);
        break;
    }
    return;
}
void func_5802852736(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5802852864(depth+1);
        break;
    }
    return;
}
void func_5802854064(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5802858960(depth+1);
        break;
        case 1:
            func_5802859088(depth+1);
        break;
        case 2:
            func_5802859216(depth+1);
        break;
        case 3:
            func_5802859376(depth+1);
        break;
        case 4:
            func_5802859504(depth+1);
        break;
        case 5:
            func_5802859696(depth+1);
        break;
        case 6:
            func_5802859824(depth+1);
        break;
        case 7:
            func_5802859952(depth+1);
        break;
        case 8:
            func_5802860080(depth+1);
        break;
        case 9:
            func_5802859632(depth+1);
        break;
    }
    return;
}
void func_5802853104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5802858848(depth+1);
        break;
        case 1:
            func_5802856480(depth+1);
        break;
        case 2:
            func_5802856608(depth+1);
        break;
    }
    return;
}
void func_5802853728(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5802853312(depth+1);
        break;
        case 1:
            func_5802854064(depth+1);
        break;
    }
    return;
}
void func_5802853856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5802858768(depth+1);
        break;
    }
    return;
}
void func_5802853984(unsigned depth) {
    extend(105);
    extend(100);
    return;
}
void func_5802854480(unsigned depth) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    return;
}
void func_5802854608(unsigned depth) {
    extend(97);
    extend(103);
    extend(101);
    return;
}
void func_5802854768(unsigned depth) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    return;
}
void func_5802854976(unsigned depth) {
    extend(42);
    return;
}
void func_5802855104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(44);
        extend(42);
        return;
    }
    func_5802842736(depth+1);
    func_5802855488(depth+1);
    func_5802852944(depth+1);
    return;
}
void func_5802855488(unsigned depth) {
    extend(44);
    return;
}
void func_5802854352(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5802842736(depth+1);
    func_5802855840(depth+1);
    func_5802853728(depth+1);
    return;
}
void func_5802855840(unsigned depth) {
    extend(61);
    return;
}
void func_5802853168(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(65);
        extend(78);
        extend(68);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5802853248(depth+1);
    func_5802856032(depth+1);
    func_5802853248(depth+1);
    return;
}
void func_5802856032(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_5802856160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(79);
        extend(82);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5802853248(depth+1);
    func_5802856288(depth+1);
    func_5802853248(depth+1);
    return;
}
void func_5802856288(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_5802856752(unsigned depth) {
    extend(48);
    return;
}
void func_5802854896(unsigned depth) {
    extend(49);
    return;
}
void func_5802856944(unsigned depth) {
    extend(50);
    return;
}
void func_5802857104(unsigned depth) {
    extend(51);
    return;
}
void func_5802857232(unsigned depth) {
    extend(52);
    return;
}
void func_5802857424(unsigned depth) {
    extend(53);
    return;
}
void func_5802857552(unsigned depth) {
    extend(54);
    return;
}
void func_5802857680(unsigned depth) {
    extend(55);
    return;
}
void func_5802857808(unsigned depth) {
    extend(56);
    return;
}
void func_5802857360(unsigned depth) {
    extend(57);
    return;
}
void func_5802855616(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5802853600(depth+1);
    func_5802853312(depth+1);
    return;
}
void func_5802854240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5802858448(depth+1);
    func_5802852944(depth+1);
    func_5802858576(depth+1);
    func_5802853104(depth+1);
    func_5802853856(depth+1);
    return;
}
void func_5802858448(unsigned depth) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    return;
}
void func_5802858576(unsigned depth) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    return;
}
void func_5802858960(unsigned depth) {
    extend(97);
    return;
}
void func_5802859088(unsigned depth) {
    extend(98);
    return;
}
void func_5802859216(unsigned depth) {
    extend(99);
    return;
}
void func_5802859376(unsigned depth) {
    extend(100);
    return;
}
void func_5802859504(unsigned depth) {
    extend(101);
    return;
}
void func_5802859696(unsigned depth) {
    extend(102);
    return;
}
void func_5802859824(unsigned depth) {
    extend(103);
    return;
}
void func_5802859952(unsigned depth) {
    extend(104);
    return;
}
void func_5802860080(unsigned depth) {
    extend(105);
    return;
}
void func_5802859632(unsigned depth) {
    extend(106);
    return;
}
void func_5802858848(unsigned depth) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_5802856480(unsigned depth) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_5802856608(unsigned depth) {
    extend(112);
    extend(114);
    extend(111);
    extend(100);
    extend(117);
    extend(99);
    extend(116);
    extend(115);
    return;
}
void func_5802858768(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5802860592(depth+1);
    func_5802853248(depth+1);
    return;
}
void func_5802860592(unsigned depth) {
    extend(87);
    extend(72);
    extend(69);
    extend(82);
    extend(69);
    return;
}
int main(void) {
    static unsigned count = 7;
    seed = time(NULL);
    func_5802852736(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
