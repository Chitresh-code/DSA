#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int num, low, high;
    scanf("%d %d", &low, &high);
    scanf("%d", &num);

    ((num >= low) && (num <= high)) ?
        printf("The number is between the range") :
            (num < low) ?
                printf("The number is less than the range") :
                    printf("The number is greater than the range");

}