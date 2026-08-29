/* Write a C program to verify operator precedence. */

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int result1;
	int result2;

	printf("Enter values of a, b, c, d, e, f, and g: ");
	if (scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g) != 7) {
		printf("Invalid input.\n");
		return 1;
	}

	if (e == 0) {
		printf("Division by zero error\n");
	}
	if (g == 0) {
		printf("Modulus by zero error\n");
	}
	if (e == 0 || g == 0) {
		return 1;
	}

	result1 = a + b * c - d / e + f % g;
	result2 = a + (b * c) - (d / e) + (f % g);

	printf("result1 = %d\n", result1);
	printf("result2 = %d\n", result2);

	if (result1 == result2) {
		printf("Operator precedence is verified.\n");
	} else {
		printf("Operator precedence is not verified.\n");
	}

	return 0;
}