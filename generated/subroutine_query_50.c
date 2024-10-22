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

void func_4804598384(unsigned depth);
void func_4804608592(unsigned depth);
void func_4804608896(unsigned depth);
void func_4804609248(unsigned depth);
void func_4804608960(unsigned depth);
void func_4804608512(unsigned depth);
void func_4804608384(unsigned depth);
void func_4804609712(unsigned depth);
void func_4804608752(unsigned depth);
void func_4804609376(unsigned depth);
void func_4804609504(unsigned depth);
void func_4804609632(unsigned depth);
void func_4804610128(unsigned depth);
void func_4804610256(unsigned depth);
void func_4804610416(unsigned depth);
void func_4804610624(unsigned depth);
void func_4804610752(unsigned depth);
void func_4804611136(unsigned depth);
void func_4804610000(unsigned depth);
void func_4804611488(unsigned depth);
void func_4804608816(unsigned depth);
void func_4804611680(unsigned depth);
void func_4804611808(unsigned depth);
void func_4804611936(unsigned depth);
void func_4804612400(unsigned depth);
void func_4804610544(unsigned depth);
void func_4804612592(unsigned depth);
void func_4804612752(unsigned depth);
void func_4804612880(unsigned depth);
void func_4804613072(unsigned depth);
void func_4804613200(unsigned depth);
void func_4804613328(unsigned depth);
void func_4804613456(unsigned depth);
void func_4804613008(unsigned depth);
void func_4804611264(unsigned depth);
void func_4804609888(unsigned depth);
void func_4804614096(unsigned depth);
void func_4804614224(unsigned depth);
void func_4804614608(unsigned depth);
void func_4804614736(unsigned depth);
void func_4804614864(unsigned depth);
void func_4804615024(unsigned depth);
void func_4804615152(unsigned depth);
void func_4804615344(unsigned depth);
void func_4804615472(unsigned depth);
void func_4804615600(unsigned depth);
void func_4804615728(unsigned depth);
void func_4804615280(unsigned depth);
void func_4804614496(unsigned depth);
void func_4804612128(unsigned depth);
void func_4804612256(unsigned depth);
void func_4804614416(unsigned depth);
void func_4804616240(unsigned depth);
void func_4804598384(unsigned depth) {
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
            func_4804609632(depth+1);
        break;
        case 1:
            func_4804610128(depth+1);
        break;
        case 2:
            func_4804610256(depth+1);
        break;
        case 3:
            func_4804610416(depth+1);
        break;
    }
    return;
}
void func_4804608592(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(42);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4804610624(depth+1);
        break;
        case 1:
            func_4804610752(depth+1);
        break;
    }
    return;
}
void func_4804608896(unsigned depth) {
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
            func_4804610000(depth+1);
        break;
        case 1:
            func_4804608816(depth+1);
        break;
        case 2:
            func_4804611808(depth+1);
        break;
    }
    return;
}
void func_4804609248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4804612400(depth+1);
        break;
        case 1:
            func_4804610544(depth+1);
        break;
        case 2:
            func_4804612592(depth+1);
        break;
        case 3:
            func_4804612752(depth+1);
        break;
        case 4:
            func_4804612880(depth+1);
        break;
        case 5:
            func_4804613072(depth+1);
        break;
        case 6:
            func_4804613200(depth+1);
        break;
        case 7:
            func_4804613328(depth+1);
        break;
        case 8:
            func_4804613456(depth+1);
        break;
        case 9:
            func_4804613008(depth+1);
        break;
    }
    return;
}
void func_4804608960(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4804609248(depth+1);
        break;
        case 1:
            func_4804611264(depth+1);
        break;
    }
    return;
}
void func_4804608512(unsigned depth) {
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
            func_4804609888(depth+1);
        break;
    }
    return;
}
void func_4804608384(unsigned depth) {
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
            func_4804608512(depth+1);
        break;
    }
    return;
}
void func_4804609712(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4804614608(depth+1);
        break;
        case 1:
            func_4804614736(depth+1);
        break;
        case 2:
            func_4804614864(depth+1);
        break;
        case 3:
            func_4804615024(depth+1);
        break;
        case 4:
            func_4804615152(depth+1);
        break;
        case 5:
            func_4804615344(depth+1);
        break;
        case 6:
            func_4804615472(depth+1);
        break;
        case 7:
            func_4804615600(depth+1);
        break;
        case 8:
            func_4804615728(depth+1);
        break;
        case 9:
            func_4804615280(depth+1);
        break;
    }
    return;
}
void func_4804608752(unsigned depth) {
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
            func_4804614496(depth+1);
        break;
        case 1:
            func_4804612128(depth+1);
        break;
        case 2:
            func_4804612256(depth+1);
        break;
    }
    return;
}
void func_4804609376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4804608960(depth+1);
        break;
        case 1:
            func_4804609712(depth+1);
        break;
    }
    return;
}
void func_4804609504(unsigned depth) {
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
            func_4804614416(depth+1);
        break;
    }
    return;
}
void func_4804609632(unsigned depth) {
    extend(105);
    extend(100);
    return;
}
void func_4804610128(unsigned depth) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    return;
}
void func_4804610256(unsigned depth) {
    extend(97);
    extend(103);
    extend(101);
    return;
}
void func_4804610416(unsigned depth) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    return;
}
void func_4804610624(unsigned depth) {
    extend(42);
    return;
}
void func_4804610752(unsigned depth) {
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
    func_4804598384(depth+1);
    func_4804611136(depth+1);
    func_4804608592(depth+1);
    return;
}
void func_4804611136(unsigned depth) {
    extend(44);
    return;
}
void func_4804610000(unsigned depth) {
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
    func_4804598384(depth+1);
    func_4804611488(depth+1);
    func_4804609376(depth+1);
    return;
}
void func_4804611488(unsigned depth) {
    extend(61);
    return;
}
void func_4804608816(unsigned depth) {
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
    func_4804608896(depth+1);
    func_4804611680(depth+1);
    func_4804608896(depth+1);
    return;
}
void func_4804611680(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_4804611808(unsigned depth) {
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
    func_4804608896(depth+1);
    func_4804611936(depth+1);
    func_4804608896(depth+1);
    return;
}
void func_4804611936(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_4804612400(unsigned depth) {
    extend(48);
    return;
}
void func_4804610544(unsigned depth) {
    extend(49);
    return;
}
void func_4804612592(unsigned depth) {
    extend(50);
    return;
}
void func_4804612752(unsigned depth) {
    extend(51);
    return;
}
void func_4804612880(unsigned depth) {
    extend(52);
    return;
}
void func_4804613072(unsigned depth) {
    extend(53);
    return;
}
void func_4804613200(unsigned depth) {
    extend(54);
    return;
}
void func_4804613328(unsigned depth) {
    extend(55);
    return;
}
void func_4804613456(unsigned depth) {
    extend(56);
    return;
}
void func_4804613008(unsigned depth) {
    extend(57);
    return;
}
void func_4804611264(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4804609248(depth+1);
    func_4804608960(depth+1);
    return;
}
void func_4804609888(unsigned depth) {
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
    func_4804614096(depth+1);
    func_4804608592(depth+1);
    func_4804614224(depth+1);
    func_4804608752(depth+1);
    func_4804609504(depth+1);
    return;
}
void func_4804614096(unsigned depth) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    return;
}
void func_4804614224(unsigned depth) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    return;
}
void func_4804614608(unsigned depth) {
    extend(97);
    return;
}
void func_4804614736(unsigned depth) {
    extend(98);
    return;
}
void func_4804614864(unsigned depth) {
    extend(99);
    return;
}
void func_4804615024(unsigned depth) {
    extend(100);
    return;
}
void func_4804615152(unsigned depth) {
    extend(101);
    return;
}
void func_4804615344(unsigned depth) {
    extend(102);
    return;
}
void func_4804615472(unsigned depth) {
    extend(103);
    return;
}
void func_4804615600(unsigned depth) {
    extend(104);
    return;
}
void func_4804615728(unsigned depth) {
    extend(105);
    return;
}
void func_4804615280(unsigned depth) {
    extend(106);
    return;
}
void func_4804614496(unsigned depth) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_4804612128(unsigned depth) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_4804612256(unsigned depth) {
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
void func_4804614416(unsigned depth) {
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
    func_4804616240(depth+1);
    func_4804608896(depth+1);
    return;
}
void func_4804616240(unsigned depth) {
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
    func_4804608384(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
