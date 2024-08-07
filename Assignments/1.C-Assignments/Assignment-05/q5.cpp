#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    scanf("%d", &num);

    switch(num % 2 == 0) {
        case 1:
            printf("%d is even", num);
            break;
        case 0:
            printf("%d is odd", num);
            break;
        default:
            printf("Invalid Input!");
    }
}