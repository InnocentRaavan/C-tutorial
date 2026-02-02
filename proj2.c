#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

void write_records();
void read_records();

int main() {
    int choice;

    while (1) {
        printf("\n--- Student Record Management ---\n");
        printf("1. Write records to file\n");
        printf("2. Read records from file\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                write_records();
                break;
            case 2:
                read_records();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}


void write_records() {
    FILE *fptr;
    struct Student s;

    struct Student *ptr_s = &s; 


    fptr = fopen("students.dat", "wb");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter student details (Roll No, Name, Marks):\n");
    printf("Enter 0 for Roll No to stop input.\n");
    while (1) {
        printf("Roll No: ");
        scanf("%d", &ptr_s->roll_no); 
        if (ptr_s->roll_no == 0) break;
        printf("Name: ");
        scanf("%49s", ptr_s->name);
        printf("Marks: ");
        scanf("%f", &ptr_s->marks);
        fwrite(ptr_s, sizeof(struct Student), 1, fptr);
    }

    fclose(fptr);
    printf("Records written to students.dat successfully.\n");
}

void read_records() {
    FILE *fptr;
    struct Student s;
    struct Student *ptr_s = &s;
    fptr = fopen("students.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening file for reading or file not found.\n");
        return;
    }

    printf("\n--- Stored Student Records ---\n");
    while (fread(ptr_s, sizeof(struct Student), 1, fptr) == 1) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", ptr_s->roll_no, ptr_s->name, ptr_s->marks);
    }

    fclose(fptr);
    printf("--- End of records ---\n");
}






