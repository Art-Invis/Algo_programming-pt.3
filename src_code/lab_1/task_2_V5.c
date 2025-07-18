#include <stdio.h>

int main(void) {
    int a1 = 5, a2 = 13, b1, b2, b3;
    float f1 = 4.5, f2 = 1.8, r1, r2;

    a2 -= a1 + 5;  
    b1 = a1 + a2 * 2;  
    b2 = a1 > a2; 
    b3 = b2++;  

    r1 = f1 + f2 / 2;  
    r2 = (f1 > f2) ? (f1 + 1.2) : (f2 - 1.4);  

    printf("a2 = %d b1 = %d b2 = %d b3 = %d\n", a2, b1, b2, b3);
    printf("r1 = %.2f r2 = %.2f\n", r1, r2);

    return 0;
}
