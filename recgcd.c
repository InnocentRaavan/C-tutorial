#include <stdio.h>

// Recursive function to calculate GCD
int gcd(int a, int b) {
    // Base case: if the second number (b) is 0, the first number (a) is the GCD
    if (b == 0) {
        return a;
    }
    // Recursive case: call the function with the second number (b)
    // and the remainder of the first number divided by the second (a % b)
    else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Call the recursive function and print the result
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
