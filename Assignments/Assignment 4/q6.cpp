#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int angle1, angle2, angle3;
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if ((angle1 + angle2 + angle3) == 180) {
        printf("Valid");
    } else {
        printf("Invalid");
    }
}