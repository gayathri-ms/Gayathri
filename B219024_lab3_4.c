#include<stdio.h>

int main()
{
float a,b;
int d;
printf("Enter the decimal number ");
scanf("%f",&a);
b=a;
a=(int)a/10;
d=(int)a%10;
printf("The second most digit of the integral portion of %f is %d",b,d);
return(0);
}
