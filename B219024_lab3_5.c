#include<stdio.h>
int main()
{
    printf("ENTER THE ANGLE IN DEGREES\n");
    double x;
    scanf("%f",x);
    double rad=x/57.295779;
    printf("THE CORRESPONDING VALUE IN RADIANS IS %f",rad);
    return 0;
}
