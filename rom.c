#include <stdio.h>

int romanise(int, int, char);
int main()
{
    int yr;
    printf("Enter a year: ");
    scanf("%d", &yr);
    yr= romanise(yr, 1000, 'M');
    yr= romanise(yr, 500, 'D');
    yr= romanise(yr, 100, 'C');
    yr= romanise(yr, 50, 'L');
    yr= romanise(yr, 10, 'X');
    yr= romanise(yr, 5, 'V');
    yr= romanise(yr, 1, 'I');
    return 0;
}
int romanise(int y, int k, char ch)
{
    int n = y / k;
    for(int i = 0; i < n; i++)
    {
        printf("%c", ch);
    }
    return y % k;
}