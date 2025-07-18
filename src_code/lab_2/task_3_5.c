#include <stdio.h>
#include <stdlib.h>


int main(void) {
    char letter;

    puts("Input the first letter of a tree:");
    scanf(" %c", &letter);  

    letter = tolower(letter);

    // Використання оператора switch для вибору дерева за першою буквою
    switch (letter) {
        case 'o':
            printf("Oak\n");
            break;
        case 'p':
            printf("Pine\n");
            break;
        case 'm':
            printf("Maple\n");
            break;
        case 'b':
            printf("Birch\n");
            break;
        case 's':
            printf("Spruce\n");
            break;
        case 'a':
            printf("Alder\n");
            break;
        default:
            printf("Error: Unknown tree starting with '%c'\n", letter);
            break;
    }

    system("pause");
    return 0;
}
