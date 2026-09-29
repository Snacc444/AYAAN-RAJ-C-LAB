#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    scanf("%[^\n]s", str1);

    // Clear input buffer before next input
    while (getchar() != '\n'); 

    printf("Enter second string: ");
    scanf("%[^\n]s", str2);

    // 1. Display lengths using strlen()
    printf("\nLength of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n", strlen(str2));

    // 2. Compare using strcmp()
    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string comes first lexicographically.\n");
    } else {
        printf("The second string comes first lexicographically.\n");
    }

    return 0;
}
