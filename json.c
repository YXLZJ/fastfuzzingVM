#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 100
typedef struct {
    char data[BUFFER_SIZE];
    unsigned top;
} Buffer;

Buffer buffer;  // Declare a global buffer

#define extend(c) { \
    buffer.data[buffer.top++] = c; \
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

void func_4814037424(unsigned depth);
void func_4814037984(unsigned depth);
void func_4814037792(unsigned depth);
void func_4814037552(unsigned depth);
void func_4814037728(unsigned depth);
void func_4814038208(unsigned depth);
void func_4814038336(unsigned depth);
void func_4814038128(unsigned depth);
void func_4814038688(unsigned depth);
void func_4814039120(unsigned depth);
void func_4814039056(unsigned depth);
void func_4814039312(unsigned depth);
void func_4814038880(unsigned depth);
void func_4814039440(unsigned depth);
void func_4814039904(unsigned depth);
void func_4814040032(unsigned depth);
void func_4814040160(unsigned depth);
void func_4814038752(unsigned depth);
void func_4814040544(unsigned depth);
void func_4814040736(unsigned depth);
void func_4814040864(unsigned depth);
void func_4814040992(unsigned depth);
void func_4814041120(unsigned depth);
void func_4814040672(unsigned depth);
void func_4814038608(unsigned depth);
void func_4814041504(unsigned depth);
void func_4814039648(unsigned depth);
void func_4814039776(unsigned depth);
void func_4814041712(unsigned depth);
void func_4814041840(unsigned depth);
void func_4814041968(unsigned depth);
void func_4814042144(unsigned depth);
void func_4814042288(unsigned depth);
void func_4814040288(unsigned depth);
void func_4814041632(unsigned depth);
void func_4814043056(unsigned depth);
void func_4814043184(unsigned depth);
void func_4814043344(unsigned depth);
void func_4814043472(unsigned depth);
void func_4814042896(unsigned depth);
void func_4814044000(unsigned depth);
void func_4814044128(unsigned depth);
void func_4814037424(register unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4814039056(depth+1);
        break;
        case 1:
            func_4814039440(depth+1);
        break;
    }
    return;
}
void func_4814037984(register unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4814039904(depth+1);
        break;
        case 1:
            func_4814040032(depth+1);
        break;
        case 2:
            func_4814040160(depth+1);
        break;
        case 3:
            func_4814038752(depth+1);
        break;
        case 4:
            func_4814040544(depth+1);
        break;
        case 5:
            func_4814040736(depth+1);
        break;
        case 6:
            func_4814040864(depth+1);
        break;
        case 7:
            func_4814040992(depth+1);
        break;
        case 8:
            func_4814041120(depth+1);
        break;
        case 9:
            func_4814040672(depth+1);
        break;
    }
    return;
}
void func_4814037792(register unsigned depth) {
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
            func_4814038608(depth+1);
        break;
        case 1:
            func_4814039120(depth+1);
        break;
    }
    return;
}
void func_4814037552(register unsigned depth) {
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
            func_4814039648(depth+1);
        break;
        case 1:
            func_4814038336(depth+1);
        break;
    }
    return;
}
void func_4814037728(register unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4814037984(depth+1);
        break;
        case 1:
            func_4814039776(depth+1);
        break;
    }
    return;
}
void func_4814038208(register unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4814041712(depth+1);
        break;
        case 1:
            func_4814042144(depth+1);
        break;
    }
    return;
}
void func_4814038336(register unsigned depth) {
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
            func_4814042288(depth+1);
        break;
    }
    return;
}
void func_4814038128(register unsigned depth) {
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
            func_4814039120(depth+1);
        break;
    }
    return;
}
void func_4814038688(register unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_4814041632(depth+1);
        break;
        case 1:
            func_4814043056(depth+1);
        break;
        case 2:
            func_4814043184(depth+1);
        break;
        case 3:
            func_4814043344(depth+1);
        break;
        case 4:
            func_4814043472(depth+1);
        break;
    }
    return;
}
void func_4814039120(register unsigned depth) {
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
            func_4814038208(depth+1);
        break;
        case 1:
            func_4814037424(depth+1);
        break;
        case 2:
            func_4814038688(depth+1);
        break;
        case 3:
            func_4814037728(depth+1);
        break;
        case 4:
            func_4814042896(depth+1);
        break;
        case 5:
            func_4814044000(depth+1);
        break;
        case 6:
            func_4814044128(depth+1);
        break;
    }
    return;
}
void func_4814039056(register unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        return;
    }
    func_4814039312(depth+1);
    func_4814037792(depth+1);
    func_4814038880(depth+1);
    return;
}
void func_4814039312(register unsigned depth) {
    extend(91);
    return;
}
void func_4814038880(register unsigned depth) {
    extend(93);
    return;
}
void func_4814039440(register unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    func_4814039312(depth+1);
    func_4814038880(depth+1);
    return;
}
void func_4814039904(register unsigned depth) {
    extend(48);
    return;
}
void func_4814040032(register unsigned depth) {
    extend(49);
    return;
}
void func_4814040160(register unsigned depth) {
    extend(50);
    return;
}
void func_4814038752(register unsigned depth) {
    extend(51);
    return;
}
void func_4814040544(register unsigned depth) {
    extend(52);
    return;
}
void func_4814040736(register unsigned depth) {
    extend(53);
    return;
}
void func_4814040864(register unsigned depth) {
    extend(54);
    return;
}
void func_4814040992(register unsigned depth) {
    extend(55);
    return;
}
void func_4814041120(register unsigned depth) {
    extend(56);
    return;
}
void func_4814040672(register unsigned depth) {
    extend(57);
    return;
}
void func_4814038608(register unsigned depth) {
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
    func_4814039120(depth+1);
    func_4814041504(depth+1);
    func_4814037792(depth+1);
    return;
}
void func_4814041504(register unsigned depth) {
    extend(44);
    return;
}
void func_4814039648(register unsigned depth) {
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
    func_4814038336(depth+1);
    func_4814041504(depth+1);
    func_4814037552(depth+1);
    return;
}
void func_4814039776(register unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4814037984(depth+1);
    func_4814037728(depth+1);
    return;
}
void func_4814041712(register unsigned depth) {
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
    func_4814041840(depth+1);
    func_4814037552(depth+1);
    func_4814041968(depth+1);
    return;
}
void func_4814041840(register unsigned depth) {
    extend(123);
    return;
}
void func_4814041968(register unsigned depth) {
    extend(125);
    return;
}
void func_4814042144(register unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    func_4814041840(depth+1);
    func_4814041968(depth+1);
    return;
}
void func_4814042288(register unsigned depth) {
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
    func_4814038688(depth+1);
    func_4814040288(depth+1);
    func_4814039120(depth+1);
    return;
}
void func_4814040288(register unsigned depth) {
    extend(58);
    return;
}
void func_4814041632(register unsigned depth) {
    extend(34);
    extend(97);
    extend(34);
    return;
}
void func_4814043056(register unsigned depth) {
    extend(34);
    extend(98);
    extend(34);
    return;
}
void func_4814043184(register unsigned depth) {
    extend(34);
    extend(99);
    extend(34);
    return;
}
void func_4814043344(register unsigned depth) {
    extend(34);
    extend(100);
    extend(34);
    return;
}
void func_4814043472(register unsigned depth) {
    extend(34);
    extend(101);
    extend(34);
    return;
}
void func_4814042896(register unsigned depth) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    return;
}
void func_4814044000(register unsigned depth) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_4814044128(register unsigned depth) {
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    return;
}
int main(void) {
    static unsigned count = 1;
    seed = time(NULL);
    while(endless || (count>0) ) {
        func_4814038128(1);
        count--;
        printf("%.*s\n", (int)buffer.top, buffer.data);
        clean();
    }
    return 0;
}
