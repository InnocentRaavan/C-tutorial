#include <stdio.h>

int main()
{
    int start_range, end_range;
    long long int sum_even = 0;
    long long int sum_odd = 0;

    printf("Enter the starting number of the range: ");
    scanf("%d", &start_range);

    printf("Enter the ending number of the range: ");
    scanf("%d", &end_range);

    printf("\n--- Numbers within the range %d to %d ---\n", start_range, end_range);
    printf("-----------------------------------------\n");
    printf("| Type  | Numbers                       | Sum         |\n");
    printf("-----------------------------------------\n");
    printf("| Even  |");
    for (int i = start_range; i <= end_range; i++)
    {
        if (i % 2 == 0)
        {
            printf(" %d", i);
            sum_even += i;
        }
    }
    printf(" | %-11lld |\n", sum_even);
    printf("-----------------------------------------\n");

    printf("| Odd   |");
    for (int i = start_range; i <= end_range; i++)
    {
        if (i % 2 != 0)
        {
            printf(" %d", i);
            sum_odd += i;
        }
    }
    printf(" | %-11lld |\n", sum_odd);
    printf("-----------------------------------------\n");

    return 0;
}
