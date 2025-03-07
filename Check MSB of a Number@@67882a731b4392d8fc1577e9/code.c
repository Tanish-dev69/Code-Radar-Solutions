#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    // Check if MSB is set (MSB in a 32-bit integer is 1 << 31)
    if (num & (1 << 31)) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}
