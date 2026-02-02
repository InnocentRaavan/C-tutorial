#include <stdio.h>
void main()
{
    int l, b;
    printf("Enter the length and width:\n");
    scanf("%d %d", &l, &b);

    area(l,b);
    printf("The area is: %d", area(l,b));
    perimeter(l,b);
    printf("\nThe perimeter is: %d", perimeter(l,b));
}
area(x,y)
int x,y;
{
    int z;

    z = x*y;
    return (z);
}
perimeter(a,b)
int a,b;
{
    int c;
    
    c = 2* (a+b);

    return (c);

}