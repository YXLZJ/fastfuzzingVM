#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 25
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

void func_5777676912(unsigned depth);
void func_5777687120(unsigned depth);
void func_5777687424(unsigned depth);
void func_5777687776(unsigned depth);
void func_5777687488(unsigned depth);
void func_5777687040(unsigned depth);
void func_5777686912(unsigned depth);
void func_5777688240(unsigned depth);
void func_5777687280(unsigned depth);
void func_5777687904(unsigned depth);
void func_5777688032(unsigned depth);
void func_5777688160(unsigned depth);
void func_5777688656(unsigned depth);
void func_5777688784(unsigned depth);
void func_5777688944(unsigned depth);
void func_5777689152(unsigned depth);
void func_5777689280(unsigned depth);
void func_5777689664(unsigned depth);
void func_5777688528(unsigned depth);
void func_5777690016(unsigned depth);
void func_5777687344(unsigned depth);
void func_5777690208(unsigned depth);
void func_5777690336(unsigned depth);
void func_5777690464(unsigned depth);
void func_5777690928(unsigned depth);
void func_5777689072(unsigned depth);
void func_5777691120(unsigned depth);
void func_5777691280(unsigned depth);
void func_5777691408(unsigned depth);
void func_5777691600(unsigned depth);
void func_5777691728(unsigned depth);
void func_5777691856(unsigned depth);
void func_5777691984(unsigned depth);
void func_5777691536(unsigned depth);
void func_5777689792(unsigned depth);
void func_5777688416(unsigned depth);
void func_5777692624(unsigned depth);
void func_5777692752(unsigned depth);
void func_5777693136(unsigned depth);
void func_5777693264(unsigned depth);
void func_5777693392(unsigned depth);
void func_5777693552(unsigned depth);
void func_5777693680(unsigned depth);
void func_5777693872(unsigned depth);
void func_5777694000(unsigned depth);
void func_5777694128(unsigned depth);
void func_5777694256(unsigned depth);
void func_5777693808(unsigned depth);
void func_5777693024(unsigned depth);
void func_5777690656(unsigned depth);
void func_5777690784(unsigned depth);
void func_5777692944(unsigned depth);
void func_5777694768(unsigned depth);
void func_5777676912(unsigned depth) {
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
            func_5777688160(depth+1);
        break;
        case 1:
            func_5777688656(depth+1);
        break;
        case 2:
            func_5777688784(depth+1);
        break;
        case 3:
            func_5777688944(depth+1);
        break;
    }
    return;
}
void func_5777687120(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(42);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5777689152(depth+1);
        break;
        case 1:
            func_5777689280(depth+1);
        break;
    }
    return;
}
void func_5777687424(unsigned depth) {
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
            func_5777688528(depth+1);
        break;
        case 1:
            func_5777687344(depth+1);
        break;
        case 2:
            func_5777690336(depth+1);
        break;
    }
    return;
}
void func_5777687776(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5777690928(depth+1);
        break;
        case 1:
            func_5777689072(depth+1);
        break;
        case 2:
            func_5777691120(depth+1);
        break;
        case 3:
            func_5777691280(depth+1);
        break;
        case 4:
            func_5777691408(depth+1);
        break;
        case 5:
            func_5777691600(depth+1);
        break;
        case 6:
            func_5777691728(depth+1);
        break;
        case 7:
            func_5777691856(depth+1);
        break;
        case 8:
            func_5777691984(depth+1);
        break;
        case 9:
            func_5777691536(depth+1);
        break;
    }
    return;
}
void func_5777687488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5777687776(depth+1);
        break;
        case 1:
            func_5777689792(depth+1);
        break;
    }
    return;
}
void func_5777687040(unsigned depth) {
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
            func_5777688416(depth+1);
        break;
    }
    return;
}
void func_5777686912(unsigned depth) {
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
            func_5777687040(depth+1);
        break;
    }
    return;
}
void func_5777688240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5777693136(depth+1);
        break;
        case 1:
            func_5777693264(depth+1);
        break;
        case 2:
            func_5777693392(depth+1);
        break;
        case 3:
            func_5777693552(depth+1);
        break;
        case 4:
            func_5777693680(depth+1);
        break;
        case 5:
            func_5777693872(depth+1);
        break;
        case 6:
            func_5777694000(depth+1);
        break;
        case 7:
            func_5777694128(depth+1);
        break;
        case 8:
            func_5777694256(depth+1);
        break;
        case 9:
            func_5777693808(depth+1);
        break;
    }
    return;
}
void func_5777687280(unsigned depth) {
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
            func_5777693024(depth+1);
        break;
        case 1:
            func_5777690656(depth+1);
        break;
        case 2:
            func_5777690784(depth+1);
        break;
    }
    return;
}
void func_5777687904(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5777687488(depth+1);
        break;
        case 1:
            func_5777688240(depth+1);
        break;
    }
    return;
}
void func_5777688032(unsigned depth) {
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
            func_5777692944(depth+1);
        break;
    }
    return;
}
void func_5777688160(unsigned depth) {
    extend(105);
    extend(100);
    return;
}
void func_5777688656(unsigned depth) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    return;
}
void func_5777688784(unsigned depth) {
    extend(97);
    extend(103);
    extend(101);
    return;
}
void func_5777688944(unsigned depth) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    return;
}
void func_5777689152(unsigned depth) {
    extend(42);
    return;
}
void func_5777689280(unsigned depth) {
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
    func_5777676912(depth+1);
    func_5777689664(depth+1);
    func_5777687120(depth+1);
    return;
}
void func_5777689664(unsigned depth) {
    extend(44);
    return;
}
void func_5777688528(unsigned depth) {
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
    func_5777676912(depth+1);
    func_5777690016(depth+1);
    func_5777687904(depth+1);
    return;
}
void func_5777690016(unsigned depth) {
    extend(61);
    return;
}
void func_5777687344(unsigned depth) {
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
    func_5777687424(depth+1);
    func_5777690208(depth+1);
    func_5777687424(depth+1);
    return;
}
void func_5777690208(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_5777690336(unsigned depth) {
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
    func_5777687424(depth+1);
    func_5777690464(depth+1);
    func_5777687424(depth+1);
    return;
}
void func_5777690464(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_5777690928(unsigned depth) {
    extend(48);
    return;
}
void func_5777689072(unsigned depth) {
    extend(49);
    return;
}
void func_5777691120(unsigned depth) {
    extend(50);
    return;
}
void func_5777691280(unsigned depth) {
    extend(51);
    return;
}
void func_5777691408(unsigned depth) {
    extend(52);
    return;
}
void func_5777691600(unsigned depth) {
    extend(53);
    return;
}
void func_5777691728(unsigned depth) {
    extend(54);
    return;
}
void func_5777691856(unsigned depth) {
    extend(55);
    return;
}
void func_5777691984(unsigned depth) {
    extend(56);
    return;
}
void func_5777691536(unsigned depth) {
    extend(57);
    return;
}
void func_5777689792(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5777687776(depth+1);
    func_5777687488(depth+1);
    return;
}
void func_5777688416(unsigned depth) {
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
    func_5777692624(depth+1);
    func_5777687120(depth+1);
    func_5777692752(depth+1);
    func_5777687280(depth+1);
    func_5777688032(depth+1);
    return;
}
void func_5777692624(unsigned depth) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    return;
}
void func_5777692752(unsigned depth) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    return;
}
void func_5777693136(unsigned depth) {
    extend(97);
    return;
}
void func_5777693264(unsigned depth) {
    extend(98);
    return;
}
void func_5777693392(unsigned depth) {
    extend(99);
    return;
}
void func_5777693552(unsigned depth) {
    extend(100);
    return;
}
void func_5777693680(unsigned depth) {
    extend(101);
    return;
}
void func_5777693872(unsigned depth) {
    extend(102);
    return;
}
void func_5777694000(unsigned depth) {
    extend(103);
    return;
}
void func_5777694128(unsigned depth) {
    extend(104);
    return;
}
void func_5777694256(unsigned depth) {
    extend(105);
    return;
}
void func_5777693808(unsigned depth) {
    extend(106);
    return;
}
void func_5777693024(unsigned depth) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_5777690656(unsigned depth) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_5777690784(unsigned depth) {
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
void func_5777692944(unsigned depth) {
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
    func_5777694768(depth+1);
    func_5777687424(depth+1);
    return;
}
void func_5777694768(unsigned depth) {
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
    func_5777686912(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}