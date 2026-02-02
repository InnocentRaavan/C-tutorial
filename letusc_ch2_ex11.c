#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, r, x1, y1;
    printf("Enter the coordinates of the center of the circle:\n");
    scanf("%d %d", &x, &y);
    printf("Enter the radius of the circle:\n");
    scanf("%d", &r);
    printf("Enter the coordinates of the point:\n");
    scanf("%d %d", &x1, &y1);
    int d = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));
    if (d < r)
        printf("The point is inside the circle\n");
    else if (d == r)
        printf("The point is on the circle\n");
    else
        printf("The point is outside the circle\n");
    return 0;
}