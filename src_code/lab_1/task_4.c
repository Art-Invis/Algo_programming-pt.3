#include <stdio.h>
#include <math.h> 

int main() {
    double r, S;

    printf("Input the radius of the circle: ");
    scanf("%lf", &r);

    // Обчислення площі круга S = π * r^2
    S = M_PI * r * r;

    printf("Radius: %.2f cm\n", r);
    printf("Area of the circle: %.3f square cm\n", S);

    return 0;
}
