#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    float radius;
    scanf("%f", &radius);

    float volume = (4 * 3.14 * radius * radius * radius) / 3;
    printf("The volume of the spehere is %f", volume);
}