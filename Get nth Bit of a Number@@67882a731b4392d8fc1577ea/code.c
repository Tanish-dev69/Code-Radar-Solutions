#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    // Retrieve nth bit by using bitwise AND with (1 << n)
    int bitValue = (num >> n) & 1;

    printf("%d\n", bitValue);

    return 0;
}
