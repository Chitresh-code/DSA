// Write a C program to calculate product of digits of a number
#include <cstdio>

int main() {
    int num, prod = 1;
    scanf("%d", &num);

    while(num != 0) {
        prod *= (num % 10);
        num = num / 10;
    }
    printf("Product of digits = %d", prod);

}