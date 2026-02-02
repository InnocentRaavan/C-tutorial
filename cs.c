#include <stdio.h>
int main()
{
    char ch;
    printf("\n Enter a character to check\n");
    scanf("%c", &ch);
    if (ch>=65 && ch<=90)
    printf("\n Given character is an uppercase letter\n");
    else if (ch>=97 && ch<=122)
    printf("\n Given character is a lowercase letter\n");
    else if (ch>=48 && ch<=57)
    printf("\n Given character is a digit\n");
    else if((ch>=0 && ch<=47) || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>122)
    printf("\n Given character is a special character\n");
    return 0;
}