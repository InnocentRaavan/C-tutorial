#include <stdio.h>

int main()
{
    int i, j, k, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n - i; j++)
        {
            printf("%c ", 'A' + j);
        }

        for (k = 0; k < (2 * i - 1); k++)
        {
            printf("  ");
        }

        for (j = (n - 1) - i; j >= 0; j--)
        {
            if (i == 0 && j == (n - 1))
                continue;                
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}