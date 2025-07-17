#include <stdio.h>
#include <string.h>

#define K 100

int main() {
    char book[K], message[K] = " has appeared in the library.";
    int lengthBook, lengthMessage, totalLength;

    printf("Enter the book title and author's last name: ");
    fgets(book, K, stdin); 

    size_t len = strlen(book);
    if (len > 0 && book[len-1] == '\n') {
        book[len-1] = '\0';
    }

    lengthBook = strlen(book);

    printf("\nBook title and author's last name: %s\n", book);
    printf("Number of characters in the book string: %d\n", lengthBook);

    lengthMessage = strlen(message);
    printf("Number of characters in the message string: %d\n", lengthMessage);

    strcat(book, message);

    totalLength = strlen(book);
    printf("\nFinal message: %s\n", book);
    printf("Total number of characters in the final string: %d\n", totalLength);

    return 0;
}
