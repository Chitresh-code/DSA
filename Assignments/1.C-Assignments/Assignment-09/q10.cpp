//  Write a C program to delete an element from an array at specified position.#include <cstdio>
#include <cstdio>
#include <cstdlib>

int main() {
    int n, pos;
    scanf("%d", &n);
    int* ptr;
    ptr = (int *)malloc(n * sizeof(int));
    int arr[n];
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &pos);
    for(int i = 0;i < n;i++){
        if (i >= pos) {
            arr[i] = arr[i+1];
        }
    }

    ptr = (int *)realloc(ptr, (n-1) * sizeof(int));

    printf("The elements of the updated array are:\n");
    for (int i = 0;i < n-1;i++) {
        printf("%d ", arr[i]);
    }
    
    free(ptr);
    
}