#include <stdio.h>
int main()
{
    int cp, sp, profit, loss;
    printf("Enter the cp and sp of the item: ");
    scanf("%d %d", &cp, &sp);

    if(cp>sp)
    {
        loss = cp-sp;
        printf("Loss = %d\n", loss);
    }
    else 
    {
        profit = sp-cp;
        printf("Profit = %d\n", profit);
    }
    return 0;
}