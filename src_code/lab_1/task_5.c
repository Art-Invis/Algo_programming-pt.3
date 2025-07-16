#include <stdio.h>
#include <limits.h>  // Для використання меж числових типів



int main(void) {
    // 1. Додати до значень змінних числа, щоб нові значення стали максимальними та більшими за максимальне значення
    // short x1 = 32763;
    // unsigned short y1 = 65531;
    // char z1 = 122;
    // unsigned char v1 = 2;

    // short x2 = SHRT_MAX;  // Максимальне значення для short
    // unsigned short y2 = USHRT_MAX;  // Максимальне значення для unsigned short
    // char z2 = CHAR_MAX;  // Максимальне значення для char
    // unsigned char v2 = UCHAR_MAX;  // Максимальне значення для unsigned char

    // short x3 = x2 + 1;
    // unsigned short y3 = y2 + 1;
    // char z3 = z2 + 1;
    // unsigned char v3 = v2 + 1;

    // printf(RED_COLOR "Task 1:\n" RESET_COLOR);
    // printf("short: x1=%d, x2=%d, x3=%d\n", x1, x2, x3);
    // printf("unsigned short: y1=%u, y2=%u, y3=%u\n", y1, y2, y3);
    // printf("char: z1=%d, z2=%d, z3=%d\n", z1, z2, z3);
    // printf("unsigned char: v1=%u, v2=%u, v3=%u\n", v1, v2, v3);
    // printf("\n");

    // // 2. Відняти від значень змінних числа, щоб нові значення стали мінімальними та меншими за мінімальне значення
    // x1 = -32763;
    // y1 = 31;
    // z1 = -120;
    // v1 = 20;

    // short x4 = SHRT_MIN;  // Мінімальне значення для short
    // unsigned short y4 = 0;  // Мінімальне значення для unsigned short
    // char z4 = CHAR_MIN;  // Мінімальне значення для char
    // unsigned char v4 = 0;  // Мінімальне значення для unsigned char

    // short x5 = x4 - 1;
    // unsigned short y5 = y4 - 1;
    // char z5 = z4 - 1;
    // unsigned char v5 = v4 - 1;

    // printf(GREEN_COLOR "Task 2:\n" RESET_COLOR);
    // printf("short: x1=%d, x4=%d, x5=%d\n", x1, x4, x5);
    // printf("unsigned short: y1=%u, y4=%u, y5=%u\n", y1, y4, y5);
    // printf("char: z1=%d, z4=%d, z5=%d\n", z1, z4, z5);
    // printf("unsigned char: v1=%u, v4=%u, v5=%u\n", v1, v4, v5);
    // printf("\n");

    // // 3. Додати до значень змінних числа, щоб нові значення стали максимальними та більшими за максимальне значення
    // x1 = 30;
    // y1 = 35000;
    // z1 = -25;
    // v1 = 20;

    // x2 = SHRT_MAX;
    // y2 = USHRT_MAX;
    // z2 = CHAR_MAX;
    // v2 = UCHAR_MAX;

    // x3 = x2 + 1;
    // y3 = y2 + 1;
    // z3 = z2 + 1;
    // v3 = v2 + 1;

    // printf(YELLOW_COLOR "Task 3:\n" RESET_COLOR);
    // printf("short: x1=%d, x2=%d, x3=%d\n", x1, x2, x3);
    // printf("unsigned short: y1=%u, y2=%u, y3=%u\n", y1, y2, y3);
    // printf("char: z1=%d, z2=%d, z3=%d\n", z1, z2, z3);
    // printf("unsigned char: v1=%u, v2=%u, v3=%u\n", v1, v2, v3);
    // printf("\n");

    // // 4. Відняти від значень змінних числа, щоб нові значення стали мінімальними та меншими за мінімальне значення
    // x1 = -32000;
    // y1 = 65530;
    // z1 = -108;
    // v1 = 240;

    // x2 = SHRT_MIN;
    // y2 = 0;
    // z2 = CHAR_MIN;
    // v2 = 0;

    // x3 = x2 - 1;
    // y3 = y2 - 1;
    // z3 = z2 - 1;
    // v3 = v2 - 1;

    // printf(BLUE_COLOR "Task 4:\n" RESET_COLOR);
    // printf("short: x1=%d, x2=%d, x3=%d\n", x1, x2, x3);
    // printf("unsigned short: y1=%u, y2=%u, y3=%u\n", y1, y2, y3);
    // printf("char: z1=%d, z2=%d, z3=%d\n", z1, z2, z3);
    // printf("unsigned char: v1=%u, v2=%u, v3=%u\n", v1, v2, v3);
    // printf("\n");

    // 5. Додати до значень змінних числа, щоб нові значення змінних стали максимальними та більшими за максимальне значення
    int x6 = 2147483645;
    unsigned int y6 = 4294967290;
    char z6 = 125;
    unsigned char v6 = 252;

    int x7 = INT_MAX;
    unsigned int y7 = UINT_MAX;
    char z7 = CHAR_MAX;
    unsigned char v7 = UCHAR_MAX;

    int x8 = x7 + 1;
    unsigned int y8 = y7 + 1;
    char z8 = z7 + 1;
    unsigned char v8 = v7 + 1;

    printf("Task 5:\n");
    printf("int: x1=%d, x7=%d, x8=%d\n", x6, x7, x8);
    printf("unsigned int: y1=%u, y7=%u, y8=%u\n", y6, y7, y8);
    printf("char: z1=%d, z7=%d, z8=%d\n", z6, z7, z8);
    printf("unsigned char: v1=%u, v7=%u, v8=%u\n", v6, v7, v8);

    return 0;
}
