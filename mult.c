#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number to print its multiplication table:\n");
    scanf("%d", &n);
    printf("Multiplication table of %d is:\n", n);
    for(int i=10; i>=1; i--)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}