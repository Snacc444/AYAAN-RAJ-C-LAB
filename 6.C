#include <stdio.h>

void arithmeticOperations(int a, int b, int *sum, int *difference,
                          int *product, float *quotient) {
    *sum = a + b;
    *difference = a - b;
    *product = a * b;

    if (b != 0)
        *quotient = (float)a / b;
    else
        *quotient = 0;
}

int main() {
    int a, b;
    int sum, difference, product;
    float quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    arithmeticOperations(a, b, &sum, &difference, &product, &quotient);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    if (b == 0)
        printf("Quotient: Division by zero is not allowed.\n");
    else
        printf("Quotient = %.2f\n", quotient);

    return 0;
}
