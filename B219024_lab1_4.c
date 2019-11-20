#include<stdio.h>

int main()
{
float quiz,mid_term,final,total;
float a,b,c,d,e,f;
printf("Enter the marks of quiz 1 out of 50");
scanf("%f",&a);
printf("Enter the marks of quiz 2 out of 50");
scanf("%f",&b);
printf("Enter the marks of quiz 3 out of 50");
scanf("%f",&c);
printf("Enter the marks of quiz 4 out of 50");
scanf("%f",&d);
quiz=a+b+c+d/200;
printf("Enter the marks of midterm 1 out of 30");
scanf("%f",&e);
printf("Enter the marks of midterm 2 out of 30");
scanf("%f",&f);
mid_term=e+f/60;
printf("Enter the marks of final exam out of 100");
scanf("%f",&final);
total=(quiz*0.3)+(mid_term*0.4)+(final*0.4);
printf("The marks of the student %f",total);
return(0);
}
