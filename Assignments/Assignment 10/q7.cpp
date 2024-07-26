// Write a C program to put even and odd elements of array in two separate array. 
#include <cstdio>
#include <cstdlib>

int main() {
    int n;
    scanf("%d", &n);

    int* ptr;
    ptr = (int *)malloc(n * sizeof(int));
    int arr[n], even_arr[n], odd_arr[n];
    int even_count = 0, odd_count = 0;
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0;i < n;i++) {
        if (arr[i] % 2 == 0) {
            even_arr[even_count] = arr[i];
            even_count++;
        } else {
            odd_arr[odd_count] = arr[i];
            odd_count++;
        }
    }
    
    printf("Elements in the even array:\n");
    for(int i = 0;i < even_count;i++) {
        printf("%d ", even_arr[i]);
    }

    printf("\nElements in the odd array:\n");
    for(int i = 0;i < odd_count;i++) {
        printf("%d ", odd_arr[i]);
    }

    free(ptr);
}