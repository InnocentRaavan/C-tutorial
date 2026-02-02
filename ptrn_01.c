#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows for the pattern:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++) 
    {
        for(j=i;j>=1;j--) 
        {
            printf("%d", j);
            printf(" ");  
            printf("\n");
            }
    }
    return 0;
}