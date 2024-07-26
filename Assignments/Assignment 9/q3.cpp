// Write a C program to find sum of all array elements. 
// Write a C program to read and print elements of array. 
#include <cstdio>
#include <cstdlib>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int* ptr;
    ptr = (int *)calloc(n, sizeof(int));
    int arr[n];
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0;i < n;i++) {
        sum += arr[i];
    }
    printf("Sum of elements of array = %d", sum);

    free(ptr);
}