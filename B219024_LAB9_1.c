#include <stdio.h>
struct student
{
    char n[50];
    int roll;
    float marks;
} s;

int main()
{
    printf("Enter information:\n");

    printf("Enter name: ");
    scanf("%s", s.n);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);


    printf("Displaying Information:\n");

    printf("Name: ");
    puts(s.n);

    printf("Roll number: %d\n",s.roll);

    printf("Marks: %.1f\n", s.marks);

    return 0;
}
