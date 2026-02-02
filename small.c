#include <stdio.h>

int main() {
    int num1, num2, num3;

    
    printf("Enter three unequal numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    if (num1 == num2 || num1 == num3 || num2 == num3) {
        printf("Error: The numbers entered are not unequal. Please enter three distinct numbers.\n");
        return 1; 
    }
    if (num1==0 || num2==0 || num3==0) {
        printf("Error: Zero is not allowed. Please enter three non-zero distinct numbers.\n");
        return 1; 
    }
    
    if ((num1 < num2 && num1 > num3) || (num1 > num2 && num1 < num3)) {
        printf("The second smallest number is: %d\n", num1);
    } else if ((num2 < num1 && num2 > num3) || (num2 > num1 && num2 < num3)) {
        printf("The second smallest number is: %d\n", num2);
    } else {
        printf("The second smallest number is: %d\n", num3);
    }

    return 0;
}

