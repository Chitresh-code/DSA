// Write a C program to find sum of minor diagonal elements of a matrix.
#include <cstdio>

int main() {
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);

    int arr1[a][b];
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            scanf("%d", &arr1[i][j]);
    }
    
    for (int i = 0;i < a;i++) {
        sum += arr1[i][a- 1 -i];
    }

    printf("Sum of diagonal elements: %d", sum);
}