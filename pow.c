#include <stdio.h>

float power(float,int);
int main()
{
    float x,pow;
    int y;
    printf("Enter base and exponent: ");
    scanf("%f %d", &x, &y);
    pow = power(x, y);
    printf("%f raised to the power %d is %f\n", x, y, pow);
    return 0;
}
float power(float x, int y)
{
    float p = 1.0;
    for(int i = 0; i < y; i++)
    {
        p = p * x;
    }
    return p;
}
