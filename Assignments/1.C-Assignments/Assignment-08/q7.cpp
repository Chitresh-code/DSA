// Write a C program to print all Prime numbers between 1 to n.
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
    int num;
    scanf("%d", &num);

    printf("Prime numbers from 1 to %d:\n", num);
    printf("%d\n%d\n", 1, 2);

    for(int i = 3;i <= num;i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
    
}