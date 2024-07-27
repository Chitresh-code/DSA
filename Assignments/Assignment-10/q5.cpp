// Write a C program to merge two array to third array.
#include <cstdio>
#include <cstdlib>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int* ptr1;
    int* ptr2;
    ptr1 = (int *)malloc(n1 * sizeof(int));
    ptr2 = (int *)malloc(n2 * sizeof(int));

    int arr1[n1], arr2[n2], arr3[n1+n2];

    for (int i = 0;i < n1;i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0;i < n2;i++) {
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < (n1 + n2);i++) {
        if (i < n1) {
            arr3[i] = arr1[i];
        }
        else {
            arr3[i] = arr2[i-n1];
        }
    }
    
    printf("Elements after joining both arrays:\n");
    for(int i = 0;i < (n1 + n2);i++) {
        printf("%d ", arr3[i]);
    }

    free(ptr1);
    free(ptr2);
    return 0;
}