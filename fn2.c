#include <stdio.h>
#include <math.h>
void calculate(int a, int b, int c, int d, int e)
{
    int sum = a + b + c + d + e;
    float average = sum / 5;
    float sd = sqrtf((a - average) * (a - average) + 
                     (b - average) * (b - average) + 
                     (c - average) * (c - average) + 
                     (d - average) * (d - average) + 
                     (e - average) * (e - average)) / 5;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Standard Deviation: %.2f\n", sd);
}

void main()
{
    int num1, num2, num3, num4, num5;
    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    calculate(num1, num2, num3, num4, num5);
}