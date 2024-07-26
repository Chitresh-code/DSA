#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int angle1, angle2;
    scanf("%d,%d", &angle1, &angle2);

    int angle3 = 180 - (angle1 + angle2);
    printf("Third angle of the triangle: %d", angle3);
}