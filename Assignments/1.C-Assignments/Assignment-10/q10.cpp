// Write a C program to sort even and odd elements of array separately
#include <cstdio>

void sortEvenOdd(int arr[], int n) {
    int even[n], odd[n];
    int evenCount = 0, oddCount = 0;

    // Separate even and odd numbers into separate arrays
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    // Sort even numbers in ascending order
    for (int i = 0; i < evenCount - 1; i++) {
        for (int j = 0; j < evenCount - i - 1; j++) {
            if (even[j] > even[j + 1]) {
                int temp = even[j];
                even[j] = even[j + 1];
                even[j + 1] = temp;
            }
        }
    }

    // Sort odd numbers in descending order
    for (int i = 0; i < oddCount - 1; i++) {
        for (int j = 0; j < oddCount - i - 1; j++) {
            if (odd[j] < odd[j + 1]) {
                int temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
        }
    }

    // Copy sorted even and odd numbers back into the original array
    int idx = 0;
    for (int i = 0; i < evenCount; i++) {
        arr[idx++] = even[i];
    }
    for (int i = 0; i < oddCount; i++) {
        arr[idx++] = odd[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    sortEvenOdd(arr, n);

    printf("Sorted array with even and odd elements separated: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
