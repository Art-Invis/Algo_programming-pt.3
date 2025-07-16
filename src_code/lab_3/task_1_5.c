#include <stdio.h>

int main() {
    int count, sum = 0, i = 0;

    printf("Enter the number of iterations: ");
    scanf("%d", &count);

    while (i < count) {
        sum += (i * 5);  // Add multiples of 5
        i++;
    }

    printf("Sum of multiples of 5: %d\n", sum);
    printf("Last term: %d\n", (i - 1) * 5);
    printf("Number of iterations: %d\n", count);
    return 0;
}
