#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    scanf("%d", &n);
    while(n != 0) {
        n = n / 10;
        count++;
    }
    printf("No of digits = %d", count);
}