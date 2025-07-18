#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int n;
    puts("Input number:");
    scanf("%d", &n);

    // Перевірка, чи є число парним
    if (n % 2 == 0)
        printf("Number %d is even\n", n);
    else
        printf("Number %d is odd\n", n);

    // Перевірка, чи ділиться число на 5
    if (n % 5 == 0)
        printf("Number %d is divisible by 5\n", n);
    else
        printf("Number %d is not divisible by 5\n", n);

    system("pause");
    return 0;
}
