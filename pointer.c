#include <stdio.h>

int main() {
    int a = 76;
    int *ptr = &a;
    int *ptr2 = NULL;
    printf("Hello, World!\n");
    printf("The value of a is: %d\n", a);
    printf("The address of a is: %p\n", (void*)&a);
    printf("The address stored in ptr is: %p\n", (void*)&ptr);
    printf("The address ofsome garbage is : %p\n", ptr2);
    printf("The value pointed to by ptr is: %p\n", *ptr);
    return 0;
}