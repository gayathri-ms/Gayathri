#include <stdio.h>
int main()
{
   int n1,n2,n3,n4;
   float avg;
   printf("Enter 4 Numbers");
   scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
   avg=(n1+n2+n3+n4)/4.0;
   printf("The Numbers are %d, %d, %d and %d\n",n1,n2,n3,n4);
   printf("The Average is %f\n",avg);
   printf("Their Deviations are %f, %f, %f and %f\n",avg-n1, avg-n2, avg-n3, avg-n4);
   return(0);
}
