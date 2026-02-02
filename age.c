#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);

    if (age>=18) {
        printf("You are eligible to vote.\n");
    } 
    else if(age>10) {
        printf("You are a teenager and you can vote for kids.\n");
    }
    else {
        printf("You are not eligible to vote.\n");
    }
    return 0;
}