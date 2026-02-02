#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,56};
    printf("The value at position 1 of the array is %d\n", arr[0]);
    printf("The address of the first element of the array is %d\n", &arr[0]);
    printf("The value at position 2 of the array is %d\n", arr[1]);
    printf("The address of the second element of the array is %d\n", &arr[1]);

    return 0;
}