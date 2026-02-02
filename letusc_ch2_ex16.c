#include <stdio.h>
int main()
{
    int h, ts;
    float ct;
    printf("Enter the hardness of the steel");
    scanf("%d", &h);
    printf("Enter the carbon content of the steel");
    scanf("%f", &ct);
    printf("Enter the tensile strength of the steel");
    scanf("%d", &ts);
    if (h > 50 && ct < 0.7 && ts > 5600)
        printf("Grade is 10\n");
    else if (h > 50 && ct < 0.7)
        printf("Grade is 9\n");
    else if (ct < 0.7 && ts > 5600)
        printf("Grade is 8\n");
    else if (h > 50 && ts > 5600)
        printf("Grade is 7\n");
    else if (h > 50 || ct < 0.7 || ts > 5600)
        printf("Grade is 6\n");
    else
        printf("Grade is 5\n");
    return 0;
}