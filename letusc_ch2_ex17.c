#include <stdio.h>
int main()
{
    int days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    if(days == 5)
        printf("You have to pay 50 paise as a fine");
    else if(days>=6||days<=10)
        printf("You have to pay Rs. 1 as a fine");
    else if(days>=11||days<=30)
        printf("You have to pay Rs. 5 as a fine");
    else if(days>30)
        printf("Your membership is cancelled");
    else
        printf("No fine");
    return 0;
}