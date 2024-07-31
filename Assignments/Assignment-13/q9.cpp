// Write a Program to search occurrence of character in string.
#include <cstdio>
#include <cstring>

int main() {
    char str1[30];
    char ch;
    int count = 0;

    scanf("%c", &ch);
    scanf("%s", str1);

    int len = strlen(str1);

    for(int i = 0;i < len;i++) {
        if (str1[i] == ch)
            count++;
    }
    printf("%c occurs %d times in the string", ch, count);

}