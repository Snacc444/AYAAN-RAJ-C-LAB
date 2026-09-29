#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    char *ptr;

    printf("Enter a string: ");
    if (scanf("%99[^\n]", str) != 1) {
        printf("Please enter a non-empty string.\n");
        return 1;
    }

    printf("Enter character to search: ");
    scanf(" %c", &ch); // Leading space handles any leftover newline

    // Search for character
    ptr = strchr(str, ch);

    if (ptr != NULL) {
        // Pointer subtraction gives the exact index position
        int position = ptr - str;
        printf("Character '%c' found at position (index): %d\n", ch, position);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}
