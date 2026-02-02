#include <stdio.h>
int main()
{
    int subj1, subj2, subj3,subj4, subj5;
    float average, percentage;
    printf("Enter marks obtained in 5 subjects:");
    scanf("%d %d %d %d %d",&subj1,&subj2,&subj3,&subj4,&subj5);
    average=(subj1+subj2+subj3+subj4+subj5)/5.0;
    percentage = average;
    printf("The average marks is %.2f\n",average);
    printf("The percentage is %.2f%%\n",percentage);
    return 0;
}