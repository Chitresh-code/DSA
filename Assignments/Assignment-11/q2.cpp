#include <stdio.h>

// Function to right rotate the array by one position
void rightRotateByOne(int arr[], int n) {
    
}

int main() {
    int n, temp;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0;i < n;i++) 
        scanf("%d", &arr[i]);

    int k;
    scanf("%d", &k);

    // Rotate the array to the right k times
    for (int i = 0; i < k; i++) {
        int last = arr[n - 1];
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }

    printf("Array after %d right rotations: \n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
