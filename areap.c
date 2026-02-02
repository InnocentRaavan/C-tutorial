#include <stdio.h>
void main()
{
    int radius;
    float area, perimeter;

    printf("\n Enter Radius:\n");
    scanf("%d", &radius);
    areaperi(radius, &area, &perimeter);

    printf("Area = %f", area);
    printf("Perimeter = %f", perimeter);
}
areaperi(int r, float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}