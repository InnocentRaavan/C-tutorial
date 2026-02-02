#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    printf("Enter a 5-digit integer: ");
  
    scanf("%d", &n);

    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;

    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;

    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;

    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;

    remainder = n % 10;
    reverse = reverse * 10 + remainder;
  

    printf("Reversed number: %d\n", reverse);

    return 0;
}
