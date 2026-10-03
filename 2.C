#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int signOfNumber(int n) {
    if (n > 0)
        return 1;
    else if (n < 0)
        return -1;
    return 0;
}

int isPrime(int n) {
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i <= n / i; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int isPerfect(int n) {
    int i, sum = 0;

    if (n <= 0)
        return 0;

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isEven(n))
        printf("Even\n");
    else
        printf("Odd\n");

    if (signOfNumber(n) == 1)
        printf("Positive\n");
    else if (signOfNumber(n) == -1)
        printf("Negative\n");
    else
        printf("Zero\n");

    if (isPrime(n))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    if (isPerfect(n))
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");

    return 0;
}