#include <stdio.h>

int main() {
    int num, original, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num; 

    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    if (original == reversed) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}