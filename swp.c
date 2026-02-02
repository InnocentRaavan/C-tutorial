#include <stdio.h>

void swapv(int x, int y);

int main()
{
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swapv(a, b);
    return 0;
}
void swapv(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Inside swapv: x = %d, y = %d\n", x, y);
}