#include <stdio.h>
int main()
{
    int l,b,r, area_rect;
    float area_circle;
    printf("Enter length and breadth of rectangle:");
    scanf("%d %d",&l,&b);
    area_rect = l * b;
    printf("The area of the rectangle is %d\n",area_rect);
    printf("Enter radius of circle:");
    scanf("%d",&r);
    area_circle = 3.14 * r * r;
    printf("The area of the circle is %.2f\n",area_circle);
    
    return 0;
}