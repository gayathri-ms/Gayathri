#include<stdio.h>

int main()
{
  int A[15],n,i,j,temp;
   printf("\nEnter the no of elements and elements of the array.");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {scanf("%d",&A[i]);}
   for(i=0,j=n-1;i<n/2;i++,j--)
   {  temp=A[i];
      A[i]=A[j];
      A[j]=temp;
   }
   printf("\nElements after reversing the array is:");
   for(i=0;i<n;i++)
   {printf("%3d",A[i]);}
   }
