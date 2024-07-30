// Write a C program to find power of a number using for loop.
#include <cstdio>

int main() {
    int num, pow, res = 1;
    scanf("%d %d", &num, &pow);

    for(int i = 1;i <=pow;i++) {
        res = res * num;
    }
    printf("Result: %d", res);
}