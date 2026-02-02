#include <stdio.h>

/* Define structure */
struct fruit {
    char name[20];
    char color[15];
    float price_per_kg;
};

int main() {
    struct fruit f[3];
    int i;

    /* Input fruit details */
    for (i = 0; i < 3; i++) {
        printf("\nEnter details of Fruit %d\n", i + 1);

        printf("Enter fruit name: ");
        scanf("%s", f[i].name);

        printf("Enter fruit color: ");
        scanf("%s", f[i].color);

        printf("Enter price per kg: ");
        scanf("%f", &f[i].price_per_kg);
    }

    /* Display fruit details */
    printf("\n--- Fruit Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nFruit %d\n", i + 1);
        printf("Name  : %s\n", f[i].name);
        printf("Color : %s\n", f[i].color);
        printf("Price : %.2f per kg\n", f[i].price_per_kg);
    }

    return 0;
}