/* Write a C program to demonstrate prefix and postfix operators. */

#include <stdio.h>

int main(void)
{
	int a;
	int result;

	a = 5;
	result = ++a;
	printf("Starting with a = 5, ++a gives %d and a becomes %d\n",
		result, a);

	a = 5;
	result = a++;
	printf("Starting with a = 5, a++ gives %d and a becomes %d\n",
		result, a);

	a = 5;
	result = --a;
	printf("Starting with a = 5, --a gives %d and a becomes %d\n",
		result, a);

	a = 5;
	result = a--;
	printf("Starting with a = 5, a-- gives %d and a becomes %d\n",
		result, a);

	return 0;
}