#include <stdio.h>
void starPattern(int rows)
{
    for (int i = 0; i< rows; i++)
    {
        for (int j = 0; j<= i; j++)
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
    starPattern(rows);
    return 0;
}