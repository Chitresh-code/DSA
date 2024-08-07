// Write a Program to find maximum occurrence of a character. 
#include <cstdio>
#include <cstring>

int main() {
    char str[30];
    gets(str);

    int count[256] = { 0 };

    int length = strlen(str);
    for (int i = 0; i < length; i++)
        count[(int)str[i]]++;

    char maxChar;
    int maxCount = 0;
    for (int i = 0; i < length; i++) {
        if (count[(int)str[i]] > maxCount) {
            maxCount = count[(int)str[i]];
            maxChar = str[i];
        }
    }

    printf("The maximum occuring character is: %c", maxChar);
}