#include <stdio.h>
int main()
{
    int n;
    int abs_n;
    printf("Enter a number");
    scanf("%d", &n);
    if(n <0)
    abs_n = -n;
    printf("The absolute value of %d is %d\n", n, abs_n);
    return 0;
}