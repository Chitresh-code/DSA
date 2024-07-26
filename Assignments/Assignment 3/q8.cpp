#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int num;
    scanf("%d", &num);
    
    (num == 0) ?
        printf("zero") :
            (num > 0) ?
                printf("positive") :
                    printf("negative");
    
}