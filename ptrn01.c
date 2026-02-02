#include <stdio.h>

int main() {
    int rows ; 
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; i++) {

        if (i == 1) {
            printf("*\n");
        } 
        else {

            printf("*");

            for (int j = 1; j <= (i - 1); j++) {
                printf(" ");
            }

            printf("*\n");
        }
    }

    return 0;
}