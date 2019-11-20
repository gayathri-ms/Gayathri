#include<stdio.h>
#include<math.h>
int fact(int n)
{
   int product=1;
   for(int i=n;i>0;i--)
      product*=i;
   return product;
}
int main()
{
  float n=0;
  int x,m=0;
  printf("\nEnter the value of x:");
  scanf("%d",&x);
  for(int i=1;i<20;i+=2)
  {
     if(m==0)
     {  n+=(pow(x,i)*1.0)/fact(i);
        m=1;
     }
     else
     {  n-=(pow(x,i)*1.0)/fact(i);
        m=0;
     }
  }
  printf("\nThe value of the function with the value of x as %d is: %f",x,n);
  return 0;
}
