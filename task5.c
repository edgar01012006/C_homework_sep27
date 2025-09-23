#include <stdio.h>

void replace_chars(char* str, char find, char replace) {
    while(*str != '\0') {
        if (*str == find) {
            *str = replace;
        }
        ++str;
    }
}

int main() {
    char str[] = "Hello World";
    replace_chars(str, 'l', 'e');
    printf("%s", str);
}
