#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *titles[] = {
        "Book Title: The Great Gatsby",  
        "Chapter: The Beginning",         
        "Paragraph: In my younger years..." 
    };

    printf("Titles:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", titles[i]);
    }

    printf("\nSize of pointer array: %zu bytes\n", sizeof(titles));
    for (int i = 0; i < 3; i++) {
        printf("Size of title %d: %zu bytes\n", i + 1, strlen(titles[i]));
    }

    int count_s = 0;
    for (int i = 0; i < strlen(titles[1]); i++) {
        if (titles[1][i] == 'c' || titles[1][i] == 'C') { 
            count_s++;
        }
    }
    printf("\nCount of letter 'c' in the second line: %d\n", count_s);

    system("pause"); 
    return 0;
}

