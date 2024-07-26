// Write a C program to find first and last digit of a number.
#include <cstdio>
#include <cmath>

int main() {
    int num, digits, fd, ld;
    scanf("%d", &num);

    ld = num % 10;
    digits = (int)log10(num);
    fd = num / pow(10, digits);
    
    printf("First digit: %d\nLast Digit: %d", fd, ld);
}