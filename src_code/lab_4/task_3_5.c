#include <stdio.h>
#include <stdlib.h>

int main() {
    const int n = 7;
    int arr[n];
    int *px = arr;  // покажчик на масив
    int min_odd, i;
    int odd_found = 0;  // прапорець для визначення наявності непарних чисел

    // Задання першого елемента масиву
    *px = 201;
    printf("arr[0] = %d\n", *px);

    // Введення інших елементів масиву з клавіатури
    for (i = 1; i < n; i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", px + i);  // збереження введеного числа через розіменування покажчика
    }

    // Пошук мінімального непарного елемента
    for (i = 0; i < n; i++) {
        if (*(px + i) % 2 != 0) {  // перевірка на непарність
            if (!odd_found || *(px + i) < min_odd) {
                min_odd = *(px + i);
                odd_found = 1;
            }
        }
    }

    if (odd_found) {
        printf("The minimum odd element in the array is: %d\n", min_odd);
    } else {
        printf("No odd elements found in the array.\n");
    }

    return 0;
}
