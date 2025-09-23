#include <stdio.h>

void foo(short* s) {
    char* ptr = (char*)s;
    char tmp = *(ptr + 0);
    *(ptr + 0) = *(ptr + 1);
    *(ptr + 1) = tmp;
}

int main() {
    short s = 0x5678;
    foo(&s);
    printf("s = %08.4x", s);
}
