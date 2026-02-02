#include <stdio.h>

int main() {
    int n, original, reverse = 0, remainder;

    printf("Enter a 5-digit integer: ");
  
    scanf("%d", &n);
    original = n;

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

    if(reverse == original)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");
    return 0;
}
