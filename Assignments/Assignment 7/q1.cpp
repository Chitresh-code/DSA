// Write a C program to enter a number and print its reverse.
#include<bits/st++.h>

int main() {
    int num, r, rev = 0;
    scanf("%d", &num);

    while(num != 0) {
        r = num % 10;
        num = num / 10;
        rev = (rev * 10) + r;
    }
    printf("%d", rev);
}