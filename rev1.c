#include <stdio.h>
void main()
{
    int x = 5;
    int y = 8;
    int z = 3;
    int temp;
    printf("Before reverse\n x=%d\n y=%d\n z=%d\n",x,y,z);
    
    x = temp;
    y = z;
    z = temp;
    
    printf("After reverse\n x=%d\n y=%d\n z=%d\n",x,y,z);

}