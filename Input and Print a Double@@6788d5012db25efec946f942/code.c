#include <stdio.h>

int main() {
    float f;
    printf("Enter a floating-point number: ");  // Added prompt
    scanf("%f", &f);
    printf("You entered: %.4f\n", f);  // Added newline
    return 0;
}
