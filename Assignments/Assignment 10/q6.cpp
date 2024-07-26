// Write a C program to find reverse of an array. 
#include <cstdio>
#include <cstdlib>

int main() {
    int n;
    scanf("%d", &n);

    int* ptr;
    ptr = (int *)malloc(n * sizeof(int));
    int arr[n];
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0;i < n/2;i++) {
        arr[i] = arr[i] + arr[n-i-1];
        arr[n-i-1] = arr[i] - arr[n-i-1];
        arr[i] = arr[i] - arr[n-i-1];
    }

    printf("Reverse of the input array:\n");
    for(int i = 0;i < n;i++) {
        printf("%d ", arr[i]);
    }

    free(ptr);
}