#include <stdio.h>

int main() {
    int a,b;
    scanf("%f", &a,&b);
    if (a > b) {
        printf("True");
    }
    else if (b > a) {
        printf("False");
    }
    else {
        printf("False");
    }
    return 0;
}
