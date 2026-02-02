#include <stdio.h>
void print_address(int num);
int main()
{
    int i = 10;
    printf("The address of the variable i is: %p\n", (void*)&i);
    print_address(i);
    return 0;
}
void print_address(int num)
{
    printf("The address of the parameter num is: %p\n", (void*)&num);
}