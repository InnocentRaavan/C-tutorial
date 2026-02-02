#include <stdio.h>
int main()
{
    int yr;
    printf("Enter a valid year:\n");
    scanf("%d", &yr);
    if(yr%4==0)
        printf("The year %d is a leap year\n", yr);
    else
        printf("The year %d is not a leap year\n", yr);
    return 0;
}