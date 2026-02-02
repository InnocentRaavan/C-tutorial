#include <stdio.h>
void main()
{
    int sub1, sub2, sub3;
    float average, percentage;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    report(sub1, sub2, sub3);
}
void report(int s1, int s2, int s3)
{
    int total = s1 + s2 + s3;
    float average = total / 3.0;
    float percentage = (total / 300.0) * 100;
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
}