#include<stdio.h>
//#include<process.h>
int fact(int n)
{
    int prd=1;
    if(n!=0)
       for(int i=n;i>0;i--)
       {  prd*=i;}
    else
        return 1;
    return prd;

}
int main()
{
   int x;
   float diff;
   float sum=0;
   //int n;
   // printf("\nEnter the value of n");
   //scanf("%d",n);
   for(int i=0;i<3;i++)
   {   sum+=(1.0/fact(i));
       diff=(1.0/fact(i))-(1.0/fact(i+1));
       //if(diff==0.00000001)
      // {  printf("\nThe value of e is %f",sum);
      //    exit(0);
      // }
       printf("\nsum:%f\ndifference:%f",sum,diff);
   }
   return 0;
}
