// Write a C program to search an element in an array.
#include <cstdio>
#include <cstdlib>

int main() {
    int n, ele, check = 0;
    scanf("%d", &n);

    int* ptr;
    ptr = (int *)malloc(n * sizeof(int));
    int arr[n], even_arr[n], odd_arr[n];
    int even_count = 0, odd_count = 0;
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &ele);
    for (int i = 0;i < n;i++) {
        if (ele == arr[i])
            check++;
    }

    if (check != 0)
        printf("%d is in the array", ele);
    else
        
        printf("%d is not in the array", ele);
}