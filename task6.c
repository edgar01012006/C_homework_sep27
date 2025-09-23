#include <stdio.h>

char* return_last_word(char* str) {
    char* ptr = str;
    while (*str != '\0') {
        if (*str++ == ' ') {
            while(*str == ' ') {
                ++str;
            }
            if (*str == '\0') {
                return ptr;
            }
            ptr = str;
        }
    }
    return ptr;
}

int main() {
    const char size = 50;
    char str[size];
    printf("Enter a sentence\n");
    fgets(str, size, stdin);
    printf("%s", return_last_word(str));
}
