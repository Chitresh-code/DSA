// Write a C program to check whether a number is Prime number or not.
#include <cstdio>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    for(int i = 2;i < num;i++) {
        if (num % i == 0)
            count++;
    }
    if (count != 0)
        printf("Not Prime");
    else 
        printf("Prime Number");
}