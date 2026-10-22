#include <stdio.h>

void printFibonacci(int remaining, unsigned long long first, unsigned long long second)
{
    if (remaining <= 0)
        return;

    printf("%llu ", first);

    if (remaining > 1)
        printFibonacci(remaining - 1, second, first + second);
}

int main(void)
{
    int n;

    printf("Enter the number of terms (0 to 94): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 94) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Fibonacci series: ");
    printFibonacci(n, 0, 1);
    printf("\n");

    return 0;
}
