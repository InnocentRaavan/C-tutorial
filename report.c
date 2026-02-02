#include <stdio.h>
int main()
{   int m1, m2, m3;
    printf("Enter marks of three subjects:\n");
    scanf("%d %d %d", &m1, &m2, &m3);
       // for each subject
    if(m1 < 32 || m2 < 32 || m3 < 32)
        printf("Needs improvemeent in one or more subjects.\n");
        // marks of each subject is out of 80
    int total = m1 + m2 + m3;
    float percentage = (total / 240.0) * 100;
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    // for total marks
    if(percentage >= 40)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");
 
    return 0;
}