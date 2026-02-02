#include <stdio.h>
#include <math.h> 
#include <stdlib.h> 

void clear_screen() {
  
}

int main() {
    double num1, num2, result;
    char operation;

    do {
        clear_screen();
        printf("--- C Calculator ---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Power (n^x)\n");
        printf("6. Reciprocal (1/n) for n=4\n");
        printf("7. Percentage (%%)\n");
        printf("8. Negate (change sign)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &operation);

        if (operation == '0') {
            break;
        }

        switch (operation) {
            case '+':
            case '1':
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case '-':
            case '2':
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case '*':
            case '3':
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case '/':
            case '4':
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            case '5': // Power
                printf("Enter base number: ");
                scanf("%lf", &num1);
                printf("Enter exponent: ");
                scanf("%lf", &num2);
                result = pow(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case '6': // Reciprocal (1/n) for n=4
                printf("Enter a number (n): ");
                scanf("%lf", &num1);
                if (num1 != 0) {
                    result = 1.0 / num1;
                    printf("Result (1/n): %.2lf\n", result);
                } else {
                    printf("Error: Cannot calculate 1/0.\n");
                }
                break;
            case '%':
            case '7': // Percentage
                printf("Enter the number: ");
                scanf("%lf", &num1);
                printf("Enter the percentage to find (e.g., 10 for 10%%): ");
                scanf("%lf", &num2);
                result = (num1 * num2) / 100.0;
                printf("Result (%.2lf%% of %.2lf): %.2lf\n", num2, num1, result);
                break;
            case '8': // Negate
                printf("Enter a number: ");
                scanf("%lf", &num1);
                result = -num1;
                printf("Result (negated): %.2lf\n", result);
                break;
            default:
                printf("Invalid operation. Please try again.\n");
        }
        printf("\nPress Enter to continue...");
        
        while (getchar() != '\n'); 
        getchar(); 
    } while (operation != '0');

    printf("Exiting calculator. Goodbye!\n");
    return 0;
}

