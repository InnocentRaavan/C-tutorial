#include <stdio.h>
int *myFunc() {
    static int a = 34;
    return &a;
}
   
int main()
{
    int *ptr = myFunc();
    printf("%d", *ptr);
    return 0;
}