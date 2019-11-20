#include<stdio.h>
int main()
{
   int n;
   printf("\nEnter the number to print multiplicaion table of that number:");
   scanf("%d",&n);
   for(int i=1;i<11;i++)
     printf("\n%2d * %2d =%3d",i,n,i*n);
   return 0;
}
