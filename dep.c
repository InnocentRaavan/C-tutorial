#include <stdio.h>
int main()
{
    int yos;
    float price, dep, salvage_value;

    printf("Enter the purchase price of the item:\n");
    scanf("%f", &price);
    printf("Enter the years of service:\n");
    scanf("%d",&yos);
    printf("Enter the salvage value of:\n");
    scanf("%f", &salvage_value);

    dep = (price - salvage_value) / yos;
    printf("The value of the item depriciates from %f rs to %f rs after %d yrs", price, dep, yos);

    return 0;
}