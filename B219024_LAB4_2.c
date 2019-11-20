#include<stdio.h>
int main()
{
    double x1,y1,x2,y2;
    printf("ENTER THE COORDINATES");
    scanf("%f%f%f%f",x1,y1,x2,y2);
    double den=x2-x1;
    double num=y2-y1;
    double m=num/den;
    if(num==0)
        printf("SLOPE IS PARALLEL TO X AXIS");
    else if(den==0)
        printf("SLOPE IS PARALLEL TO Y AXIS");
    else
        printf("SLOPE IS %f",m);
}

