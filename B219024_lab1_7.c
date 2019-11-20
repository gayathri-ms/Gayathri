#include <stdio.h>
int main()
{
   float f,c;
   printf("Enter the Temperature in Fahrenheit");
   scanf("%f",&f);
   c=(f-32)*100.0/180;
   printf("the temperature in celcius is %f",c );
   return(0);
}
