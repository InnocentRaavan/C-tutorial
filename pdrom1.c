#include <stdio.h>


int isPalindromeInt(int num) {
    int reversed = 0, remainder, original = num;

    if (num < 0) {
        return 0;
    }

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int intNum;

  
    printf("Enter an integer: ");
    scanf("%d", &intNum);

    if (isPalindromeInt(intNum)) {
        printf("%d is a palindrome.\n", intNum);
    } else {
        printf("%d is not a palindrome.\n", intNum);
    }

    
    printf("\nNote: Checking for palindrome property is typically not applied to floating-point numbers in the same way as integers, as reversing digits of a float does not usually yield a meaningful 'palindrome' state.\n");

    return 0;
}
