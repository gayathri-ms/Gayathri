#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    printf("HOW MANY TVs WERE SOLD?\n");
    scanf("%d",&n1);
    printf("HOW MANY VCRs WERE SOLD?\n");
    scanf("%d",&n2);
    printf("HOW MANY REMOTE CONTROLLERS WERE SOLD?\n");
    scanf("%d",&n3);
    printf("HOW MANY CDs WERE SOLD?\n");
    scanf("%d",&n4);
    printf("HOW MANY TAPE RECORDERS WERE SOLD?\n");
    scanf("%d",&n5);
    float t1,t2,t3,t4,t5,tot,tax,amt;
    t1=t1*400;
    t2=t2*220;
    t3=t3*35.20;
    t4=t4*300.0;
    t5=t5*150.0;
    tot=t1+t2+t3+t4+t5;
    tax=0.0825*tot;
    amt=tot-tax;

    printf("QTY\tDESCRIPTION\tUNIT PRICE\tTOTAL PRICE\n");
    printf("--------------------------------------------------------");
    printf("\n%d    \tTVs     \t400.00    \t%f",n1,t1);
    printf("\n%d    \tVCRs    \t220.00    \t%f",n2,t2);
    printf("\n%d    \tREMOTE   \t35.20.00  \t%f",n3,t3);
    printf("\n%d    \tCDs     \t300.00    \t%f",n4,t4);
    printf("\n%d   \tTAPE RECORDERs\t150.00    \t%f",n5,t5);
    printf("\n                               \t\t-----------\n");
    printf("\t\t\tSUBTOTAL     \t%f",tot);
    printf("\n\t\t\tTAX     \t%f",tax);
    printf("\n\t\t\tTOTAL   \t%f",amt);

    return 0;
}




