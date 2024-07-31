// Write a Program to find maximum occurrence of a character. 
#include <cstdio>
#include <cstring>

int main() {
    char str[30];
    gets(str);

    int len = strlen(str);
    int count[len+1];
    for(int i = 0;i < len;i++) {
        for(int j = i+1;j < len;j++) {
            count[i] = 1;
            if (str[i] == str[j])
                count[i]++;
        }
    }
    for(int i = 0;i < len;i++) {
        printf("%c ", str[i]);
    }
    printf("\n");
    for(int i = 0;i < len;i++) {
        printf("%d ", count[i]);
    }
}