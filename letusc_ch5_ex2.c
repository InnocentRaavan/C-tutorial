#include <stdio.h>

void prime(int n, int i) {
    if (n == 1) return;

    if (n % i == 0) {
        printf("%d ", i);
        prime(n / i, i);
    } else {
        prime(n, i + 1);
    }
}

void main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);
    prime(num, 2);

    printf("\n");
}
