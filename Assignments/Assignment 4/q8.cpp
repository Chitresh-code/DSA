#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int side1, side2, side3;
    scanf("%d %d %d", &side1, &side2, &side3);

    if ((side1 == side2) && (side1 == side3)) {
        printf("Equilateral Triangle");
    } else if ((side1 == side2) || (side1 == side3) || (side2 == side3)) {
        printf("Isosceles Triangle");
    } else {
        printf("Scalene Triangle");
    }
}