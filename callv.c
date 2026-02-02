#include <stdio.h>


void inc(int a)
{
    a = a + 1;
    printf("Inside inc function: %d\n", a);
}
int main()
{
    int a = 10;
    printf("Before inc function: %d\n", a);
    inc(a);
    printf("After inc function: %d\n", a);
    return 0;
}