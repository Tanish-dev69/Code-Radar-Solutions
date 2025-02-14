#include <stdio.h>

void checkCharacter(char ch) {
   
    if (ch >= '0' && ch <= '9') {
        printf("Digit", ch);
    } 
    
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel", ch);
        } else {
            printf("Consonant", ch);
        }
    } 
    
    else {
        printf("Special Character", ch);
    }
}

int main() {
    char ch;
    scanf("%c", &ch);

    checkCharacter(ch);

    return 0;
}
