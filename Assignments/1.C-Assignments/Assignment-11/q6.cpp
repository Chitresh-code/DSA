// Write a C program to multiply two matrices.
#include <cstdio>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int arr1[a][b], arr2[a][b], mul[a][b];
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            scanf("%d", &arr1[i][j]);
    }

    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            scanf("%d", &arr2[i][j]);
    }
    
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++) {
            mul[i][j] = 0;
            for (int k = 0;k < b;k++)
                mul[i][j] += arr1[i][k] * arr2[k][j]; 
        }
    }

    printf("Multiplication of the two arrays is:\n");
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }
}