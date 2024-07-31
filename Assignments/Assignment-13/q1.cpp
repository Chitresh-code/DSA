// Program to find length of string using strlen() string function.
#include <cstdio>
#include <cstring>

int main() {
    char str[30];
    scanf("%s", str);

    int len = strlen(str);
    printf("Length of string is %d", len);
}