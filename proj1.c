#include <stdio.h>
#include <string.h>


struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    
    struct Product inventory[3];
    int i;
    
    
    struct Product *ptr = inventory; 
    
    printf("Enter details for 3 products:\n");
    for (i = 0; i < 3; i++) {
        printf("\nProduct %d ID: ", i + 1);
        
        scanf("%d", &(ptr + i)->id); 
        
        printf("Product %d Name: ", i + 1);
        scanf("%s", (ptr + i)->name); 
        printf("Product %d Quantity: ", i + 1);
        scanf("%d", &(ptr + i)->quantity);
        
        printf("Product %d Price: ", i + 1);
        scanf("%f", &(ptr + i)->price);
    }

    printf("\n*** Product Inventory Details ***\n");
    printf("%-5s %-15s %-10s %-10s\n", "ID", "Name", "Quantity", "Price");
    printf("--------------------------------------------------\n");
    for (i = 0; i < 3; i++) {
        printf("%-5d %-15s %-10d %-10.2f\n", 
               (ptr + i)->id, 
               (ptr + i)->name, 
               (ptr + i)->quantity, 
               (ptr + i)->price);
    }
    
    
    printf("\nFirst product accessed via pointer as array: ID %d\n", ptr[0].id);


    return 0;
}






