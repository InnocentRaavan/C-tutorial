#include <stdio.h>

int main() {
    label:
    printf("We are inside the label:\n");
    goto end;
        goto label;
        end:
        printf("This line will be skipped due to goto.\n");
    return 0;
}