#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    switch (age) {
        case 3:
            printf("The age is 3.\n");
            break;
        case 12:
            printf("The age is 12. \n");
            break;
        case 23:
            printf("The age is 23.\n");
            break;
        default:
            printf("age is not 3, 12 or 23. \n");
            break;
    }

    return 0;
}