#include <stdio.h>

int main()
{
    char g;
    int yos,qual,sal=0;
    printf ("Enter your gender (M/F): ");
    scanf ("%c",&g);
    printf ("Enter your years of service: ");
    scanf ("%d",&yos);
    printf ("Enter your qualification level (0=G, 1=PG): ");
    scanf ("%d",&qual);
    if (g=='M' && yos>=10 && qual==1)
    sal=15000;
    else if(g=='M' && yos>=10 && qual==0 || yos<10 && qual==1)
    sal=10000;
    else if(g=='M' && yos<10 && qual==0)
    sal=7000;
    else if(g=='F' && yos>=10 && qual==1)
    sal=12000;
    else if(g=='F' && yos>=10 && qual==0)
    sal=9000;
    else if(g=='F' && yos<10 && qual==1)
    sal=8000;
    else if(g=='F' && yos<10 && qual==0)
    sal=6000; 

    printf ("The salary is: %d\n",sal);
    return 0;
}