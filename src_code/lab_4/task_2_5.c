#include <stdio.h>
#include <stdlib.h>
#include <time.h>   
int main() {
    const int n = 14;
    int a[n], i, odd_count = 0;

    srand((unsigned)time(NULL)); 
    for (i = 0; i < n; i++) {
        a[i] = rand() % 61 - 30; 
        printf("a[%d] = %d\n", i, a[i]);

        if (a[i] % 2 != 0) {
            odd_count++;
        }
    }

    printf("\nTotal number of odd values: %d\n", odd_count);

    return 0;
}
