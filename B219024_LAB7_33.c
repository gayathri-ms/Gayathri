#include <stdio.h>
#include<string.h>
int isValidISBN(char isbn[20])
{
    // length must be 10
    int n = strlen(isbn);
    if (n != 10)
        return 0;

    // Computing weighted sum
    // of first 9 digits
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        int digit = isbn[i] - '0';
        if (0 > digit || 9 < digit)
            return 0;
        sum += (digit * (10 - i));
    }

    // Checking last digit.
    char last = isbn[9];
    if (last != 'X' && (last < '0' ||
                        last > '9'))
        return 0;

    // If last digit is 'X', add 10
    // to sum, else add its value.
    sum += ((last == 'X') ? 10 :
                  (last - '0'));

    // Return true if weighted sum
    // of digits is divisible by 11.
    return (sum % 11 == 0);
}

// Driver code
int main()
{
    char isbn[20];
    printf("\nEnter the International standard book number to check for validity:");
    scanf("%s",isbn);
    if (isValidISBN(isbn))
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}
