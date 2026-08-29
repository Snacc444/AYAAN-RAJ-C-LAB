/* Write a C program to check whether a student passed all three subjects. */

#include <stdio.h>

int main(void)
{
	int firstSubjectMarks;
	int secondSubjectMarks;
	int thirdSubjectMarks;

	printf("Enter marks in three subjects: ");
	if (scanf("%d %d %d", &firstSubjectMarks, &secondSubjectMarks,
		&thirdSubjectMarks) != 3) {
		printf("Invalid input.\n");
		return 1;
	}

	if (firstSubjectMarks >= 40 && secondSubjectMarks >= 40 &&
		thirdSubjectMarks >= 40) {
		printf("The student passed all subjects.\n");
	} else {
		printf("The student did not pass all subjects.\n");
	}

	return 0;
}

