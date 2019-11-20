#include<stdio.h>
int main()
{
float n,b;
int a;
printf("Enter a decimal number");
scanf("%f",&n);
b=n;
a=(int)n%10;

printf("The  rightmost digit of %f is %d ",n,a);
return 0;}


