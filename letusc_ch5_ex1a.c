#include <stdio.h>

int main()
{
    int num, sum = 0, digit;
    printf("Enter a 5-digit positive integer: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0)
    {
        digit = temp % 10;

        sum += digit;
        temp /= 10;
    }

    printf("Sum of digits (Iterative): %d\n", sum);
    return 0;
}
