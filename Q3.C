#include <stdio.h>

int main() {
    // Destination array with extra space to hold both strings
    char str1[200]; 
    char str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    scanf("%[^\n]s", str1);
    
    // Clear input buffer before next input
    while (getchar() != '\n'); 

    printf("Enter second string: ");
    scanf("%[^\n]s", str2);

    // 1. Move the index to the end of the first string
    while (str1[i] != '\0') {
        i++;
    }

    // 2. Append the second string character by character
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Null-terminate the combined string

    printf("Concatenated String: %s\n", str1);

    return 0;
}
