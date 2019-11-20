#include<stdio.h>
#include<process.h>
#include<stdlib.h>
int main()
{
    int x=rand()%20+1;
    int count=1;
    int n;
    printf("\n I am thinking of a number between 1 and 20");
    printf("\n Can you guess what it is ?");
    scanf("%d",&n);
    while(count!=5)
    {
        if(n>x)
        {
            printf("\nYour guess is high.Try again");
            scanf("%d",&n);
            count++;
        }
        else if(n<x)
        {
            printf("\nYour guess is low.Try again");
            scanf("%d",&n);
            count++;
        }
        else if(n==x)
        {
            printf("\nCongratulations!! You did it :)");
            exit(0);
        }
    }
    if(count==5)
    {
         printf("\nSorry.....:( The number was %d .\nYou should have gotten it by now.\nBetter luck next time..",x);
    }
    return 0;
}
