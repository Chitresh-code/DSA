#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    float num1, num2, result;
    int choice;
    printf("Select one of the below:\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);
    printf("Enter two numbers:\n");
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("%.0f", result);
            break;
        case 2:
            result = num1 - num2;
            printf("%.0f", result);
            break;
        case 3:
            result = num1 / num2;
            printf("%.2f", result);
            break;
        case 4:
            result = num1 * num2;
            printf("%.2f", result);
            break;
        default:
            printf("Invalid Input!");
    }
}