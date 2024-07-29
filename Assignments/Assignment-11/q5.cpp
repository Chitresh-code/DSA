// Write a C program to perform Scalar matrix multiplication. 
#include <cstdio>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int arr1[a][b];
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            scanf("%d", &arr1[i][j]);
    }
    
    int num;
    scanf("%d", &num);
    
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            arr1[i][j] = arr1[i][j] * num;
    }

    printf("Scaler multiplication of array with %d is:\n", num);
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++)
            printf("%d ", arr1[i][j]);
        printf("\n");
    }
}