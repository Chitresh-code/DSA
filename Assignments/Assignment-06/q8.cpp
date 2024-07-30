#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i = 1, sum = 0;
    scanf("%d", &n);
    while(i <= n) {
        if (i % 2 != 0)
            sum = sum + i;
        i++;
    }
    printf("Sum = %d", sum);
}