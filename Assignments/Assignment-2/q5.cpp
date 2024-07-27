#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    float w1, w2;
    float no1, no2;

    scanf("%f %f", &w1, &no1);
    scanf("%f %f", &w2, &no2);

    float total = ((w1 * no1) + (w2 * no2)) / (no1 + no2);
    printf("Average Value = %.6f", total);
}