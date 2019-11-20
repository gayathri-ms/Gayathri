#include<stdio.h>
int main()
{
   int x[13];
   float avg;
   printf("\nEnter any 13 integer values:");
   for(int i=0;i<13;i++)
   {  scanf("%d",&x[i]);}
   printf("\nThe numbers are;");
   for(int i=0;i<13;i++)
   {  printf(" %d",x[i]);}
   int small=x[0];
   int large=x[0];
   int sum=x[0];
   for(int i=1;i<13;i++)
   {  if(small>x[i])
         small=x[i];
      if(large<x[i])
         large=x[i];
      sum+=x[i];
   }
   avg=sum/13;
   printf("\nMinimum Integer:%d",small);
   printf("\nMaximum Integer:%d",large);
   printf("\nAverage:%f",avg);
   return 0;
}
