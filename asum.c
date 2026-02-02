#include <stdio.h>
int arr[] = {10, 20, 30, 40, 50};
int sum(int[]);
void main()
{
    printf("%d is the sum of the elements of the array\n", sum(arr));
}

int sum (int arr[10])
{
    int sum = 0;
    for(int i=0;i<5;i++)
    sum+=arr[i];
    return sum;
}