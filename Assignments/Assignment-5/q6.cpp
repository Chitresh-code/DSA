#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    scanf("%d", &num);

    switch(num > 0) {
        case 1:
            printf("%d is positive", num);
            break;
        case 0:
            switch(num < 0) {
                case 1:
                    printf("%d is negative", num);
                    break;
                case 0:
                    printf("%d is zero", num);
                    break;
            }
            break;
        
        default:
            printf("Invalid Input!");
    }
}