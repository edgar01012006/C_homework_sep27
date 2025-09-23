#include <stdio.h>

void _strcpy(char* dest, char* src) {
    while(*src != '\0') {
        *(dest++) = *(src++);
        //++src;
        //++dest;
    }
    *dest = '\0';
}

int main() {
    char str1[] = "Hello World";
    char str2[20];
    _strcpy(str2, str1);
    printf("%s\n", str1);
    printf("%s\n", str2);
    //printf("%c\n", str2[11]);
}
