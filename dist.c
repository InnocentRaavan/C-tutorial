#include <stdio.h>
void main()
{
    int dist, u, a, t;

    printf("Enter the initial velocity of the object:\n");
    scanf("%d", &u);
    printf("Enter the acceleration:\n");
    scanf("%d", &a);
    printf("Enter the time taken to cover the distance:\n");
    scanf("%d", &t);

    dist = u*t + 0.5*(a*t*t);
    printf("The distance travelled by the object is: %d\n", dist);


}
