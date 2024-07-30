#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int num1, num2, num3, max;
    scanf("%d %d %d", &num1, &num2, &num3);

    max = ((num1 > num2) && (num1 > num3)) ? num1 : (num2 > num3) ? num2 : num3;
    printf("%d is the greatest", max);
    
}