//  Write a C program to insert an element in an array
#include <cstdio>
#include <cstdlib>

int main() {
    int n, ele;
    scanf("%d", &n);
    int* ptr;
    ptr = (int *)malloc(n * sizeof(int));
    int arr[n];
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &ele);
    ptr = (int *)realloc(ptr, (n+1) * sizeof(int));
    arr[n] = ele;

    printf("The elements of the new array are:\n");
    for (int i = 0;i <= n;i++) {
        printf("%d ", arr[i]);
    }

    free(ptr);
    
}