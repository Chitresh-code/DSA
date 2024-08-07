#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks;
    scanf("%d", &marks);

    switch(marks / 10) {
        case 10:
        case 9:
            printf("Grade A");
            break;
        case 8:
            printf("Grade B");
            break;
        case 7:
            printf("Grade C");
            break;
        case 6:
            printf("Grade D");
            break;
        case 5:
        case 4:
            printf("Grade E");
            break;
        case 3:
        case 2:
        case 1:
            printf("Grade F");
            break;
        default:
            printf("Invalid Input!");
    }
    return 0;
}