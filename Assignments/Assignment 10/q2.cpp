// Write a C program to print all unique elements in the array. 
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

    int frequency[n];
    for (int i = 0; i < n; i++) {
        frequency[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                frequency[j] = 0;
            }
        }
        if (frequency[i] != 0) {
            printf("%d ", arr[i]);
        }
    }

    free(ptr);

    return 0;
}
