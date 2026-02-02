#include <stdio.h>

void design(int, char);

int main()
{
    int n;
    printf("\n Enter your name length: ");
    scanf("%d", &n);

    design(n, '*');
    design(n, '#');
    printf("S H U B H");
    printf("\n");
    design(n, '#');
    design(n, '*');
    return 0;
}

void design(int x, char ch)
{
    for (int i = 1; i <= x; i++)
    {
        printf("%c", ch);
    }
    printf("\n");
}
