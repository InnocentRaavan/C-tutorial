#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
        printf("Capital letter\n");
    else if (ch >= 97 && ch <= 122)
        printf("Small case letter\n");
    else if (ch >= 48 && ch <= 57)
        printf("Digit\n");
    else
        printf("Special symbol\n");
}
