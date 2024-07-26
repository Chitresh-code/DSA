#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    float num1, num2, result;
    char choice;
    scanf("%c", &choice);
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case '+':
            result = num1 + num2;
            printf("%.0f", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.0f", result);
            break;
        case '/':
            result = num1 / num2;
            printf("%.2f", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f", result);
            break;
        default:
            printf("Invalid Input!");
    }
}