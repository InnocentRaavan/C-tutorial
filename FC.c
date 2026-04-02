#include <stdio.h>

int main() {
    
    // Letter F
    printf("#####\n"); 
    for (int i = 0; i < 2; i++) {
        printf("#\n");     
    }
    printf("####\n");  
    for (int i = 0; i < 2; i++) {
        printf("#\n");     
    }

    printf("\n"); 

    // Letter C
    printf("  ######\n");
    for (int i = 0; i < 2; i++) {
        printf(" #      #\n");
    }
    printf("#\n");
    for (int i = 0; i < 2; i++) {
        printf("#\n");
    }
    for (int i = 0; i < 2; i++) {
        printf(" #      #\n");
    }
    printf("  ######\n");

    return 0;
}
