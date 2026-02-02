#include <stdio.h>
int main()
{
    float temp_f, temp_c;
    printf("Enter temperature in Fahrenheit:");
    scanf("%f", &temp_f);
    temp_c = (temp_f - 32) * 5.0 / 9.0;
    printf("The temperature in Celsius is %.2f degrees\n", temp_c);
    return 0;
}