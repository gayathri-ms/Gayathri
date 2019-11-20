#include<stdio.h>
int main()
{
   int A[5],B[5],C[10];
   int i,j,k;

   printf("\nEnter the first array values in ascending order");
   x1:
   for(i=0;i<5;i++)
      scanf("%d",&A[i]);
  /* for(i=0;i<4;i++)
      if(A[i]>A[i+1])
        {
           printf("\nEnter the array in ascending order!!!");
           goto x1;
        }*/
   printf("\nEnter the second array values in ascending order");
   x2:
   for(j=0;j<5;j++)
      scanf("%d",&B[j]);
   /*for(j=0;j<4;j++)
      if(B[j]>B[j+1])
        {
           printf("\nEnter the 2 array in ascending order!!!");
           goto x2;
        }*/
   i=j=k=0;
   for(k=0;k<10;k++)
   {
      if(i==5)
          C[k]=B[j++];
      else
      if(j==5)
          C[k]=A[i++];
      else
      if(A[i]==B[j])
      {
          C[k++]=A[i];
          C[k]=B[j];
          i++;
          j++;
      }
      else
      if(A[i]<B[j])
         C[k]=A[i++];
      else
         C[k]=B[j++];


    }
    printf("\nThe third array is:");
    for(k=0;k<10;k++)
      printf("%d ",C[k]);
    return 0;
}
