#include <stdio.h>
#include <stdlib.h>

int main() {
    double a;                
    double sum = 0;         
    double negativeSum = 0; 
    int negativeCount = 0;  
    int n = 0;              

    puts("Input up to 15 real numbers (enter -100 to stop):");

    while (n < 15) {
        scanf("%lf", &a); 

        if (a == -100) {  
            break;
        }

        sum += a; 
        n++;     

        if (a < 0) { 
            negativeSum += a; 
            negativeCount++;   
        }
    }

    printf("Total numbers entered: %d\n", n);
    printf("Sum of all numbers: %.2f\n", sum);
    printf("Sum of negative numbers: %.2f\n", negativeSum);
    printf("Count of negative numbers: %d\n", negativeCount);

    system("pause");
    return 0;
}
