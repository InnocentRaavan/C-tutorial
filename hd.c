#include <stdio.h>

int main() {

    for (int i = 0; i < 2000; i++) {
        if (i % 2 == 0)
            printf("%c", 3); // Heart
        else
            printf("%c", 4); // Diamond
    }
    return 0;
}