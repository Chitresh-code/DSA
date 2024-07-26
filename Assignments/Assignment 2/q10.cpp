#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    float p, r, t;
    scanf("%f %f %f", &p, &r, &t);
    
    float interest = (p * r * t) / 100;
    printf("Simple Interest = %.2f", interest);
}