#include <stdio.h>
int main() {    
        
    char a;    
    scanf("%c", &a);
    if (ch>='A'){        
        printf("Uppercase");
    } else if (ch<='z'){
        printf("Lowercase");
    } else {
        printf("Not an alphabet");
    }
      
    return 0;
}