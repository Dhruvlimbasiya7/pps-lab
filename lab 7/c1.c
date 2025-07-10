//print prime numbers between 1 to N.
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Prime numbers between 1 to %d are:\n", N);
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}