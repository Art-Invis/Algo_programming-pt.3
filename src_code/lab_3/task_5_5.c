#include <stdio.h>
#include <stdlib.h>

int main() {
    double numbers[4];  
    double maxNumber;   
    int count = 0;      

    for (int i = 0; i < 4; i++) {
        printf("Input real number %d: ", i + 1);
        scanf("%lf", &numbers[i]); 
        count++;
    }

    maxNumber = numbers[0];
    for (int i = 1; i < count; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i]; 
        }
    }

    printf("The largest number is: %.2f\n", maxNumber);
    if (maxNumber > 500) {
        printf("The largest number is greater than 500.\n");
    } else {
        printf("The largest number is not greater than 500.\n");
    }

    system("pause");
    return 0;
}
