#include <stdio.h>
int main()
{
    float sal, tax;
    printf(" Enter the income of the employee:\n");
    scanf("%f", &sal);

    if (sal <= 250000)
        tax = 0;
    else if (sal > 250000, sal <= 500000)
        tax = (sal - 250000) * 0.05;
    else if (sal > 500000, sal <= 1000000)
        tax = (250000 * 0.05) + (sal - 500000) * 0.20;
    else // sal > 1000000
        tax = (250000 * 0.05) + (500000 * 0.20) + (sal - 1000000) * 0.30;
    printf(" The tax to be paid is: %.2f\n", tax);
    return 0;
}