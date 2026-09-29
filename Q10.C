#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char *token;
    int wordCount = 0;

    printf("Enter a sentence: ");
    if (scanf("%199[^\n]", sentence) != 1) {
        printf("Please enter a non-empty sentence.\n");
        return 1;
    }

    printf("\nWords found:\n");

    // Extract the first token (word) using space as delimiter
    token = strtok(sentence, " \t\r\n");

    while (token != NULL) {
        printf("%s\n", token);
        wordCount++;

        // Get consecutive tokens passing NULL as first argument
        token = strtok(NULL, " \t\r\n");
    }

    printf("\nTotal number of words: %d\n", wordCount);

    return 0;
}
