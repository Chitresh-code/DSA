// Write a C program to calculate sum of digits of a number.
#include <cstdio>

int main() {
    int num, sum = 0;
    scanf("%d", &num);

    while(num != 0) {
        sum += (num % 10);
        num = num / 10;
    }
    printf("Sum of digits = %d", sum);

}