#include <stdio.h>
void main()
{
    int arr[] = {66, 55, 44, 33, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    selectionSort(arr,n);
    printf("Sorted Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
}
void selectionSort(int arr[], int n)
{
    int i, j, min, temp;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}