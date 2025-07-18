#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[4][5]; 
    int i, j;
    int product[5]; 

    for (j = 0; j < 5; j++) {
        product[j] = 1;
    }

    printf("Enter elements of the array (4 rows and 5 columns):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nArray arr[4][5]:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct of elements in columns (range 1 to 5):\n");
    for (j = 0; j < 5; j++) {
        for (i = 0; i < 4; i++) {
            if (arr[i][j] >= 1 && arr[i][j] <= 5) {
                product[j] *= arr[i][j];
            }
        }
        printf("Product in column %d = %d\n", j, product[j]);
    }

    system("pause");
    return 0;
}
