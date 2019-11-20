#include <stdio.h>
int main()
{
   int i,n,m,r=0;
   printf("Enter a 3 Digit Number");
   scanf("%d",&n);
   m=n;
   for(i=1;i<=3;i++)
   {
      r=r*10+m%10;
      m/=10;
   }
   printf("Reverse of %d is %d",n,r);
   return(0);
}
