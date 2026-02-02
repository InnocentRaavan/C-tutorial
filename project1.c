#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Structure to store file activity details */
struct FileRecord {
    char fileName[30];
    char operation[15];
    char timeStamp[30];
};

/* Function to record file activity */
void recordActivity(struct FileRecord *rec) {
    FILE *fp = fopen("forensic_log.txt", "a");

    printf("Enter File Name: ");
    scanf("%s", rec->fileName);

    printf("Enter Operation (Create/Modify/Access): ");
    scanf("%s", rec->operation);

    printf("Enter Time Stamp: ");
    scanf("%s", rec->timeStamp);

    fprintf(fp, "%s %s %s\n", rec->fileName, rec->operation, rec->timeStamp);
    fclose(fp);

    printf("Activity recorded successfully.\n");
}

/* Function to view recorded logs */
void viewLogs() {
    FILE *fp = fopen("forensic_log.txt", "r");
    struct FileRecord rec;

    if(fp == NULL) {
        printf("No forensic logs found.\n");
        return;
    }

    printf("\n--- FORENSIC FILE ACTIVITY LOGS ---\n");
    while(fscanf(fp, "%s %s %s", rec.fileName, rec.operation, rec.timeStamp) != EOF) {
        printf("File: %s | Operation: %s | Time: %s\n",
               rec.fileName, rec.operation, rec.timeStamp);
    }
    fclose(fp);
}

int main() {
    struct FileRecord records[10];
    int choice;
    int index = 0;

    do {
        printf("\n1. Record File Activity");
        printf("\n2. View Logs");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                recordActivity(&records[index]);
                index++;
                break;
            case 2:
                viewLogs();
                break;
            case 3:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 3);

    return 0;
}


