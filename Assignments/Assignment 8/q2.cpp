// Write a C program to find sum of first and last digit of a number.#include <cstdio>
#include <cstdio>
#include <cmath>

int main() {
    int num, digits, fd, ld;
    scanf("%d", &num);

    ld = num % 10;
    digits = (int)log10(num);
    fd = num / pow(10, digits);
    
    printf("Sum: %d", fd+ld);
}