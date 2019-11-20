#include<stdio.h>
#include<math.h>
int cubesum(int n)
{
   int sum=0,y;
   while(n>0)
   {  y=n%10;
      sum+=pow(y,3);
      n=n/10;
   }
   return sum;
}
int main()
{
  int n,sum;
  printf("\nEnter any number:");
  scanf("%d",&n);
  sum=cubesum(n);
  printf("\nThe cubic value of the individual digits is: %d",sum);
  return 0;
}
