#include <stdio.h>
#include <stdlib.h> // для rand() і srand()
#include <time.h>   // для time()

int main() {
    const int n = 14;
    int a[n], i, odd_count = 0;

    srand((unsigned)time(NULL)); // Запуск генератора випадкових чисел

    // Заповнення масиву випадковими числами від -30 до 30
    for (i = 0; i < n; i++) {
        a[i] = rand() % 61 - 30; // Генерація чисел від -30 до 30
        printf("a[%d] = %d\n", i, a[i]);

        // Перевірка, чи є число непарним
        if (a[i] % 2 != 0) {
            odd_count++;
        }
    }

    // Виведення кількості непарних чисел
    printf("\nTotal number of odd values: %d\n", odd_count);

    return 0;
}
