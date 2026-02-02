#include <stdio.h>

int func1(int arr[])
{
    for (int i=0;i<4;i++)
    {
        printf("The value at %d is %d|\n", i, arr[i]);
    }

    arr[0] = 2323;
    return 0;
}




int main()
{
    int arr[] = {23, 13, 3, 4};
    printf("The value at index 0 is %d\n", arr[0]);
    func1(arr);  
    printf("The value at index 0 is %d\n", arr[0]);  
    return 0;
}