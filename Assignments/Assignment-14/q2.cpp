// Write a C program to print even or odd numbers in given range using recursion.
#include <cstdio>

void printEvenOdd(int start, int end, int even) {
    if (start > end) {
        return;
    }
    if (even) {
        if (start % 2 == 0) {
            printf("%d ", start);
        }
    } else {
        if (start % 2 != 0) {
            printf("%d ", start);
        }
    }
    printEvenOdd(start + 1, end, even);
}

int main() {
    int start, end;
    char choice;

    scanf("%d %d", &start, &end);
    scanf(" %c", &choice);

    if (choice == 'e' || choice == 'E') {
        printf("Even numbers between %d and %d are:\n", start, end);
        printEvenOdd(start, end, 1);
    } else if (choice == 'o' || choice == 'O') {
        printf("Odd numbers between %d and %d are:\n", start, end);
        printEvenOdd(start, end, 0);
    } else {
        printf("Invalid choice. Please enter 'e' for even or 'o' for odd.\n");
    }

    return 0;
}