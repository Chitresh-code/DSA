#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int num1, num2, max;
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;
    printf("%d is greater", max);
}