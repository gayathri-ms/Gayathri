#include<stdio.h>

int div(int x,int y)
{
  if(y%x==0)
    return x;
  else
    return 0;
}
int main()
{
   int sum=0,n,m;

   printf("\nEnter the range of numbers to check for proper divisor:");
   scanf("%d %d",&n,&m);
   printf("\nThe perfect numbers between %d and %d is:",n,m);
   for(int j=n+1;j<m;j++)
   {
      for(int i=1;i<j;i++)
          sum+=div(i,j);
   if(sum==j)
       printf("\n%d",sum);
       sum=0;
  // else
   //    printf("\nThe given number is not a proper divisor!!!");
   }
   return 0;
}
