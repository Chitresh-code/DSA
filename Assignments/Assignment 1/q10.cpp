#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int seconds;
    scanf("%d", &seconds);

    int hours = seconds / (60 * 60);
    seconds = seconds % (60 * 60);

    int minutes = seconds / 60;
    seconds = seconds % 60;

    printf("H:M:S = %d:%d:%d", hours, minutes, seconds);
}