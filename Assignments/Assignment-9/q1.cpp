// Write a C program to read and print elements of array. 
#include <cstdio>
#include <cstdlib>

int main() {
    int n;
    scanf("%d", &n);
    int* ptr;
    ptr = (int *)calloc(n, sizeof(int));
    int arr[n];
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n");
    for (int i = 0;i < n;i++) {
        printf("%d ", arr[i]);
    }

    free(ptr);
}