#include <stdio.h>
void main()
{
    float rs;
    printf("Enter the amount in rs:\n");
    scanf("%f",&rs);
    
    int paise = rs*100;
    printf("%f rs = %d paise", rs, paise);
    
}