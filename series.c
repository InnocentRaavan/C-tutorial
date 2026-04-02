#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of the series: ");
    scanf("%d",&n);
    printf("Series: ");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i*2);
    }
    printf("\n");
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=i*2;
    printf("Sum of even numbers is %d",sum);
    return 0;
}