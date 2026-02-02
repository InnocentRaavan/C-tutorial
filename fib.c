#include <stdio.h>

int fib(int);
void main()
{
    int n, v;
    printf("enter the length of the series");
    scanf("%d", &n);
    printf("Fibonacci series:\n");
    for(int i=0; i<=n; i++)
    printf("%d\n", fib(i));
}
int fib(int x)
{
    if(x==0)
    return 0;
    else if(x==1)
    return 1;
    else
    return fib(x-1)+fib(x-2);
}