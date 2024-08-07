//  Write a C program to count frequency of each element in an array. 
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
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                frequency[j] = 0;
            }
        }
        if (frequency[i] != 0) {
            frequency[i] = count;
        }
    }

    printf("Frequency of elements in the array:\n");
    for (int i = 0; i < n; i++) {
        if (frequency[i] != 0) {
            printf("%d = %d\n", arr[i], frequency[i]);
        }
    }
    free(ptr);

    return 0;
}
