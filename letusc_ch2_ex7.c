#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three angles of a triangle:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a + b + c == 180)
        printf("The angles form a valid triangle\n");
    else
        printf("The angles do not form a valid triangle\n");
    return 0;
}