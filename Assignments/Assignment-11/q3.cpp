// Write a C program to add two matrices.
#include <cstdio>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int arr1[a][b], arr2[a][b], sum[a][b];
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            scanf("%d", &arr1[i][j]);
    }

    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            scanf("%d", &arr2[i][j]);
    }
    
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            sum[i][j] = arr1[i][j] + arr2[i][j];
    }

    printf("Sum of the two arrays is:\n");
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
}