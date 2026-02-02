#include <stdio.h>


struct Student {
    char name[30];
    int marks;
    int attendance;
    char performance[15];
};


void predictPerformance(struct Student *s) {
    if (s->marks >= 80 && s->attendance >= 75)
        sprintf(s->performance, "Excellent");
    else if (s->marks >= 50 && s->attendance >= 60)
        sprintf(s->performance, "Average");
    else
        sprintf(s->performance, "Poor");
}

int main() {
    struct Student students[10];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%d", &students[i].marks);

        printf("Attendance (%%): ");
        scanf("%d", &students[i].attendance);

        predictPerformance(&students[i]); 
    }

    printf("\n--- STUDENT PERFORMANCE REPORT ---\n");
    for(i = 0; i < n; i++) {
        printf("\nName: %s", students[i].name);
        printf("\nMarks: %d", students[i].marks);
        printf("\nAttendance: %d%%", students[i].attendance);
        printf("\nPredicted Performance: %s\n", students[i].performance);
    }

    return 0;
}
