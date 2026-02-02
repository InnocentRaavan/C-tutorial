#include <stdio.h>
int main()
{
    int n, a, b, c, d, i;
    a = 0;
    b = 0;
    c = 1;
    
    printf("Enter the length of the series:\n");
    scanf("%d", &n);
    printf("%d\t %d\t %d\t", a, b, c);
    for(i=3;i<n;i++)
    {
        d = a + b + c;
        printf("%d\t", d);
        a = b;
        b = c;
        c = d;
    }
    return 0;
}