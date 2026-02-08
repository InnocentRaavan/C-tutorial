#include <stdio.h>
void main()
{
    int stud[5][2];
    printf("Enter the details of the students:\n");
    for(int i=0; i<5;i++)
    {
        printf("Student %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &stud[i][0]);
        printf("Marks: ");
        scanf("%d", &stud[i][1]);
    }
    printf("The details of the students are:\n");
    for(int i=0; i<5;i++)
    {
        printf("Student %d:\n", i+1);
        printf("ID: %d\n", stud[i][0]);
        printf("Marks: %d\n", stud[i][1]);
    }
}