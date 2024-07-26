#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int distance;
    float fuel;

    scanf("%d", &distance);
    scanf("%f", &fuel);

    float consumption = distance / fuel;
    printf("Average Consumption (km/lt) = %.3f", consumption);

}