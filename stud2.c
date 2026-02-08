#include <stdio.h>
void main()
{
    int num[] = {25,56,65,76,87,88};
    display(&num[0],6);
}

int display(int *j, int n)
{
    int i;

    for(i=0; i<=n-1; i++)
    {
        printf("\n Element = %d",*j);
        j++;
    }
}