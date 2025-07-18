#include <stdio.h>

int main() {
    int number, sum = 0, count = 0;

    printf("Enter numbers (to exit, enter 13): ");

    for (;;) { // Infinite loop
        scanf("%d", &number);

        if (number == 13) {
            break; 
        }

        if (number < 0 && number % 2 != 0) { // Check for negative odd number
            sum += number;  
            count++;        
        }
    }

    printf("Sum of negative odd numbers: %d\n", sum);
    printf("Count of negative odd numbers: %d\n", count);

    return 0;
}
