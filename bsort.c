#include <stdio.h>

int main()
{
    int arr[] = {55,11,44,22,33,66};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    bsort(arr,n);
    printf("Sorted Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}
bsort(int arr[],int n)
{
    int i, j, temp, swap;
    for(i=0;i<n;i++)
    {
        swap = 0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
        }
        if(swap == 0)
        {
            break;
        }
    }    
}