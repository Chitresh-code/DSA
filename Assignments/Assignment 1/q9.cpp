#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int amount;
    scanf("%d", &amount);

    int hundered = amount / 100;
    amount = amount % 100;

    int fifty = amount / 50;
    amount = amount % 50;

    int twenty = amount / 20;
    amount = amount % 20;

    int ten = amount / 10;
    amount = amount % 10;

    int five = amount / 5;
    amount = amount % 5;

    int two = amount / 2;
    amount = amount % 2;

    int one = amount / 1;

    printf("There are\n");
    printf("%d note(s) of 100\n", hundered);
    printf("%d note(s) of 50\n", fifty);
    printf("%d note(s) of 20\n", twenty);
    printf("%d note(s) of 10\n", ten);
    printf("%d note(s) of 5\n", five);
    printf("%d note(s) of 2\n", two);
    printf("%d note(s) of 1\n", one);

}