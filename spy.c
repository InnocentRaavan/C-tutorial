#include <stdio.h>

int main() {
    int n, sum = 0, product = 1;
    int digit, original_number;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    original_number = n; 

    while (n != 0) {
        digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }

    if (sum == product) {
        printf("%d is a spy number\n", original_number);
    } else {
        printf("%d is not a spy number\n", original_number);
    }
    
    return 0;
}
