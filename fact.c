#include<stdio.h>
int fact(int);
void main()
{
    int n, v;
    printf("Enter a number to calculate factorial:\n");
    scanf("%d", &n);

    v=fact(n);
    printf("Factorial of %d is %d\n", n, v);

}
int fact(int x)
{
    if(x==0||x==1)
    return 1;
    else
    return x*fact(x-1);
}