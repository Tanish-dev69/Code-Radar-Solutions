#include <stdio.h>

void printBinary(int num) {
    int flag = 0;
    for (int i = 31; i >= 0; i--) {
        if (num & (1 << i)) {
            flag = 1;
            printf("1");
        } else if (flag) {
            printf("0");
        }
    }
    if (!flag) {
        printf("0");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    
    printBinary(num);
    
    return 0;
}
