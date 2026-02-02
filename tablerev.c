#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number you want to print table of:\n");
    scanf("%d", &n);
    for(int i=10; i>=1; i--)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}