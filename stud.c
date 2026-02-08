#include <stdio.h>
void main()
{
    int marks[5];
    printf("Enter the marks of students");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("The marks of students are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",marks[i]);
    }
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum += marks[i];
    }
    float average = sum / 5.0;
    printf("The average marks of students is: %.2f\n", average);
}