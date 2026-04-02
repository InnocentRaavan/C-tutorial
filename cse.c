#include <stdio.h>
void main()
{
    float r;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &r);

    float area_value = area();
        
}

float area(float r)
{
    float a;
    a = 3.14 * r * r;
    return a;
}