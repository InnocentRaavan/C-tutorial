#include <stdio.h>
void main()
{
    float sal,da,hra,gross;
    printf("Enter the basic Salary:");
    scanf("%f",&sal);
    da=0.4*sal;
    hra=0.2*sal;
    gross=sal+da+hra;
    printf("The gross salary is %.2f",gross);
        
}