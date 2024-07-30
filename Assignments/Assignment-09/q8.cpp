// Write a C program to copy all elements from an array to another array.
#include <cstdio>
#include <cstdlib>

int main() {
    int n;
    scanf("%d", &n);
    int* ptr;
    ptr = (int *)calloc(n, sizeof(int));
    int arr1[n], arr2[n] = {};
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr1[i]);
    }

    printf("The elements of the first array are:\n");
    for (int i = 0;i < n;i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    
    for (int i = 0;i < n;i++) {
        arr2[i] = arr1[i];
    }

    printf("The elements of the second array are:\n");
    for (int i = 0;i < n;i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    free(ptr);
    
}