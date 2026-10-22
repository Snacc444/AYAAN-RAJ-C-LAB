#include <stdio.h>

unsigned long long factorial(int n)
{
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}

int main(void)
{
    int n;

    printf("Enter a non-negative integer (0 to 20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Factorial of %d = %llu\n", n, factorial(n));
    return 0;
}