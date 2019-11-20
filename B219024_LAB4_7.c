#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c;
   float r1,r2;
   printf("\nEnter the value of a,b,c for the form ax^2+bx+c=0");
   scanf("%d %d %d",&a,&b,&c);
   if((a==0)&&(b==0))
      printf("\nNo Solution exists.");
   else if(a==0)
        {  r1=(-1*c)/b;
           printf("\nOnly one root exists and the root is:%d",r1);
        }
        else if((pow(b,2)-4*a*c)<0)
                printf("\nNo real root exists.");
                else
                {   int x=pow(b,2)-4*a*c;
                    r1=(-b+pow(x,
                               1/2))/(2*a);
                    r2=(-b-pow(x,(1/2)))/(2*a);

                    printf("\nThe two roots are %f and %f",r1,r2);
                }
    return 0;
}
