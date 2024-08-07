#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    scanf("%d", &num);

    if (num > 0) {
        printf("Positive");
    } else if (num == 0) {
        printf("Zero");
    } else {
        printf("Negative");
    }
}