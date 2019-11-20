#include <stdio.h>
void process()
{
    int mon_day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int y,dly;
    printf("Please Enter a Year\n");
    scanf("%d",&y);
    dly = ((y-1)*365 + (y-1)/4 - (y-1)/100 + (y-1)/400)%7+1;
    if(((y%4==0)&&(y%100!=0)||(y%400==0)))
        mon_day[2]+=1;
    int mon,d;
    for(mon=1;mon<=12;mon++)
    {
        printf("\n\n\n");
        switch(mon)
        {
            case 1:
                printf("\tJanuary");
                break;
            case 2:
                printf("\tFebruary");
                break;
            case 3:
                printf("\tMarch");
                break;
            case 4:
                printf("\tApril");
                break;
            case 5:
                printf("\tMay");
                break;
            case 6:
                printf("\tJune");
                break;
            case 7:
                printf("\tJuly");
                break;
            case 8:
                printf("\tAugust");
                break;
            case 9:
                printf("\tSeptember");
                break;
            case 10:
                printf("\tOctober");
                break;
            case 11:
                printf("\tNovember");
                break;
            case 12:
                printf("\tDecember");
                break;
            default:
                break;
        }
        printf("\n\n Su   Mo   Tu   We   Th   Fr   Sa\n");
        for(d=1;d<=1+dly*5;d++)
        {
            printf(" ");
        }
        for(d=1;d<=mon_day[mon];d++)
        {
            printf("%2d",d);
            if((d+dly)%7>0)
            {
                printf("   ");
            }
            else
            {
                printf("\n ");
            }
        }
        dly= (dly+mon_day[mon])%7;
    }
}
int main()
{
    int ans;
    process();
    printf("DO YOU WANT TO CONTINUE? enter 1 if 'YES' and 0 if 'NO' ");
    scanf("%d",&ans);
    if(ans==1)
    process();
    return(0);
}

