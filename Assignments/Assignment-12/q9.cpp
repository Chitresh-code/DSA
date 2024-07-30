// Write a C program to check Sparse matrix.
#include <cstdio>

int main() {
    int n, count_num = 0, count_zero = 0;
    scanf("%d", &n);

    int arr[n][n];
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            if (arr[i][j] == 0) 
                count_zero++;
            else
                count_num++;
        }
    }

    if (count_num < count_zero) {
        printf("It is a sparce matrix");
    } else {
        printf("It is not a sparce matrix");
    }

}