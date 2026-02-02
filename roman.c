#include <stdio.h>

void intToRoman(int num)
{
    while (num >= 1000)
    {
        printf("m");
        num -= 1000;
    }
    if (num >= 900)
    {
        printf("cm");
        num -= 900;
    }
    if (num >= 500)
    {
        printf("d");
        num -= 500;
    }
    if (num >= 400)
    {
        printf("cd");
        num -= 400;
    }
    while (num >= 100)
    {
        printf("c");
        num -= 100;
    }
    if (num >= 90)
    {
        printf("xc");
        num -= 90;
    }
    if (num >= 50)
    {
        printf("l");
        num -= 50;
    }
    if (num >= 40)
    {
        printf("xl");
        num -= 40;
    }
    while (num >= 10)
    {
        printf("x");
        num -= 10;
    }
    if (num >= 9)
    {
        printf("ix");
        num -= 9;
    }
    if (num >= 5)
    {
        printf("v");
        num -= 5;
    }
    if (num >= 4)
    {
        printf("iv");
        num -= 4;
    }
    while (num >= 1)
    {
        printf("i");
        num -= 1;
    }
}

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    printf("Roman numeral equivalent of %d is: ", year);
    intToRoman(year);
    printf("\n");

    return 0;
}
