#include <stdio.h>

int getCount() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    return n;
}

float getSum(int n) {
    float num, sum = 0.0;
    int i;
    for(i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%f", &num);
        sum += num;
    }
    return sum;
}

void printAverage(float average) {
    printf("Average = %.2f\n", average);
}

int main() {
    int n = getCount();
    float sum = getSum(n);
    float average = sum / n;
    printAverage(average);
    return 0;
}
