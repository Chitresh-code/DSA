#include <stdio.h>

int main() {
    int n, temp;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    int rotate;
    scanf("%d", &rotate);

    for(int i = 0; i < rotate; i++) {
        temp = arr[0];
        for(int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }

    printf("The array after left rotating:\n");
    for(int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
