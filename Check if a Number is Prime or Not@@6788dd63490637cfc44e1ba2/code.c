#include <stdio.h>

int isPrime(int num) {
    if (num == 1) return 0;  // 1 is not a prime number
    if (num == 2) return 1;  // 2 is the smallest prime number
    if (num % 2 == 0) return 0; // Eliminate even numbers

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return 0;  // If divisible, not prime
    }
    return 1;
}

int main() {
    int num;
    scanf("%d", &num);
    
    if (isPrime(num))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
