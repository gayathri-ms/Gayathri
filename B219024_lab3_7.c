#include<stdio.h>
int main()
{
    double x;
    printf("ENTER A MEASUREMENT IN INCHES:");
    scanf("%f",&x);
    double fo=x/12;
    printf("VALUE IN FOOT IS %f",fo);
    printf("VALUE IN YARD IS %f",(x/36));
    printf("VALUE IN CENTIMETER IS %f",(x/2.54));
    printf("VALUE IN METER IS %f",(x/39.37));
    return 0;
}

