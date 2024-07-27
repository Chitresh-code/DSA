#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    float principle, time, rate;
    scanf("%f %f %f", &principle, &time, &rate);

    float interest = principle * pow((1 + (rate / 100)), time);
    printf("Compound Interest = %.6f", interest);
}
