#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 5; 
const int M = 4; 

int main() {
    float A[N][M]; 
    srand((unsigned)time(NULL)); 

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            A[i][j] = (rand() % 710 / 10.0) - 50.0; 
        }
    }

    puts("Array A:");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%8.1f", A[i][j]);
        }
        printf("\n");
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (*(A[i] + j) < 0) { 
                count++;
            }
        }
    }

    printf("Count of negative numbers = %d\n", count);

    system("pause");
    return 0;
}
