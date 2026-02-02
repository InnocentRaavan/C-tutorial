#include <stdio.h>
int main()
{
    int l, b, ar, per;
    printf("enter the length and breadth of the rectangel:\n");
    scanf("%d %d", &l, &b);

    ar = l * b;
    per = 2 * (l + b);

    printf("The area of the rectangle is %d\n", ar);
    printf("The perimeter of the rectangle is %d\n", per);
    if(ar > per)
        printf("Area is greater than perimeter\n");
    else
        printf("Perimeter is greater than area\n");
    return 0;
}