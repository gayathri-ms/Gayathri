#include<stdio.h>
void decToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}
int main()
{
    int n;
    printf("\nEnter the value of decimal:");
    scanf("%d",&n);
    printf("\nThe value in binary is:");
    decToBinary(n);
    return 0;
}
