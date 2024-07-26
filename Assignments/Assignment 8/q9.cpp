// Write a C program to find all prime factors of a number.
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

    printf("Prime factors of %d:\n", num);
    printf("%d\n", 1);
    if ((num % 2 == 0) && (num != 0))
        printf("%d\n", 2);

    for(int i = 3;i <= num;i++) {
        if (isPrime(i)) {
            if (num % i == 0)
                printf("%d\n", i);
        }
    }
    
}