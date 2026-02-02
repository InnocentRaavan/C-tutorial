#include <stdio.h>
int main()
{
    int n, a, b, c;

    a = 0;
    b = 1;
    printf("The first 20 no. of the series are:\n");
    printf("%d\n%d\n", a, b);
    for(n=2;n<20;n++)
    {
        c = 2*b+a;
        printf("%d\t", c);
        a = b;
        b = c;
        printf("\n");
    }
    
    return 0;
}