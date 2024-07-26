#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    scanf("%c", &ch);

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vovel", ch);
            break;
        default:
            printf("%c is a consonent", ch);
    }
}