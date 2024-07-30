// Write a C program to check whether a number is palindrome or not.
#include<cstdio>

int main() {
    int num, r, rev = 0, x;
    scanf("%d", &num);
    x = num;

    while(num != 0) {
        r = num % 10;
        num = num / 10;
        rev = (rev * 10) + r;
    }
    if (rev == x)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}