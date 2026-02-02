#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    struct student shubh, arunavo, harry;
    shubh.id = 1;
    arunavo.id = 2;
    harry.id = 3;

    shubh.marks = 190;
    arunavo.marks = 295;
    harry.marks = 392; 

    shubh.fav_char = 'r';
    arunavo.fav_char = 'r';
    harry.fav_char = 'a'; 

    strcpy(shubh.name, "Shubh");
    strcpy(arunavo.name, "Arunavo Ghosh");
    strcpy(harry.name, "Harry Potter");

    printf("Shubh's id is %d\n", shubh.id);
    printf("Shubh got %d marks\n", shubh.marks);
    printf("Shubh's fav char is %c\n", shubh.fav_char);
    printf("Shubh's name is %s\n", shubh.name);
    printf("\t");
    printf("Arunavo's id is %d\n", arunavo.id);
    printf("Arunavo got %d marks\n", arunavo.marks);
    printf("Arunavo's fav char is %c\n", arunavo.fav_char);
    printf("Arunavo's name is %s\n", arunavo.name);
    printf("\t");
    printf("Harry's id is %d\n", harry.id);
    printf("Harry got %d marks\n", harry.marks); 
    printf("Harry's fav char is %c\n", harry.fav_char);
    printf("Harry's name is %s\n", harry.name);
    printf("\t");
    return 0;
}