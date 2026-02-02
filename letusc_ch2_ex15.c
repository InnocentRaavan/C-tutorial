#include <stdio.h>
void main()
{
    char health, location, g;
    int age;
    printf("Enter health (e for excellent, p for poor): ");
    scanf(" %c", &health);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter location (c for city, v for village): ");
    scanf(" %c", &location);
    printf("Enter gender (m for male, f for female): ");
    scanf(" %c", &g);

    if (health == 'e' && age >= 25 && age <= 35 && location == 'c' && g == 'm')
    {
        printf("Insured\nPremium = Rs. 4 per thousand\nMax policy = Rs. 200000\n");
    }
    else if (health == 'e' && age >= 25 && age <= 35 && location == 'c' && g == 'f')
    {
        printf("Insured\nPremium = Rs. 3 per thousand\nMax policy = Rs. 100000\n");
    }
    else if (health == 'p' && age >= 25 && age <= 35 && location == 'v' && g == 'm')
    {
        printf("Insured\nPremium = Rs. 6 per thousand\nMax policy = Rs. 10000\n");
    }
    else
    {
        printf("Not insured\n");
    }
}
