#include <stdio.h>
void main()
{
    int a[3][4] = {
                     1,2,3,4,
                     5,6,7,8,
                     9,0,1,6
                   };
display(a,3,4);
show(a,3,4);
print(a,3,4);

}
int display(int *q, int row, int col)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",*(q+i*col+j));
            
        }
        printf("\n");
    }

}

int show(int (*p)[4], int row, int col)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",*(*(p+i)+j));
            
        }
        printf("\n");
    }

}

int print(int p[3][4], int row, int col)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",p[i][j]);
            
        }
        printf("\n");
    }

}

