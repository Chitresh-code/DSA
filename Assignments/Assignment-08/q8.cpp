// Write a C program to find sum of all prime numbers between 1 to n.
#include <cstdio>

bool isPrime(int num) {
    int count = 0;

    for(int i = 2;i < num;i++) {
        if (num % i == 0)
            count++;
    }
    if (count != 0)
        return 0;
    else 
        return 1;
}

int main() {
    int num, sum = 3;
    scanf("%d", &num);

    for(int i = 3;i <= num;i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    printf("Sum = %d", sum);
    
}