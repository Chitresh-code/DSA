// Write a C program to put even and odd elements of array in two separate array. 
#include <cstdio>
#include <cstdlib>

int main() {
    int n;
    scanf("%d", &n);

    int* ptr;
    ptr = (int *)malloc(n * sizeof(int));
    int arr[n], even_arr[n], odd_arr[n];
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    int 
}