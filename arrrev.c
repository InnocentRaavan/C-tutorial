#include <stdio.h>
target: 67, 6, 5, 4, 3, 2, 1

7
1, 2, 3, 4, 5, 6, 67
67, 2, 3, 4, 5, 6, 1
67, 6, 3, 4, 5, 2, 1
67, 6, 5, 4, 3, 2, 1


void arrayRev(int arr[])
{

}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    for (int i = 0; i < 7; i++)
    {
        printf("The value of arr[%d] is %d\n", i, arr[i]);
    }
    arrayRev(arr);
    for (int i = 0; i < 7; i++)
    {
        printf("The value of arr[%d] is %d\n", i, arr[i]);
    }

    return 0;
}