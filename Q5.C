#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int count[26] = {0}; // Array to store frequency of letters a-z

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // Calculate frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            // Convert to lowercase to group case differences together
            int index = tolower(str[i]) - 'a';
            count[index]++;
        }
    }

    // Display the non-zero frequencies
    printf("\nCharacter Frequency Analysis:\n");
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("'%c' appears %d time(s)\n", i + 'a', count[i]);
        }
    }

    return 0;
}
