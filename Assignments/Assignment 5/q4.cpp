#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    switch(num1 > num2) {
        case 1:
            printf("%d is greater", num1);
            break;
        case 0:
            printf("%d is greater", num2);
            break;
        default:
            printf("Invalid Input!");
    }
}