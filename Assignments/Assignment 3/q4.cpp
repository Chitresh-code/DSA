#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int year;
    scanf("%d", &year);

    (year % 400 == 0) ?
        printf("%d is a leap year", year) :
            (year % 100 == 0) ?
                printf("%d is not a leap year", year) :
                    (year % 4 == 0) ?
                        printf("%d is a leap year", year) :
                            printf("%d is not a leap year", year);
    
}