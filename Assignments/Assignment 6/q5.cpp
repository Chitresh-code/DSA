#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 100, i = 1;
    while(i <= n) {
        if (i % 2 != 0)
            printf("%d\n",i);
        i++;
    }
}