#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int num;
    scanf("%d", &num);

    (num % 2 == 0) ?
        printf("%d is even", num) :
            printf("%d is odd", num);
}