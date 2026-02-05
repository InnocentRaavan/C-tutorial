#include <stdio.h>
void main()
{
    float a,b;
    printf("Enter the marks obtained in the subject A:\n");
    scanf("%f", &a);
    printf("Enter the marks obtained in the subject B:\n");
    scanf("%f", &b);
    if(a>=55 && b>=45)
    {
        printf("Passed\n");
    }
    else if (a>=45 && a<55 && b>=55)
    {
        printf("Passed\n");
    }
    else if(a>=65 && b<45)
    {
        printf("You are allowed to reappear for B\n");
    }
    else
    {
        printf("Failed\n");
    }
}