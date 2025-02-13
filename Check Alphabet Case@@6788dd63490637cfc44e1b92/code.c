#include <stdio.h>
int main() {    
        
    char a;    
    scanf("%c", &a);
    if (ch >='A' && ch <= 'Z'){        
        printf("Uppercase");
    } else if (ch<='z'  && ch >='a' ){
        printf("Lowercase");
    } else {
        printf("Not an alphabet");
    }
      
    return 0;
}