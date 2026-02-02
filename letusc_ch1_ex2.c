#include <stdio.h>
int main()
{
    int dist;
    printf("Enter the distance in kilometers:");
    scanf("%d",&dist);
    printf("The distance in meters is %d meters",dist*1000);
    printf("\nThe distance in centimeters is %d centimeters",dist*100000);
    printf("\nThe distance in inches is %d inches",dist*39370);
    printf("\nThe distance in feet is %d feet",dist*3280);
    
    return 0;
}