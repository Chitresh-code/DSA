// Program to concatenate two strings using strcat() function. 
#include <cstdio>
#include <cstring>

int main() {
    char str1[30], str2[30];
    gets(str1);
    gets(str2);

    strcat(str1, " ");
    strcat(str1, str2);
    puts(str1);
}