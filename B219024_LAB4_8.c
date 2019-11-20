#include<stdio.h>
int main()
{
   int x[20];
   printf("\nEnter any 20 integer values:");
   for(int i=0;i<20;i++)
   {  scanf("%d",&x[i]);}
   int large=x[0];
   int y=0;
   for(int i=1;i<20;i++)
   {  if(large<x[i])
      {  large=x[i];}
   }
   for(int i=0;i<20;i++)
   {  if(x[i]==large)
         y++;
   }
   printf("\nThe largest number among this 20 numbers is:%d and repeated %d times.",large,y);
   return 0;
}
