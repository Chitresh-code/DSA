// Program to count number of alphabets, digits and special characters in string. 
#include <cstdio>
#include <cstring>

int main() {
    char str1[30];
    int alpha = 0, num = 0, spl = 0;
    gets(str1);
    int len = strlen(str1);
    
    for (int i = 0;i < len;i++) {
        if (((str1[i] >= 'a') && (str1[i] <= 'z')) || ((str1[i] >= 'A') && (str1[i] <= 'Z'))) {
            alpha++;
        }
        else if ((str1[i] >= '0') && (str1[i] <= '9')) {
            num++;
        }
        else {
            spl++;
        }
    }
    printf("Number of alphabets: %d\n", alpha);
    printf("Number of digits: %d\n", num);
    printf("Number of special characters: %d\n", spl);
}