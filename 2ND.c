//Write a C program that accepts input as coefficients a, b, and c of quadratic equation ax^2+bx+c=0. Your program must 
//Reject a = 0.//
//Calculate the discriminant.
//Determine whether the roots are real and distinct, real and equal, or imaginary.
//Calculate and display the roots whenever they are real.//

#include <stdio.h>
#include <math.h> 

int main(void)
{
	double a, b, c;
	double discriminant, root1, root2;

	printf("Enter coefficients a, b, and c: ");
	if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
	{
		printf("Invalid input.\n");
		return 1;
	}

	if (a == 0)
	{
		printf("Invalid quadratic equation: a cannot be 0.\n");
		return 1;
	}

	discriminant = (b * b) - (4 * a * c);
	printf("Discriminant = %.2f\n", discriminant);

	if (discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("The roots are real and distinct.\n");
		printf("Root 1 = %.2f\n", root1);
		printf("Root 2 = %.2f\n", root2);
	}
	else if (discriminant == 0)
	{
		root1 = -b / (2 * a);
		printf("The roots are real and equal.\n");
		printf("Root 1 = Root 2 = %.2f\n", root1);
	}
	else
	{
		printf("The roots are imaginary.\n");
	}

	return 0;
}