#include <stdio.h>
int main()
{
    float time;
    printf("Enter the time taken(in hrs) to complete the work:\n");
    scanf("%f", &time);
    if(time>=1 && time<=3)
    {
        printf("Highly Efficient\n");
    }
    else if(time>3 && time<=4)
    {
        printf("You need to improve speed\n");
    }
    else if(time>4 && time<=5)
    {
        printf("You need Training\n");
    }
    else
    {
        printf("Sorry! You need to leave the compay\n");
    }
    return 0;
}