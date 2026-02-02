#include <stdio.h>

void main()
{
    int marks[5];
    int i;
    printf("Enter marks for 5 subjects:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nMarks entered:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }
}