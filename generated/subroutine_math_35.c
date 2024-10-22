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

void func_5802849024(unsigned depth);
void func_5802849152(unsigned depth);
void func_5802848576(unsigned depth);
void func_5802848848(unsigned depth);
void func_5802848704(unsigned depth);
void func_5802848640(unsigned depth);
void func_5802850016(unsigned depth);
void func_5802849344(unsigned depth);
void func_5802850208(unsigned depth);
void func_5802850432(unsigned depth);
void func_5802850560(unsigned depth);
void func_5802850752(unsigned depth);
void func_5802850880(unsigned depth);
void func_5802851008(unsigned depth);
void func_5802851136(unsigned depth);
void func_5802850688(unsigned depth);
void func_5802851536(unsigned depth);
void func_5802849712(unsigned depth);
void func_5802850272(unsigned depth);
void func_5802851856(unsigned depth);
void func_5802849408(unsigned depth);
void func_5802851984(unsigned depth);
void func_5802852112(unsigned depth);
void func_5802852272(unsigned depth);
void func_5802852560(unsigned depth);
void func_5802852688(unsigned depth);
void func_5802852816(unsigned depth);
void func_5802852944(unsigned depth);
void func_5802849024(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5802850016(depth+1);
        break;
        case 1:
            func_5802849344(depth+1);
        break;
        case 2:
            func_5802850208(depth+1);
        break;
        case 3:
            func_5802850432(depth+1);
        break;
        case 4:
            func_5802850560(depth+1);
        break;
        case 5:
            func_5802850752(depth+1);
        break;
        case 6:
            func_5802850880(depth+1);
        break;
        case 7:
            func_5802851008(depth+1);
        break;
        case 8:
            func_5802851136(depth+1);
        break;
        case 9:
            func_5802850688(depth+1);
        break;
    }
    return;
}
void func_5802849152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5802851536(depth+1);
        break;
        case 1:
            func_5802850272(depth+1);
        break;
        case 2:
            func_5802848640(depth+1);
        break;
    }
    return;
}
void func_5802848576(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5802849408(depth+1);
        break;
        case 1:
            func_5802848848(depth+1);
        break;
    }
    return;
}
void func_5802848848(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5802852272(depth+1);
        break;
        case 1:
            func_5802849024(depth+1);
        break;
    }
    return;
}
void func_5802848704(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5802849152(depth+1);
        break;
    }
    return;
}
void func_5802848640(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5802852560(depth+1);
        break;
        case 1:
            func_5802852816(depth+1);
        break;
        case 2:
            func_5802848576(depth+1);
        break;
    }
    return;
}
void func_5802850016(unsigned depth) {
    extend(48);
    return;
}
void func_5802849344(unsigned depth) {
    extend(49);
    return;
}
void func_5802850208(unsigned depth) {
    extend(50);
    return;
}
void func_5802850432(unsigned depth) {
    extend(51);
    return;
}
void func_5802850560(unsigned depth) {
    extend(52);
    return;
}
void func_5802850752(unsigned depth) {
    extend(53);
    return;
}
void func_5802850880(unsigned depth) {
    extend(54);
    return;
}
void func_5802851008(unsigned depth) {
    extend(55);
    return;
}
void func_5802851136(unsigned depth) {
    extend(56);
    return;
}
void func_5802850688(unsigned depth) {
    extend(57);
    return;
}
void func_5802851536(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_5802848640(depth+1);
    func_5802849712(depth+1);
    func_5802849152(depth+1);
    return;
}
void func_5802849712(unsigned depth) {
    extend(43);
    return;
}
void func_5802850272(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_5802848640(depth+1);
    func_5802851856(depth+1);
    func_5802849152(depth+1);
    return;
}
void func_5802851856(unsigned depth) {
    extend(45);
    return;
}
void func_5802849408(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_5802851984(depth+1);
    func_5802849152(depth+1);
    func_5802852112(depth+1);
    return;
}
void func_5802851984(unsigned depth) {
    extend(40);
    return;
}
void func_5802852112(unsigned depth) {
    extend(41);
    return;
}
void func_5802852272(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5802849024(depth+1);
    func_5802848848(depth+1);
    return;
}
void func_5802852560(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_5802848576(depth+1);
    func_5802852688(depth+1);
    func_5802848640(depth+1);
    return;
}
void func_5802852688(unsigned depth) {
    extend(42);
    return;
}
void func_5802852816(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_5802848576(depth+1);
    func_5802852944(depth+1);
    func_5802848640(depth+1);
    return;
}
void func_5802852944(unsigned depth) {
    extend(47);
    return;
}
int main(void) {
    static unsigned count = 6;
    seed = time(NULL);
    func_5802848704(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
