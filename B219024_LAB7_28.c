
#include<stdio.h>
#include<stdlib.h>

int main()
{
       int i,j,count,num,add=0;
       int arr[10000];
       printf("Enter the max value upto which you want to check the Twin Primes\n");
       scanf("%d",&num);
       for(i=3;i<num;i++)
       {
              count = 0;
              for(j=2;j<i;j++)
              {
                     if(i%j == 0)
                     {
                           count++;
                     }
              }
              if(count==0)
              {
                     arr[add] = i;
                     add++;
              }
       }
       printf("\nTwin Primes are :  \n");
       for(i=1;i<add;i++)
       {
              if(arr[i] == arr[i-1] +2)
              {
                     printf("%d %d\n",arr[i-1],arr[i]);
              }
       }
}
