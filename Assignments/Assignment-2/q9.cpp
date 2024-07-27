#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    float celsius;
    scanf("%f", &celsius);

    float fahrenheit = ((celsius * 9) / 5) + 32;
    printf("Temperature in celsius = %.2f\nTemperature in fahrenheit = %.2f", celsius, fahrenheit);
}