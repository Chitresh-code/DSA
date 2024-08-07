// Write a C program to count total number of duplicate elements in an array.
#include <cstdio>
#include <cstdlib>

int main() {
    int n, duplicateCount = 0;
    scanf("%d", &n);

    int* ptr;
    ptr = (int *)malloc(n * sizeof(int));
    int arr[n];
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }

    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        if (count > 1) {
            duplicateCount += (count - 1);
        }
    }

    printf("Total number of duplicate elements: %d\n", duplicateCount);

    free(ptr);
    return 0;

}
