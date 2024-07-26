// Write a C program to find LCM of two numbers.
#include <cstdio>

int main() {
    int num1, num2, gcd = 1, lcm;
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <= num1 && i <= num2;i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    lcm = (num1 * num2) / gcd;

    printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);

    return 0;
}
