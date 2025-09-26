#include <stdio.h>
#include <stdbool.h>

int _strlen(char* str);
void reverse_words(char* str);
void reverse(char* first, char* last);
void print_str(char* str);

int main() {
    char str[50] = "I am student in Picsart Academy";
    print_str(str);
    reverse_words(str);
    print_str(str);
}

int _strlen(char* str) {
    int ret = 0;
    while (*str++ != '\0') {
        ++ret;
    }
    return ret;
}

void reverse_words(char* str) {
    reverse(str, str + (_strlen(str) - 1));
    //print_str(str);
    int len = _strlen(str);
    char* first = NULL;
    char* last = NULL;
    bool first_flag = false;
    bool last_flag = false;
    for (int i = 0; i < len; ++i) {
        if (first_flag != true && str[i] != ' ') {
            first = &str[i];
            first_flag = true;
        }
        else if (last_flag != true && first_flag == true && (str[i] == ' ' || i == len - 1)) {
            if (i == len - 1) {
                last = &str[i];
            }
            else {
                last = &str[i - 1];
            }
            last_flag = true;
        }
        if (last_flag == true && last_flag == true) {
            reverse(first, last);
            first_flag = false;
            first = NULL;
            last_flag = false;
            last = NULL;
            //print_str(str);
        }
    }
}

void reverse(char* first, char* last) {
    while (first < last) {
        char tmp = *first;
        *first = *last;
        *last = tmp;
        ++first;
        --last;
    }
}

void print_str(char* str) {
    printf("%s\n", str);
}
