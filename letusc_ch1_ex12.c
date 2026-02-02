#include <stdio.h>

int main() {
    float sp, profit, cp, cp_per_item;
    int number_of_items = 15;

    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &sp);

    printf("Enter the total profit earned: ");
    scanf("%f", &profit);

    cp = sp - profit;

    cp_per_item = cp / number_of_items;

    printf("Cost price of one item: ₹%.2f\n", cp_per_item);

    return 0;
}