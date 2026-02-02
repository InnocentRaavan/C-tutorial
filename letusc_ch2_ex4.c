#include <stdio.h>
int main()
{
    int month = 0, year, a, day=1;
    printf("Enter the year");
    scanf("%d", &year);
    a = (14-month)/12;
    year =year - a;
    month = month + 12*a-2;

    day = (day + year + (year/4) - (year/100) + (year/400) + ((31 * month)/12)) % 7;
    if(day == 0)
        printf("The day is Sunday\n");
    else if(day == 1)
        printf("The day is Monday\n");
    else if(day == 2)
        printf("The day is Tuesday\n");
    else if(day == 3)
        printf("The day is Wednesday\n");
    else if(day == 4)
        printf("The day is Thursday\n");
    else if(day == 5)
        printf("The day is Friday\n");
    else
        printf("The day is Saturday\n");
    return 0;
}