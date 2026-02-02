#include <stdio.h>
void main()
{
    FILE *fp;
    char filename[100];
    char ch;
    int vowel = 0;

    printf("Enter the name of the file\n");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    while((ch = fgetc(fp))!=EOF)
    {
        printf("%c", ch);

    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    vowel++;
    }
    printf("\nNumber of vowels in the file: %d\n",vowel);
    fclose(fp);
    
}

