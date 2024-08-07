// Write a C program to find transpose of a matrix.
#include <cstdio>

int main() {
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);

    int arr1[a][b], transpose[a][b];
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            scanf("%d", &arr1[i][j]);
    }
    
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++) {
            transpose[i][j] = arr1[j][i]; 
        }
    }

    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

}