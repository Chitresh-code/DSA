#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int month;
    scanf("%d", &month);

    if (month == 2) {
        printf("28 Days");
    } else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
        printf("30 Days");
    } else {
        printf("31 Days");
    }
}