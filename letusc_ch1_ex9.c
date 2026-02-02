#include <stdio.h>
int main()
{
    int n, lastdigit,firstdigit;
    printf("Enter a 4-digit number:");
    scanf("%d",&n);
    lastdigit = n % 10;
    firstdigit = n / 1000;
    int sum = firstdigit + lastdigit;
    printf("The sum of first and last digit is %d\n",sum);
    return 0;
}