#include <stdio.h>

void checkCharacter(char ch) {
    // Check if it's a digit (0-9)
    if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a Digit.\n", ch);
    } 
    // Check if it's an uppercase or lowercase letter
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check if it's a vowel
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("The character '%c' is a Vowel.\n", ch);
        } else {
            printf("The character '%c' is a Consonant.\n", ch);
        }
    } 
    // If it's neither a digit nor a letter, it's a special character
    else {
        printf("The character '%c' is a Special Character.\n", ch);
    }
}

int main() {
    char ch;
    scanf("%c", &ch);

    checkCharacter(ch);

    return 0;
}
