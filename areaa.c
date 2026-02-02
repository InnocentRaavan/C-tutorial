#include <stdio.h>
int main()
{
    int a,b,ar;
    printf("Enter the length and breadth of the rectangle");
    scanf("%d %d", &a, &b);
    ar=a*b;
    printf("The area of the rectangle is %d", ar);

    return 0;
}