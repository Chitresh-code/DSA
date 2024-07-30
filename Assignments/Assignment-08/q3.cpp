// Write a C program to swap first and last digits of a number.
#include <cstdio>

int main() {
    int num, digits, fd, ld, x=1;
    scanf("%d", &num);

    ld = num % 10;
    digits = (int)log10(num);
    for(int i = 0;i < digits;i++) {
        x = x * 10;
    }
    fd = num / x;
    num = num + ((ld-fd) * x);
    num = num - (ld - fd);
    
    printf("%d", num);
}