// Write a C program to check whether a number is Armstrong number or not
#include <cstdio>

int main() {
    int num, copy, sum = 0;
    scanf("%d", &num);
    copy = num;

    while(num != 0) {
        sum += (num % 10) * (num % 10) * (num % 10);
        num /= 10; 
    }
    if (sum == copy) {
        printf("%d is an armstrong number", copy);
    } else {
        printf("%d is not an armstrong number", copy);
    }
}