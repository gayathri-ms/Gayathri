#include <stdio.h>
#include <stdlib.h>
void findAge(int current_date, int current_month,
             int current_year, int birth_date,
             int birth_month, int birth_year)
{
    int month[] = { 31, 28, 31, 30, 31, 30, 31,
                          31, 30, 31, 30, 31 };
    if (birth_date > current_date) {
        current_date = current_date + month[birth_month - 1];
        current_month = current_month - 1;
    }
    if (birth_month > current_month) {
        current_year = current_year - 1;
        current_month = current_month + 12;
    }
    int calculated_date = current_date - birth_date;
    int calculated_month = current_month - birth_month;
    int calculated_year = current_year - birth_year;
    printf("Present Age\nYears: %d  Months: %d  Days:"
           " %d\n", calculated_year, calculated_month,
                                      calculated_date);
}
int main()
{
    int current_date ;
    int current_month;
    int current_year;
    int birth_date;
    int birth_month;
    int birth_year;
    printf("\Enter the current date in mm/dd/yyyy :");
    scanf("%d/%d/%d",&current_month,&current_date,&current_year);
    printf("\Enter the person's birth date in mm/dd/yyyy :");
    scanf("%d/%d/%d",&birth_month,&birth_date,&birth_year);
    findAge(current_date, current_month, current_year,
            birth_date, birth_month, birth_year);
    return 0;
}
