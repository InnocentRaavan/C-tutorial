#include <stdio.h>
void sort();
int a[]={12, 35, 9, 0, -5};

int main()
{
    int i;
    printf("\t \t *** Sorting Numbers ***\n");
    printf("The numbers before sorting are:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    sort();
    printf("\nThe numbers after sorting are:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void sort()
{
    int i, j, t;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}