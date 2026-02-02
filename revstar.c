#include <stdio.h>
void revstarPattern(int rows)
{
    for (int i = 0; i< rows; i++)
    {
        for (int j = 0; j<= rows-i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    } 
    
}

int main()
{
    int rows;
    printf("Enter number of rows:\n ");
    scanf("%d", &rows);
    revstarPattern(rows);
    return 0;
}