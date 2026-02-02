#include <stdio.h>

int main() {
    int amount_hundreds, total_amount, num_100, num_50, num_10, remaining_amount;

    printf("Enter the amount to be withdrawn in hundreds: ");
    scanf("%d", &amount_hundreds);

    total_amount = amount_hundreds ;
    remaining_amount = total_amount;

    num_100 = remaining_amount / 100;
    remaining_amount = remaining_amount % 100;

    num_50 = remaining_amount / 50;
    remaining_amount = remaining_amount % 50;

    num_10 = remaining_amount / 10;

    printf("Total amount: %d\n", total_amount);
    printf("Number of 100 notes: %d\n", num_100);
    printf("Number of 50 notes: %d\n", num_50);
    printf("Number of 10 notes: %d\n", num_10);

    return 0;
}
