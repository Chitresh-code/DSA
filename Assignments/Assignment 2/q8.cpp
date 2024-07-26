#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("The numbers after swapping are %d and %d", num1, num2);
}