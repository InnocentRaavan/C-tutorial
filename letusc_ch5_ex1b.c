#include <stdio.h>

int sumDigitsRecursive(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 10) + sumDigitsRecursive(num / 10);
}

int main()
{
    int num;
    printf("Enter a 5-digit positive integer: ");
    scanf("%d", &num);

    int result = sumDigitsRecursive(num);
    printf("Sum of digits (Recursive): %d\n", result);

    return 0;
}
