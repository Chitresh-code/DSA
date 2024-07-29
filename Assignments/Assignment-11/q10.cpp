// Write a C program to find sum of each row and column of a matrix
#include <cstdio>

int main() {
    int a, b, row_sum = 0, colunm_sum = 0;
    scanf("%d %d", &a, &b);

    int arr1[a][b];
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            scanf("%d", &arr1[i][j]);
    }
    
    for (int i = 0;i < a;i++) {
        row_sum = 0;
        colunm_sum = 0;
        for (int j = 0;j < b;j++) {
            row_sum += arr1[i][j];
            colunm_sum += arr1[j][i]; 
        }
        printf("Sum of elements of row %d is %d\n", i+1, row_sum);
        printf("Sum of elements of colunm %d is %d\n\n", i+1, colunm_sum);
    }
}