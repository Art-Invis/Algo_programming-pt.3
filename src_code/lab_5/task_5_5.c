#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main(void) {
    int i, j, N;
    printf("Input the size of the square matrix: "); 
    scanf("%d", &N);

    int **matr1 = (int**)malloc(N * sizeof(int*));
    for (i = 0; i < N; i++) {
        matr1[i] = (int*)malloc(N * sizeof(int));
    }

    srand((unsigned)time(NULL));
    puts("\nMatrix 1:");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matr1[i][j] = rand() % 201 - 100;
            printf("%8d", matr1[i][j]);
        }
        printf("\n");
    }

    int **matr2 = (int**)malloc(N * sizeof(int*));
    for (i = 0; i < N; i++) {
        matr2[i] = (int*)malloc(N * sizeof(int));
    }

    puts("\nMatrix 2:");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matr2[i][j] = rand() % 101 - 50;
            printf("%8d", matr2[i][j]);
        }
        printf("\n");
    }

    int **matr3 = (int**)malloc(N * sizeof(int*));
    for (i = 0; i < N; i++) {
        matr3[i] = (int*)malloc(N * sizeof(int));
    }

    puts("\nMatrix 3 (Sum of absolute values of Matrix 1 and Matrix 2):");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matr3[i][j] = abs(matr1[i][j]) + abs(matr2[i][j]);
            printf("%8d", matr3[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < N; i++) {
        free(matr1[i]);
        free(matr2[i]);
        free(matr3[i]);
    }
    free(matr1);
    free(matr2);
    free(matr3);

    return 0;
}
