#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char fullName1[100];
    char fullName2[100];
    char newName[100] = ""; 

    printf("Enter the first person's full name: ");
   
    fgets(fullName1, sizeof(fullName1), stdin);
   
    fullName1[strcspn(fullName1, "\n")] = '\0';

    printf("Enter the second person's full name: ");
    fgets(fullName2, sizeof(fullName2), stdin);
    fullName2[strcspn(fullName2, "\n")] = '\0';

   
    char *firstName = strtok(fullName1, " ");

   
    char *surname;
    char *temp = strtok(fullName2, " ");
    while (temp != NULL) {
        surname = temp;
        temp = strtok(NULL, " ");
    }

    
    if (firstName != NULL) {
        strcpy(newName, firstName);
    } else {
        printf("Could not extract first name.\n");
        return 1;
    }

    
    strcat(newName, " ");

    
    if (surname != NULL) {
        strcat(newName, surname);
    } else {
        printf("Could not extract surname.\n");
        return 1;
    }

   
    printf("\nNew name: %s\n", newName);

    return 0;
}
