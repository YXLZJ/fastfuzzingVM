#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 30
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

void func_5735733872(unsigned depth);
void func_5735744080(unsigned depth);
void func_5735744384(unsigned depth);
void func_5735744736(unsigned depth);
void func_5735744448(unsigned depth);
void func_5735744000(unsigned depth);
void func_5735743872(unsigned depth);
void func_5735745200(unsigned depth);
void func_5735744240(unsigned depth);
void func_5735744864(unsigned depth);
void func_5735744992(unsigned depth);
void func_5735745120(unsigned depth);
void func_5735745616(unsigned depth);
void func_5735745744(unsigned depth);
void func_5735745904(unsigned depth);
void func_5735746112(unsigned depth);
void func_5735746240(unsigned depth);
void func_5735746624(unsigned depth);
void func_5735745488(unsigned depth);
void func_5735746976(unsigned depth);
void func_5735744304(unsigned depth);
void func_5735747168(unsigned depth);
void func_5735747296(unsigned depth);
void func_5735747424(unsigned depth);
void func_5735747888(unsigned depth);
void func_5735746032(unsigned depth);
void func_5735748080(unsigned depth);
void func_5735748240(unsigned depth);
void func_5735748368(unsigned depth);
void func_5735748560(unsigned depth);
void func_5735748688(unsigned depth);
void func_5735748816(unsigned depth);
void func_5735748944(unsigned depth);
void func_5735748496(unsigned depth);
void func_5735746752(unsigned depth);
void func_5735745376(unsigned depth);
void func_5735749584(unsigned depth);
void func_5735749712(unsigned depth);
void func_5735750096(unsigned depth);
void func_5735750224(unsigned depth);
void func_5735750352(unsigned depth);
void func_5735750512(unsigned depth);
void func_5735750640(unsigned depth);
void func_5735750832(unsigned depth);
void func_5735750960(unsigned depth);
void func_5735751088(unsigned depth);
void func_5735751216(unsigned depth);
void func_5735750768(unsigned depth);
void func_5735749984(unsigned depth);
void func_5735747616(unsigned depth);
void func_5735747744(unsigned depth);
void func_5735749904(unsigned depth);
void func_5735751728(unsigned depth);
void func_5735733872(unsigned depth) {
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
            func_5735745120(depth+1);
        break;
        case 1:
            func_5735745616(depth+1);
        break;
        case 2:
            func_5735745744(depth+1);
        break;
        case 3:
            func_5735745904(depth+1);
        break;
    }
    return;
}
void func_5735744080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(42);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5735746112(depth+1);
        break;
        case 1:
            func_5735746240(depth+1);
        break;
    }
    return;
}
void func_5735744384(unsigned depth) {
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
            func_5735745488(depth+1);
        break;
        case 1:
            func_5735744304(depth+1);
        break;
        case 2:
            func_5735747296(depth+1);
        break;
    }
    return;
}
void func_5735744736(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5735747888(depth+1);
        break;
        case 1:
            func_5735746032(depth+1);
        break;
        case 2:
            func_5735748080(depth+1);
        break;
        case 3:
            func_5735748240(depth+1);
        break;
        case 4:
            func_5735748368(depth+1);
        break;
        case 5:
            func_5735748560(depth+1);
        break;
        case 6:
            func_5735748688(depth+1);
        break;
        case 7:
            func_5735748816(depth+1);
        break;
        case 8:
            func_5735748944(depth+1);
        break;
        case 9:
            func_5735748496(depth+1);
        break;
    }
    return;
}
void func_5735744448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5735744736(depth+1);
        break;
        case 1:
            func_5735746752(depth+1);
        break;
    }
    return;
}
void func_5735744000(unsigned depth) {
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
            func_5735745376(depth+1);
        break;
    }
    return;
}
void func_5735743872(unsigned depth) {
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
            func_5735744000(depth+1);
        break;
    }
    return;
}
void func_5735745200(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5735750096(depth+1);
        break;
        case 1:
            func_5735750224(depth+1);
        break;
        case 2:
            func_5735750352(depth+1);
        break;
        case 3:
            func_5735750512(depth+1);
        break;
        case 4:
            func_5735750640(depth+1);
        break;
        case 5:
            func_5735750832(depth+1);
        break;
        case 6:
            func_5735750960(depth+1);
        break;
        case 7:
            func_5735751088(depth+1);
        break;
        case 8:
            func_5735751216(depth+1);
        break;
        case 9:
            func_5735750768(depth+1);
        break;
    }
    return;
}
void func_5735744240(unsigned depth) {
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
            func_5735749984(depth+1);
        break;
        case 1:
            func_5735747616(depth+1);
        break;
        case 2:
            func_5735747744(depth+1);
        break;
    }
    return;
}
void func_5735744864(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5735744448(depth+1);
        break;
        case 1:
            func_5735745200(depth+1);
        break;
    }
    return;
}
void func_5735744992(unsigned depth) {
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
            func_5735749904(depth+1);
        break;
    }
    return;
}
void func_5735745120(unsigned depth) {
    extend(105);
    extend(100);
    return;
}
void func_5735745616(unsigned depth) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    return;
}
void func_5735745744(unsigned depth) {
    extend(97);
    extend(103);
    extend(101);
    return;
}
void func_5735745904(unsigned depth) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    return;
}
void func_5735746112(unsigned depth) {
    extend(42);
    return;
}
void func_5735746240(unsigned depth) {
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
    func_5735733872(depth+1);
    func_5735746624(depth+1);
    func_5735744080(depth+1);
    return;
}
void func_5735746624(unsigned depth) {
    extend(44);
    return;
}
void func_5735745488(unsigned depth) {
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
    func_5735733872(depth+1);
    func_5735746976(depth+1);
    func_5735744864(depth+1);
    return;
}
void func_5735746976(unsigned depth) {
    extend(61);
    return;
}
void func_5735744304(unsigned depth) {
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
    func_5735744384(depth+1);
    func_5735747168(depth+1);
    func_5735744384(depth+1);
    return;
}
void func_5735747168(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_5735747296(unsigned depth) {
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
    func_5735744384(depth+1);
    func_5735747424(depth+1);
    func_5735744384(depth+1);
    return;
}
void func_5735747424(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_5735747888(unsigned depth) {
    extend(48);
    return;
}
void func_5735746032(unsigned depth) {
    extend(49);
    return;
}
void func_5735748080(unsigned depth) {
    extend(50);
    return;
}
void func_5735748240(unsigned depth) {
    extend(51);
    return;
}
void func_5735748368(unsigned depth) {
    extend(52);
    return;
}
void func_5735748560(unsigned depth) {
    extend(53);
    return;
}
void func_5735748688(unsigned depth) {
    extend(54);
    return;
}
void func_5735748816(unsigned depth) {
    extend(55);
    return;
}
void func_5735748944(unsigned depth) {
    extend(56);
    return;
}
void func_5735748496(unsigned depth) {
    extend(57);
    return;
}
void func_5735746752(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5735744736(depth+1);
    func_5735744448(depth+1);
    return;
}
void func_5735745376(unsigned depth) {
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
    func_5735749584(depth+1);
    func_5735744080(depth+1);
    func_5735749712(depth+1);
    func_5735744240(depth+1);
    func_5735744992(depth+1);
    return;
}
void func_5735749584(unsigned depth) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    return;
}
void func_5735749712(unsigned depth) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    return;
}
void func_5735750096(unsigned depth) {
    extend(97);
    return;
}
void func_5735750224(unsigned depth) {
    extend(98);
    return;
}
void func_5735750352(unsigned depth) {
    extend(99);
    return;
}
void func_5735750512(unsigned depth) {
    extend(100);
    return;
}
void func_5735750640(unsigned depth) {
    extend(101);
    return;
}
void func_5735750832(unsigned depth) {
    extend(102);
    return;
}
void func_5735750960(unsigned depth) {
    extend(103);
    return;
}
void func_5735751088(unsigned depth) {
    extend(104);
    return;
}
void func_5735751216(unsigned depth) {
    extend(105);
    return;
}
void func_5735750768(unsigned depth) {
    extend(106);
    return;
}
void func_5735749984(unsigned depth) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_5735747616(unsigned depth) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_5735747744(unsigned depth) {
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
void func_5735749904(unsigned depth) {
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
    func_5735751728(depth+1);
    func_5735744384(depth+1);
    return;
}
void func_5735751728(unsigned depth) {
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
    func_5735743872(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
