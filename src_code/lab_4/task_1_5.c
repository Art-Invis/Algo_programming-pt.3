#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int arr[7], i;
    int sum_of_squares = 0;

    // Input array elements
    printf("Enter 7 integers:\n");
    for (i = 0; i < 7; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Output array elements
    printf("Array elements:\n");
    for (i = 0; i < 7; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Calculate sum of squares of negative elements
    for (i = 0; i < 7; i++) {
        if (arr[i] < 0) {
            sum_of_squares += arr[i] * arr[i];
        }
    }

    // Output result
    printf("Sum of squares of negative elements: %d\n", sum_of_squares);

    system("pause");
    return 0;
}
