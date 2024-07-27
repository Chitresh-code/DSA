#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    float side;
    scanf("%f", &side);

    float area = (sqrt(3) / 4) * (side * side);
    printf("Area of equilateral triangle = %.1f", area);
}