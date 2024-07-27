#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    float sub1, sub2, sub3, sub4, sub5, total;
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    total = total / 5;
    printf("Percentage: %.2f\n", total);

    if (total >= 90)
        printf("Grade A");
    else if (total >= 80)
        printf("Grade B");
    else if (total >= 70)
        printf("Grade C");
    else if (total >= 60)
        printf("Grade D");
    else if (total >= 40)
        printf("Grade E");
    else if (total < 40)
        printf("Grade F");

    return 0;
}