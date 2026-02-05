#include <stdio.h>

void main() {
    int stock, order;
    char credit;

    printf("Enter stock available: ");
    scanf("%d", &stock);

    printf("Enter customer order: ");
    scanf("%d", &order);

    printf("Is credit OK? (y/n): ");
    scanf(" %c", &credit);

    if (credit == 'n' || credit == 'N') {
        printf("Do not supply. Send intimation.\n");
    }
    else if (order <= stock && (credit == 'y' || credit == 'Y')) {
        printf("Supply as per requirement.\n");
    }
    else if (order > stock && (credit == 'y' || credit == 'Y')) {
        printf("Supply %d items. Intimate that balance %d will be shipped later.\n",
               stock, order - stock);
    }
    else {
        printf("Order cannot be processed.\n");
    }

}
