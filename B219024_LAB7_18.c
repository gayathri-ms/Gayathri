#include<stdio.h>

int fab(int n)
{
    if(n==0)
      return 0;
    else if(n==1)
           return 1;
         else
            return (fab(n-1)+fab(n-2));
}
int main()
{
   int n;
   printf("\nEnter the count upto which the fibanocci series should be printed.");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
      printf("\n%d",fab(i));
   return 0;
}
