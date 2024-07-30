#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    scanf("%c", &ch);

    if ((ch >= 65) && (ch <= 90)) {
        printf("%c is an uppercase alphabet", ch);
    } else if ((ch >= 97) && (ch <= 122)) {
        printf("%c is an lowercase alphabet", ch);
    } else if ((ch >= 48) && (ch <= 57)) {
        printf("%c is a number", ch);
    } else {
        printf("%c is a special charater", ch);
    }
}