#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int n;
    

    puts("Input an integer:");
    scanf("%d", &n);

    if (n > 0) {
        // Якщо додатне, перевіряємо кратність 5
        if (n % 5 == 0) {
            printf("The number %d is positive and divisible by 5.\n", n);
        } else {
            printf("The number %d is positive but not divisible by 5.\n", n);
        }
    } else {
        // Якщо не додатне, перевіряємо чи менше за -100
        if (n < -100) {
            printf("The number %d is negative and less than -100.\n", n);
        } else {
            printf("The number %d is negative but greater than or equal to -100.\n", n);
        }
    }

    system("pause");
    return 0;
}
