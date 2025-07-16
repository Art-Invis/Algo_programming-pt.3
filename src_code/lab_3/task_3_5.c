#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    int F;

    for (a = 5; a <= 50; a += 5) {
        for (b = 4; b <= 10; b += 2) {
            F = 5 * a + b * b;

            printf("a=%d, b=%d, F=%d\n", a, b, F);
        }
        printf("\n"); 
    }

    system("pause");
    return 0;
}
