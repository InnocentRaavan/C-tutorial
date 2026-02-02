#include <stdio.h>
void main()
{
    int yr;
    printf("Enter a valid year:\n");
    scanf("%d", &yr);
    leap(yr);
}
void leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("The given year is a leap year\n");
    else
        printf("The given year is not a leap year\n");
}