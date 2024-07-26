#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b, c, d, root1, root2;
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);
    switch(d == 0) {
        case 1:
            root1 = (-b) / (2 * a);
            root2 = root1;
            printf("Root1: %f\nRoot2: %f", root1, root2);
            break;
        case 0:
            switch(d > 0) {
                case 1:
                    root1 = ((-b) + sqrt(d)) / (2 * a);
                    root2 = ((-b) - sqrt(d)) / (2 * a);
                    printf("Root1: %f\nRoot2: %f", root1, root2);
                    break;
                case 0:
                    printf("Roots are imaginary");
            }
            break;
            
        default:
            printf("Invalid Input!");
    }
}