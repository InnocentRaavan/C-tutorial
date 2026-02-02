#include <stdio.h>

int main() {
    int height = 7; 
    int width = 5;  

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            
            if (i == 0 || i == height - 1 || i == height / 2) {
                printf("*");
            }
           
            else if (j == 0) {
                printf("*");
            }
            
            else if (j == width - 1 && (i > 0 && i < height / 2 || i > height / 2 && i < height - 1)) {
                printf("*");
            }
            
            else {
                printf(" ");
            }
        }
        printf("\n"); 
    }

    return 0;
}