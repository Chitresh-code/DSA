#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    float x1, x2, y1, y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    
    float x_distance = (x2 - x1) * (x2 - x1);
    float y_distance = (y2 - y1) * (y2 - y1);
    float distance = sqrt(x_distance + y_distance);
    
    printf("Distance between the said points is %.4f", distance);
}