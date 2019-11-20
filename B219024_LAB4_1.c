#include<stdio.h>
int main()
{
    float a,b,c;
    printf("ENTER THREE TEST SCORES");
    scanf("%f%f%f",&a,&b,&c);
    float avg=(a+b+c)/3;
    if(avg>=90)
        printf('A');
    if(avg>=70&&avg<90)
    {
        if(c>=90)
         printf('A');
        else
         printf('B');
    }
    if(avg>=50&&avg<70)
    {
           if((b+c)/2 >70)
                printf('C');
            else
                printf('D');
        }
    else
            printf('F');

 return 0;
}
