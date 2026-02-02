#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter marks of 5 stuednts:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The marks of the students are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d: %d\n", i + 1, arr[i]);
    }

    return 0;
}