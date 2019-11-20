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
   int m;
   printf("\nEnter the number to be checked for prime:");
   scanf("%d",&m);
   int y=isPrime(m);
   if(y==0)
     printf("\nThe given number is not prime!!!!..");
   else
     printf("\nThe given number is prime.");
   return 0;
}
