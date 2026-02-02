#include <stdio.h>

int main() {
    char name[20];
    float chem, phy, eng, math, it;
    float total_marks, percentage;

        printf("Enter the student's name:\n");
    scanf("%s", name);
    
    printf("Enter marks for Chemistry (out of 100): ");
    scanf("%f", &chem);
    printf("Enter marks for Mathematics (out of 100): ");
    scanf("%f", &math);
    printf("Enter marks for Physics (out of 100): ");
    scanf("%f", &phy);
    printf("Enter marks for English (out of 100): ");
    scanf("%f", &eng);
    printf("Enter marks for IT (out of 100): ");
    scanf("%f", &it);

    
    total_marks = chem + phy + eng + math + it;
    percentage = (total_marks / 500.0) * 100.0;

   
    printf("\n--- Result ---\n");
    printf("Total marks obtained: %.2f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    
    if (percentage >= 75) {
        printf("Division: Distinction\n");
    } else if (percentage >= 60) {
        printf("Division: First Division\n");
    } else if (percentage >= 50) {
        printf("Division: Second Division\n");
    } else if (percentage >= 40) {
        printf("Division: Third Division\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}