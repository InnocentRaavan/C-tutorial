#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char str[100];
    fp = fopen("poem.txt", "w");
    if(fp == NULL)
    {
        printf("Error opening file!\n");
    }
    else
    {
        printf("Enter a string to write to the file:\n");
        fgets(str, sizeof(str), stdin);
        fputs(str, fp);
        fclose(fp);
        printf("String written to file successfully.\n");
    }
    return 0;
}