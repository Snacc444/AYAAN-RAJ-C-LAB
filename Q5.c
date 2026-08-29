//Write a C program to input two numbers and perform the following operations: Addition, Subtraction, Multiplication, Division, Modulus, Power using pow(), Square root using sqrt(), Absolute value using abs(), Floor value using floor(), Ceiling value using ceil()

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int firstNumber;
    int secondNumber;

    printf("Enter two integers: ");
    if (scanf("%d %d", &firstNumber, &secondNumber) != 2) {
	 printf("Invalid input.\n");
	 return 1;
    }

    printf("\nAddition:       %d + %d = %d\n",
	    firstNumber, secondNumber, firstNumber + secondNumber);
    printf("Subtraction:    %d - %d = %d\n",
	    firstNumber, secondNumber, firstNumber - secondNumber);
    printf("Multiplication: %d * %d = %d\n",
	    firstNumber, secondNumber, firstNumber * secondNumber);

    if (secondNumber != 0) {
	 printf("Division:        %d / %d = %.2f\n",
		 firstNumber, secondNumber,
		 (double) firstNumber / secondNumber);
	 printf("Modulus:         %d %% %d = %d\n",
		 firstNumber, secondNumber, firstNumber % secondNumber);
    } else {
	 printf("Division:        undefined (cannot divide by zero)\n");
	 printf("Modulus:         undefined (cannot use zero as divisor)\n");
    }

    printf("Power:           pow(%d, %d) = %.2f\n",
	    firstNumber, secondNumber, pow(firstNumber, secondNumber));

    if (firstNumber >= 0) {
	 printf("Square root:     sqrt(%d) = %.2f\n",
		 firstNumber, sqrt(firstNumber));
    } else {
	 printf("Square root:     undefined for %d\n", firstNumber);
    }

    if (secondNumber >= 0) {
	 printf("Square root:     sqrt(%d) = %.2f\n",
		 secondNumber, sqrt(secondNumber));
    } else {
	 printf("Square root:     undefined for %d\n", secondNumber);
    }

    printf("Absolute value:  abs(%d) = %d\n",
	    firstNumber, abs(firstNumber));
    printf("Absolute value:  abs(%d) = %d\n",
	    secondNumber, abs(secondNumber));
    printf("Floor value:     floor(%d) = %.2f\n",
	    firstNumber, floor(firstNumber));
    printf("Floor value:     floor(%d) = %.2f\n",
	    secondNumber, floor(secondNumber));
    printf("Ceiling value:   ceil(%d) = %.2f\n",
	    firstNumber, ceil(firstNumber));
    printf("Ceiling value:   ceil(%d) = %.2f\n",
	    secondNumber, ceil(secondNumber));

    return 0;
}
