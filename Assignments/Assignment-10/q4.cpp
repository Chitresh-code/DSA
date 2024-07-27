// Write a C program to delete all duplicate elements from an array. 
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

    int new_arr[n] = {0};
    int new_arr_len = 0;
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
            new_arr[new_arr_len] = arr[i];
            new_arr_len++;
        }
    }
    printf("Array after removing duplicate elements:\n")
    for (int i = 0;i < new_arr_len;i++) {
        printf("%d ", new_arr[i]);
    }

    free(ptr);

    return 0;
}
