// Write a C program to enter a number and print it in words.
#include<cstdio>

int main()
{
    int num, rev = 0, count = 0;
    scanf("%d", &num);
    
    while(num != 0) {
        rev = (rev * 10) + (num % 10);
        num /= 10;
        count++;
    }
    
    for(int i = 0;i < count;i++) {
        
        switch(rev % 10) {
            case 0:
                printf(" zero ");
                break;
            case 1:
                printf(" one ");
                break;
            case 2:
                printf(" two ");
                break;
            case 3:
                printf(" three ");
                break;
            case 4:
                printf(" four ");
                break;
            case 5:
                printf(" five ");
                break;
            case 6:
                printf(" six ");
                break;
            case 7:
                printf(" seven ");
                break;
            case 8:
                printf(" eight ");
                break;
            case 9:
                printf(" nine ");
                break;
        }
        rev /= 10;
    }
    
 
    return 0;
}