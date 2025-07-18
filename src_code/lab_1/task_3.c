#include <stdio.h>

int main(void) {
    // Змінні для кожного пункту
    float x, z, v, s, f;
    double a, b, c, k, g, h;

    // 1. Введення x, z та обчислення результату
    // printf("Enter x (float): ");
    // scanf("%f", &x);
    // printf("Enter z (float): ");
    // scanf("%f", &z);
    // float res1 = (4.2f * x - z) * 2 / 3.5f;
    // printf("Result 1: %6.2f\n", res1);

    // // 2. Введення a, b, c та обчислення результату
    // printf("Enter a (double): ");
    // scanf("%lf", &a);
    // printf("Enter b (double): ");
    // scanf("%lf", &b);
    // printf("Enter c (double): ");
    // scanf("%lf", &c);
    // double res2 = a + 2.8 * b - c * c;
    // printf("Result 2: %5.3lf\n", res2);

    // // 3. Введення k, g та обчислення результату
    // printf("Enter k (double): ");
    // scanf("%lf", &k);
    // printf("Enter g (double): ");
    // scanf("%lf", &g);
    // double res3 = k * k + (g - k) / 2.3;
    // printf("Result 3: %8.3lf\n", res3);

    // // 4. Введення v, s, f та обчислення результату
    // printf("Enter v (float): ");
    // scanf("%f", &v);
    // printf("Enter s (float): ");
    // scanf("%f", &s);
    // printf("Enter f (float): ");
    // scanf("%f", &f);
    // float res4 = s * s * s / v - f * v;
    // printf("Result 4: %5.4f\n", res4);

    // 5. Введення x, z, h та обчислення результату
    printf("Enter x (double): ");
    scanf("%lf", &x);
    printf("Enter z (double): ");
    scanf("%lf", &z);
    printf("Enter h (double): ");
    scanf("%lf", &h);
    double res5 = x * x * x + z / (h * h);
    printf("Result 5: %7.3lf\n", res5);

    return 0;
}
