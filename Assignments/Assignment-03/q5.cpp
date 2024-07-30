#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    char ch;
    scanf("%c", &ch);

    (((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122))) ?
        printf("%c is a character", ch) :
            printf("%c is not a character", ch);    
}