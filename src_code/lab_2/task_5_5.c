#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c, d, max;
    puts("Input four real numbers (a, b, c, d):");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    printf("Max number: %.2f\n", max);

    if (max > 500) {
        puts("The maximum number is greater than 500.");
    } else if(max < 500){
        puts("The maximum number is less then 500.");
    } else{
        puts("The maximum number is");
    }

    system("pause");
    return 0;
}
