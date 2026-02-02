#include <stdio.h>
float multiply(int x, float y);
void main()
{
    int a;
    float b;
    printf("Enter an integer and a float number: ");
    scanf("%d %f", &a, &b);
    float result = multiply(a, b);
    printf("Multiplication of %d and %.2f is: %.2f\n", a, b, result);
}
float multiply(int x, float y)
{
    float result;
    result = x * y;
    return result;
}