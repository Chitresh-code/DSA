// Write a C program to print all ASCII character with their values.
#include <cstdio>

int main() {
    for(int i = 0;i <= 255;i++) {
        printf("%c = %d\n", i, i);
    }
}