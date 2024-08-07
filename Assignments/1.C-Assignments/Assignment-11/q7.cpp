// Write a C program to check whether two matrices are equal or not
#include <cstdio>

int main() {
    int a, b, check = 0;
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
            if (arr1[i][j] != arr2[i][j])
                check++;
                break;
        }
    }

    if (check != 0) {
        printf("The matrices are not equal");
    } else {
        printf("The matrices are equal");
    }
}