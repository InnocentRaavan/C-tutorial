#include <stdio.h>
int main()
{
    int day;
    printf("Enter the value:");
    scanf("%d", &day);
    switch(day)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        default:
            printf("Invalid");
    }

    return 0;
}