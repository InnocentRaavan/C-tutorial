#include <stdio.h>

int calsum(int a, int b, int c);
int main()
{
    int a,b,c,sum;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = calsum(a, b, c);
    printf("Sum: %d\n", sum);    
    return 0;
}
int calsum(int a, int b, int c)
{
    return a + b + c;
}