//* Write a C program that accepts an integer and a floating-point number from the user. Perform arithmetic operations between them using both: Implicit type conversion and Explicit type conversion  *//

#include <stdio.h>
int main() {
    int a;
    float b;

    // Accepting input from the user
    printf("Enter an integer:");
    scanf("%d", &a);
    printf("Enter a floating-point number:");
    scanf("%f", &b);

    // Implicit type conversion
    float implicitResult = a + b; // int is converted to float
    printf("Result of implicit type conversion (a + b): %.2f\n", implicitResult);

    // Explicit type conversion
    int explicitResult = (int)a + b; // float is explicitly converted to int
    printf("Result of explicit type conversion (a + b): %d\n", explicitResult);

    return 0;
}