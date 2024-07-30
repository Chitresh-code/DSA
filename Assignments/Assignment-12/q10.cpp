// Write a C program to check Symmetric matrix
#include <cstdio>

int main() {
    int n, check = 0;
    scanf("%d", &n);

    int arr1[n][n], tran[n][n];
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++)
            scanf("%d", &arr1[i][j]);
    }

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            tran[i][j] = arr1[j][i];
        } 
    }

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            if (tran[i][j] != arr1[i][j]){
                check++;
                break;
            }
        } 
    }

    if (check == 0) {
        printf("It is a symmetric matrix");
    } else {
        printf("It is not a symmetric matrix");
    }

}