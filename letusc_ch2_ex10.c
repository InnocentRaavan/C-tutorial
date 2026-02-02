#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;

    printf("Enter coordinates of the first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter coordinates of the second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    printf("Enter coordinates of the third point (x3 y3): ");
    scanf("%d %d", &x3, &y3);

    int val = (y2 - y1) * (x3 - x2) - (y3 - y2) * (x2 - x1);

    if (val == 0) {
        printf("The three points fall on one straight line.\n");
    } else {
        printf("The three points do not fall on one straight line.\n");
    }

    return 0;
}
