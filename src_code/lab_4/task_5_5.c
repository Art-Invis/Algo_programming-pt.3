#include <stdio.h>
#include <string.h>

#define K 100

int main() {
    char book[K], message[K] = " has appeared in the library.";
    int lengthBook, lengthMessage, totalLength;

    // Введення назви книги та прізвища автора
    printf("Enter the book title and author's last name: ");
    fgets(book, K, stdin);  // використовується fgets для введення рядка з пробілами

    // Видалення зайвого символа нового рядка, який може з'явитися після вводу з fgets
    size_t len = strlen(book);
    if (len > 0 && book[len-1] == '\n') {
        book[len-1] = '\0';
    }

    // Підрахунок кількості символів у рядку з назвою книги
    lengthBook = strlen(book);

    // Виведення повідомлення про введену книгу та автора
    printf("\nBook title and author's last name: %s\n", book);
    printf("Number of characters in the book string: %d\n", lengthBook);

    // Підрахунок кількості символів у повідомленні
    lengthMessage = strlen(message);
    printf("Number of characters in the message string: %d\n", lengthMessage);

    // Додавання повідомлення до першого рядка
    strcat(book, message);

    // Підрахунок загальної кількості символів у сумарному рядку
    totalLength = strlen(book);
    printf("\nFinal message: %s\n", book);
    printf("Total number of characters in the final string: %d\n", totalLength);

    return 0;
}
