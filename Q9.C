#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char word[50];
    char *ptr;
    int inputChar;

    printf("Enter a sentence: ");
    if (scanf("%199[^\n]", sentence) != 1) {
        printf("Please enter a non-empty sentence.\n");
        return 1;
    }

    // Clear input buffer before next input
    while ((inputChar = getchar()) != '\n' && inputChar != EOF) {
    }

    printf("Enter a word to search: ");
    if (scanf("%49s", word) != 1) {
        printf("Please enter a word to search.\n");
        return 1;
    }

    // Search for substring
    ptr = strstr(sentence, word);

    if (ptr != NULL) {
        int position = ptr - sentence;
        printf("Word found starting at position (index): %d\n", position);
    } else {
        printf("The word was not found in the sentence.\n");
    }

    return 0;
}
