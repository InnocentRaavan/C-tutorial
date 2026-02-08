#include <stdio.h>

disp(int *m)
{
    printf("%d\n",*m);
}

void main()
{
    int i;
    int m[] = {56, 67, 78, 89, 90};
    for(i=0;i<5;i++)
    {
        disp(&m[i]);
    }
}