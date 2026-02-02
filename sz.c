#include <stdio.h>

int main() {
    int myInt;
    char myChar;
    float myFloat;
    double myDouble;

    printf("Size of int: %zu bytes\n", sizeof(myInt));
    printf("Size of char: %zu bytes\n", sizeof(myChar));
    printf("Size of float: %zu bytes\n", sizeof(myFloat));
    printf("Size of double: %zu bytes\n", sizeof(myDouble));

    // You can also get the size of the data type directly
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    return 0;
}