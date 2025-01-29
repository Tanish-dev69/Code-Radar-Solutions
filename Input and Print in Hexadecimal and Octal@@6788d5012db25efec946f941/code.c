#include <stdio.h>

int main() {
    int num;
    
    // Taking input
    scanf("%d", &num);
    
    // Printing in hexadecimal and octal formats
    printf("Hexadecimal: %X\n", num);  // %X prints uppercase hexadecimal
    printf("Octal: %o\n", num);        // %o prints octal
    
    return 0;
}
