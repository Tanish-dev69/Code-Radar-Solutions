#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num == 0) {
        printf("32\n");
        return 0;
    }

    int trailing_zeros = 0;
    while ((num & 1) == 0) {
        trailing_zeros++;
        num >>= 1;
    }

    printf("%d\n", trailing_zeros);
    return 0;
}
