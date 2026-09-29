#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50];
    char lastName[50];
    char fullName[101];

    printf("Enter first name: ");
    scanf("%49s", firstName);

    printf("Enter last name: ");
    scanf("%49s", lastName);

    // 1. Copy first name into fullName
    strcpy(fullName, firstName);

    // 2. Append a space separating the names
    strcat(fullName, " ");

    // 3. Append last name
    strcat(fullName, lastName);

    printf("Complete Name: %s\n", fullName);

    return 0;
}
