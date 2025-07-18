#include <stdio.h>
#include <stdlib.h>

int main() {
    int month;
    puts("Input month number (1-12):");
    scanf("%d", &month);

    if (month >= 1 && month <= 12) {
        switch (month) {
            case 1: case 2: case 3:
                puts("This is the 1st quarter.");
                break;
            case 4: case 5: case 6:
                puts("This is the 2nd quarter.");
                break;
            case 7: case 8: case 9:
                puts("This is the 3rd quarter.");
                break;
            case 10: case 11: case 12:
                puts("This is the 4th quarter.");
                break;
        }
    } else {
        puts("Error! Enter a value from 1 to 12.");
    }

    system("pause");
    return 0;
}
