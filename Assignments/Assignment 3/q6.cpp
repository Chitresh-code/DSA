#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    printf("Before Swapping:\nNum1 = %d\nNum2 = %d\n", num1, num2);

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("After Swapping:\nNum1 = %d\nNum2 = %d", num1, num2);
}