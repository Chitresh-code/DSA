// Program to compare strings using strcmp() function.
#include <cstdio>
#include <cstring>

int main() {
    char str1[30], str2[30];
    gets(str1);
    gets(str2);

    int res = strcmp(str1, str2);
    if (res == 0) {
        printf("Both sring are equal");
    } else {
        printf("Both strings are different");
    }
}