#include <stdio.h>

int main()
{
    int rows = 4, count = 1;
    for (int i = 1; i <= rows; i++)
    {

        for (int sp = 1; sp <= (rows - i); sp++)
        {
            printf("  ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d   ", count++);
        }
        printf("\n");
    }
    return 0;
}