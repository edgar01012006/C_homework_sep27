#include <stdio.h>

void foo(int target, char c1, char c2, short s) {
    char* ptr1 = (char*)&target;
    *(ptr1 + 3) = c1;
    *(ptr1 + 2) = c2;
    short* ptr2 = (short*)&target;
    *(ptr2 + 0) = s;
    printf("target = %08x", target);
}

int main() {
    foo(0, 0x12, 0x34, 0x5678);
}
