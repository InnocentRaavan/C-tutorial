#include <stdio.h>

int main() {
    int rows;

   
    printf("Enter the number of rows for the Z pattern: ");
    scanf("%d", &rows);

  
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
          
            if (i == 0 || i == rows - 1 || j == rows - i - 1) {
                printf("*");
            } else {
               
                printf(" ");
            }
        }
        
        printf("\n");
    }

    return 0;
}