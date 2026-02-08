#include <stdio.h>

void bubbleSort(int arr[], int n);

int main()
{
    int arr[] = {66,  44,  33, 55, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    bubbleSort(arr,n);
    printf("Sorted Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}

void bubbleSort(int arr[],int n)
{
    int i, j, temp;
    int swap;
    for(i= 0; i< n-1; i++)
    {
        swap = 0;

            for (j = 0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    swap = 1;
                }
            }

        if(swap==0)
        {
         break;
        } 
    }
    

    
}