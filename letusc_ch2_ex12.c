#include <stdio.h>

int main() {
    int x, y;

    printf("Enter coordinates (x, y): ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
        printf("Point lies at the origin\n");
    else if (y == 0)
        printf("Point lies on the x-axis\n");
    else if (x == 0)
        printf("Point lies on the y-axis\n");
    else
        printf("Point lies elsewhere in the plane\n");

    return 0;
}
