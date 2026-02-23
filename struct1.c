#include <stdio.h>
void main()
{
    struct book{
        char name;
        float price;
        int page;
    };
    struct book b[4];
    int i;

    for(i=0;i<=3;i++)
    {
        printf("\n Enter the name of book, price and no. of pages\n");
        scanf("%c %f %d", &b[i].name,&b[i].price,&b[i].page);
    }
    {
        printf("\n The name of book, price and no. of pages\n");
        for(i=0;i<=3;i++)
        {
            printf("%c %f %d\n", b[i].name,b[i].price,b[i].page);
        }
    }


}   