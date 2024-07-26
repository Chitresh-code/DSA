#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b, c, d, root1, root2;
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);
    if (d == 0) {
        root1 = (-b) / (2 * a);
        root2 = root1;
        printf("Root1: %f\nRoot2: %f", root1, root2);
    } else if (d > 0) {
        root1 = ((-b) + sqrt(d)) / (2 * a);
        root2 = ((-b) - sqrt(d)) / (2 * a);
        printf("Root1: %f\nRoot2: %f", root1, root2);
    } else {
        printf("Roots are imaginary");
    }
}