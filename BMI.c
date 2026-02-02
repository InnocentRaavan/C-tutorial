#include <stdio.h>

int main()
{
    float h, w, bmi;
    printf("Enter height (m): ");
    scanf("%f", &h);
    printf("Enter weight (kg): ");
    scanf("%f", &w);
    bmi = w / (h * h);
    printf("Your BMI is: %.2f\n", bmi);

    if(bmi<15)
    printf("Starvation\n");
    else if(bmi>=15.1 && bmi<=17.5)
    printf("Anorexic\n");
    else if(bmi>=17.6 && bmi<=18.5)
    printf("Underweight\n");
    else if(bmi>=18.6 && bmi<=24.9)
    printf("Ideal\n");
    else if(bmi>=25 && bmi<=29.9)
    printf("Overweight\n");
    else if(bmi>=30 && bmi<=30.9)
    printf("Obese Class I\n");
    else if(bmi>=31 && bmi<=40)
    printf("Obese Class II\n");
    else
    printf("Obese Class III\n");
    return 0;
}