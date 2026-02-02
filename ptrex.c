#include <stdio.h>
int main()
{
    int *ptr, n;
    ptr = &n;
    printf("Enter a variable:\n");
    scanf("%d", &n);
    printf("The address of th evariablr is %d", ptr);
    return 0;
}