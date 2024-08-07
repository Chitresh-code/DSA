// Write a C program to find maximum and minimum element in an array. 
#include <cstdio>
#include <cstdlib>

int main() {
    int n, max = 0, min, i;
    scanf("%d", &n);
    int* ptr;
    ptr = (int *)calloc(n, sizeof(int));
    int arr[n];
    for (i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[i-1];
    for (i = 0;i < n;i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Maximum element in the array = %d\n", max);
    printf("Minimum element in the array = %d", min);

    free(ptr);
}