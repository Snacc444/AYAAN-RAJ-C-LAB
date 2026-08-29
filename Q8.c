/* Write a C program to check loan eligibility. */

#include <stdio.h>

int main(void)
{
	int age;
	double income;
	int creditScore;

	printf("Enter age, income, and credit score: ");
	if (scanf("%d %lf %d", &age, &income, &creditScore) != 3) {
		printf("Invalid input.\n");
		return 1;
	}

	if (age >= 21 && age <= 60 && income > 35000 && creditScore >= 750) {
		printf("The person is eligible for a loan.\n");
	} else {
		printf("The person is not eligible for a loan.\n");
	}

	return 0;
}
