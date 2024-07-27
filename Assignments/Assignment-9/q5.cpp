// Write a C program to find second largest element in an array.
#include <cstdio>
#include <cstdlib>

int main() {
    int n, max = 0, max_1 = 0, i;
    scanf("%d", &n);
    int* ptr;
    ptr = (int *)calloc(n, sizeof(int));
    int arr[n];
    for (i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0;i < n;i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    for (i = 0;i < n;i++) {
        if ((arr[i] > max_1) && (arr[i] < max))
            max_1 = arr[i];
    }
    printf("Maximum element = %d\n", max);
    printf("Second max element = %d", max_1);
    
    free(ptr);
}