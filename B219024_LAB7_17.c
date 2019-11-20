#include<stdio.h>
int isPrime(int n)
{
   for(int i=2;i<n;i++)
   {
       if(n%i==0)
           return 0;
   }
   return 1;
}
int main()
{
   int m,n,y;
   printf("\nEnter the range of numbers to be checked for prime:");
   scanf("%d %d",&m,&n);
   printf("\nThe prime numbers between %d and %d is:\n",m,n);
   for(int i=m+1;i<n;i++)
   {
       y=isPrime(i);
       if(y==1)
           printf("\n%d",i);
   }
   return 0;
}
