#include<stdio.h>
#include<process.h>
int main()
{

  int A[5][5],n,i,j;
  printf("\nEnter the size of the matrix and the elements of the matrix:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   scanf("%d",&A[i][j]);
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   if(A[i][j]==A[j][i])
    ;
   else
   {printf("\nThe given matrix is not symmetric.");
    exit(0);}
   printf("\nThe given matrix is symmetric.\n");
   for(i=0;i<n;i++)
   {for(j=0;j<n;j++)
   printf("%2d",A[i][j]);
   printf("\n");
   }
   return 0;
}
