// Write a Program to count number of vowels and consonants in a given string. 
#include <cstdio>
#include <cstring>

int main() {
    char str1[30];
    int cons = 0, vowel = 0;
    gets(str1);
    int len = strlen(str1);

    for (int i = 0;i < len;i++) {
        if ((str1[i] == 'a') || (str1[i] == 'e') || (str1[i] == 'i') || (str1[i] == 'o') || (str1[i] == 'u')) {
            vowel++;
        }
        else if ((str1[i] == 'A') || (str1[i] == 'E') || (str1[i] == 'I') || (str1[i] == 'O') || (str1[i] == 'U')) {
            vowel++;
        }
        else {
            cons++;
        }
    }
    printf("Number of vowels: %d\n", vowel);
    printf("Number of consonants: %d", cons);
}