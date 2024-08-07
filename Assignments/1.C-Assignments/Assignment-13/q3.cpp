// Program to copy string using strcpy() function. 
#include <cstdio>
#include <cstring>

int main() {
    char str1[30], str2[30];
    gets(str1);

    strcpy(str2, str1);
    puts(str2);
}