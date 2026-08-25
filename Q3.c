// Demonstrates local, global, and static variables using only main().

#include <stdio.h>

int globalVariable = 10;
static int staticVariable = 20;

int main(void)
{
	int localVariable = 30;

	printf("Initial values in main():\n");
	printf("Local variable:  %d\n", localVariable);
	printf("Global variable: %d\n", globalVariable);
	printf("Static variable: %d\n\n", staticVariable);

	localVariable++;
	globalVariable++;
	staticVariable++;

	printf("After changing all variables in main():\n");
	printf("Local variable:  %d\n", localVariable);
	printf("Global variable: %d\n", globalVariable);
	printf("Static variable: %d\n\n", staticVariable);

	{
		int localVariable = 100;

		localVariable++;
		globalVariable += 10;
		staticVariable += 10;

		printf("Inside the block:\n");
		printf("Block local variable: %d\n", localVariable);
		printf("Global variable:      %d\n", globalVariable);
		printf("Static variable:      %d\n\n", staticVariable);
	}

	printf("Back in main() after the block:\n");
	printf("Main local variable: %d (block local no longer exists)\n", localVariable);
	printf("Global variable:     %d (change remains)\n", globalVariable);
	printf("Static variable:     %d (change remains)\n", staticVariable);

	return 0;
}
