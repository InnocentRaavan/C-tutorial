#include <stdio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
void main()
{
    int n, v;
printf("Enter a number: ");
scanf("%d", &n);
v = fact(n);
printf("Factorial of %d is %d\n", n, v);
}
