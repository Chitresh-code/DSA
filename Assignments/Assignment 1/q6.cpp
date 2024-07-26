#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int minutes;
    scanf("%d", &minutes);

    int hours = minutes / 60;
    minutes = minutes % 60;

    printf("%d Hours, %d Minutes", hours, minutes);
}