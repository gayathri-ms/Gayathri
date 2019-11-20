#include<stdio.h>


int main()
{
   int A[15],n,i,p,el,temp;
   printf("\nEnter the no of elements and elements of the array.");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {scanf("%d",&A[i]);}
    printf("\nEnter the element to be inserted and the place that should be inserted:");
    scanf("%d %d",&el,&p);
    for(i=0;i<=n;i++)
    {
      if(i>=p-1)
      {  temp=A[i];
         A[i]=el;
         el=temp;
      }
    }
    printf("\nElements after inserting the given element is:");
    for(i=0;i<n+1;i++)
   {printf("%2d ",A[i]);}
   return 0;
}
