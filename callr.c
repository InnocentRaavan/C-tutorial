#include <stdio.h>

void call_by_ref(int *p)
{
    *p = *p + 10;
    printf("Inside call_by_ref function: %d\n", *p);
}

int main()
{
    int a = 20;
    printf("Before call_by_ref function: %d\n", a);
    call_by_ref(&a);
    printf("After call_by_ref function: %d\n", a);
    return 0;
}