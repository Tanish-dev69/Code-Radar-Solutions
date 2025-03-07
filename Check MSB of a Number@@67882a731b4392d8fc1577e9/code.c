#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num & 9)
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}

w