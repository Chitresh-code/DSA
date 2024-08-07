// Program to convert string to uppercase using strupr() Function.
#include <cstdio>
#include <cstring>

int main() {
    char str1[30];
    gets(str1);

    strupr(str1);
    printf("The string in uppercase: %s", str1);
    
}