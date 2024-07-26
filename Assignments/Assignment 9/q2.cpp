// Write a C program to print all negative elements in an array. 
#include <cstdio>
#include <cstdlib>

int main() {
    int n, check = 0;
    scanf("%d", &n);
    int* ptr;
    ptr = (int *)calloc(n, sizeof(int));
    int arr[n];
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }

    printf("The negative elements of the array are:\n");
    for (int i = 0;i < n;i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
            check++;
        } 
    }
    if (check == 0) {
        printf("There were no negative elements found");
    }

    free(ptr);
}