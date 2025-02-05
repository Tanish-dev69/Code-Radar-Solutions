#include <stdio.h>

int main() {
    double num;  // Declare a double variable
    scanf("%lf", &num);  // Read input using %lf format specifier
    printf("You entered: %.4lf\n", num);  // Print with 4 decimal places
    return 0;
}
