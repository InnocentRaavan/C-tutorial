#include <stdio.h>
int main()
{
    int choice;
    char suite=3;
    printf("Enter your choice of suite\n1. Diamond\n2. Club\n3. Heart\n");
    scanf("%d",&choice);
    switch(suite)
{
    case 1:
    printf("Diamond\n");
    case 2:
    printf("Club\n");
    default:
    printf("Heart\n");
}
    printf("I thought any one wears a suite\n");
    return 0;
}