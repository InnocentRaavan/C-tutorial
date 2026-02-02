#include <stdio.h>

int main()
{
    int number, sum;
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);
    sum = number % 10;
    number = number / 10;
    sum += number % 10;
    number = number / 10;
    sum += number % 10;
    number = number / 10;
    sum += number % 10;
    number = number / 10;
    sum += number % 10;
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}
