#include <stdio.h>

prime(int num)
{

    while (num % 2 == 0)
    {
        printf("2 ");
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num /= i;
        }
    }

    if (num > 2)
    {
        printf("%d", num);
    }
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);
    prime(n);
    printf("\n");

    return 0;
}
