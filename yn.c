#include <stdio.h>
int main()
{
    int num;
    char another;
    do{
        printf("Enter a number:  ");
        scanf("%d", &num);
        printf("Square of %d is %d\n", num, num * num);
        printf("\nWould you like to enter another number? (y/n): ");
        scanf(" %c", &another);
    }while(another == 'y' || another == 'Y');


    return 0;
}