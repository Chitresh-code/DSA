// Write a C program to find frequency of each digit in a given integer.
#include<cstdio>

int main() {
    int num, r;
    int arr[10] = {0};
    scanf("%d", &num);

    while(num != 0) {
        r = num % 10;
        num = num / 10;
        for(int i = 0;i < 10;i++) {
            if (r == i)
                arr[i]++;
        }
    }
    for (int i = 0;i < 10;i++) {
        if (arr[i] != 0)
            printf("Frequency of %d = %d\n", i, arr[i]);
    }
}