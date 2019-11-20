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
   int sum1=0,sum2=0,n,m;

   printf("\nEnter the range of numbers to check for proper divisor:");
   scanf("%d %d",&n,&m);
   printf("\nThe amicable numbers between %d and %d is:",n,m);
   for(int j=n+1;j<m;j++)
   {
      for(int i=1;i<j;i++)
          sum1+=div(i,j);
      for(int k=1;k<sum1;k++)
          sum2+=div(k,sum1);
   if(j==sum2)
       printf("\n%d and %d",sum1,sum2);
       sum1=sum2=0;
  // else
   //    printf("\nThe given number is not a proper divisor!!!");
   }
   return 0;
}
