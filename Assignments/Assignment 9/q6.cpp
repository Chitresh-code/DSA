// Write a C program to count total number of even and odd elements in an array. #include <cstdio>
#include <cstdio> 
#include <cstdlib>

int main() {
    int n, even_count = 0, odd_count = 0;
    scanf("%d", &n);
    int* ptr;
    ptr = (int *)calloc(n, sizeof(int));
    int arr[n];
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0;i < n;i++) {
        if (arr[i] % 2 == 0) even_count++;
        else odd_count++;
    }
    printf("Number of even elements = %d\n", even_count);
    printf("Number of odd elements = %d", odd_count);

    free(ptr);
}