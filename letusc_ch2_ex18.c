#include <stdio.h>
int main()
{
    int s1, s2, s3, sum;
    printf("Enter the sides of the triangle:\n");
    scanf("%d %d %d", &s1, &s2, &s3);
    sum = s1 + s2;
    if(sum > s3)
        printf("The triangle is valid");
    else 
        printf("The triangle is invalid");
    return 0;
}