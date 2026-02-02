#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a letter to check the case");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z')
    printf("The letter is in Uppercase");
    else if(ch>='a' && ch<='z')
    printf("The letter is in Lowercase");
    return 0;
}