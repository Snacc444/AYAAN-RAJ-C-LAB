#include <stdio.h>

int main() {
    char original[100];
    char copied[100];
    int i = 0;

    printf("Enter a string to copy: ");
    scanf("%[^\n]s", original);

    // Copy characters manually
    while (original[i] != '\0') {
        copied[i] = original[i];
        i++;
    }
    copied[i] = '\0'; // Null-terminate the destination string

    // Display both strings
    printf("Original String: %s\n", original);
    printf("Copied String: %s\n", copied);

    return 0;
}
