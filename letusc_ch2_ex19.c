#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter the sides of the triangle");
    scanf("%d %d %d", &s1, &s2, &s3);

    if(s1==s2 && s2==s3 && s1==s3)
        printf("The Triangle is an equilateral triangle");
    else if(s1==s2 || s2==s3 || s1==s3)
        printf("The triangle is an isoceles triangle");
    else
        printf("The triaangle is a scalene triangle");
    
    return 0;
}