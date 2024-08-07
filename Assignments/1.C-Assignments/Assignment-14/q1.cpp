// Write a C program to print all natural numbers from 1 to n using recursion.
#include <cstdio>

void printNums(int start, int end) {
    if (start > end) {
        return;
    }
    
    printf("%d ", start);
    
    printNums(start + 1, end);
}

int main() {
    int num;

    scanf("%d", &num);

    printf("Natural numbers from 1 to %d are:\n", num);
    printNums(1, num);
    

    return 0;
}