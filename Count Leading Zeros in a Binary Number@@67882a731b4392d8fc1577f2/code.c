#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num == 0) {
        printf("32\n");
        return 0;
    }

    int leading_zeros = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1)
            break;
        leading_zeros++;
    }

    printf("%d\n", leading_zeros);
    return 0;
}
