#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10  

int main() {
    int dig[N];
    int i, j, mm, max, tmp;

    srand(time(0));

    for (i = 0; i < N; i++) {
        dig[i] = rand() % 101 - 50; 
    }

    puts("Old array:");
    for (i = 0; i < N; i++) {
        printf("%4d ", dig[i]);
    }
    printf("\n");

    for (i = N - 1; i >= 1; i--) {
        max = dig[0];  
        mm = 0;       
        for (j = 1; j <= i; j++) {
            if (dig[j] > max) {  
                max = dig[j];
                mm = j;
            }
        }
        tmp = dig[i];
        dig[i] = max;
        dig[mm] = tmp;
    }

    puts("Sorted array (descending):");
    for (i = 0; i < N; i++) {
        printf("%4d ", dig[i]);
    }
    printf("\n");

    return 0;
}
