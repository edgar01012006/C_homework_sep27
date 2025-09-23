// The program will generate 2 warnings 

#include <stdio.h>

char* _strstr(const char* s1, const char* s2) {
    if (*s2 == '\0') {
        return s1;
    }
    const char* s1_copy = NULL;
    const char* s2_copy = NULL;
    int flag_equal = 1;
    while(*s1 != '\0') {
        if (*s1 == *s2) {
            s1_copy = s1 + 1;
            s2_copy = s2 + 1;
            while(flag_equal == 1 && *s2_copy != '\0' && *s1_copy != '\0') {
                if (*s1_copy != *s2_copy) {
                    flag_equal = 0;
                    --s1_copy;
                }
                ++s1_copy;
                ++s2_copy;
            }
            if (flag_equal == 1) {
                return s1;
            }
            else {
                s1 = s1_copy;
                flag_equal = 1;
            }
        }
        else {
            ++s1;
        }
    }
    return NULL;
}


// Following testing example taken from https://www.cppreference.com/w/c/string/byte/strstr.html

void find_str(char const* str, char const* substr)
{
    char const* pos = _strstr(str, substr); // Changed function name to _strstr
    if (pos)
        printf(
            "Found the string [%s] in [%s] at position %td\n",
            substr, str, pos - str
        );
    else
        printf(
            "The string [%s] was not found in [%s]\n",
            substr, str
        );
}
 
int main(void)
{
    char const* str = "one two three";
    find_str(str, "two");
    find_str(str, "");
    find_str(str, "nine");
    find_str(str, "n");
 
    return 0;
}
