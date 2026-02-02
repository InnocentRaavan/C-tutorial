#include <stdio.h>
float avg()
{
    int a, b, c;
    float average;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    average = (a + b + c) / 3.0;
    return average;
}
int main()
{
    float result = avg();
    printf("The average is %.2f\n", result);
    return 0;
}