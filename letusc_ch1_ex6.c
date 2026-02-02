#include <stdio.h>
int main()
{
    int c, d;
    printf("Enter the value of c & d:");
    scanf("%d %d", &c, &d);
    printf("Before interchange:\n");
    printf("%d %d", c, d);
    int temp;
    temp = c;
    c = d;
    d = temp;
    printf("\nAfter interchange:\n");
    printf("%d %d", c, d);
    return 0;
}