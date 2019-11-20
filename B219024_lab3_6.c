#include<stdio.h>

int main()
{
int c;
float f;
printf("Enter a centigrade temperature");
scanf("%d",&c);
f=32+(c*(1.8));
printf("The fahrenheit measure of entered temperature is %f",f);
return(0);
}
