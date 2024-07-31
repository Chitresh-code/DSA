// Write a Program to check palindrome string using string functions. 
#include <cstdio>
#include <cstring>

int main() {
    char str1[30], str2[30];
    gets(str1);

    strcpy(str2, str1);
    strrev(str2);
    int res = strcmp(str1, str2);
    if (res == 0) {
        printf("The string is palindrome");
    } else {
        printf("The string is not palindrome");
    }
}