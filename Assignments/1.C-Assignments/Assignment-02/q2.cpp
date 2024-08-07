#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    float sub1, sub2, sub3, sub4, sub5, total, avg;
    float percent;

    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    avg = total / 5;
    percent = (total / 500) * 100;

    printf("Total: %.0f\nAverage: %.0f\nPercentage: %.1f", total, avg, percent);

}