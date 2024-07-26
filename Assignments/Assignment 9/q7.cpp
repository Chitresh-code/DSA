// Write a C program to count total number of negative elements in an array
#include <cstdio>
#include <cstdlib>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    int* ptr;
    ptr = (int *)calloc(n, sizeof(int));
    int arr[n];
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0;i < n;i++) {
        if (arr[i] < 0) count++;
    }
    printf("Number of negative elements = %d", count);
    
    free(ptr);
}