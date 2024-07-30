// Write a C program to interchange diagonals of a matrix. 
#include <cstdio>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int arr1[a][b];
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            scanf("%d", &arr1[i][j]);
    }
    
    for (int i = 0;i < a;i++) {
        if (arr1[i][a- i -1] == arr1[i][i]) {
            continue;
        }
        else {
            arr1[i][i] = arr1[i][i] + arr1[i][a - 1 - i];
            arr1[i][a- i -1] = arr1[i][i] - arr1[i][a - 1 - i];
            arr1[i][i] = arr1[i][i] - arr1[i][a - 1 - i];    
        }
    }

    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            printf("%d ", arr1[i][j]);
        printf("\n");
    }

}