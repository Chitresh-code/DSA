#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int num;
    scanf("%d", &num);

    printf("Number: %d\n", num);
    (num >= 0) ?
        num = num :
            num = num * -1;
    printf("Absolute Value: %d\n", num);
    
}