#include <stdio.h>

 main()
{
    float num;
    float originalNum, reversedNum = 0, remainder;

    printf("Enter a 5-digit integer: ");
    scanf("%f", &num);

    if (num < 10000 || num > 99999)
    {
        printf("Invalid input: Please enter a 5-digit integer.\n");
        return 0;
    }

    originalNum = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum)
    {
        printf("%f is a palindrome.\n", originalNum);
    }
    else
    {
        printf("%f is not a palindrome.\n", originalNum);
    }

    return 0;
}