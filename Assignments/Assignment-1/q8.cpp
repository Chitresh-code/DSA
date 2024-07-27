#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int days = 1329;
    scanf("%d", &days);

    int years = days / 365;
    days = days % 365;
    int weeks = days / 7;
    days = days % 7;

    printf("Years: %d\nWeeks: %d\nDays: %d", years, weeks, days);

}