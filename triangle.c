#include <stdio.h>

int main() {
    int a,b,c,x,y,z;
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Enter the angles of the triangle:\n");
    scanf("%d %d %d", &x, &y, &z);
    if (a==b && b==c)
    printf("The triangle is equilateral.\n");
    else if (a==b || b==c || a==c)
    printf("The triangle is isosceles.\n");
    if (x>90&&y>90&&z>90)
    printf("The triangle is obtuse.\n");
    else if (x==90||y==90||z==90)
    printf("The triangle is right angled.\n");
    else if (x<90&&y<90&&z<90)
    printf("The triangle is acute angled.\n");

    return 0;
}