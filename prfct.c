#include <stdio.h>

int main() {
    int i, j, sum_divisors;
    int total_perfect_sum = 0;

    printf("Perfect numbers between 1 and 500 are:\n");

  
    for (i = 1; i <= 500; i++) {
        sum_divisors = 0; 
       
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum_divisors += j;
            }
        }

        
        if (sum_divisors == i) {
            printf("%d\n", i);
            total_perfect_sum += i; 
        }
    }

    printf("\nSum of perfect numbers between 1 and 500 is: %d\n", total_perfect_sum);

    return 0;
}