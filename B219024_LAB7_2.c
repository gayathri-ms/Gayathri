#include<stdio.h>
int main()
{
   int A[5][5];
   int j,i;
   for(i=0;i<5;i++)
   {
    for(j=0;j<5;j++)
    {
      if(i+j<4)
        A[i][j]=+1;
      else
        if(i+j==4)
         A[i][j]=0;
        else
          if(i+j>4)
            A[i][j]=-1;
    }
   }
   printf("\n The modified matrix is:\n");
   for(i=0;i<5;i++)
   { for(j=0;j<5;j++)
       printf("%4d",A[i][j]);
     printf("\n");
    }
    return 0;
}
