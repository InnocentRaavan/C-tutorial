#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 0;
    }
    for(i=0; i<n; i++) {
        ptr[i] = i + 1;
    }
    printf("The elements of the array are: ");
    for(i=0; i<n; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}