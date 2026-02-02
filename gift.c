#include <stdio.h>

int main() {
    int science_marks, math_marks;
    int science_pass_mark = 40; // Define a passing mark for each subject
    int math_pass_mark = 40;

    // Get marks for Science and Math from the user
    printf("Enter marks in Science: ");
    scanf("%d", &science_marks);

    printf("Enter marks in Math: ");
    scanf("%d", &math_marks);

    // Check the conditions for gift distribution
    if (science_marks >= 40 && math_marks >= 40) {
        // Passed both Science and Math
        printf("Eligible for a gift of Rs. 45\n");
    } else if (science_marks >= 40 || math_marks >= 40) {
        // Passed in either Science or Math
        printf("Eligible for a gift of Rs. 15\n");
    } else {
        // Failed in both subjects
        printf("Not eligible for a gift.\n");
    }

    return 0;
}