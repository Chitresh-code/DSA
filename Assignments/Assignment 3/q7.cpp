#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int num, remainder;
    int arr[4];
    scanf("%d", &num);

    for(int i = 3;i >= 0;i--) {
        remainder = num % 10;
        num = num / 10;
        arr[i] = remainder;
    }
    for(int i = 0;i < 4;i++) {
        printf("%d ", arr[i]);
    }
}