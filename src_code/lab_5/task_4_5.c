#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    int n;        
    double *ptr;  

    srand((unsigned int)time(NULL));

    printf("Input size of the array: ");
    scanf("%d", &n);

    ptr = (double*)malloc(n * sizeof(double));

    if (ptr == NULL) { 
        printf("Error allocating memory.\n");
        return 1;
    }

    printf("\nGenerated array:\n");
    for (int i = 0; i < n; i++) {
        ptr[i] = ((double)rand() / RAND_MAX) * 30.0 - 15.0;
        printf("%8.3f ", ptr[i]);
    }
    printf("\n");

    free(ptr);

    return 0;
}
