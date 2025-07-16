#include <stdio.h>

#define RESET_COLOR "\x1b[0m"
#define GREEN_COLOR "\x1b[32m"

int main(void) {
    printf("My first program\n");    
    printf("Surname: Gada\n"); 
    
    char s = 'A'; 
    printf("Symbol %c = (%d)10S = (%#o) 8S ", s, s, s); 
    printf("= (%#x)16S size char = %d bytes\n", s, sizeof(s)); 
    
    int a = 78; 
    printf("a = %d size int = %d bytes\n", a, sizeof(a)); 
    
    float b = 56.23; 
    printf("b = %f = %e size float = %d bytes\n", b, b, sizeof(b)); 
    
    short sh = 31; 
    long lg = 1276594074; 
    double db = 456.6466; 
    
    
    printf("short = %d size short = %d bytes\n", sh, sizeof(sh));
    printf("long = %ld size long = %d bytes\n", lg, sizeof(lg));
    printf("double = %lf size double = %d bytes\n", db, sizeof(db));

    puts("\nPress Enter to exit...\n");
    getchar(); 
    return 0;
}

