// Write a C program to calculate factorial of a number.
#include <cstdio>

int main() {
    int num, fact = 1;
    scanf("%d", &num);

    if ((num == 0) && (num == 1)) {
        printf("%d", 1);
        goto skip;
    }
    for (int i = 1;i <= num;i++) {
        fact = fact * i;
    }
    printf("%d", fact);
    skip:
        return 0;

}