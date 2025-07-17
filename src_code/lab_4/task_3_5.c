#include <stdio.h>
#include <stdlib.h>

int main() {
    const int n = 7;
    int arr[n];
    int *px = arr;  
    int min_odd, i;
    int odd_found = 0;  

    *px = 201;
    printf("arr[0] = %d\n", *px);

    for (i = 1; i < n; i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", px + i);  
    }

    for (i = 0; i < n; i++) {
        if (*(px + i) % 2 != 0) {
            if (!odd_found || *(px + i) < min_odd) {
                min_odd = *(px + i);
                odd_found = 1;
            }
        }
    }

    if (odd_found) {
        printf("The minimum odd element in the array is: %d\n", min_odd);
    } else {
        printf("No odd elements found in the array.\n");
    }

    return 0;
}
