// Write a C program to find upper triangular matrix. 
#include <cstdio>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int arr1[a][b];
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            scanf("%d", &arr1[i][j]);
    }
    
    for (int i = 0;i < a-1;i++) {
        for (int j = 0;j < b;j++) {
            if (j > i) {
                printf("%d ", arr1[i][j]);
            }
        }
        printf("\n");
    }

}